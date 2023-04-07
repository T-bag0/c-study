// copyit.cpp -- copy() and iterators
#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    using namespace std;

    int casts[10] = {6, 7, 2, 9 ,4 , 11, 8, 7, 10, 5};
    vector<int> dice;
    back_insert_iterator< vector<int> > insert_iter(dice);
    
    ostream_iterator< int, char > out_iter(cout,"\n");
    copy(casts,casts + 10,out_iter);
    /*for(auto x :dice)
    {
        cout << x << endl;
    }*/
    return 0; 
}
