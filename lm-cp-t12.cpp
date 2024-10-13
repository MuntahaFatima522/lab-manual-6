#include<iostream>
using namespace std;

float totalIncome(string type,int rows,int columns);

int main()
{
    string type;
    int rows,columns;
    float income;
    cout<<"Enter the screening type(Premiere/Normal/Discount): ";
    cin>>type;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    income=totalIncome(type,rows,columns);
    cout<<income;
}

float totalIncome(string type,int rows,int columns)
{
    float income;
    if(type=="Premiere")
    {
        float price=12.00;
        income=rows*columns*price;
    }
    else if(type=="Normal")
    {
        float price=7.50;
        income=rows*columns*price;
    }
    else
    {
        float price=5.00;
        income=rows*columns*price;
    }
    return income;
}