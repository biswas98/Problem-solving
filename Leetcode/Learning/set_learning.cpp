// Learning about 'SET' STL which is container which stores unique elements.

#include <iostream>
#include <set>

using namespace std;

int main()
{

    // 1-D set
    set<int> mySet = {1, 1, 1};

    set<int>::iterator it = mySet.begin();

    while (it != mySet.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;
    cout << "Size of 1D-Set: " << mySet.size() << endl;

 

    set<set<int>> my2Dset = {{4, 3, 2, 1}, {1, 2, 3, 4}, {4, 3, 2, 1}, {2, 6, 1, 2}};

   
    

    return 0;
}