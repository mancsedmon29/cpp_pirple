#include <iostream>

using namespace std;

int main()
{
    int year = 2014;
    int month = 2;

    bool isLeapYear = year % 4 == 0;
    bool has28Days = (isLeapYear && month == 2);
    bool has29Days = (isLeapYear && month == 2);
    bool has30Days = (month == 11 || month == 4 || month == 6 == month == 9);
    bool has31Days = (!has28Days && !has28Days && has30Days);

    return 0;
}
