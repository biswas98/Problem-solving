#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Learning how to push_back 1D-Array into 2D-Array.sta


    vector<vector<int>> container_Vec = {};

    vector<int> triplets = {};

    int num_of_array, container_index = 0;

    cout << "How many 1D arrays: ";
    cin >> num_of_array;

    
    while (container_index < num_of_array)
    {
        int size, el = 0;
        triplets = {};

        cout << "how many element in vector: ";
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cout << "Enter element: ";
            cin >> el;
            triplets.push_back(el);
        }

        vector<int>::iterator it = triplets.begin();
        cout<<"1D vector is: "<<endl;
        while (it != triplets.end())
        {
            cout << *it << " ";
            it++;
        }
        cout << endl;
        container_Vec.push_back(triplets);      
        container_index++;
    }

    // for printing the 2D-Vector.
    int i = 0;
    cout<<"2d Vector is: "<<endl;
    while (i < container_Vec.size())
    {
        vector<int>::iterator it_c = container_Vec[i].begin();
        while (it_c != container_Vec[i].end())
        {
            cout << *it_c << " ";
            it_c++;
        }
        cout << endl;
        i++;
    }

    return 0;
}