#include<iostream>
using namespace std;

float Calculateperimeter(char shape,float num);

int main()
{
	char shape;
	float num;
	float perimeter;

	cout<<"Enter the shape(s for square,c for circle,t for triangle,h for hexagon): ";
	cin>>shape;
	cout<<"Enter a value: ";
	cin>>num;
	perimeter=Calculateperimeter(shape,num);
	cout<<"The perimeter is: "<<perimeter;
}


float Calculateperimeter(char shape,float num)
{
	float perimeter;
	if(shape=='s')
	{
		perimeter=4*num;
	}
	if(shape=='c')
	{
		perimeter=6.28*num;
	}
	if(shape=='t')
	{
		perimeter=3*num;
	}
	if(shape=='h')
	{
		perimeter=6*num;
	}
	return perimeter;
}	