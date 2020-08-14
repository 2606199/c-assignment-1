#include<iostream>
#include<string.h>
using namespace std;
class date{
private:
    int month;
    int day;
    int year;
public:
date(int m,int d,int y){
if(m>=1&&m<=12){
    month=m;
}
else{
    month=1;
}

day=d;
year=y;
}
void setmonth(int m){
this->month=m;
}
void setday(int d){
this->day=d;
}
void setyear(int y){
this->year=y;
}
int getmonth(){
return month;
}
int getday(){
return day;
}
int getyear(){
return year;
}
void displaydate(){
cout<<month<<"/"<<day<<"/"<<year<<endl;
}
};
int main()
{
    date date1(8,18,2019);
    date1.displaydate();
    date1.setmonth(1);
    date1.setday(23);
    date1.setyear(2018);
  cout<<date1.getmonth()<<"/"<<date1.getday()<<"/"<<date1.getyear()<<endl;

}
