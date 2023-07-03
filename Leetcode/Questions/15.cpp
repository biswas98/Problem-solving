#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> container_Vec = {};
    
    vector<int> triplets = {};
    vector<int> triplets_sec = {};

    triplets.push_back(8);
    triplets.push_back(2);
    triplets.push_back(3);
    
    triplets_sec.push_back(10);
    triplets_sec.push_back(11);
    triplets_sec.push_back(12);


    vector<int>::iterator it = triplets.begin();
    vector<int>::iterator it_sec = triplets_sec.begin();

    while (it != triplets.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
   
    while (it_sec != triplets_sec.end())
    {
        cout<<*it_sec<<" ";
        it_sec++;
    }
    cout<<endl;
   
    

    // cout<<container_Vec.size()<<endl;
    // container_Vec.push_back(triplets);
    // container_Vec.push_back(triplets_sec);
    // cout<<container_Vec.size()<<endl;


    // Need to work on this logic
    int i = 0;
    while(i < container_Vec.size()){
        vector<int>::iterator it_c = container_Vec[i].begin();
        while (it_c != container_Vec[i].end())
        {   
            cout<<*it_c<<" ";
            it_c++;
        }
        cout<<endl;
        i++;        
    }
    

    return 0;
}