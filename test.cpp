#include <iostream> 
#include <forward_list>
#include <vector>
#include <iterator>
#include <string>

int main()
{
    using std::forward_list;
    using std::vector;
    using std::cout;
    using std::endl;
    using std::string;
    const int a = 10 ,&A = a; //const int &A
    auto c = a;//int c
    auto d = A;//int d
    auto &e = A;//const int &e
    const auto f = A;//const int f
    const auto &g = A;//const int &g const 只会加顶层const
    auto h = &a;//const int *h
    const auto i = &a;//const int *const i
    return 0;
}