#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    vector<vector<int>>  vec1 = {{1,2,4},{3,2,1}};

    for ( auto i : vec1)   
    {   
        for ( auto e : i)
        {
            cout<<e<<" ";
        }

        cout<<endl;
    }
    

    
    


    // set<set<int>> mySet = {{1,2,3},{4,5,6},{7,8,9}};

    // cout<<mySet.size();

    
    

    return 0;
}