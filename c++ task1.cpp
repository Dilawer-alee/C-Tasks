
//2.1. Task 1: Data Type Declaration and Initialization
//? Create a program that:
//? Declares variables of all primitive data types.
//? Assigns and prints values to each variable.

//int: Yeh sirf poore numbers ke liye use hota hai (jaise 10).
//float: Yeh decimal numbers yaani chhote precision ke liye use hota hai (jaise 3.14f).
//double: Yeh float se zyada accurate decimal numbers ke liye use hota hai (jaise 2.71828).
//char: Yeh ek character store karta hai (jaise 'A').
//bool: Yeh true ya false value ko store karta ha


#include <iostream>
using namespace std;

int main(){
	string name = "dilawer";
	
	int age =20;
	
	float height = 5.5;
	
	char grade = 'A';
	
	bool isStudent = true;
	cout  << "string :"<< "My name is " << name<<endl << "int :"<< "Age = " << age <<endl <<"float :"<<
	 "height = "<< height <<endl <<"char :"<< "Grade =" << grade<<endl << "boolean :"<< "isStudent =" << isStudent<< endl;
    
	 return 0;
	
	

}
