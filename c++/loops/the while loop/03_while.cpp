#include<iostream>
using namespace std;
int main()
{
    float otpay;
    int hour,i=1;

    while (i<=10)
    {
        cout<<"\n Enter no. of hours worked: "<<endl;
        cin>>hour;

        if(hour>=40)
            otpay=(hour-40)*12;
        else
            otpay=0;
        cout<<"Hours: "<<hour<<"  "<<"Overtime Pay: Rs"<<otpay<<endl;
        i++;

    }
    
    return 0;
}