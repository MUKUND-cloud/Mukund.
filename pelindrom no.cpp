#include<iostream>
using namespace std;

 int main()
 {
 	int n,rem,rev=0;
 	cout <<"enter a value:";
 	cin>>n;
 	int j=n;
 	
 	 while(n!=0)
 	 {
 	 	rem=n%10;
 	 	rev=rev*10+rem;
 	 	n=n/10;
 	 	
	  }
	  cout<<rev<<endl;
	  if(rev==j)
	  {
	  	cout<<"no is pelendrom";
	  }else
	  {
	  	cout<<"no is not pelendrom";
	  	
	  }
 	
 	
 	return 0;
 }
