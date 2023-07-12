#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec = {0,1,0,9,1,0,0};

    sort(vec.begin(),vec.end());

    vector<int>::iterator it = vec.begin();

    while(it != vec.end()){

        cout<<*it<<" ";
        it++;
    }    
    cout<<endl;
    

    return 0;
}