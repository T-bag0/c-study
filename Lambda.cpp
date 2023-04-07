#include <iostream>
#include<vector>
#include <algorithm>

int main()
{
    std::vector<int> a;
    int i = 0;
    for(int i = 0; i < 10; i++)
    {
        a.push_back(i);
    }
    int count = 0;
    std::for_each(a.begin(),a.end(),[&count](int x){count += x % 3 == 0;});
    std::cout << count << std::endl;
    return 0;
}