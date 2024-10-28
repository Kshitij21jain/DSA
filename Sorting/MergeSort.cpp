#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int low, int mid, int high){
    vector<int>v;
    int i = low;
    int j = mid + 1;
    while(i <= mid && j <= high){
        if(arr[i] <= arr[j]){
            v.push_back(arr[i]);
            i++;
        }
        else{
            v.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        v.push_back(arr[i]);
        i++;
    }
    while(j <= high){
        v.push_back(arr[j]);
        j++;
    }
    for(int i = low; i<=high; i++){
        arr[i] = v[i-low];
    }
    for(int i = low; i<=high; i++){
        cout<<arr[i]<<" ";
    }
}
void MergeSort(int arr[], int low, int high){
    int mid = (low + mid)/2;
    if(low >= high) return;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid+1, high);
    Merge(arr, low, mid, high);
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    return 0;
}

//TC = O(NlogN)
// SC = O(N)