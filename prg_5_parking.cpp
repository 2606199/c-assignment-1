
#include<iostream>
using namespace std;
class parking{
private:
	float hrs;
public:
	parking(float hrs){
		this->hrs=hrs;
	}
	float calculatecharge(float hrs){
	float charge;
	if(hrs==24.00)
		charge=10.00;
	else{
		if(hrs>=1.00&&hrs<=3.00){
		charge=2.00;
	         }
		else{
		hrs=hrs-3.00;
	        charge=(hrs*1.0/2.0)+2.00;
	      
		}
	}
	return charge;
	}
	
	
};
int main(){
float hrs1,hrs2,hrs3;
cout<<"car"<<"\t\t\t"<<"Hours"<<"\t\t\t"<<"charge"<<endl;
cout<<"1"<<"\t\t\t";
cin>>hrs1;
parking c1(hrs1);
cout<<"\t\t\t\t\t\t"<<"\x1b[A"<<c1.calculatecharge(hrs1)<<endl;
cout<<"2"<<"\t\t\t";
cin>>hrs2;
parking c2(hrs2);
cout<<"\t\t\t\t\t\t"<<"\x1b[A"<<c2.calculatecharge(hrs2)<<endl;
cout<<"3"<<"\t\t\t";
cin>>hrs3;
parking c3(hrs3);
cout<<"\t\t\t\t\t\t"<<"\x1b[A"<<c3.calculatecharge(hrs3)<<endl;
cout<<"Total"<<"\t\t\t"<<hrs1+hrs2+hrs3<<"\t\t\t"<<c1.calculatecharge(hrs1)+c2.calculatecharge(hrs2)+c3.calculatecharge(hrs3);
}



