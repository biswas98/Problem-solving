#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    // comparing "vector" with "set"

    vector<int> v1 = {2,2,3,3,0,0,1,1};

    sort(v1.begin(),v1.end());

    vector<int>::iterator it = v1.begin();

    while(it != v1.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    set<int> s1 = {2,2,3,3,0,0,1,1};

    set<int>::iterator its = s1.begin();

    while(its != s1.end()){

        cout<<*its<<" ";
        its++;
    }
    cout<<endl;

    return 0;
}