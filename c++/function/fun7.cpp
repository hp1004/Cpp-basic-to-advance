//====== C++ Functions - Pass By Reference =====//

#include <iostream>
using namespace std;

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum, secondNum;
    cout << "Enter First Number: " << endl;
    cin >> firstNum;

    cout << "Enter Second Num: " << endl;
    cin >> secondNum;

    //---Number Before Swap---//
    cout << "Before swap" << endl;
    cout << firstNum << " " << secondNum <<endl;

    swapNums(firstNum, secondNum);
    cout << "After Swap" << endl;
    cout << firstNum << " " << secondNum << endl;

    return 0;
}