/*We have to find the frequency of every charachter of string
For this we can use hash array to store the frequency count
charachter hashing is based upon the ascci values*/

// If the string only contains lower case letter or upper case letters, we can use an hash array of size 26


#include<bits/stdc++.h>
using namespace std;
void FrequencyCount(string s){
    int HashArray[26] = {0};
    for(int i = 0; i<s.size(); i++){
        HashArray[s[i] - 'a']++;
    }
    
}
int main(){
    string s = "abshcjbdhgsdygwuguhdbuy";
}