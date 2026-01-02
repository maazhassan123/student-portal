#include <iostream>
#include<iomanip>
using namespace std;
struct maaz{
    string name;
    int roll;
    int age;
    float marks;
};
maaz arr[50];
int n=5;
void showmenu(){
cout<<"__________________Menu_________________________\n";
cout<<"1.Add student.\n";
cout<<"2.Display all students.\n";
cout<<"3.Search student by roll number.\n";
cout<<"4.Calculate average marks.\n";
cout<<"5.Find topper.\n";
cout<<"6.Find looser.\n";
cout<<"7.exit.\n";
cout<<"________________________________________________\n\n";
}
void display(){
    if(n==0){
        cout<<"NO DATA AVAILABLE.\n\n";
        return;
    }
    
    cout<<left<<setw(8)<<"Sr.No"<<setw(20)<<"Name"<<setw(12)<<"Roll no "<<setw(8)<<"Age"<<setw(8)<<"Marks"<<endl;
    cout<<string(48,'-')<<endl;
    for(int i=0;i<n;i++){
    cout<<left<<setw(8)<<i+1<<setw(20)<<arr[i].name<<setw(12)<<arr[i].roll<<setw(8)<<arr[i].age<<setw(8)<<arr[i].marks<<endl;
    }
cout<<"__________________________________________________\n\n";
}
void searchstudent(){
    bool res=false;
    int stu;
    int found;
    cout<<"Enter the roll number: ";
    cin>>stu;
    for(int i=0;i<n;i++){
        if(stu==arr[i].roll){
            res=true;
            found=i;
            break;

        }
    }
    if(res==true){
    cout<<"Name: "<<arr[found].name<<"      Roll no: "<<arr[found].roll<<"        Age:"<<arr[found].age<<"           Marks:"<<arr[found].marks<<endl<<endl;
    }
    if(res==false){
        cout<<"NO DATA FOUND FOR THE ENTERED ROLL NO.\n\n";
    }
    
}
void addstudent(){
    cin.ignore();
    cout<<"Enter the name of the student: ";
    getline(cin,arr[n].name);
    for(int i=0;i<n;i++){
        if(arr[i].name==arr[n].name){
            cout<<"This name has already been taken.\n";
            return;
        }
    }
    cout<<"Enter the roll number of the student: ";
    cin>>arr[n].roll;
    for(int i=0;i<n;i++){
        if(arr[i].roll==arr[n].roll){
            cout<<"This roll number has already been taken\n\n";
            return;
        }
    }
    cout<<"Enter the age of the student: ";
    cin>>arr[n].age;
    cout<<"Enter the Marks of the student: ";
    cin>>arr[n].marks;
    cout<<"Student added successfully. \n\n";
    n++;

}
void avgmarks(){
    float sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(arr[i].marks);
    }
    float res;
    res=sum/n;
    cout<<"Average marks of all students are:"<<res<<endl<<endl;
}
void topper(){
    int highestmarks=arr[0].marks;
    int findhighmarkstd;
    for(int i=0;i<n;i++){
        if(arr[i].marks>highestmarks){
            highestmarks=arr[i].marks;
            findhighmarkstd=i;
        }
    }
    cout<<"The topper is: \n";
    cout<<"Name: "<<arr[findhighmarkstd].name<<"        Roll no: "<<arr[findhighmarkstd].roll<<"         Age:"<<arr[findhighmarkstd].age<<"            Marks:"<<arr[findhighmarkstd].marks<<endl<<endl;
}
void lower(){
    int lowestmarks=arr[0].marks;
    int findlow;
    for(int i=0;i<n;i++){
        if(arr[i].marks<lowestmarks){
            lowestmarks=arr[i].marks;
            findlow=i;
        }
    }
    cout<<"The looser is:\n";
    
    cout<<"Name: "<<arr[findlow].name<<"        Roll no: "<<arr[findlow].roll<<"         Age:"<<arr[findlow].age<<"            Marks:"<<arr[findlow].marks<<endl<<endl;
}
void allmenu(int choice){
    switch(choice){
        case 2:
        display();
        break;
        case 1:
        addstudent();
        break;
        case 3:
        searchstudent();
        break;
        case 4:
        avgmarks();
        break;
        case 5:
        topper();
        break;
        case 6:
        lower();
        break;
        case 7:
        exit(0);
        break;
        default:
        cout<<" You must entered number between (1-7).\n\n";
        
    }
}
int main() {
    arr[0].name="Maaz hassan";
    arr[0].roll=5001;
    arr[0].age=18;
    arr[0].marks=80;

    arr[1].name="Abdullah.";
    arr[1].roll=5002;
    arr[1].age=19;
    arr[1].marks=87;

    arr[2].name="Arshman.";
    arr[2].roll=5003;
    arr[2].age=19;
    arr[2].marks=59;

    arr[3].name="Faraz ahmed.";
    arr[3].roll=5004;
    arr[3].age=18;
    arr[3].marks=69;

    arr[4].name="Huzaiffa";
    arr[4].roll=5005;
    arr[4].age=20;
    arr[4].marks=93;
    
    while(true){
    showmenu();
    int choice;
    cout<<"Enter what you want to do: ";
    cin>>choice;
    
    allmenu(choice);}
    return 0;

}
