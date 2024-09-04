#include<iostream>
using namespace std;
  int main()
  {
  	char op;
  	int num1,num2;
  	cout<<"enter the operator:(+,-,*,/):";
  	cin>>op;
  	cout<<"enter the number one bye one:";
  	cin>>num1>>num2;
  	 switch(op)
  	 {
  	 	case'+':
		 cout<<num1<<"+"<<num2<<"="<<(num1+num2);
  	 	break;
  	 	
		   case'-':
		   cout<<num1<<"-"<<num2<<"="<<(num1-num2);
  	 	break;
  	 	
		   case'*':
		   cout<<num1<<"*"<<num2<<"="<<(num1*num2);
  	 	break;
  	 	case'/':
  	 
  	 	if(num2!=0.0)
  	 	{
		   
  	 	cout<<num1<<"/"<<num2<<"="<<(num1/num2);
  	 }
  	 else
  	 {
  	 	cout<"divide by zero situation";
  	 	break;
	   }
  	 	 default:
  	 	 	cout<<op<<"is an invalid oprator";
	   }
  	return 0;
  }
