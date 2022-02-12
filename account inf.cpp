#include<bits/stdc++.h>
#include"account inf.h"
using namespace std;

void bank::companyname()
{
      cout<<endl<<"                    * * * * * * * * * * * * * *"<<endl;
    cout<<"                    *     MEHEDI BANK  LTD    *"<<endl;
    cout<<"                    * * * * * * * * * * * * * *"<<endl;

}
void bank::setdata()
{
    ofstream out;
    ifstream in;
    out.open("mehedi.txt");
 cout<<endl<<endl<<"************Wolcome In Our bank***********"<<endl<<endl;
 cout<<"Please Enter some information to open account   "<<endl<<endl;
 cout<<"Enter your name : ";
 scanf(" %[^\n]",name);
 out<<name<<" ";
 cout<<"Enter Your Account number   :";
 cin>>ac_id;
 out<<ac_id<<" ";
 cout<<"Enter Your password  : ";
 cin>>password;
 out<<password<<" ";
 cout<<"How many amount you want deposit first  : ";
 cin>>balance;
 out<<balance;
 cout<<endl<<"Congratulation! "<<name<<endl<<"your account open sucessfully"<<endl;
 cout<<"************** Thank you for using our services  **********"<<endl<<endl<<endl;
out.close();
}

int bank::login()
{
    ofstream out;
   ifstream in;
    in.open("mehedi.txt");
  in>>name>>ac_id>>password>>balance;
       printf("Enter your id : ");
        scanf("%d",&ac_id1);
        if(ac_id1==ac_id)
        {
            printf("Enter your password : ");
            cin>>password1;
            if(password1==password)
            {
               cout<<endl<<"Hi,"<<name<<"!"<<"Welcome Your Dashboard....."<<endl<<endl;
               return 5;
            }
            else
                printf("Your password is incorrect\n");
        }
        else
            printf("Your id is incorrect\n");


        cout<<"************** Thank you for using our services  **********"<<endl<<endl<<endl;
}

void bank::cbalance()

   {
      ofstream out;
   ifstream in;
    in.open("mehedi.txt");
  in>>name>>ac_id>>password>>balance;

     cout<<"**************Now you are chaking your balance***************"<<endl<<endl<<endl;

                 cout<<endl<<"your name is : "<<name<<endl;
                cout<<"Your balance is: "<<balance<<endl;
        cout<<endl<<endl<<endl<<"************** Thank you for using our services  **********"<<endl<<endl<<endl;
    }


void bank::cashout()
  {
   ofstream out;
   ifstream in;
    in.open("mehedi.txt");
  in>>name>>ac_id>>password>>balance;
  out.close();
         cout<<"**********Cash out from your account**********"<<endl<<endl<<endl;

                cout<<"Enter amount:";
                cin>>balance1;
                if(balance1<balance && balance>=500)
                {
                    cout<<"Cashout successful"<<endl;
                    balance=balance-balance1;
                    out.open("mehedi.txt");
                    out<<name<<" "<<ac_id<<" "<<password<<" "<<balance;

                      cout<<endl<<"your name is : "<<name<<endl;
                    cout<<"Your new balance is : "<<balance<<endl;

                }


                else
                    cout<<"Insufficient balance"<<endl;


       cout<<endl<<endl<<endl<<"************** Thank you for using our services  **********"<<endl<<endl<<endl;
          }
void bank::cashin()
   {
  ofstream out;
   ifstream in;
    in.open("mehedi.txt");
  in>>name>>ac_id>>password>>balance;
  in.close();

        cout<<"*********Please cash in *********"<<endl<<endl;

                cout<<"Enter amount:";
                cin>>balance1;
                    cout<<"Cashin successful"<<endl;
                    balance+=balance1;
                     out.open("mehedi.txt");
                    out<<name<<" "<<ac_id<<" "<<password<<" "<<balance;
                     cout<<endl<<"your name is : "<<name<<endl;
                    cout<<"Now your balance:"<<balance<<endl;

             cout<<"************** Thank you for using our services  **********"<<endl<<endl<<endl;
   }



