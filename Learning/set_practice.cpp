#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main(){
    // comparing "vector" with "set"

    // Vector implementation 
    vector<int> v1 = {2,2,3,3,0,0,1,1};

    // need to sort the vector
    sort(v1.begin(),v1.end());

    vector<int>::iterator itv = v1.begin();

    while(itv != v1.end()){
        cout<<*itv<<" ";
        itv++;
    }
    cout<<endl;

    // "set" implementation - set stores only unique element and it doesn't need to be sorted, all the elements are already sorted
    set<int> s1 = {2,2,3,3,0,0,1,1};

    set<int>::iterator its = s1.begin();

    while(its != s1.end()){

        cout<<*its<<" ";
        its++;
    }
    cout<<endl;

    return 0;
}