/*		--------------------------------------->>>STUDENT(BASE CLASS)<<<<<-------------------------------
INHERIT		|						   |						|
STUDENT		|				---------------------------------------				|
CLASS		|			        |                                     |				|INHERITS STUDENT 
AS WELL		|			  (DERIVED CLASS)			(DERIVED CLASS)			|CLASS AS WELL AS 
AS 		|		      UNDERGRADUATESTUDENT		        GRADUATESTUDENT			|GRADUATE CLASS
UNDERG-		|				|				      |				|
RADUATE		|		--------------------------------	      -------------------		|
-STUDEN		|		|		|	       |              |                 |		|
-T		|	     FRESHMAN	     JUNIOR         SENIOR       DOCTORALSTUDENT    MASTERSTUDENT	|
		|    (DERIVED CLASS)   (DERIVED CLASS) (DERIVED CLASS)   (DERIVED CLASS)    (DERIVED CLASS)	|
		|	|			|		|		|		|		|
		|	|			|		|		|		|		|
	        ------------------------------------------------- 		-----------------------------------


	HERE STUDENT CLASS IS BASE CLASS AND UNDERGRADUATESTUDENT AND GRADUATESTUDENT IS DERIVED CLASS.THESE TWO CLASS INHERITS
	STUDENT CLASS.FURTHER THESE TWO CLASSES HAVE DERIVDED CLASSES,UNDERGRADUATESTUDENT HAVE THREE DERIVED CLASS(FRESHMAN,JUNIOR
	,SENIOR),UNDERGRADUATESTUDENT CLASS ACT AS A BASE CLASS FOR THESE THREE DERIVED CLASSES. AND GRADUATESTUDENT HAVE FURTHER
	TWO DERIVED CLASSES(DOCTORALSTUDENT,MASTERSTUDENT),GRADUATESTUDENT ACT AS A  BASE CLASS FOR THESE TWP DERIVED CLASSES.

*/


#include<iostream>

using namespace std;
class student{
public:
student(){
cout<<"I am the base class student"<<endl;
}
};
class UndergraduateStudent: public student{
public:
UndergraduateStudent(){
cout<<"I am the derived class Undergradaute from Base class Student"<<endl;
}
};
class GraduateStudent:public student{
public:
GraduateStudent(){
cout<<"I am the derived class GraduateStudent from Base class student"<<endl;
}
};
class Freshman: public UndergraduateStudent{
public:
Freshman(){
cout<<"I am the derived class Freshman from Base class UndergraduateStudent"<<endl;
}
};
class Junior:public UndergraduateStudent{
public:
Junior(){
cout<<"I am the derived class Junior from Base class UndergraduateStudent"<<endl;
}
};
class Senior:public UndergraduateStudent{
public:
Senior(){
cout<<"I am the derived class Senior from Base class UndergraduateStudent"<<endl;
}
};
class DoctoralStudent:public GraduateStudent{
public:
DoctoralStudent(){
cout<<"I am the derivded class DoctralStudent from Base class GraduateStudent"<<endl;
}
};
class MasterStudent:public GraduateStudent{
public:
MasterStudent(){
cout<<"I am the derivde class MasterStudent from Base class GraduateStudent"<<endl;
}
};

int main(){
UndergraduateStudent u;
GraduateStudent g;
Freshman f;
Junior j;
Senior s;
DoctoralStudent d;
MasterStudent m;
}
