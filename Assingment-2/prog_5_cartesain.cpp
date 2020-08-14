
#include<iostream>
using namespace std;
class Rectangle{
private:
    float a,p,ax1,ax2,ax3,ax4,ay1,ay2,ay3,ay4;
    float l1,w1,l2,w2;
public:
    Rectangle(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4){
       ax1=x1;
       ax2=x2;
       ax3=x3;
       ax4=x4;
       ay1=y1;
       ay2=y2;
       ay3=y3;
       ay4=y4;
       setcoordinates();
    }
    void setcoordinates(){

if(ax1>0&&ax2>0&&ax3>0&&ax4>0&&ay1>0&&ay2>0&&ay3>0&&ay4>0)
                   {
                                cout<<"Rectangle in 1st quadrant"<<endl;
                            if(ax1>20||ax2>20||ax3>20||ax4>20||ay1>20||ay2>20||ay3>20||ay4>20)
                {
                    cout<<"and Enter coordinates less than 20"<<endl;
                }
                   }

                else{
                    cout<<"Recatangle is not in first quadrant"<<endl;
                    if(ax1>20||ax2>20||ax3>20||ax4>20||ay1>20||ay2>20||ay3>20||ay4>20)
                {
                    cout<<"and Enter coordinates less than 20"<<endl;
                }
                }
                  }


    void length(){
    this->l1=ax2-ax1;
    cout<<"\nlength is: "<<l1;
    }
void width(){
this->w1=ay3-ay1;
cout<<"\nwidth is: "<<w1;
}
void perimeter(){
this->p=2*(l1+w1);
cout<<"\nPerimeter is: "<<p;
}
void area(){
this->a=l1*w1;
cout<<"\narea is: "<<a<<endl;
}
void predicate(){
    this->w2=ay4-ay2;
    this->l2=ax4-ax3;
if(l1==l2&&l1==w1&&l1==w2){
    cout<<"Entered coordinates form square"<<endl;
}
else{
    cout<<"\nEntered coordinates form Rectangle"<<endl;
    }
}
};
int main(){
Rectangle r1(2.0,6.0,2.0,6.0,3.0,3.0,9.0,9.0);

r1.length();
r1.width();
r1.predicate();
r1.perimeter();
r1.area();

Rectangle r2(2.0,-4.0,-5.0,3.0,5.0,6.0,8.0,23.0);

}
