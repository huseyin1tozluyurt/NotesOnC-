/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;

int main(){
int a,b;
cout<<"Enter the value of a: "<<endl;
cin>>a;
if(a>INT_MAX-b&&b>0){
    
    cout<<"Overflow";
    exit(0);
} 
cout<<"Enter the value of b: "<<endl;
cin>>b;


if(a<INT_MIN-b&&b<0){
    
    cout<<"Underflow";
    cout<<"The result of adding is: "<<a+b<<endl;
    exit(0);
}



return 0;
}