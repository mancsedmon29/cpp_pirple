#include <iostream>
#include <math.h>
#include <bitset>
#include <string>

using namespace std;

int bitsToInt (char bitList[], int bitCount, bool twoComplements)
{
    int result = 0;
    int placeValue = pow(2, bitCount-1);
    char bit = '0';

    for (int bitNum = 0; bitNum < bitCount; bitNum++)
    {
        bit = bitList[bitNum];
        result += (bit == '1' ? placeValue: 0);
        placeValue *= 0.5;
    }

    if (twoComplements == true && bitList[0] == '1')
    {
        placeValue = pow(2, bitCount);
        result -= placeValue;
    }
    return result;
}

void showBits(int value, int bitCount)
{
    int placeValue = pow(2, bitCount - 1);
    for (int bitNum = 0; bitNum < bitCount; bitNum++)
    {
        char bit = '0';
        if (value>= placeValue)
        {
            bit = '1';
            value -= placeValue;
        }
        cout << bit;
        placeValue *= 0.5;
    }
}

int main()
{
    //234
    //1111
    char myBitList[] = "00001111";

    int result = bitsToInt(myBitList, 8, true);
    cout << "result is " << result << endl;

    int myValue = 15;
    cout << "15 in binary is ";
    showBits(15, 8);
    cout << endl;

    bitset<8> myBitset (std::string("01111111"));
    cout << "The binary number " << myBitset.to_string() << " has a decimal value of " << endl;

    return 0;
}
