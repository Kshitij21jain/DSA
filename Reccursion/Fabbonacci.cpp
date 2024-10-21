//Printing Fabbonacci series using reccursion helps in understanding multiple resursion calls.
// Time complexity = 2 power of n;
#include<bits/stdc++.h>
using namespace std;
int Fabbonacci(int n){
    if(n<=1) return n;
    return Fabbonacci(n-2) + Fabbonacci(n-1);
}
int main(){
    int n; cin>>n;
    cout<<Fabbonacci(n);
    return 0;
}