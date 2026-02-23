// COMSC-210 | Lab 12 | Barsbek
#include <iostream>
#include <array>
#include <fstream>

using namespace std;

int main() {
    const int maxAmount{50};
    ifstream fileInput{"data.txt"};
    if (!fileInput) {
        cerr << "File not found";
        return 1;
    }

    array<int, maxAmount> leaderboard{};
    return 0;
}