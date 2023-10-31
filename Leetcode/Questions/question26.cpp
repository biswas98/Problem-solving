#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it = nums.begin();
        while(it != nums.end()){
            cout<<*it<<" ";
            it++;
        }
    }
};

int main(){
    Solution obj;
    vector<int> vec = {1,1,2};
    obj.removeDuplicates(vec);
    return 0;
}