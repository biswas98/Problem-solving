#include <iostream>
#include <vector>
#include <algorithm>
#include <set>


using namespace std;


int main()
{
    
    // vector<int> nums = {14,4,6,-1,10,9,-8,7,-13,14,-13,-11,-8,-9,11,14,-8,-14,-13,7,-10,-15,-13,-11,-11,11,14,13,2,-14,1,-7,-2,14,-1,-15,9,7,-1,3,6,1,7,5,-1,-5,4,-2,-4,-1,-9,-7,-1,-7,-11,3,12,10,-7,-1,12,1,8,-13,1,14,9,-13,6,-7,-3,-11,2,-11,10,-14,-1,-9,0,2,5,6,3,-11,6,7,0,3,3,0,-12,-8,-13,3,-14,-5,2,10,-11,-14,-12,1,-10,5,5,7,-1,11,14,6,-10,-4,-3,8,-7,10,1,8,-1,-11,-15,-6,-12,-13,12,-11};
    
    set<int> mySet = {1,1,1,1,2,3,5,6,6,5};

    set<int>::iterator it = mySet.begin();

    while (it != mySet.end())
    {
        cout<<*it<<" ";
        it++;
    }

    cout<<endl;
    
    return 0;
}