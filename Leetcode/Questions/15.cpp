#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> test_Data = {-1, 0, 1, 2, -1, -4};

    vector<int>::iterator it = test_Data.begin();
    vector<int>::iterator it_next = test_Data.begin() + 1;
    vector<int>::iterator it_next_next = test_Data.begin() + 2;

    // while(it != test_Data.end()){

    //     while(it_next != test_Data.end()){

    //         while( it_next_next != test_Data.end()){

    //             if( (*it + *it_next + *it_next_next) == 0 ){

    //                 cout<<"[ "<<*it<<", "<<*it_next<<", "<<*it_next_next<<" ]"<<endl;
    //             }

    //             it_next_next++;
    //         }
    //         it_next++;
    //     }
    //     it++;
    // }

    for (it = test_Data.begin(); it != test_Data.end(); it++)
    {

        if (
            it != it_next &&
            it_next != it_next_next &&
            it_next_next != it)
        {

            for (it_next = test_Data.begin() + 1; it_next != test_Data.end(); it_next++)
            {
                if (
                    it != it_next &&
                    it_next != it_next_next &&
                    it_next_next != it)
                {

                    for (it_next_next = test_Data.begin() + 2; it_next_next != test_Data.end(); it_next_next++)
                    {

                        if (
                            (*it + *it_next + *it_next_next) == 0 &&
                            it != it_next &&
                            it_next != it_next_next &&
                            it_next_next != it)

                        {

                            cout << "[ " << *it << ", " << *it_next << ", " << *it_next_next << " ]" << endl;
                        }
                    }
                }
            }
        }
    }

    return 0;
}