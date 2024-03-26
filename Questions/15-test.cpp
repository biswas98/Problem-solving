#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {

        vector<vector<int>> container = {};
        vector<int> temp = {};
        vector<int> temp_compare = {};

        vector<int>::iterator it = nums.begin();
        vector<int>::iterator it_next = nums.begin() + 1;
        vector<int>::iterator it_next_next = nums.begin() + 2;

        for (it = nums.begin(); it != nums.end(); it++)
        {

            // if (
            //     it != it_next &&
            //     it_next != it_next_next &&
            //     it_next_next != it)
            // {

            for (it_next = nums.begin() + 1; it_next != nums.end(); it_next++)
            {
                // if (
                //     it != it_next &&
                //     it_next != it_next_next &&
                //     it_next_next != it)
                // {

                for (it_next_next = nums.begin() + 2; it_next_next != nums.end(); it_next_next++)
                {

                    if (
                        (*it + *it_next + *it_next_next) == 0 &&
                        it != it_next &&
                        it_next != it_next_next &&
                        it_next_next != it)

                    {
                        temp = {};
                        temp.push_back(*it);
                        temp.push_back(*it_next);
                        temp.push_back(*it_next_next);

                        int i = 0, present_check = 0;
                        while (i != container.size())
                        {
                            sort(container[i].begin(), container[i].end());
                            sort(temp.begin(), temp.end());
                            if (container[i] == temp)
                                present_check = 1;
                            i++;
                        }
                        if (present_check == 0)
                            container.push_back(temp);
                    }
                }
                // }
            }
            // }
        }

        return container;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {14,4,6,-1,10,9,-8,7,-13,14,-13,-11,-8,-9,11,14,-8,-14,-13,7,-10,-15,-13,-11,-11,11,14,13,2,-14,1,-7,-2,14,-1,-15,9,7,-1,3,6,1,7,5,-1,-5,4,-2,-4,-1,-9,-7,-1,-7,-11,3,12,10,-7,-1,12,1,8,-13,1,14,9,-13,6,-7,-3,-11,2,-11,10,-14,-1,-9,0,2,5,6,3,-11,6,7,0,3,3,0,-12,-8,-13,3,-14,-5,2,10,-11,-14,-12,1,-10,5,5,7,-1,11,14,6,-10,-4,-3,8,-7,10,1,8,-1,-11,-15,-6,-12,-13,12,-11};

    vector<vector<int>> ret = {};

    ret = obj.threeSum(nums);

    int i = 0;
    while (i < ret.size())
    {

        vector<int>::iterator it_ret = ret[i].begin();
        while (it_ret != ret[i].end())
        {
            cout << *it_ret << " ";
            it_ret++;
        }
        cout << endl;
        i++;
    }

    return 0;
}