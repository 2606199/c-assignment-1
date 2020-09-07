#include<iostream>
using namespace std;
class invoice{
private:
        string no;
        string descr;
        int quan;
        int pr;
public:
        invoice(string number,string description,int quantity,int price){
                setno(number);
                setdescr(description);
                setquan(quantity);
                setprice(price);
        }

void setno(string number){
        no=number;
}
void setdescr(string description){
        descr=description;
}
void setquan(int quantity){
        if(quantity<0)
                quan=0;
        else
                quan=quantity;

}
void setprice(int price){
        if(price<0)
                price=0;
        else
                pr=price;
}
string getno(){
        return no;
}
string getdescr(){
        return descr;
}
int getquan(){
        return quan;
}
int getprice(){
        return pr;
}
int getInvoiceAmount(){
        int amount;
        amount=quan*pr;
        return amount;
}
};
int main()
{
invoice item1("ed31","screw guage",2,50);
invoice item2("ml22","bolts",10,2);
invoice item3("ju12","hacksaw",3,100);
cout<<"Invoice part number: "<<item1.getno()<<"\npart description is: "<<item1.getdescr()<<endl;
cout<<"Quantity of item is: "<<item1.getquan()<<"\nprice per item is: "<<item1.getprice()<<endl;
cout<<"Invoice total amount is: "<<item1.getInvoiceAmount()<<endl<<endl;
cout<<"Invoice part number: "<<item2.getno()<<"\npart description is: "<<item2.getdescr()<<endl;
cout<<"Quantity of item is: "<<item2.getquan()<<"\nprice per item is: "<<item2.getprice()<<endl;
cout<<"Invoice total amount is: "<<item2.getInvoiceAmount()<<endl<<endl;
cout<<"Invoice part number: "<<item3.getno()<<"\npart description is: "<<item3.getdescr()<<endl;
cout<<"Quantity of item is: "<<item3.getquan()<<"\nprice per item is: "<<item3.getprice()<<endl;
cout<<"Invoice total amount is: "<<item3.getInvoiceAmount()<<endl<<endl;
}
