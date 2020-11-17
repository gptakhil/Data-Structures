# include <iostream>

using namespace std;

int main()
{
    int num,i=2,Prime=1;
    cout << "Enter the number "<<endl;
    cin >> num;
    while (i<=num/2){

        if(num%i== 0)
        {
            Prime=0;
            break;
        }
        else
        {
            i = i+1;
        }
    }

    if (Prime=1)
    {
        cout << "The number "<< num << " is prime "<<endl;
    }
    else
    {
        cout << "The number "<< num << " is not prime "<<endl;
     }

    return 0;


}
