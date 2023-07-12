#include <iostream>

using namespace std;

int main()
{
    char myCharacter = 65;
    myCharacter += 32;

    for(int num=0; num < 256; num++)
    {
        myCharacter = (char)num;
        cout << "my character for " << num << " is " << myCharacter << endl;
    }


    return 0;
}
