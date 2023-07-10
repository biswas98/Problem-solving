#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {10,2,3,4,5};

    int* ptr = arr;
    


    for (int i = 0; i < 5; i++)
    {   
        cout<<*(ptr+i)<<" ";
        
        for(int j = i+1; j < 5; j++){

            cout<<*(ptr+j)<<" ";

            for(int k = j+1; k < 5; k++){

                cout<<*(ptr+k)<<" ";

            }
            cout<<endl;
        }
        cout<<endl;        
    }
    

    return 0;
}