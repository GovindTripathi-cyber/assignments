#include<iostream>
#include"invoice.h"
using namespace std;



Invoice::Invoice( string number, string description, int quantity, int price )
{
 partNumber=number;
 partDescription=description;
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
void Invoice::setPartNumber( string number)
{
 if ( number.length() <= 25 )
  partNumber = number;
 if ( number.length() > 25 )
 {
  partNumber = number.substr( 0, 25 );
  cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
 }
}
void Invoice::setPartDescription(string description )
{
 if ( description.length() <= 25 )
  partDescription = description;
 if ( description.length() > 25 )
 {
  partDescription = description.substr( 0, 25 );
  cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
 }
}
void Invoice::setItemQuantity(int quantity )
{
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
}
void Invoice::setItemPrice(int price )
{
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
string Invoice::getPartNumber()
{
 return partNumber;
}
string Invoice::getPartDescription()
{
 return partDescription;
}
int Invoice::getItemQuantity()
{
 return itemQuantity;
}
int Invoice::getItemPrice()
{
 return itemPrice;
}
int Invoice::getInvoiceAmount()
{
 return itemQuantity*itemPrice;
}
