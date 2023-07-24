#include <iostream>
#include <string.h>
#include <map>

using namespace std;

int readUserChoice()
{
    int userChoice;
    cout << "Enter your move: \n1: ROCK\n2: PAPER\n3: SCISSSORS" << endl;
    cin >> userChoice;

    return userChoice;
}

// random_device rd;
// default_random_engine generator(rd());

// define the range for the the random (0-2)
// int minNumber = 0, maxNumber = 2;
// uniform_int_distribution<int> distribution(minNumber, maxNumber);

// generates the random number and sets it as the computer's choice
/// int computerChoice = distribution(generator);

// void validateUserChoice(int userChoice){}