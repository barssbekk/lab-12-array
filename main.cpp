// COMSC-210 | Lab 12 | Barsbek
#include <iostream>
#include <array>
#include <fstream>
#include <algorithm>
#include <numeric>

using namespace std;

int findHighestScore(const array<int, 50>& arr);
double findAvgScore(const array<int, 50>& arr);
int findLowestScore(const array<int, 50>& arr);
double findMedianScore(array<int, 50> arr);

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

    cout << "Highest score: " << findHighestScore(leaderboard) << '\n';
    cout << "Lowest score: " << findLowestScore(leaderboard) << '\n';
    cout << "Average score: " << findAvgScore(leaderboard) << '\n';
    cout << "Median score: " << findMedianScore(leaderboard) << '\n';

    return 0;
}

int findHighestScore(const array<int, 50>& arr) {
    return *max_element(arr.begin(), arr.end());
}

int findLowestScore(const array<int, 50>& arr) {
    return *min_element(arr.begin(), arr.end());
}

double findAvgScore(const array<int, 50>& arr) {
    double sumInitial{0.0};
    return accumulate(arr.begin(), arr.end(), sumInitial) / arr.size();
}

double findMedianScore(array<int, 50> arr) {
    sort(arr.begin(), arr.end());
    size_t middle{arr.size() / 2};
    if (arr.size() % 2 == 0) {
        return (arr.at(middle - 1) + arr.at(middle)) / 2.0;
    } else {
        return arr.at(middle);
    }
}