#include<iostream>
using namespace std;
int main()
{   
    int p,n,count;
    float r,si;
    count=1;

    while(count<4){
        cout<<"Enter values of p,n and r"<<endl;
        cin>>p>>n>>r;

        si=p*n*r/100;
        cout<<"Simple Intrest: "<<si<<endl;
        count=count+1;
    }
    return 0;
}