#include <iostream>

using namespace std;

int main()
{
    float P;
    string Grade;

    cout << "Enter the percentage:"<<endl;
    cin >> P;
    if (P>=90)
    {
        Grade = "A";
        cout << "Grade "<<Grade<<endl;
    }
    else if (P >= 70)
    {
        Grade = "B";
        cout << "Grade "<<Grade<<endl;
    }
    else if (P >= 50)
    {
        Grade = "C";
        cout << "Grade "<<Grade<<endl;
    }
    else
    {
        Grade = "F";
        cout << "Grade"<<Grade<<endl;
    }

    return 0;
}
