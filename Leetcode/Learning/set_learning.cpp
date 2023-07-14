// Learning about 'SET' STL which is container which stores unique elements.

#include <iostream>
#include <set>

using namespace std;

int main(){

    // 1-D set
    set<int> mySet = {1,1,1};

    set<int>::iterator it = mySet.begin();

    while(it != mySet.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    cout<<"Size of container: "<<mySet.size();

    //2-D set 

    set<set<int>> my2Dset = {{4,3,2,1},{1,2,3,4},{4,3,2,1}};

    int i = 0;
    while(i != my2Dset.size()){
        set<int>::iterator it_2D = my2Dset[i].begin();

        
    }
    

    return 0;
}