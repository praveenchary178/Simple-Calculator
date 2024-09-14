#include<bits/stdc++.h>
using namespace std;
float add(float a,float b)
{
   float c=a+b;
   return c;
}
float multiply(float a,float b)
{
    float c=a*b;
   return c;
}
float sub(float a,float b)
{
    float c=a-b;
   return c;
}
float divis(float a,float b)
{
    float c=a/b;
   return c;
}
int main()
{
    cout<<"WELCOME TO SIMPLE CALCULATOR\n";
    cout<<"Enter the value of first number\n";
    float a;
    cin>>a;
     cout<<"Enter the value of second number\n";
     float b;
     cin>>b;
     cout<<"Choose What you need to do:\n";
     cout<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
     int n;
     cin>>n;
     switch(n)
     {
        case 1:
        cout<<add(a,b);
        break;
        case 2:
        cout<<sub(a,b);
        break;
        case 3:
        cout<<multiply(a,b);
        break;
        case 4:
        cout<<divis(a,b);
        break;

     }



}