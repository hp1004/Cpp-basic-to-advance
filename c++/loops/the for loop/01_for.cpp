#include<iostream>
using namespace std;
int main()
{
    int p,n,count;
    float r,si;

    for(count=0;count<=3;count=count+1)
    {
        cout<<"Enter the values of p, n and r: "<<endl;
        cin>>p>>n>>r;

        si=p*n*r/100;
        cout<<"Simple Intrest: "<<si<<endl;
        
    }
    return 0;
}