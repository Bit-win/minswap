//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int minSwapsToGroupLessThanK(std::vector<int>& nums, int k) {
//    int n = nums.size();
//    int countLessThanK = 0;
//
//    // Count how many numbers are less than k
//    for (int num : nums) {
//        if (num < k) {
//            countLessThanK++;
//        }
//    }
//
//    // Find the number of elements not less than k in the first window of size countLessThanK
//    int bad = 0;
//    for (int i = 0; i < countLessThanK; i++) {
//        if (nums[i] >= k) {
//            bad++;
//        }
//    }
//
//    // Initialize the minimum swaps with the first window
//    int minSwaps = bad;
//
//    // Use a sliding window to find the minimum swaps needed
//    for (int i = 0, j = countLessThanK; j < n; i++, j++) {
//        // Slide the window forward
//        if (nums[i] >= k) {
//            bad--;
//        }
//        if (nums[j] >= k) {
//            bad++;
//        }
//        minSwaps = std::min(minSwaps, bad);
//    }
//
//    return minSwaps;
//}
//
//int main() {
//    std::vector<int> nums = {1, 3, 1, 4, 0};
//    int k = 2;
//    int result = minSwapsToGroupLessThanK(nums, k);
//    std::cout << "jingyu Minimum swaps required: " << result << std::endl;
//    return 0;
//}
