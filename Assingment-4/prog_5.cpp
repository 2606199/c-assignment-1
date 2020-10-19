#include<iostream>
using namespace std;
class A{
public:
A(){
cout<<"This is default constructor of A"<<endl;
}
A(int x){
cout<<"value of x is:"<<x<<endl;
}
    ~A(){
    cout<<"This is destructor of A"<<endl;
    }
};
class B:public A{
public:
    B(){
    cout<<"This is deafult constructor of B"<<endl;
    }
    B(int y){
    cout<<"Value of y is:"<<y<<endl;
    }
    ~B(){
    cout<<"This is destructor of B"<<endl;
    }
};
class C{
public:
    C(){
cout<<"This is default constructor of C"<<endl;
    }
    C(int z){
    cout<<"Value of z is:"<<z<<endl;
    }
    ~C(){
    cout<<"This is destructor of C"<<endl;
    }
};
class D:public B,public C{
public:
    D(){
cout<<"This is default constructor of D "<<endl;
    }
    D(int a){
    cout<<"Value of a is:"<<a<<endl;
    }
        ~D(){
    cout<<"This is destructor of D"<<endl;
    }
};

int main(){
   // A a;
    //B b;
    //C c;
    //D d;
    A a(1);
    B b(2);
    C c(3);
    D d(1);
}
