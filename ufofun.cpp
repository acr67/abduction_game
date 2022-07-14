#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

void greet()
{
    std::cout << "=============\n";
    std::cout << "UFO: The Game\n";
    std::cout << "=============\n";
    std::cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
}

void end_game(std::string answer, std::string codeword)
{
    if (answer == codeword)
    {
        cout << "Hooray! You saved the person and earned a medal of honor!\n";
    }
    else
    {
        cout << "Oh no! The UFO just flew away with another person!\n";
    }
}

void display_misses(int misses)
{

    std::cout << endl;
    std::cout << " _______ ______  ______          _______________________________ _       \n";
    std::cout << "(  ___  (  ___ \\(  __  \\|\\     /(  ____ \\__   __\\__   __(  ___  ( (    /|\n";
    std::cout << "| (   ) | (   ) | (  \\  | )   ( | (    \\/  ) (     ) (  | (   ) |  \\  ( |\n";
    std::cout << "| (___) | (__/ /| |   ) | |   | | |        | |     | |  | |   | |   \\ | |\n";
    std::cout << "|  ___  |  __ ( | |   | | |   | | |        | |     | |  | |   | | (\\ \\) |\n";
    std::cout << "| (   ) | (  \\ \\| |   ) | |   | | |        | |     | |  | |   | | | \\   |\n";
    std::cout << "| )   ( | )___) | (__/  | (___) | (____/\\  | |  ___) (__| (___) | )  \\  |\n";
    std::cout << "|/     \\|/ \\___/(______/(_______(_______/  )_(  \\_______(_______|/    )_)\n";

    std::cout << endl;
    std::cout << " ________________________________        _______ \n";
    std::cout << "(  ____ \\__   __(  ___  \\__   __|\\     /(  ____ \\\n";
    std::cout << "| (    \\/  ) (  | (   ) |  ) (  | )   ( | (    \\/\n";
    std::cout << "| (_____   | |  | (___) |  | |  | |   | | (_____ \n";
    std::cout << "(_____  )  | |  |  ___  |  | |  | |   | (_____  )\n";
    std::cout << "      ) |  | |  | (   ) |  | |  | |   | |     ) |\n";
    std::cout << "/\\____) |  | |  | )   ( |  | |  | (___) /\\____) |\n";
    std::cout << "\\_______)  )_(  |/     \\|  )_(  (_______\\_______)\n";

    std::cout << endl
              << "You have " << 7 - misses << " left until abduction\n";
}

void display_status(std::vector<char> incorrect, std::string answer)
{
    cout << "Incorrect guesses:\n";
    for (int i = 0; i < incorrect.size(); i++)
    {
        cout << incorrect[i] << " ";
    }
    cout << "\nCodeword:\n";
    for (int j = 0; j < answer.size(); j++)
    {
        cout << answer[j];// << " ";
    }
    cout << endl;
}