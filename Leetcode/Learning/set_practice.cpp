#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    // comparing "vector" with "set"

    vector<int> v1 = {2,2,3,3,0,0,1,1};

    sort(v1.begin(),v1.end());

    vector<int>::iterator itv = v1.begin();

    while(itv != v1.end()){
        cout<<*itv<<" ";
        itv++;
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