#include<iostream>
using namespace std;
class Shape{
public:
Shape(){
cout<<"This is Shape"<<endl;
}
};
class TwoDShape:public Shape{
public:
    int s1,s2;
void setValue(int side1,int side2){
s1=side1;
s2=side2;
}
};
class ThreeDShape:public Shape{
public:
    int r;
void setValue(int radius){
r=radius;
}
};
class square:public TwoDShape{
public:
void CalculateArea(){
if(s1==s2){
cout<<"Area of square is: "<<s1*s2<<endl;
}
else{
cout<<"Entered sides is invalid for square"<<endl;
}
}
};
class rectangle:public TwoDShape{
public:
void CalculateArea(){
if(s1!=s2){
cout<<"Area of rectangle is: "<<s1*s2<<endl;
}
else{
cout<<"Entered sides is invlaid for rectangle"<<endl;
}


}

};
class sphere:public ThreeDShape{
public:
void CalculateVolume(){
cout<<"Volume of sphere is: "<<(4.0/3.0)*3.14*r*r*r;
}

};
int main(){
square sq;
int side1,side2,l,b,r1;
cout<<"Enter the two sides of square"<<endl;
cin>>side1>>side2;
sq.setValue(side1,side2);
sq.CalculateArea();
cout<<"Enter length and breadth of rectangle"<<endl;
cin>>l>>b;
rectangle r;
r.setValue(l,b);
r.CalculateArea();
cout<<"Enter radius of sphere"<<endl;
cin>>r1;
sphere s;
s.setValue(r1);
s.CalculateVolume();

}
