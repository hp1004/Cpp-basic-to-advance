#include<iostream>
using namespace std;
int main()
{
    int number,i=1,fact=1;
    cout<<"Enter number: "<<endl;
    cin>>number;
    

    while(i<=number)
    {

        fact=fact*i;
        i++;
    }
    cout<<"Factorial Value of "<<number<<": "<<fact<<endl; 
    return 0;
}