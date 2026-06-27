#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
class Marksheet{
private:
string Institute;
string name;
long long rollNo;
int age;
string course;
string branch;
string gender;
string fathersName;
int semester;
int totalSubjects;
vector<pair<string,int>>v;
int sgpa;
public:
void takeInfo(){
    cout<<"Institute: "; getline(cin>>ws,Institute);
    cout<<"Name: "; getline(cin>>ws,name);
    cout<<"Roll No: "; cin>>rollNo;
    cout<<"Age: "; cin>>age;
    cout<<"Course: "; getline(cin>>ws,course);
    cout<<"Branch: "; getline(cin>>ws,branch);
    cout<<"Gender: "; getline(cin>>ws,gender);
    cout<<"Father's Name: "; getline(cin>>ws,fathersName);
    cout<<"Semester: "; cin>>semester;
    cout<<"Total Subjects: "; cin>>totalSubjects;
     for(int i=0;i<totalSubjects;i++){
            string subject;
            int marks;
            cout<<"SUBJECT "<<i+1<< " Name : ";
            getline(cin>>ws,subject);
            cout<<"MARKS: ";
            cin>>marks;
            v.push_back({subject,marks});
     }
    cout<<"SGPA: "; cin>>sgpa;
}
int totalMarks(){
    int totalMarks=0;
    for(auto it:v){
           totalMarks+=it.second;
    }
    cout<<totalMarks;
    return totalMarks;
}
int calculateSgpa(){
    int percentage=totalMarks()/totalSubjects;
    cout<<percentage/10;
    return  percentage/10;
}
void displayInfo(){
    cout<<"\n";
    cout<<"=============================================\n";
    cout<<"              STUDENT MARKSHEET\n";
    cout<<"=============================================\n";
    cout<<"Institute      : "<<Institute<<endl;
    cout<<"Student Name   : "<<name<<endl;
    cout<<"Roll No        : "<<rollNo<<endl;
    cout<<"Age            : "<<age<<endl;
    cout<<"Gender         : "<<gender<<endl;
    cout<<"Father's Name  : "<<fathersName<<endl;
    cout<<"Course         : "<<course<<endl;
    cout<<"Branch         : "<<branch<<endl;
    cout<<"Semester       : "<<semester<<endl;
    cout<<"Total Subjects : "<<totalSubjects<<endl;
    cout<<"\nSUBJECT\t\t\tMARKS\n";
     for(auto it:v){
        cout<<it.first<<"\t\t\t"<<it.second<<endl;
     }
    cout<<"SGPA           : "<<calculateSgpa()<<endl;
    cout<<"=============================================\n";
}


};
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS FOR WHOM U WANT TO GENERATE MARKSHEET FOR: ";
    cin>>n;
    if(n<=0){
        cout<<"invalid input";
        return 0;
    }
vector<Marksheet>m(n);
for(int i=0;i<n;i++){
    m[i].takeInfo();
}
for(int i=0;i<n;i++){
    m[i].displayInfo();
}

}