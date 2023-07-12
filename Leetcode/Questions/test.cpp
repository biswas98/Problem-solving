#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec = {1,4,2,3};

    sort(vec.begin(),vec.end());

    vector<int>::iterator it = vec.begin();

    while(it != vec.end()){

        cout<<*it<<" ";
        it++;
    }    
    cout<<endl;
    

    return 0;
}