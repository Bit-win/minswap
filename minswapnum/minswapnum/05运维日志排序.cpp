#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// Function to parse time and convert it to a comparable integer
int parseTime(const string& time) {
    int h, m, s, n;
    char colon, dot;
    istringstream iss(time);
    iss >> h >> colon >> m >> colon >> s >> dot >> n;
    return h * 3600000 + m * 60000 + s * 1000 + n;
}

int main() {
    int n;
    cout << "Enter the number of log entries: ";
    cin >> n;
    cin.ignore(); // Ignore the newline after the number

    vector<pair<string, int>> logs; // Pair of original time string and parsed time

    for (int i = 0; i < n; ++i) {
        string time;
        getline(cin, time);
        int parsedTime = parseTime(time);
        logs.emplace_back(time, parsedTime);
    }

    // Stable sort the logs based on parsed time
    stable_sort(logs.begin(), logs.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    });

    // Output the sorted times
    for (const auto& log : logs) {
        cout << log.first << endl;
        cout << "test for git hub" << endl;
    }

    return 0;
}

