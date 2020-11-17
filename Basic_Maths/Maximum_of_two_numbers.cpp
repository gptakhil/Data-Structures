#include <iostream>

using namespace std;

int main()
{
    int Max = 0,num1,num2;

    cout << "Enter first number"<<endl;
    cin >> num1;
    cout << "Enter second number"<<endl;
    cin >> num2;

    if (num1 > num2){
        Max = num1;
    }
    else
    {
        Max = num2;
    }

    cout << "Maximum among two number is "<<Max<<endl;

    return 0;


}
