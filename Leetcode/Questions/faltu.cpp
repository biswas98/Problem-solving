#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector<vector<int>> vec1 = {{},{0,1,0}};
    vector<int> vec2 = {0,1,0};

    int i = 0;

    if(vec1[0] == vec2)
        cout<<"equal \n";
    
    else
        cout<<"Not equal \n";

    // while(i != vec1.size()){

    //     sort(vec1[i].begin(),vec1[i].end());
    //     i++;
    // }
    

    // i = 0;
    // while( i != vec1.size()){
    //     vector<int>::iterator it = vec1[i].begin();
    //     while(it != vec1[i].end()){
    //         cout<<*it<<" ";
    //         it++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    


    return 0;
}