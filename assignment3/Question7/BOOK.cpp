#include<iostream>
#include"invoice.h"
using namespace std;




int main()
{
 Invoice Invoice1("ed34","Screw Guage",2,30);
 Invoice Invoice2("e322","Screws",10,3);
 cout << "Invoice1's initial part number is: "<< Invoice1.getPartNumber()<< "\nand part description is: "<< Invoice1.getPartDescription()<<endl;
 cout<< "quantity per item is: "<< Invoice1.getItemQuantity()<< "\nprice per item is: "<< Invoice1.getItemPrice()<< endl;
 cout<<"Invoice1's total amount is: "<<Invoice1.getInvoiceAmount()<<endl<<endl;
 cout << "Invoice2's initial part number is: "<< Invoice2.getPartNumber()<< "\nand part description is: "<< Invoice2.getPartDescription()<<endl;
 cout<< "quantity per item is: "<< Invoice2.getItemQuantity()<< "\nprice per item is: "<< Invoice2.getItemPrice()<< endl;
 cout<<"Invoice2's total amount is: "<<Invoice2.getInvoiceAmount()<<endl;
}
