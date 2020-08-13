#include<iostream>
#include <string>
using namespace std;
class Account
{
 public:
  Account(int);
  void cd(int );
  void db(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account(int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}
void Account::cd( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::db(int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(40);
 Account Account2(-1);
 cout << "initial balance is: "<< Account1.getAccountBalance()<< "\nAccount2's initial balance is: "<< Account2.getAccountBalance() << endl;
 Account1.cd(100);
 Account2.cd(25);
 cout << "\n balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance() << endl;
 Account1.db(19);
 Account2.db(4);
 cout << "\nAccount1's balance is: "<< Account1.getAccountBalance()<< "\nAccount2's balance is: "<< Account2.getAccountBalance()<<endl;
}