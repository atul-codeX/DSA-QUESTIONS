#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
        
    }
    while(i<n)
    {
        arr3[k++]=arr1[i++];
    }
    while(j<m)
    {
        arr3[k++]=arr2[j++];
    }
}
void printarray(int arr3[],int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<arr3[i]<<" ";
    }
}
int main()
{
    int n,arr1[100],m,arr2[100];
    cout<<"enter the size of an array 1 ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements of an array 1 ";
        cin>>arr1[i];
    }
    cout<<"enter the size of an array 2 ";
    cin>>m;
    int arr3[m+n]={0}; // Move this line after getting the value of m
    for(int i=0;i<m;i++)
    {
        cout<<"enter the elements of array 2 ";
        cin>>arr2[i];

    }
    merge(arr1,n,arr2,m,arr3);
    printarray(arr3,m+n);
}