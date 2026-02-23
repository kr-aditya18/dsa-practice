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
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>>arr[i];
    removeDupBrute(arr,n);
    return 0;
}