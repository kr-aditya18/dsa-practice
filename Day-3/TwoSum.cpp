#include<bits/stdc++.h>
using namespace std;
vector<int> twoSumBrute(int arr[],int n, int targetSum){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<=n-1; j++){
            if(arr[i]+arr[j]==targetSum){
                return {i,j};
            }
        }
    }
    return {};
}

vector<int> twoSumBetter(int arr[],int n, int targetSum){
    map<int ,int> mp;
    for(int i = 0; i<n; i++){
        int rem = targetSum - arr[i];
        if(mp.find(rem)!=mp.end()){
            return {i,mp[rem]};
        }
        mp.insert({arr[i],i});
    }
    return {};
}

vector<int> twoSumOptimal(int arr[],int n,int targetsum){
    int left = 0;
    int right = n-1;
    
    while(left<right){
        if(arr[left]+arr[right]<targetsum) left++;
        else if(arr[left]+arr[right]>targetsum) right--;
        else{
            return {left,right};
        }
    }
    return {-1,-1};
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int targetSum;
    cin>>targetSum;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    twoSumBrute(arr,n,targetSum);
    return 0;
}