#include<iostream>
#include<vector>
#include<set>
using namespace std;

pair<vector<int>, vector<int>> findUnionAndIntersection(vector<int> &arr1, vector<int> &arr2, int n, int m) {
    vector<int> unionSet;
    vector<int> intersectionSet;

    int i = 0, j = 0;

    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            unionSet.push_back(arr1[i]);
            i++;
        } else if(arr1[i] > arr2[j]) {
            unionSet.push_back(arr2[j]);
            j++;
        } else {
            unionSet.push_back(arr1[i]);
            intersectionSet.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    while(i < n) {
        unionSet.push_back(arr1[i]);
        i++;
    }

    while(j < m) {
        unionSet.push_back(arr2[j]);
        j++;
    }

    return make_pair(unionSet, intersectionSet);
}

int main() {
    int n, m;
    cout<<"enter the size of an 1 array ";
    cin>>n;
    cout<<"enter the size of an 2 array ";
    cin>>m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    cout<<"Firsr array "<<endl;
    for(int i=0; i<n; i++) {
        cout<<"enter the elements of an 1 array ";
        cin>>arr1[i];
    }

    cout<<"Second array "<<endl;
    for(int i=0; i<m; i++) {
        cout<<"enter the elements of an 2 array ";
        cin>>arr2[i];
    }

    pair<vector<int>, vector<int>> result = findUnionAndIntersection(arr1, arr2, n, m);

    cout<<"Union is ";
    for(int i=0; i<result.first.size(); i++) {
        cout<<result.first[i]<<" ";
    }

    cout<<endl<<"Intersection is ";
    for(int i=0; i<result.second.size(); i++) {
        cout<<result.second[i]<<" ";
    }

    return 0;
}