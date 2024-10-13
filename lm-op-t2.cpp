#include<iostream>
using namespace std;

int parityAnalysis(int num);

int main()
{
	int num;
	int result;
	cout<<"Enter a three digit number: ";
	cin>>num;
	result=parityAnalysis(num);
	cout<<result;
}


int parityAnalysis(int num)
{
	int digit1,digit2,digit3,rem1,rem2;
	int result;
	int sum;

	digit1=num/100;
	rem1=num%100;
	digit2=rem1/10;
	rem2=rem1%10;
	digit3=rem2/1;

	sum=digit1+digit2+digit3;

	if((sum%2==0 && num%2==0) || (sum%2!=0 && num%2!=0))
	{
		result=1;
	}
	else
	{
		result=0;
	}
	return result;
}	