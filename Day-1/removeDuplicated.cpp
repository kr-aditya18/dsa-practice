#include<bits/stdc++.h>
using namespace std;

void removeDupBrute(int arr[],int n){
    set<int>st;
    for(int i = 0; i<=n-1; i++){
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
}

int removeDupOptimal(int arr[],int n){
    int i = 0;
    for(int j = 1; j<=n-1; j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1; 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    removeDupBrute(arr,n);
    removeDupOptimal(arr,n);
    return 0;
}