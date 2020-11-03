#include <iostream>
#include <unistd.h>

int ONE_SECOND = 1000;

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
    int seconds = convertMinutesToSeconds(timetocount);
    for(int i = seconds; i > 0; i--)
    {
        std::cout << "Time Left: " << i << std::endl;
        // MicroSeconds
        
        usleep(ONE_SECOND * 1000);

    }
}

