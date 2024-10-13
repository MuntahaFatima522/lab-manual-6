#include<iostream>
using namespace std;

float discount(string day,string month,float purchase);

int main()
{
    string day,month;
    float purchase;
    float finalPrice;
    cout<<"Enter purchase day: ";
    cin>>day;
    cout<<"Enter purchase month: ";
    cin>>month;
    cout<<"Enter purchase amount: ";
    cin>>purchase;
    finalPrice=discount(day,month,purchase);
    cout<<"Payable amount after discount: "<<finalPrice;
}


float discount(string day,string month,float purchase)
{
    float discount,finalPrice;
    if(day=="sunday")
    {
        if(month=="october" || month=="march" || month=="august")
        {
            discount=(10.0/100.0)*purchase;
            finalPrice=purchase-discount;
        }
        else
        {
            finalPrice=purchase;
        }
    }
    else if(day=="monday")
    {
        if(month=="november" || month=="december" )
        {
            discount=(5.0/100.0)*purchase;
            finalPrice=purchase-discount;
        }
        else
        {
            finalPrice=purchase;
        }
    }
    else
    {
        finalPrice=purchase;
    }
    return finalPrice;
}