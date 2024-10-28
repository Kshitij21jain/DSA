// Retunr the count of number of unique element in a sorted array.
//Leetcode link
// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

#include<bits/stdc++.h>
using namespace std;
// Brute = Using Set DS

int RemoveDuplicateBr(int arr[], int n){
    set<int>s;
    for(int i = 0; i<n; i++){
        s.insert(arr[i]);
    }
    int i = 0;
    for(auto it: s){
        arr[i] = it;
        i++;
    }
    return i;
    //TC = O(NlogN) {insertion + traversal} + N 
    //SC = O(N)
}
// Optimal
/*int RemoveDuplicateOp(int arr[], int n){
    int i = 0;
    for(int j = 0; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
} */
void print(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int n; cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
//    print(arr,n);
    cout<<"No of duplicates: "<<RemoveDuplicateBr(arr,n);
    return 0;
}