#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int row,col;

    vector<vector<int>> my_2D_Vec;

    cout <<"Row: ";
    cin >>row;
    cout<<endl;
    cout <<"Col: ";
    cin >>col;
    cout<<endl;

    for (int i = 0; i < row; i++)
    {   
        int el = 0;
        for (int j = 0; j < col; j++)
        {
            cout<<"Enter the element for "<<i+1<<" row & "<<j+1<<" col: ";
            cin>>el;
            my_2D_Vec[j].push_back(el);
            cout<<endl;
        }
    }

    return 0;
}