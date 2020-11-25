#include <iostream>
#define SIZE 10
using namespace std;

void bubble_sort(int arr[], int n)
{
    int i=1,is_swap,temp;
    is_swap = 1;
    while(i<n && is_swap == 1)
    {
        is_swap = 0;
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                is_swap = 1;
            }
        }
        i++;
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

    bubble_sort(arr,n);

    cout <<endl<< "Array after bubble sort"<<endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
