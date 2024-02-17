#include<iostream>
using namespace std;

void sort(int arr[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 1, 0, 0, 2, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, n);
    printArray(arr, n);
    return 0;
}