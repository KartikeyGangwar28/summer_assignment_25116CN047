#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Student{
private:
int roll;
string name;
string course;
string subjects;
int marks;
float percentage;
char grade;
public:
void addStudent(){
cout<<"ENTER ROLL NUMBER: ";
cin>>roll;
cout<<"ENTER STUDENT NAME: ";
getline(cin>>ws,name);
cout<<"ENTER COURSE: ";
getline(cin>>ws,course);
cout<<"ENTER ALL SUBJECTS: ";
getline(cin>>ws,subjects);
cout<<"ENTER TOTAL MARKS OBTAINED : ";
cin>>marks;
calculateResult();
cout<<"STUDENT INFO ADDED SUCCESSFULLY\n";
}


void calculateResult(){
percentage=(marks/500.0)*100;
if(percentage>=90)
grade='A';
else if(percentage>=80)
grade='B';
else if(percentage>=70)
grade='C';
else if(percentage>=60)
grade='D';
else
grade='F';
}



void display(){
cout<<"\n******** STUDENT DETAILS ********";
cout<<"\nROLL NUMBER: "<<roll;
cout<<"\nNAME: "<<name;
cout<<"\nCOURSE: "<<course;
cout<<"\nSUBJECTS: "<<subjects;
cout<<"\nMARKS: "<<marks<<"/500";
cout<<"\nPERCENTAGE: "<<percentage<<"%";
cout<<"\nGRADE: "<<grade;
cout<<"\n*********************************\n";
}
int getRoll(){
return roll;
}
void update(){
cout<<"ENTER NEW MARKS:OF THE STUDENT: ";
cin>>marks;
calculateResult();
cout<<"RECORD UPDATED SUCCESSFULLY\n";
}
};
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS U WANT TO RECORD DATA FOR: ";
    cin>>n;
vector<Student>students;
students.resize(n);
for(int i=0;i<n;i++){
    students[i].addStudent();
}
int choice;
do{
cout<<"\n******** STUDENT RECORD SYSTEM ********";
cout<<"\n1.ADD STUDENT";
cout<<"\n2.DISPLAY ALL STUDENTS";
cout<<"\n3.SEARCH STUDENT";
cout<<"\n4.UPDATE RECORD";
cout<<"\n5.REMOVE STUDENT";
cout<<"\n6.EXIT";
cout<<"\nSELECT YOUR CHOICE OF OPERATION: ";
cin>>choice;
if(choice==1){
Student s;
s.addStudent();
students.push_back(s);
}
else if(choice==2){
for(auto &s:students)
s.display();
}
else if(choice==3){
          int roll;
         cout<<"ENTER ROLL NUMBER: ";
          cin>>roll;
                bool found=false;
for(auto &s:students){
          if(s.getRoll()==roll){
         s.display();
         found=true;
            break;

}
}
          if(!found)
            { cout<<"STUDENT NOT FOUND\n";}

}
else if(choice==4){
            int roll;
          cout<<"ENTER ROLL NUMBER TO UPDATE: ";
     cin>>roll;
   for(auto &s:students){
        if(s.getRoll()==roll){ 
            s.update();
                   break;}

}}
else if(choice==5){
          int roll;
     cout<<"ENTER ROLL NUMBER TO REMOVE: ";
      cin>>roll;
   for(auto it=students.begin();it!=students.end();it++){
         if(it->getRoll()==roll){
                students.erase(it);
                 cout<<"STUDENT REMOVED SUCCESSFULLY\n";
                 break;
}}
}
}while(choice!=6);
cout<<"SYSTEM CLOSED\n";

}
