
#include<iostream>
#include<string.h>
using namespace std;
class rectangle{
private:
    float length;
    float breadth;
public:
    rectangle(float l=1.0,float b=1.0){

        if(l<0.0||l>20.0 ){
        cout<<"Lenght should be in the range of 0.0-20.0"<<endl;
    }
     if(b<0.0||b>20.0 ){
        cout<<"breadth should be in the range of 0.0-20.0"<<endl;
    }
    else{
            length=l;
     breadth=b;
    }
    }
    void setlength(float l)
    {
        if(l<0.0||l>20.0 ){
        cout<<"Lenght should be in the range of 0.0-20.0"<<endl;
    }
    else{
       this->length=l;
    }
    }
    void setbreadth(float b){
    if(b<0.0||b>20.0 ){
        cout<<"breadth should be in the range of 0.0-20.0"<<endl;
    }
    else{
     this->breadth=b;
    }
    }
    float getlength(){
    return length;
    }
    float getbreadth(){
    return breadth;
    }
void perimeter(){
cout<<"\nperimeter: "<<2*(length+breadth)<<endl;
}
void area(){
cout<<"Area: "<<length*breadth<<endl;
}
};
int main(){
rectangle r1(21.0,23.0);

cout<<"length of first rectangle r1: "<<r1.getlength()<<"\nbreadth of first rectangle: "<<r1.getbreadth();
r1.perimeter();
r1.area();
rectangle r2;
r2.setlength(6.0);
r2.setlength(5.0);
cout<<"length of second rectangle r2: "<<r2.getlength()<<"\nbreadth of second rectangle: "<<r2.getbreadth();
r2.perimeter();
r2.area();
rectangle r3;
cout<<"lenght of third recatngle"<<r3.getlength()<<"\nbreadth of third reactangle"<<r3.getbreadth();
r3.perimeter();
r3.area();
}
