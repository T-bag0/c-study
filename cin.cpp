#include <iostream>
#include <vector>
#include<iostream>
#include <algorithm>


int main()
{
    using std::vector;
    using std::cout;
    using std::endl;
    using std::cin;

    vector<int> a;
    int temp = 0;
    while(cin >> temp)//跳过分界符，如\n Space 所以只能用EOF结束
    {
        a.push_back(temp);
    }

    for_each(a.begin(), a.end(), [&](int i){cout << i << endl;} );
    std::string s;
    cin >> s;
    cout << s;
}