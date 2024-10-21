#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> mpp;
    mpp[1] = "abc"; //insertion operation takes O(logn) time.
    mpp[2] = "def";
    mpp.insert({3, "ghi"});
    for(auto it : mpp){ // O(nlogn) - n for traversal and logn for access of elements.
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}

/*                      map             | unordered_map
---------------------------------------------------------
Ordering        | increasing order   | no ordering
                | of keys(by default) |

Implementation  | Self balancing BST  | Hash Table
                | like Red-Black Tree |  

search time     | log(n)              | O(1) -> Average 
                |                     | O(n) -> Worst Case

Insertion time  | log(n) + Rebalance  | Same as search
                      
Deletion time   | log(n) + Rebalance  | Same as search */