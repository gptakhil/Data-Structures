#include <iostream>

using namespace std;

int main()
{
    int Rev=0,num,remainder;
    cout << "Enter the number "<<endl;
    cin >> num;

    while (num!=0)
    {
        remainder = num%10;
        Rev = Rev*10 + remainder;
        num = num / 10;
    }
    cout << "Reverse of a number is "<< Rev << endl;
    return 0;
}
