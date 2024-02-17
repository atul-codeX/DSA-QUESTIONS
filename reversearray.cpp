    #include<iostream>
    using namespace std;
    void reverse(int arr[],int n)
    {
        int start=0;
        int end=n-1;
        while(start<end)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;

        }
        cout<<"reverse array ";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i];
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
        reverse(arr,n);
    }