#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    string moves[3] = {"rock", "paper", "scissors"};

    int userChoice, computerChoice = rand() % 3;

    cout << "Enter your move: \n1: ROCK\n2: PAPER\n3: SCISSSORS" << endl;
    cin >> userChoice;

    while (userChoice != 1 && userChoice != 2 && userChoice != 3)
    {
        cout << "Invalid move. Please pick a valid number: \n1: ROCK\n2: PAPER\n3: SCISSSORS" << endl;
        cin >> userChoice;
    }

    cout << computerChoice << endl;
    cout << "computer: " << moves[computerChoice] << endl;
    cout << "user: " << moves[userChoice - 1] << endl;

    return 0;
}