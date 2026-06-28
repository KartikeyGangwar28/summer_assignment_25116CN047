#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Ticket
{
private:
    int ticketID;
    string movieName;
    string customerName;
    int seats;
    int price;
public:
    void bookTicket()
    {   cout<<"ENTER TICKET ID: ";
        cin>>ticketID;
        cout<<"ENTER MOVIE NAME: ";
        getline(cin>>ws,movieName);
        cout<<"ENTER CUSTOMER NAME: ";
        getline(cin>>ws,customerName);
        cout<<"ENTER NUMBER OF SEATS: ";
        cin>>seats;
        price=seats*1000;
       cout<<"TICKET BOOKED SUCCESSFULLY\n";
    }
  int getID()
    {return ticketID;}
 void displayTicket()
    {   cout<<"\n**************** TICKET DETAILS ****************\n";
        cout<<"TICKET ID:     "<<ticketID<<endl;
        cout<<"MOVIE NAME:    "<<movieName<<endl;
        cout<<"CUSTOMER NAME: "<<customerName<<endl;
        cout<<"SEATS:         "<<seats<<endl;
        cout<<"TOTAL PRICE:   "<<price<<endl;
        cout<<"************************************************\n";
    }
    void updateTicket()
    {   cout<<"ENTER NEW CUSTOMER NAME: ";
        getline(cin>>ws,customerName);
        cout<<"ENTER NEW NUMBER OF SEATS: ";
        cin>>seats;
        price=seats*1000;
        cout<<"TICKET UPDATED SUCCESSFULLY\n";
    }

};



int main()
{  vector<Ticket>tickets;
    int choice;
    do
    {   cout<<"\n******** TICKET BOOKING SYSTEM ********\n";
        cout<<"1. BOOK TICKET\n";
        cout<<"2. DISPLAY ALL TICKETS\n";
        cout<<"3. SEARCH TICKET\n";
        cout<<"4. CANCEL TICKET\n";
        cout<<"5. UPDATE TICKET\n";
        cout<<"6. EXIT\n";
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        if(choice==1)
        {
            Ticket t;
            t.bookTicket();

            tickets.push_back(t);
        }
           else if(choice==2)
        {
            for(auto &t:tickets)
            {  t.displayTicket();
            }
        }
        else if(choice==3)
        { int id;
          cout<<"ENTER TICKET ID: ";
            cin>>id;
              bool found=false;
               for(auto &t:tickets)
            {
                if(t.getID()==id)
                { t.displayTicket();
                    found=true;
                    break;
                }
            }
            if(!found)
            {
                cout<<"TICKET NOT FOUND\n";
            }
        }
 else if(choice==4)
        {
            int id;
            cout<<"ENTER TICKET ID TO CANCEL: ";
            cin>>id;
            bool found=false;
        for(auto it=tickets.begin();it!=tickets.end();it++)
            {
                if(it->getID()==id)
                {
                    tickets.erase(it);
                    cout<<"TICKET CANCELLED SUCCESSFULLY\n";
                    found=true;
                    break;
                }
            }
             if(!found)
            { cout<<"TICKET NOT FOUND\n";}

        }
        else if(choice==5)
        {    int id;
             cout<<"ENTER TICKET ID TO UPDATE: ";
            cin>>id;
 bool found=false;
            for(auto &t:tickets)
            { if(t.getID()==id)
                { t.updateTicket();
                    found=true;
                    break;
             } }
             if(!found)
            {
                cout<<"TICKET NOT FOUND\n";
            }

        }


    }while(choice!=6);

cout<<"THANKS FOR USING OUR TICKET MANAGEMENT SYSTEM";
}