#include <iostream>
#define SIZE 10
using namespace std;

void selection_sort(int arr[], int n)
{
    int minpos,minimum,temp;
    for(int i=0; i<n-1; i++)
    {
        minimum = arr[i];
        minpos = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<minimum)
            {
                minimum = arr[j];
                minpos = j;
            }
        }

        if(i!=minpos)
        {
            temp = arr[i];
            arr[i] = arr[minpos];
            arr[minpos] = temp;
        }

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

    selection_sort(arr,n);

    cout <<endl<< "Array after selection sort"<<endl;

    for(int i=0; i<n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}
