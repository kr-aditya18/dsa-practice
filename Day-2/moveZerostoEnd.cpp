#include<bits/stdc++.h>
using namespace std;
void moveZerosToEnd(int arr[],int n){
    // step 1 -> store all non zero in temp
    vector<int>temp;
    for(int i = 0; i<=n-1; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }

    // step 2 -> now put back elements from temp to original array
    int nz = temp.size();
    for(int i = 0; i<nz; i++){
        arr[i] = temp[i];
    }

    // step 3 -> Now put back all the zeros at the end

    for(int i = nz; i<=n-1; i++){
        arr[i] = 0;
    }
}

int moveZerosToEndOptimal(int arr[],int n){
    // step 1 -> find first zero element 
    int j = -1;
    for(int i = 0; i<n; i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    if (j==-1) return ;

    // step 2
    for(int i = j+1; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    } 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) cin>>arr[i];
    moveZerosToEnd(arr,n);
    return 0;
}