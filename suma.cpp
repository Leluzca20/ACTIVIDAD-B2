#include<iostream> 
 using namespace std; 
 int main(){ 
 int x,c=0; 
 float a,n=0; 
 cout<<"ingrese el numero de veses que se va a sumar: "; 
 cin>>n; 
 do{ 
 cout<<"ingrese una cantidad"<<endl; 
 cin>>a; 
 c=c+1; 
 a=a+x; 
 } 
 while(c==n); 
 cout<<"la cantidad final es: "<<a; 
 }
