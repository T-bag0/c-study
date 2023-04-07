#include <iostream>

int main()
{
    typedef char *p;//p是double * 的别名
    char r = 'c';
    char cstr_c = 'c';
    char cstr1_c = 'd';
    char cstr2_c = 'f';
    p pr = &r;
    std::cout << *pr << std::endl;
    char const * cstr = &cstr_c;//指向char的常指针
    const p cst1 = &cstr1_c;//指向char的常指针  p是指向char的指针 const p即是指向char的常量指针
    //cst1 = cstr;// 错误这也证明了cst1是常指针
    const char *cst2 = &cstr2_c;//指向常量(const char)的指针 
    return 0;
}