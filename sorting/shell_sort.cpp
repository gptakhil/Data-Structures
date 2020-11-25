
#include <iostream>
#define SIZE 10
using namespace std;

void shell_sort(int arr[], int n)
{
    int i,j,item,span;
    span = n/2;
    while(span >= 1)
    {
        for(i=span; i<n;i++)
        {
            item = arr[i];
            for(j=i-span; j>=0 && arr[j]>item; j-=span)
            {
                arr[j+span] = arr[j];
            }
            arr[j+span] = item;
        }
        span = span/2;
    }
}


int main()
{
    int  arr[SIZE], i, n;
    cout << "Enter how many elements"<<endl;
    cin >> n;
    cout << "Enter the elements"<<endl;

    for (i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout<<"The elements in array are"<<endl;
    for (i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    shell_sort(arr,n);

    cout <<endl<< "Array after shell  sort"<<endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
