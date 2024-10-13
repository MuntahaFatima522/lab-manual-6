#include<iostream>
using namespace std;

string checkTitle(int age,char gender);

 main()
{
    int age;
    char gender;
    string title;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender(m/f): ";
    cin>>gender;
    title=checkTitle(age,gender);
    cout<<"Your personal title is: "<<title;
}

string checkTitle(int age,char gender)
{
    string title;
    if(gender=='m')
    {
        if(age>=16)
        {
            title="Mr.";
        }
        else
        {
            title="Mater";
        }
    }
    else
    {
        if(age>=16)
        {
            title="Ms.";
        }
        else
        {
            title="Miss";
        }
    }
    return title;
}