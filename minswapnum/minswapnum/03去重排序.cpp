//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include <sstream>
//
//using namespace std;
//
//// 自定义排序函数
//bool compareElements(const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
//    if (a.second.first != b.second.first) {
//        return a.second.first > b.second.first; // 按出现次数从高到低排序
//    }
//    return a.second.second < b.second.second; // 相同次数按首次出现顺序排序
//}
//
//vector<int> deduplicateAndSort(vector<int>& arr) {
//    unordered_map<int, pair<int, int>> countMap;
//    int index = 0;
//
//    // 统计每个元素出现的次数和首次出现的位置
//    for (int num : arr) {
//        if (countMap.find(num) == countMap.end()) {
//            countMap[num] = { 1, index };
//        }
//        else {
//            countMap[num].first++;
//        }
//        index++;
//    }
//
//    // 将map转换为vector以便排序
//    vector<pair<int, pair<int, int>>> sortedElements;
//    for (const auto& entry : countMap) {
//        sortedElements.push_back({ entry.first, entry.second });
//    }
//
//    // 使用自定义比较函数排序
//    sort(sortedElements.begin(), sortedElements.end(), compareElements);
//
//    // 提取排序后的元素
//    vector<int> result;
//    for (const auto& element : sortedElements) {
//        result.push_back(element.first);
//    }
//
//    return result;
//}
//
//int main() {
//    cout << "请输入整数，用空格分隔，输入完毕后按回车: ";
//    string input;
//    getline(cin, input);
//
//    istringstream iss(input);
//    vector<int> arr;
//    int num;
//    while (iss >> num) {
//        arr.push_back(num);
//    }
//
//    vector<int> result = deduplicateAndSort(arr);
//
//    cout << "处理后的数组: ";
//    for (int num : result) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
