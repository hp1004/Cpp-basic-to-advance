#include<iostream>
using namespace std;
int main()
{
    int num, i=1,fact=1;
    cout<<"Enter a nunber: "<<endl;
    cin>>num;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<num<<": "<<fact;
    
    
   return 0;
}