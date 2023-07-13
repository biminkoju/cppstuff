#include <iostream>
#include "time.h"
int RandomInt(int lb, int ub)
{
    return (rand() % (ub - lb + 1) + lb);
}
int main()
{
    srand(time(0)); // timing the seed for random function

    std::cout << "!!Welcome TO \"Guess The Number\" guess it in 5 tries or less!!\n";
    bool Running = true, HasGuessed = false;
    int GuessedNumber;
    char YesorNo;
    while (Running != false)
    {
        int GuessingNumber = RandomInt(1, 100);
        std::cout << "guess a number from 1 to 100:\n";
        for (int TimesRan = 1; TimesRan <= 5; TimesRan++)
        {
            std::cin >> GuessedNumber;
            if (GuessedNumber < GuessingNumber)
            {
                std::cout << "The Number You Have Guessed Is too Low\n";
            }
            else if (GuessedNumber > GuessingNumber)
            {
                std::cout << "The Number You Have Guessed Is Too High\n";
            }
            else
            {
                std::cout << "Congraluation You Have Sucessefully Guessed The Number\n";
                HasGuessed = true;
                break;
            };
        };
        if (HasGuessed != true)
        {
            std::cout << "The Number That Was Needed to be guessed Was " << GuessingNumber << "\n";
        }
        std::cout << "Do You Want To Play Again?(y/n)\n";
        std::cin >> YesorNo;
        if (YesorNo != 'y')
        {
            Running = false;
        };
    };
};