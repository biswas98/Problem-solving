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

    vector<int> nums = {1,1,1};

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