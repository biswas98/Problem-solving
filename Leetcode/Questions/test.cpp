#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    // vector<int>  vec1 = {0,1,0,1,1,1,0,0, 0,0, 1};

    // vector<int>::iterator it = vec1.begin();

    // sort(vec1.begin(),vec1.end());

    // while (it != vec1.end())
    // {
    //     cout<<*it<<" ";
    //     it++;
    // }
    
    // cout<<endl;
    
    set<set<int>> mySet = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<mySet.size();

    int i = 0;

    while (i != mySet.size())
    {
        auto it = mySet[i].begin();
        while (it != mySet.end())
        {
            cout<<*it<<" ";

        }
        

    }
    

    return 0;
}