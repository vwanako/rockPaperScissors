#include <iostream>
#include <string.h>
#include <map>

using namespace std;

bool beats(int a, int b)
{
    // compares the win conditions for the game. a will represent the player's move (0 for rock, 1 for paper, 2 for scissors) and b will represent the computer's move (0 for rock, 1 for paper and 2 for scissors). this will return true if the player beats the computer, and false if the computer beats the player.
    return (a == 0 && b == 2) || (a == 1 && b == 0) || (a == 2 && b == 1);
}