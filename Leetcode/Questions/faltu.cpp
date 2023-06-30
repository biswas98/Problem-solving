#include <iostream>
#include <vector>

using namespace std;

int main(){

    int i = 0;
    vector<vector<int>> myVec = {{1,2,3},{4,5,6},{7,8,9}};

    // vector<int>::iterator it = myVec[].begin();

    
    while(i < myVec.size()){
        vector<int>::iterator it = myVec[i].begin();
        while (it != myVec[i].end())
        {   
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;
        i++;        
    }
  

    // cout<<myVec.size();

    return 0;
}