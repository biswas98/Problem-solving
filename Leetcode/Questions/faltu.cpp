#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    vector<int> v1 = {1,0,1};
    vector<int> v2 = {1,1,0};

    if(v1==v2)
        cout<<"same\n";
    else
        cout<<"not same\n";
    
    return 0;
}