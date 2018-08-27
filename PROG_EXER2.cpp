/*
Author: N.J. Cagomoc
Program: Profile Information.
Description: This program display the profile information of the user.
*/

#include<iostream>
using namespace std;
int main()
{

//Initialize the variables
string FN,LN,E,Add,mm, a="+63" ;
int dd,yy;
int Con1, Con2;
char MI;

//prompt the user to enter inputs 
cout <<"Enter your Last name: ";
cin >> LN;
cout <<"Enter your First name: ";
cin >> FN;
cout <<"Enter your Middle Initial: ";
cin >> MI;
cout <<"Enter your birth month: ";
cin >> mm;
cout <<"Enter your birth date: ";
cin >> dd;
cout <<"Enter your birth year: ";
cin >> yy;
cout <<"Enter your contact number 1st - 6th digit: ";
cin >> Con1;
cout <<"Enter your contact number 7th - 11th digit: ";
cin >> Con2;   
cout <<"Enter your email address: ";
cin >> E;
cout <<"Enter your address: ";
cin >> Add;
cout << "\n\n" << endl;   

//outputs of the program
cout << "Name: " ;
cout << LN << "," << FN << " " << MI << "." << endl ;
cout << "Birthday: ";
cout << mm << " " << dd << "," << yy << endl; ;
cout << "Contact no.: " ;
cout << a << Con1 << Con2 << endl ;
cout << "Email Address :";
cout << E << endl;
cout << "Address :";
cout << Add << endl;

return 0;
}
