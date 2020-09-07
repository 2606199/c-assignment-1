#include<iostream>
using namespace std;
class complex{
private:
 int real;
 int imag;
public:
	friend complex operator*(const complex &,const complex &);

	complex(int real=0,int imag=0){
		this->real=real;
		this->imag=imag;
	}
	void print(){
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
};
complex operator*(const complex & obj1,const complex & obj2)
{
	
	return complex(((obj1.real*obj2.real)-(obj1.imag*obj2.imag)),((obj1.real*obj1.imag)+(obj1.imag*obj2.real)));
}
int main(){
complex c1(3,5);
complex c2(2,6);
complex c3=c1*c2;
c1.print();
c2.print();
c3.print();
}
