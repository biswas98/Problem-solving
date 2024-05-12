// #include<iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{

public:
    int removeDuplicates(vector<int>& nums){
        int value = 0;
        vector<int>::iterator it = nums.begin();
        while(it != nums.end()){
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;

        return value;
    }

};

int main(){

    Solution obj;
    vector<int> nums;
    int res=0;

    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);

    res = obj.removeDuplicates(nums);
    cout<<res<<endl;

    return 0;
}