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
