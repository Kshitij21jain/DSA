#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int isum = 0;
    for(int i = 0; i<n; i++){
        isum = isum + i;
    }
    return isum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}