#include <iostream>

using namespace std;

int main()
{
    char myChar =  'A';
    bool myBool = true;
    bool myOtherBool = false;

    int myConvertedChar = (int)myChar;
    int myConvertedBool = (int)myBool;
    int myConvertedOtherBool = (int)myOtherBool;

    char myChar2 = (char)myConvertedChar;
    bool mybool2 = (bool)myConvertedBool;
    bool myOtherbool2 = (bool)myConvertedOtherBool;

    float approxPI = 3.14f;
    int sputnikYear = 1957;

    int convertedPI = (int)approxPI;
    char convertedYear = (char)sputnikYear;

    float approxPI2 = (float)convertedPI;
    int sputnikYear2 = (int)convertedYear;

    return 0;
}
