#include<iostream>
#include<string>
class account
{
   private:
string dep_name;
int acc_num;
string acc_type;
int balance;
public:
void setVariables(int b,int n,string a,string c)
{
balance=b;
acc_num=n;
dep_name=a;
acc_type=c;

}
float getVariables()
{
return balance;
return acc_num;
return dep_name;
return acc_type;
}
void deposit(int d);
void withdraw(int w);
};
void account::deposit(int d)
{
balance=balance+d;
}
void account::withdraw(int w)
{
if(balance>=w)
{
balance=balance-w;
}
}
int main()
{
account a1,a2;
cout<<Enter the depositor name,account number,account type,balance<<endl;

switch choice()
{
case 1:
int d1,d2;
cout<<Enter the amount to be deposited<<endl;
cin>>d1>>d2;
a1.deposit(d1);
a2.deposit(d2);
cout<<a1.getVariables()<<endl;
cout<<a2.getVariables()<<endl;
break;
case 2:
int w1,w2;
cout<<Enter the amount to be withdrawn<<endl;
cin>>w1>>w2;
a1.withdraw(w1);
a2.withdraw(w2);
cout<<a1.getVariables()<<endl;
cout<<a2.getVariables()<<endl;
break;
default:
cout<<a1.getVariables()<<endl;
cout<<a2.getVariables()<<endl;
}
