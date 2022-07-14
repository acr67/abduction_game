#include <iostream>
#include "ufo.hpp"
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    greet();
    std::string codeword = "supercalifragilisticexpialidocious";
    std::string answer = "__________________________________";
    int misses = 0;

    std::vector<char> incorrect;
    bool guess = false;

    while (answer != codeword && misses < 7)
    {
        if (misses > 0)
        {
            display_misses(misses);
            display_status(incorrect, answer);
        }
        else
        {
            display_status(incorrect, answer);
        }
        cout << "Make a guess:\n";
        char myLetter;
        cin >> myLetter;

        int flag = 0;
        for (int k = 0; k < codeword.size(); k++)
        {
            if (myLetter == codeword[k])
            {
                answer[k] = myLetter;
                guess = true;
            }

            else
            {
                flag++;
            }
        }
        if (guess != true) //(flag == codeword.size())
        {
            misses++;
            incorrect.push_back(myLetter);
            cout << "Incorrect! The tractor beam pulls the abductee in further.\n";
        }
        else
        {
            cout << "Excellent! One second farther away from midnight.\n";
        }
        guess = false;
    }

    end_game(answer, codeword);
    return 0;
}