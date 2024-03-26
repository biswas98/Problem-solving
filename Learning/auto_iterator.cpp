// Learning about "auto" iterators - it is a general purpose datatype which tells the comipler to figuar out the exact datatype by its own.

#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){

    // "Auto" iterator while 1D vector
    vector<int> v1 = {1,1,2,4};

    cout<<"1D vector: "<<endl;
    for(auto i : v1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;


    // "Auto" iterator while 2D vector
    vector<vector<int>> v2 = {{1,0,1},{0,1,0},{0,0,0}};

    cout<<"2D vector: "<<endl;
    for( auto r : v2){
        for( auto c: r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // "Auto" iterator while 1D set
    set<int> s1 = {1,1,2,2,3,3};

    cout<<"1D set: "<<endl;
    for(auto iS : s1){
        cout<<iS<<" ";
        
    }
    cout<<endl;
    cout<<endl;

    // "Auto" iterator while 2D set
    set<set<int>> s2 = {{1,2,3},{6,3,7},{2,2,2},{7,8,0}};

    cout<<"2D set: "<<endl;
    for(auto r : s2){
        for(auto c : r){
            cout<<c<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;

}