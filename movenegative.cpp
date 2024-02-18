#include<iostream>
using namespace std;
void movenegative(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        
        if(arr[start]<0 && arr[end]>0)
        {
         start++;
         end--;
        }
        else if(arr[start]>0 && arr[end]<0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[start]<0 && arr[end]<0)
        {
            start++;
        }
        else if(arr[start]>0 && arr[end]>0)
        {

            end--;
        }
    }

}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100],n;
    cout<<"enter the size of an array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements of an array ";
        cin>>arr[i];
    }
    movenegative(arr,n);
    printarray(arr,n);

}