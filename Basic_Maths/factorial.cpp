#include <iostream>
using namespace std;

int fact(int num){
    int ans=1;
    if(num==0 || num == 1){
        return ans;
    }
    else{

        for(int i =num; i>1; i--){
            ans = ans*i;
        }
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter the number "<<endl;
    cin >> num;
    int factorial = fact(num);

    cout << "Factorial of a number "<< num << " is "<<endl << factorial;
    return 0;
}
