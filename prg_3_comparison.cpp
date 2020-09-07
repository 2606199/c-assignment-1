#include<iostream>
using namespace std;
class comparison{
private:
	int real,imag; 
public:
	friend int operator==(comparison const &,comparison const &);
	friend int operator!=(comparison const &,comparison const &);
	comparison(int r=0,int i=0){
		real=r;
		imag=i;
	}

};
int operator==(comparison const &obj1,comparison const &obj2){
	int result;
	if((obj1.real==obj2.real)&&(obj1.imag==obj2.imag))
		result=1;
	return result;
}
int operator!=(comparison const &obj1,comparison const &obj3){
	int result;
	if((obj1.real!=obj3.real)||(obj3.imag!=obj3.imag))
		result=0;
	return result;
}
int main(){
comparison c1(2,2),c2(2,2),c3(2,5);
if(c1==c2)
	cout<<"Equal"<<endl;

if(c1!=c3)
	cout<<"unequal"<<endl;
}
