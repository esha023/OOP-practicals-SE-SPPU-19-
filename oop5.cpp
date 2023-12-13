#include<iostream>

using namespace std;
#define size 10

template <class T>

void select(T arr[size], int n)
{
    int min;
    T temp;
    for(int i=0; i<n-1; i++)
    {
        min = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        //swapping i with min
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    //print sorted array
    cout<<"Sorted array is: "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[size];
    float brr[size];
    int n;
    cout<<"\n Enter total no. of int elements in the array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    //print original array
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    select(arr,n);
    cout<<"\n Enter total no. of float elements in the array: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>brr[i];
    }
    //print original array
    for(int i=0; i<n; i++)
    {
        cout<<brr[i]<<" ";
    }
    select(brr,n);

}
