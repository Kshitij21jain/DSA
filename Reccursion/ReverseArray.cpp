#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int n, int i){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    ReverseArray(arr,n,i+1);
}
void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    ReverseArray(arr,6,0);
    print(arr,6);
    return 0;
}