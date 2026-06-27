#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

class Employees{
private:
    int employeeID;
    string name;
    int age;
    string gender;
    string department;
    string designation;
    double salary;
    string phone;
    int totalWorkingDays;
    int totalDaysAttended;

public:
void inputInfo(){
     cout<<"ENTER EMPLOYEE ID: ";
cin>>employeeID;
cout<<"ENTER EMPLOYEE NAME: ";
        getline(cin>>ws,name);
cout<<"ENTER AGE: ";
        cin>>age;
cout<<"ENTER GENDER: ";
        getline(cin>>ws,gender);
cout<<"ENTER DEPARTMENT: ";
        getline(cin>>ws,department);
cout<<"ENTER DESIGNATION: ";
        getline(cin>>ws,designation);
cout<<"ENTER SALARY: ";
        cin>>salary;
cout<<"ENTER PHONE NUMBER: ";
        cin>>phone;
cout<<"ENTER TOTAL WORKING DAYS: ";cin>>totalWorkingDays;
cout<<"ENTER TOTAL DAYS THE EMPLOYEE WAS PRESENT: ";cin>>totalDaysAttended;        
    }
    long long int getId(){
       return employeeID;
    }
    int calculateAttendance(){
        return ((totalDaysAttended/totalWorkingDays)*100);
    }
void displayInfo(){
        cout<<"\n******** EMPLOYEE DETAILS ********\n";
        cout<<"EMPLOYEE ID:     "<<employeeID<<endl;
        cout<<"NAME:            "<<name<<endl;
        cout<<"AGE:             "<<age<<endl;
        cout<<"GENDER:          "<<gender<<endl;
        cout<<"DEPARTMENT:      "<<department<<endl;
        cout<<"DESIGNATION:     "<<designation<<endl;
        cout<<"SALARY:          "<<salary<<endl;
        cout<<"PHONE:           "<<phone<<endl;
        cout<<"ATTENDANCE:      "<<calculateAttendance()<<"%"<<endl;
        cout<<"**********************************\n";
    }
    void updateDetails(){
                cout<<"ENTER NEW NAME:       ";cin>>name;
                cout<<"ENTER NEW DEPARTMENT: ";cin>>department;
                cout<<"ENTER NEW Salary:     ";cin>>salary;
    }

};
int main(){
     int n;
     cout<<"ENTER THE TOTAL NUMBER OF EMPLOYEES: ";
     cin>>n;
     
    vector<Employees>e(n);
      for(int i=0;i<n;i++){
        cout<<"ENTER DETAILS OF EMPLOYEE "<<i+1<<" : "<<endl;
        e[i].inputInfo();
        cout<<"***************************************";
      }
 for(int i=0;i<n;i++){
        e[i].displayInfo();
      }
      int choice;
      do{ cout<<"1.SEARCH FOR EMPLOYEE(BY ID)"<<endl;
        cout<<"2.Update EMPLOYEE DETAILS(NAME,AGE,SALARY,DEPARTMENT)"<<endl;
        cout<<"3.REMOVE EMPLOYEE RECORD"<<endl;
        cout<<"4.Sort By attendance"<<endl;
        cout<<"5.EXIT"<<endl;
cout<<"ENTER YOUR CHOICE: ";cin>>choice;
    if(choice==1){
        int id;
        cout<<"ENTER EMPLOYEE ID: ";
        cin>>id;
         bool found=false;
         for(auto &it:e){
            if(it.getId()==id){
                it.displayInfo();
                found=true;
                break;
            }
            if(!found){
                cout<<"NO EMPLOYEE EXISTS WITH THIS ID";
            }
         }
    }
        if(choice==2){
            int id;
            cout<<"ENTER THE EMPLOYEE ID: ";
            cin>>id;
            bool flag=false;
            for(auto &it:e){
                if(it.getId()==id){
                    it.updateDetails();
                    cout<<"AFTER UPDATING THE DETAILS"<<endl;
                    it.displayInfo();
                    flag=true;
                }
            }
             if(!flag){
                cout<<"NO EMPLOYEE EXISTS WITH THIS ID";
            }
        }
         if(choice==3){
            int id;
            cout<<"ENTER THE EMPLOYEE ID: ";
            cin>>id;
            bool flag=false;
            for(auto it=e.begin();it!=e.end();it++){
                if(it->getId()==id){
                    e.erase(it);
                    cout<<"EMPLOYEE DETAILES REMOVED"<<endl;
                    flag=true;
                    break;
                }
            }
            if(!flag){
                cout<<"NO EMPLOYEE EXISTS WITH THIS ID";
            }
        }
else if(choice==4){
    sort(e.begin(),e.end(),[](Employees &a,Employees &b){
                return a.calculateAttendance()>b.calculateAttendance();
    });
    cout<<"************EMPLOYEE DETAILS SORTED BY ATTENDANCE******************"<<endl;
    for(auto &it:e){
        it.displayInfo();
    }
}
      } while(choice!=5);
      cout<<"THANKS FOR USING THIS SYSTEM";

    }
 