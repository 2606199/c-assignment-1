#include<iostream>
using namespace std;
inline double spherevolume(double radius){
	return ((4.0/3.0)*3.14159*pow(radius,3));
}
int main(){
double r;
cout<<"Enter radius of sphere"<<endl;
cin>>r;
cout<<"Volume of sphere: "<<spherevolume(r)<<end;
}

