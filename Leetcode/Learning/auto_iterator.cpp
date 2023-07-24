// Learning about "auto" iterators - it is a general purpose datatype which tells the comipler to figuar out the exact datatype by its own.

#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){

    vector<int> v1 = {1,1,2,4};

    for(auto i : v1){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}