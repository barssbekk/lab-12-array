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
    for (int& score : leaderboard)  // To input data into array
        fileInput >> score;

    for (int i : leaderboard)
        cout << i << '\n';

    sort(leaderboard.begin(), leaderboard.end());

    cout << "Sorted:";
    for (int i : leaderboard)
        cout << i << '\n';

    return 0;
}