#include <iostream>
#include <climits>

using namespace std;

int main()
{
    signed int mySignedInt = -6;
    unsigned int myUnsigned = 3;

    mySignedInt *= 2;
    myUnsigned /= 3;

    cout << "Signed integers can be no larger than " << INT_MAX << endl;
    cout << "Signed integers can be no smaller than " << INT_MIN << endl;

    cout << "Unsigned integers can be no larger than " << UINT_MAX << endl;
    return 0;
}
