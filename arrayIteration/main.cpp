#include <iostream>

using namespace std;

int main()
{

    int daysInMonth[] = {31, 28, 31, 31, 31, 30, 31, 31, 30, 31, 30, 31};

    char monthName[] = "April";

    float catalogPrice[100] = {33.33};


    int currentMonth = 3;
    int daysThisMonth = daysInMonth[currentMonth];

    for (int i = 0; i < 12; i++)
    {
        cout << "There are " << daysInMonth[i] << " days in " << i + 1 << endl;
    }

    return 0;
}
