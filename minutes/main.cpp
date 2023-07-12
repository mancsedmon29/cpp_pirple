#include <iostream>

using namespace std;

int main()
{
    const int SECONDS_PER_MINUTE = 60;
    int minutes = 5;
    int seconds;
    bool IncludeEverthing = false;

    string sCheeze = "WesleyCollege";

    seconds = minutes * SECONDS_PER_MINUTE;

    cout << "There are " << seconds << " sec in " << minutes << " min. ";
    return 0;
}
