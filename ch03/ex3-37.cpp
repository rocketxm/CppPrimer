#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;
int main()
{
    const char ca[5] = { 'h', 'e', 'l', 'l', 'o' };
    const char *cp = ca;
    while (*cp)
    {
        cout << *cp << endl;
        ++cp;
    }
    return 0;
}
