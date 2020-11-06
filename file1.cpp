#include <iostream>
#include <unistd.h>

const int MILI_SECOND = 1000;

int main()
{

    int timetocount;
    std::cin >> timetocount;
    timetocount--;
    for(; timetocount >= 0; timetocount--)
    {
        for(int i = 59; i >= 0; i--)
        {
            std::cout << "Time Left: " << timetocount << ":" << i << std::endl;
            usleep(MILI_SECOND * 1000);
        }
    }
}

