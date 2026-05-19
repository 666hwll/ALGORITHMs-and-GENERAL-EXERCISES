#include <iostream>
#include <string>

bool alreadyGuessed(char letter, const std::string& guessedLetters)
{
    return (std::find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end());
}

int main()
{
    const int tries = 6;
    std::string word = "AFFE";
    std::string pattern(word.size(), '?');
    char usergivenchar = '\0';
    std::string usergivencharcombination = "";
    int count = 0;

    while (tries >= usergivencharcombination.size())
    {
        std::cout << pattern << ": ";
        std::cin >> usergivenchar;
        std::cin.clear();

        usergivenchar = (char)toupper(usergivenchar);

        size_t index = word.find(usergivenchar);

        if (index != std::string::npos)
        {
            if (alreadyGuessed(usergivenchar, usergivencharcombination))
            {
                std::cout << "Character already guessed";
                usergivencharcombination += "1";

            } else {
                std::cout << "Character found!" << std::endl;
                usergivencharcombination += usergivenchar;
                pattern[index] = usergivenchar;
            }
        }
        else
        {
            std::cout << "Character not found!" << std::endl;
        }
    }
    return 0;
}
