#include <bits/stdc++.h>
#include"account inf.h"

using namespace std;

int main()
{
    bank ob1;

int a;
  ob1.companyname();
  while(1){
  cout<<"Main Manue"<<endl;
  cout<<"1.Registration"<<endl;
  cout<<"2.Login"<<endl;
  cout<<"3.Exit"<<endl;
  cout<<"Enter your option"<<endl;
  cin>>a;
  if(a==3)
    break;
  else if(a==1)
  {
   ob1.setdata();
  }
  else
  {
  if(ob1.login()==5)
  {
    int op;
    while(1){
    cout<<"Your Manue\n";
    cout<<"1.Chake Balance\n";
    cout<<"2.Cash out\n";
    cout<<"3.Cash In\n";
    cout<<"4.LogOut\n";
    cout<<"\nEnter your choice:";
    scanf("%d",&op);
    cout<<endl;
    if(op==4)
        return 0;    else
    switch(op)
    {

    case 1:
        ob1.cbalance();break;
        break;
    case 2:
        ob1.cashout();
        break;
    case 3:
        ob1.cashin();break;
    default :
        cout<<"Invalid option\n";
        break;
    }
    }
  }

  }
  }

    getchar();
    return 0;
}

