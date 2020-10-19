/*									QUADRILATERAL(BASE CLASS)
									      |
				        ---------------------------------------------------------------------------------
				        |			    |				|			|
				    TRAPEZOID  		        PARALLELOGRAM		    RECTANGLE		      SQUARE
				(DERIVED CLASS)			(DERIVED CLASS)		(DERIVED CLASS)		(DERIVED CLASS)


*/



#include<iostream>
using namespace std;
class Quadrilateral{
public:
    int side1,side2,side3,side4,side5,side6,side7,height1,height2,length1,breadth1;
    void setTrapezoid(int s1,int s2,int s3,int s4,int h1){
    side1=s1;
    side2=s2;
    side3=s3;
    side4=s4;
    height1=h1;
    }
    void setParallelogram(int s5,int s6,int h2){
    side5=s5;
    side6=s6;
    height2=h2;
    }

    void setRectangle(int l1,int b1){
    length1=l1;
    breadth1=b1;
    }
    void setSquare(int a){
    side7=a;
    }
};
class Trapezoid:public Quadrilateral{
public:
    void CalculatePerimeter(){
    cout<<"Perimeter of Trapezoid  is: "<<side1+side2+side3+side4<<endl;
    }
     void CalculateArea(){
    cout<<"Area of Trapezoid  is: "<<(1.0/2.0)*(side1+side2)*height1<<endl;
    }
};
class Parallelogram:public Quadrilateral{
public:
        void CalculatePerimeter(){
    cout<<"Perimeter of parallelogram is: "<<2*(side5+side6)<<endl;
    }
            void CalculateArea(){
    cout<<"Area of parallelogram is: "<<(side5*height2)<<endl;
    }
};
class Rectangle:public Quadrilateral{
public:
            void CalculatePerimeter(){
    cout<<"Perimeter of Rectangle is: "<<2*(length1+breadth1)<<endl;
    }
            void CalculateArea(){
    cout<<"Area of Rectanglee is: "<<(length1*breadth1)<<endl;
    }

};
class Square:public Quadrilateral{
public:
              void CalculatePerimeter(){
    cout<<"Perimeter of Square is: "<<4*side7<<endl;
    }
            void CalculateArea(){
    cout<<"Area of Square is: "<<side7*side7<<endl;
    }
};
int main(){
    int s1,s2,s3,s4,s5,s6,h1,h2,l1,b1,a;
Trapezoid t;
cout<<"Enter all side and height of Trapezoid: "<<endl;
cin>>s1>>s2>>s3>>s4>>h1;
t.setTrapezoid(s1,s2,s3,s4,h1);
t.CalculatePerimeter();
t.CalculateArea();
Parallelogram p;
cout<<"Enter parallel side and height of Parallelogram: "<<endl;
cin>>s5>>s6>>h2;
p.setParallelogram(s5,s6,h2);
p.CalculatePerimeter();
p.CalculateArea();
Rectangle r;
cout<<"Enter length and breadth of Rectangle: "<<endl;
cin>>l1>>b1;
r.setRectangle(l1,b1);
r.CalculatePerimeter();
r.CalculateArea();
Square s;
cout<<"Enter side of Square: "<<endl;
cin>>a;
s.setSquare(a);
s.CalculatePerimeter();
s.CalculateArea();

}
