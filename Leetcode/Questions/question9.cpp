#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 100;
        // 121
        reverse = reverse*(x%10);
        cout<<reverse<<endl;
        reverse = reverse+((((x-(x%10))/10)%10)*10);
        reverse = reverse+((((x-(x%10))/10)%10)*10);
        cout<<reverse<<endl;

        if( reverse == x )
            return true;
        else
            return false;
    }
};

int main()
{
    Solution obj;
    int num;
    bool res;
    cin>>num;
    res = obj.isPalindrome(num);
    cout<<res<<endl;
    return 0;
}
