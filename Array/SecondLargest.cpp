#include<bits/stdc++.h>
using namespace std;
//brute force approach
int SlargestBr(int arr[], int n){
    sort(arr, arr+n);
    for(int j = n-2; j>=0; j--){
        if(arr[j] != arr[n-1]){
            return arr[j];
            break;
        }
    }
    return -1;
    // TC = O(NlogN) {sorting} + O(N) {traversal}
}

//Better
int SlargestBe(int arr[], int n){
    int largest = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    int slargest = INT16_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }
    return slargest;
    // TC = O(2n);
}

//optimal
int SlargestOp(int arr[], int n){
    int largest = arr[0];
    int slargest = INT16_MIN;
    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
    //TC = O(N);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
     cout<<SlargestOp(arr,n);
    return 0;
}