#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<int> vec1 = {1,0,0,1,1,0};
    vector<int> vec2 = {1,0,0,0,1,1};
    

    vector<int>::iterator it = vec1.begin();
    vector<int>::iterator it_next = vec1.begin() + 3;

    sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());

    if(vec1 == vec2)
        cout<<"same"<<endl;

    else    
        cout<<"not same"<<endl;
    
    // while(it != testVec.end())
    // {
    //     cout<<*it<<" ";
    //     it++;
    // }


    return 0;
}