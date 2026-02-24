// Leetcode 75 - Sort Colors

#include<bits/stdc++.h>
using namespace std;
// Brute is just sorting of array
void SortColorsBetter(int arr[],int n){
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]==0) cnt0++;
        else if(arr[i]==1) cnt1++;
        else cnt2++;
    }

    for(int i = 0; i<cnt0; i++){
        arr[i] = 0;
    }

    for(int i = cnt0; i<cnt0+cnt1; i++){
        arr[i] = 1;
    }

    for(int i = cnt0+cnt1; i<=n-1; i++){
        arr[i] = 2;
    }

    
}
// Optimal approach is Dutch National Flag Algorithm
void SortColorsOptimal(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0) {
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1) mid++;

        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    SortColorsBetter(arr,n);
    SortColorsOptimal(arr,n);
    return 0;
}