#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

class Record{
private:
string name;
long long rollNo;
int age;
string course;
int marks;
int subjects;
char grade;
double contact;
public:
public:
void inputInfo(){
cout<<"ENTER THE NAME: ";
getline(cin>>ws,name);
cout<<"ENTER YOUR ROLL NUMBER: ";
cin>>rollNo;
cout<<"ENTER STUDENT'S AGE: ";
cin>>age;
cout<<"ENTER THE COURSE PURSUED BY THE STUDENT: ";
getline(cin>>ws,course);
cout<<"ENTER THE TOTAL NUMBER OF SUBJECTS(THEORY+PRACTICAL): ";
cin>>subjects;
cout<<"ENTER THE TOTAL MARKS OBTAINED BY STUDENT OUT OF "<<(subjects*100)<<" : ";
cin>>marks;
if(marks>(subjects*100)){
    cout<<"invalid marks";
    return;
}
cout<<"ENTER THE CONTACT NUMBER: ";
cin>>contact;

}
string getname(){
    return name;
}
long long int getRollNo(){
    return rollNo;
}
int getMarks(){
    return marks;
}
void displayInfo(){
cout<<"**********RECORD OF STUDENT**********"<<endl;
cout<<"NAME OF STUDENT: "<<name<<endl;
cout<<"ROLL NUMBER:     "<<rollNo<<endl;
cout<<"AGE:             "<<age<<endl;
cout<<"COURSE:          "<<course<<endl;
cout<<"MAXIMUM MARKS POSSIBLE per subject: 100"<<endl;
cout<<"Total number of subjects:         "<<subjects<<endl;
cout<<"TOTAL MARKS OBTAINED:             "<<marks<<endl;

}
void calculatePercentage(){
    cout<<((marks/subjects));
}
void Grade(){
  int percentage=((marks/subjects));
    if(percentage>=90){
        cout<<'A';
    }
    if (percentage<90&&percentage>=80)
    {
        cout<< 'B';   
     }
    else{
        cout<< 'C';
    }
}
};
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF STUDENTS FOR WHOM U WANT TO MAINTAIN THE RECORD: ";
    cin>>n;
    if(n<=0){
        cout<<"INVALID INPUT";
        return 0;
    }
   vector<Record>r(n);
    for(int i=0;i<n;i++){
                cout<<"INPUT INFORMATION ABOUT STUDENT "<<i+1<<endl;
        r[i].inputInfo();
    }
    for(int i=0;i<n;i++){
        cout<<"INFORMATION ABOUT STUDENT "<<i+1<<endl;
        r[i].displayInfo();
    }
   int operations;
    do{
  cout<<"PRESS: \n"<<"1.CALCULATE PERCENTAGE\n2.Sort students list by name\n3.SORT BY MARKS\n4.CALCULATE GRADE\n5.SEARCH FOR STUDENT BY ROLL NUMBER\n6.EXIT\n";
  cout<<"enter your choice: ";
  cin>>operations;
  if(operations==1){
       for(int i=0;i<n;i++){
        cout<<"PERCENTAGE OF STUDENT "<<i+1<<" : ";
        r[i].calculatePercentage();
        cout<<endl;
       }
  }
  if (operations==2)
  {
    sort(r.begin(),r.end(),[](Record &a,Record &b){
        return a.getname()<b.getname();
    });
    for(int i=0;i<n;i++){
    cout<<"STUDENTS RECORD AFTER SORTING in a alphabetical order: ";
    r[i].displayInfo();
}

  }
 if (operations==3)
  {
    sort(r.begin(),r.end(),[](Record &a,Record &b){
        return a.getMarks()<b.getMarks();
    });
for(int i=0;i<n;i++){
    cout<<"STUDENTS RECORD AFTER SORTING BY MARKS: "<<endl;
    r[i].displayInfo();
}
    
  }
  
  if (operations==4)
  {  for(int i=0;i<n;i++){
        cout<<"GRADE OF STUDENT "<<i+1<<" : ";
        r[i].Grade();
        cout<<endl;
       }
  }

if(operations==5){
int roll;
cout<<"ENTER THE ROLL NUMBER: ";
    cin>>roll;
    bool found=false;
   for(auto &it:r){
    if(it.getRollNo()==roll){
        it.displayInfo();
        found=true;
        break;
    }
    if(!found){
        cout<<"NO STUDENT EXISTS WITH THIS ROLL NUMBER IS THE SYSTEM\n";
    }
   }

}}
while(operations!=6);
}
