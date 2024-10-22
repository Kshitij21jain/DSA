// Hashing is used to count the frequency of any number in any given array.
// Hashing is like prefetching and storing 
// Method - 
// 1st we find out the the max of given array than using this, we create an Hash_Array of size max + 1
// Now this Hash_Array will be initialized by 0. Now we will traverse through the new array and for every element we will increase the value at that index.
// The index of Hash_Array will be containing the frequency of elements.

#include<bits/stdc++.h>
using namespace std;
void CountFrequency(int arr[], int n){
    // Finding the max element of given array
   int maxElement = 0;
   for(int i = 0; i<n; i++){
    maxElement = max(maxElement, arr[i]);
   }
    // Creating a Hash Array of soze max + 1
    int HashArray[maxElement + 1] = {0};

    // Storing the count of every element of given array in hash array
    for(int i = 0; i<n; i++){
        HashArray[arr[i]]++;
    }

    // Printing the frequency
    for(int i = 0; i<maxElement + 1; i++){
        if(HashArray[i] != 0){
            cout<<i<<"->"<<HashArray[i]<<endl;
        }
    }
}

// The major drawback of this method is that if the size of given array is 10^5, we can not declare an array of size 10^5 + 1;
// Space is not optimized
// To optimize the space, we can use Map DS or Unordered Map DS.
// Map<key (the array element), Value (the frequency of that element)>

// Use of Map to solve the space problem
// This is the most optimize method to find frequency
void CountFrequency2(int arr[], int n){
    map<int, int> mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]] ++;
    }
    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
int main(){
    int arr[12] = {1,2,2,3,1,4,5,4,3,7,8,4};
    CountFrequency(arr,12);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Printing frequency using Map"<<endl;
    CountFrequency2(arr,12);
    return 0;
}

