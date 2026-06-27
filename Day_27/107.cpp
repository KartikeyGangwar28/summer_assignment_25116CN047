#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using namespace std;

class Employee
{
private:
    int empID;
    string name;
    float basicSalary,hra,da,bonus,deduction;
    float grossSalary,netSalary;

public:
    void input()
    {
        cout<<"Enter Employee ID: ";
        cin>>empID;
        cout<<"Enter Employee Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Basic Salary: ";
        cin>>basicSalary;
        cout<<"Enter HRA: ";
        cin>>hra;
        cout<<"Enter DA: ";
        cin>>da;
        cout<<"Enter Bonus: ";
        cin>>bonus;
        cout<<"Enter Deduction: ";
        cin>>deduction;
    }
    int getId(){
        return empID;
    }
    int calculateGrossSalary()
    {
        grossSalary=basicSalary+hra+da+bonus;
        
        return grossSalary;
    }
    int calculateNetSalary(){
    netSalary=grossSalary-deduction;
    return netSalary;
    }
    void display()
    {
        cout<<"\nEmployee ID:      "<<empID;
        cout<<"\nEmployee Name:    "<<name;
        cout<<"\nBasic Salary:     "<<basicSalary;
        cout<<"\nHRA:              "<<hra;
        cout<<"\nDA:               "<<da;
        cout<<"\nBonus:            "<<bonus;
        cout<<"\nDeduction:        "<<deduction;
        cout<<"\nGross Salary:     "<<calculateGrossSalary();
        cout<<"\nNet Salary:       "<<calculateNetSalary()<<endl;
    }
    void increaseSalary(int sal){
        basicSalary+=sal;
        cout<<"BASIC SALARY AFTER INCREMENET: "<<basicSalary<<endl;
    }
    void generateSalarySlip(){
        cout<<"SALARY BREAKOUT IS AS FOLLOWS: "<<endl;
        cout<<"\nBasic Salary:     "<<basicSalary;
        cout<<"\nHRA:              "<<hra;
        cout<<"\nDA:               "<<da;
        cout<<"\nBonus:            "<<bonus;
        cout<<"\nDeduction:        "<<deduction;
        cout<<"\nGross Salary:     "<<calculateGrossSalary();
        cout<<"\nNet Salary:       "<<calculateNetSalary()<<endl;
    }
};

int main()
{    int n;
    cout<<"ENTER THE NUMBER OF EMPLOYESS FOR WHOM U WANT TO MANAGE THE SALARY: ";
    cin>>n;
    vector<Employee>emp(n);
    for (int i = 0; i < n; i++){ 
        cout<<"ENTER THE DETAILS OF EMPLOYEE: "<<i+1<<" : "<<endl;
         emp[i].input();
    }
    for (int i=0;i<n;i++)
    {cout<<"SALARY DETAILS OF EMPLOYEE: "<<i+1<<" : "<<endl;
       emp[i].display();
    }
    
    int choice;
    do
    {  
        cout<<"\nSalary Management System";
        cout<<"\n1. GENERATE SALARY SLIP";
        cout<<"\n2. Sort employees by Salary";
        cout<<"\n3.Increase Salary";
        cout<<"\n4. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
if(choice==1){
    int id;
    cout<<"ENTER THE ID FOR WHOME U WANT TO SEE THE SALARY SLIP: ";
    cin>>id;
    bool f=false;
    for(auto &it:emp){
        if(it.getId()==id){
          f=true;
          it.generateSalarySlip();
          break;
        }
    }
    if(!f){
        cout<<"INVALID ID";
    }
}
else if(choice==2){
   sort(emp.begin(),emp.end(),[](Employee &a,Employee &b){
    return a.calculateNetSalary()>b.calculateNetSalary(); 
   });
   cout<<" AFTER SORTING BY SALARY\n";
   for(auto &it:emp){
    it.display();
   }
}
else if(choice==3){
    int id;
    cout<<"enter the id of the employee: ";
    cin>>id;
    for(auto &it:emp){
        if(it.getId()==id){
            int amount;
               cout<<"ENTER THE AMOUNT YOU WANT TO INCREASE IN SALARY: ";
               cin>>amount;
               it.increaseSalary(amount);
               cout<<"SALARY INCREASED"<<endl;
        }
    }
}

            
    }while(choice!=4);

    cout<<"THANKS FOR USING OUR SALARY MANAGEMENT SYSTEM";
}
