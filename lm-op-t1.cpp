#include<iostream>
using namespace std;

bool greaterNumber(int num1,int num2);

int main()
{
	int num1,num2;
	bool result;
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	result=greaterNumber(num1,num2);
	cout<<result;
}


bool greaterNumber(int num1,int num2)
{
	bool result;
	if(num1>num2)
	{
		result=true;
	}
	else
	{
		result=false;
	}
	return result;
}	