#include <iostream>

int main()
{
    unsigned long result = 0;
    std::cout << "输入第 位同学过了测验，ctrl加z结束" << std::endl;
    int temp;
    while (std::cin >> temp)
    {
        result |= 1UL << temp;
    }
    return 0;
}