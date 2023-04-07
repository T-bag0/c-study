#include <iostream>
#include <set>
#include <string>
#include <iterator>

int main()
{
    using std::set;
    using std::string;
    const int N = 6;
    string s1[N] = {
        "buffoon",
        "thinkers",
        "for",
        "heavy",
        "can",
        "for"
    };
    set<string> A(s1, s1 + N);
    std::ostream_iterator<string, char> out(std::cout," ");
    copy(A.begin(),A.end(),out);
    return 0;
}