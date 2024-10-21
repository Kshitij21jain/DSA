#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int n, int i){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    ReverseArray(arr,n,i++);

}
void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    ReverseArray(arr,n,0);
    print(arr,n);
    return 0;
}