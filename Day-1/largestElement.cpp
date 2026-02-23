// brute

#include<bits/stdc++.h>
using namespace std;
void largestbrutewithSortFunction(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    cout<<arr[n-1];
}

void sortArr(vector<int>&arr,int n){
    for(int i = 0; i<=n-1; i++){
        int mini = i;
        for(int j = i+1;j<=n-1;j++){
            if(arr[mini]<arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}

void largestElementWithsorting(vector<int>&arr,int n){
    cout<<"Largest Element: "<< arr[n-1];
}


void largestElementOptimal(vector<int>&arr,int n){
    int largest = arr[0];
    for(int i = 1; i<=n-1; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest;
}
int main(){
    int n; 
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    largestbrutewithSortFunction(arr,n);
    sortArr(arr,n);
    return 0;
}