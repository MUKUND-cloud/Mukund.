#include<iostream>
using namespace std;

 int fibonacci(int n){
 	  int n1=0,n2=1,n3,i;
 	  for(i=1;i<=n;i++){
	   
 		n3=n1+n2;
 	 	n1=n2;
 	 	n2=n3;
 	 	cout<<n3<<"\n";
 	 	
 	 }
 	
 }
 
 int main()
 {
 	int n;
 
 	cout<<"enter a value:";
 	cin>>n;
 	
 	
     fibonacci( n);
	  return 0;
 }
