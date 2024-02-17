#include<iostream>
#include<climits>
using namespace std;
int getmax(int arr[],int n)
{
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getmin(int arr[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[100],n;
    cout<<"enter the size of an array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elemnts of an array ";
        cin>>arr[i];
    }
    cout<<"Maximum element of an array "<<getmax(arr,n)<<endl;
    cout<<"Minimum element of an array "<<getmin(arr,n);

}





















