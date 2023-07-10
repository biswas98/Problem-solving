#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test_Solution
{

public:
    vector<vector<int>> display()
    {

        vector<vector<int>> ret_Vec = {{11,11},{12,12},{13,13}};

        return ret_Vec;
    }
};

int main()
{

    Test_Solution obj;

    vector<int> test = {0, 0, 0, 0};

    vector<vector<int>> ret = {};

    ret = obj.display();

    int i = 0;

    while (i < ret.size())
    {
        vector<int>::iterator it = ret[i].begin();
        while (it != ret[i].end())
        {

            cout << *it << " ";
            it++;
        }
        cout<<endl;
        i++;
    }
    cout << endl;
    return 0;
}