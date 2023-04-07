#include <iostream>
#include <iterator>
#include <algorithm>

 int main()
 {
    int arr[10] = {0};
    std::for_each(std::begin(arr),std::end(arr),
    [&](int &t){t++;});


    std::for_each(std::begin(arr),std::end(arr),
    [&](const int &a){std::cout << a << " ";});

    std::cout << std::endl;
    for (int *p = std::begin(arr);p != std::end(arr);p++)
    {
        std:: cout << *p << std::endl;
    }
    return 0;
 }