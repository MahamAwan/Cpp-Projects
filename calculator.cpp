#include<iostream>
using namespace std;
int main()
{
	int num1,num2,add,subtract,product,division;
	char opper;
	cout<<"Enter the first number"<<endl;
	cin>>num1;
	cout<<"+ for addition \n- for subtraction \n/ for division \n* for multiplication \n\nEnter the operator "<<endl;
	cin>>opper;
	cout<<"Enter the second number"<<endl;
	cin>>num2;
	
	
	if(opper=='+')
	{
		add=num1+num2;
		cout<<"The addition of number is  "<<add<<endl;
	}
	else if(opper== '-')
	{
		subtract=num1-num2;
		cout<<"The subtraction is  "<<subtract<<endl;
	}
	else if(opper== '/')
	{
		division=num1/num2;
		cout<<"the diviosion is  "<<division<<endl;
	}
	else if(opper=='*')
	{
		product=num1*num2;
		cout<<"the multiplication is  "<<product<<endl;
	}
	else 
	cout<<"enter the valid opperator"<<endl;
}

