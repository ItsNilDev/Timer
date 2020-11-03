#include <iostream>


int convertMinutesToSeconds(int i)
{
    int MINUTE = 60;
    i = MINUTE * i;
    return i;
}

int main()
{
    int timetocount;
    std::cin >> timetocount;
    convertMinutesToSeconds(timetocount);
}

