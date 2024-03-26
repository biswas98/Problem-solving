#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int row, col;

    vector<vector<int>> my_2D_Container = {};

    cout << "Row: ";
    cin >> row;
    cout << "Col: ";
    cin >> col;

    // Resizing the 2D vector to take only "col" times 1D vectors otherwise there will be a segmentation failure error.
    my_2D_Container.resize(col);


    // * First taking into to a 1D vector using "push_back()" funtion.
    
    // * Then using "push_back()" function to add those 1D vector to the 2D vector which acts like a container.

    for (int i = 0; i < row; i++)
    {   
        int el = 0;
        vector<int> my_2D_elements = {};
        for(int j = 0; j < col; j++)
        {
            cout << "Enter the element for " << i + 1 << " row & " << j + 1 << " col: ";
            cin>>el;
            my_2D_elements.push_back(el);
        }
        my_2D_Container.push_back(my_2D_elements);
    }


    // Displaying the elements in the 2D-Vector.

    int index = 0;
    while (index < my_2D_Container.size())
    {   
        // creating a iterator for 2D vector using its indexing.
        
        vector<int>::iterator it = my_2D_Container[index].begin();
        while (it != my_2D_Container[index].end())
        {
            cout << *it << " ";
            it++;
        }
        cout << endl;
        index++;
    }

    return 0;
}