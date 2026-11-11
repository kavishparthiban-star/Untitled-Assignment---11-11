/*****************************
 * Kavish Parthiban          *
 * Game Over Rank Evaluator =*
 * 11 November, 2026         *
 * **************************/

#include <iostream>
using namespace std;

int main()
{
    int finalScore;
    cout << "Enter your Final Score: ";
    cin >> finalScore;

    if (finalScore > 0 && finalScore < 499) {
        cout << "Rank: Rookie";
    } else if (finalScore > 500 && finalScore < 999) {
        cout << "Rank: Pro";
    } else if (finalScore > 1000) {
        cout << "Rank: Legend";
    } else {
        cout << "Error: Invalid score.";
    }
    return 0;
}