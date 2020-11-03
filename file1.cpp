#include <iostream>
#include <unistd.h>

int MILI_SECOND = 1000;
int SECOND = 60;

int convertMinutesToSeconds(int i)
{
    i = SECOND * i;
    return i;
}

int main()
{

    int timetocount;
    std::cin >> timetocount;
    int seconds = convertMinutesToSeconds(timetocount);
    for(int i = seconds; i > 0; i--)
    {
        std::cout << "Time Left: " << i << std::endl;
        // MicroSeconds

        usleep(MILI_SECOND * 1000);
    }
}

