#include <iostream>

bool isEven(int number)
{
    return number % 2 == 0;
}

int main()
{
    int user_input = 0;
    int highest_user_input = 0;
    int second_highest_user_input = 0;
    int second_highest_user_input_even = 0;
    while (user_input >= 0)
    {
        std::cout << "Please type in a positive number \n";
        std::cin >> user_input;
        if (user_input > highest_user_input)
        {
            second_highest_user_input = highest_user_input;
            if (isEven(highest_user_input))
            {
                second_highest_user_input_even = highest_user_input;
            }
            highest_user_input = user_input;
        }
        else if (user_input > second_highest_user_input && user_input != highest_user_input)
        {
            second_highest_user_input = user_input;
            if (isEven(second_highest_user_input))
            {
                second_highest_user_input_even = user_input;
            }
        }
        else if (user_input > second_highest_user_input_even && isEven(user_input))
        {
            second_highest_user_input_even = user_input;
        }
    }
    std::cout << "The highest number was " << highest_user_input << "\n";
    std::cout << "The second highest number was " << second_highest_user_input << "\n";
    std::cout << "The second highest even number was " << second_highest_user_input_even << "\n";
    return 0;
}
