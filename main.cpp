// COMSC-210 | Lab 12 | Barsbek
#include <iostream>
#include <array>
#include <fstream>

using namespace std;

int main() {
    const int MAX_AMOUNT{50};
    ifstream fileInput{"data.txt"};
    if (!fileInput) {
        cerr << "File not found";
        return 1;
    }

    array<int, MAX_AMOUNT> leaderboard{};
    for (int score : leaderboard) {
        fileInput >> score;
    }

    return 0;
}