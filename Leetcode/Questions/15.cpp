#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vecter<vector<int>> threeSum(vector<int> &nums)
    {
    }
};

int main()
{
    Solution obj;
    
    vector<int> test_Data = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> container = {};
    vector<int> temp = {};
    vector<int> temp_compare = {};


    vector<int>::iterator it = test_Data.begin();
    vector<int>::iterator it_next = test_Data.begin() + 1;
    vector<int>::iterator it_next_next = test_Data.begin() + 2;

    // while(it != test_Data.end()){

    //     while(it_next != test_Data.end()){

    //         while( it_next_next != test_Data.end()){

    //             if( (*it + *it_next + *it_next_next) == 0 ){

    //                 cout<<"[ "<<*it<<", "<<*it_next<<", "<<*it_next_next<<" ]"<<endl;
    //             }

    //             it_next_next++;
    //         }
    //         it_next++;
    //     }
    //     it++;
    // }

    for (it = test_Data.begin(); it != test_Data.end(); it++)
    {

        if (
            it != it_next &&
            it_next != it_next_next &&
            it_next_next != it)
        {

            for (it_next = test_Data.begin() + 1; it_next != test_Data.end(); it_next++)
            {
                if (
                    it != it_next &&
                    it_next != it_next_next &&
                    it_next_next != it)
                {

                    for (it_next_next = test_Data.begin() + 2; it_next_next != test_Data.end(); it_next_next++)
                    {

                        if (
                            (*it + *it_next + *it_next_next) == 0 &&
                            it != it_next &&
                            it_next != it_next_next &&
                            it_next_next != it)

                        {
                            // cout << "[ " << *it << ", " << *it_next << ", " << *it_next_next << " ]" << endl;
                            temp = {};
                            temp.push_back(*it);
                            temp.push_back(*it_next);
                            temp.push_back(*it_next_next);

                            int i = 0, present_check = 0;
                            while (i != container.size())
                            {
                                sort(container[i].begin(), container[i].end());
                                if (container[i] == temp)
                                    present_check = 1;
                                i++;
                            }
                            if (present_check == 0)
                                container.push_back(temp);
                        }
                    }
                }
            }
        }
    }

    cout << container.size() << endl;

    int i = 0;
    while (i < container.size())
    {

        vector<int>::iterator it_container = container[i].begin();
        while (it_container != container[i].end())
        {
            cout << *it_container << " ";
            it_container++;
        }
        cout << endl;
        i++;
    }
    return 0;
}