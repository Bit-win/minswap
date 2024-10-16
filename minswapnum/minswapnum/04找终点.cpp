//#include <iostream>
//#include <vector>
//#include <queue>
//#include <sstream>
//#include <limits>
//
//using namespace std;
//
//int minStepsToEnd(const vector<int>& nums) {
//    int len = nums.size();
//    if (len < 2) return -1; // If the array is too short, return -1
//
//    // Initialize a queue for BFS
//    queue<pair<int, int>> q; // pair<current_index, steps_taken>
//    
//    // Start from the first element with valid initial steps
//    for (int step = 1; step < len / 2; ++step) {
//        q.push({step, 1});
//    }
//
//    vector<bool> visited(len, false);
//
//    while (!q.empty()) {
//        pair<int, int> front = q.front();
//        int current = front.first;
//        int steps = front.second;
//        q.pop();
//
//        if (current >= len) continue; // If out of bounds, skip
//
//        if (current == len - 1) return steps; // Reached the end
//
//        if (visited[current]) continue; // Skip if already visited
//        visited[current] = true;
//
//        int nextStep = nums[current];
//        int nextIndex = current + nextStep;
//
//        if (nextIndex < len && !visited[nextIndex]) {
//            q.push({nextIndex, steps + 1});
//        }
//    }
//
//    return -1; // If the end is not reachable
//}
//
//int main() {
//    string input;
//    cout << "Enter the array of positive integers separated by spaces: ";
//    getline(cin, input);
//
//    istringstream iss(input);
//    vector<int> nums;
//    int num;
//    while (iss >> num) {
//        nums.push_back(num);
//    }
//
//    int result = minStepsToEnd(nums);
//    cout << result << endl;
//
//    return 0;
//}
//
