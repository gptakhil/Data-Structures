#include <iostream>
using namespace std;

int main()
{
    int i=0,j=0,k=0;
    int arr1[]={1,3,5,7,9}, n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={0,2,4,6,8}, n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];

    cout << "Elements in first array"<<endl;
    for (int i=0; i<n1; i++)
    {
        cout << arr1[i] << " ";
    }

    cout <<endl<< "Element is second array"<<endl;

    for(int i=0; i<n2; i++)
    {
        cout<<arr2[i]<<" ";
    }

    while (i<n1 && j<n2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i = i+1;
        }
        else
        {
            arr3[k] = arr2[j];
            j = j+1;
        }
        k = k+1;
    }

    while (i<=n1)
    {
        arr3[k] = arr1[i];
        k = k+1;
        i = i+1;
    }

    while (j<=n2)
    {
        arr3[k] = arr2[j];
        k = k+1;
        j = j+1;
    }

    cout <<endl<< "After merging two sorted arrays"<<endl;

    for(int i=0;i<(sizeof(arr3)/sizeof(arr3[0])); i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}
