#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "functions.h"

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    string moves[3] = {"rock", "paper", "scissors"};

    int userChoice, computerChoice = rand() % 3;

    cout << "\nEnter your move: \n1: ROCK\n2: PAPER\n3: SCISSSORS" << endl;
    cin >> userChoice;

    while (userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        cout << "\nInvalid move. Please pick a valid number: \n1: ROCK\n2: PAPER\n3: SCISSSORS" << endl;
        cin >> userChoice;
    }

    userChoice -= 1;

    cout << computerChoice << endl;
    cout << "\nComputer plays: " << moves[computerChoice] << endl;
    cout << "\nUser plays: " << moves[userChoice] << endl;

    if (userChoice == computerChoice)
    {
        cout << "\nIt's a tie!" << endl;
    }
    else if (beats(userChoice, computerChoice))
    {
        cout << "\nUser wins!" << endl;
    }
    else
    {
        cout << "\nComputer wins!" << endl;
    }

    return 0;
}