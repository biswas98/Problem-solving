#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> testVec = {1,0,0,1,1,0};

    vector<int>::iterator it = testVec.begin();
    vector<int>::iterator it_next = testVec.begin() + 3;

    cout<<*it<<endl;
    cout<<*it_next<<endl; 



    return 0;
}