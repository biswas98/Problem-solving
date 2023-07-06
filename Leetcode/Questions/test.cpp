#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<vector<int>> container = {};
  

    vector<int> temp = {};

    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);

    container.push_back(temp);

    temp = {};

    temp.push_back(60);
    temp.push_back(70);
    temp.push_back(80);

    container.push_back(temp);


    int i = 0;
    while (i < container.size())
    {
        vector<int>::iterator it_container = container[i].begin();

        while (it_container != container[i].end())
        {
            cout << *it_container << " ";
            it_container++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}