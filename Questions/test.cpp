#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int digiCount(int num){
    int count = 1;
    if (num%10 != 0)
        return count+digiCount((num-(num%10))/10);
    // else
    //     return count;
}

int main()
{
    cout<<digiCount(121)<<endl;
    return 0;
}