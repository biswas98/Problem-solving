#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector<int>> container_Vec = {};
    
    vector<int> triplets = {};

    triplets.push_back(1);
    triplets.push_back(2);
    triplets.push_back(3);
    
    vector<int>::iterator it = triplets.begin();

    while (it != triplets.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    cout<<container_Vec.size()<<endl;
    container_Vec.push_back(triplets);
    cout<<container_Vec.size()<<endl;


    // Need to work on this logic
    // int i = 0;
    // while(i < container_Vec.size()){
    //     vector<int>::iterator it_c = container_Vec[i].begin();
    //     while (it != container_Vec[i].end())
    //     {   
    //         cout<<*it_c<<" ";
    //         it_c++;
    //     }
    //     cout<<endl;
    //     i++;        
    // }
    

    return 0;
}