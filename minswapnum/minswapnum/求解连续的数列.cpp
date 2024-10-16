//#include <iostream>
//#include <vector>
//
//std::vector<int> findConsecutiveSequence(int S, int N) {
//    // Calculate the starting number K1
//    int sumOfDifferences = (N * (N - 1)) / 2;
//    if (S <= sumOfDifferences) {
//        return {}; // No solution
//    }
//
//    int K1 = (S - sumOfDifferences) / N;
//
//    // Check if K1 is a valid starting number
//    if ((S - sumOfDifferences) % N != 0 || K1 <= 0) {
//        return {}; // No solution
//    }
//
//    // Construct the sequence
//    std::vector<int> sequence;
//    for (int i = 0; i < N; ++i) {
//        sequence.push_back(K1 + i);
//    }
//
//    return sequence;
//}
//
//int main() {
//    int S, N;
//    std::cout << "Enter the sum S and the number of elements N: ";
//    std::cin >> S >> N;
//
//    std::vector<int> result = findConsecutiveSequence(S, N);
//
//    if (result.empty()) {
//        std::cout << "-1" << std::endl;
//    }
//    else {
//        for (int num : result) {
//            std::cout << num << " ";
//        }
//        std::cout << std::endl;
//    }
//
//    return 0;
//}
//
