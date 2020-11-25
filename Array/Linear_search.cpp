 #include<iostream>

 using namespace std;
 int Linearsearch(int* arr,int item,int N)
 {
    int loc=0;
    for (int i=1; i<=N; i++ )
    {
        if (arr[i]==item)
        {
            loc = i;
        }
    }
    return loc;
 }
 int main()
 {
    int arr[]={1,2,3,4,5,6,7};
    int item,location;
    int N=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<N; i++)
   {
        cout<<arr[i]<<endl;
   }
   cout<<"Enter the element you want to search"<<endl;
   cin >> item;

   location=Linearsearch(arr,item,N);
   if(location==0){
        cout<<"Element is not present in the array"<<endl;
   }
   else{
        cout<<"The location of the element is"<<endl<<location;
   }
   return 0;
 }
