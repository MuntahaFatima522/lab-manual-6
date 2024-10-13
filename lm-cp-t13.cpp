#include<iostream>
using namespace std;

float lowestPrice(int kilometer,string period);

int main()
{
    int kilometer;
    string period;
    float result;
    cout<<"Enter the number of kilometers: ";
    cin>>kilometer;
    cout<<"Enter the period of the day(day/night): ";
    cin>>period;
    result=lowestPrice(kilometer,period);
    cout<<"Lowest price for "<<kilometer<< " kilometers : "<<result<<" EUR"; 
}


float lowestPrice(int kilometer,string period)
{
    float result;
    if(kilometer<20 && period=="day")
    {
        result=(kilometer*0.79)+0.70;
    }
    else if(kilometer<20 && period=="night")
    {
        result=(kilometer*0.90)+0.70;
    }
    else if((kilometer>=20 && kilometer<100) && (period=="day" || period=="night"))
    {
        result=kilometer*0.09;
    }
    else if((kilometer>100) && (period=="day" || period=="night"))
    {
        result=kilometer*0.06;
    }
    return result;
}