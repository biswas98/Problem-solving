#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>  vec1 = {0,1,0,1,1,1,0,0, 0,0, 1};

    vector<int>::iterator it = vec1.begin();

    sort(vec1.begin(),vec1.end());

    while (it != vec1.end())
    {
        cout<<*it<<" ";
        it++;
    }
    
    cout<<endl;
    

    return 0;
}