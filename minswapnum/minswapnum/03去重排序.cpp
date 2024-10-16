//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//#include <sstream>
//
//using namespace std;
//
//// �Զ���������
//bool compareElements(const pair<int, pair<int, int>>& a, const pair<int, pair<int, int>>& b) {
//    if (a.second.first != b.second.first) {
//        return a.second.first > b.second.first; // �����ִ����Ӹߵ�������
//    }
//    return a.second.second < b.second.second; // ��ͬ�������״γ���˳������
//}
//
//vector<int> deduplicateAndSort(vector<int>& arr) {
//    unordered_map<int, pair<int, int>> countMap;
//    int index = 0;
//
//    // ͳ��ÿ��Ԫ�س��ֵĴ������״γ��ֵ�λ��
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
//    // ��mapת��Ϊvector�Ա�����
//    vector<pair<int, pair<int, int>>> sortedElements;
//    for (const auto& entry : countMap) {
//        sortedElements.push_back({ entry.first, entry.second });
//    }
//
//    // ʹ���Զ���ȽϺ�������
//    sort(sortedElements.begin(), sortedElements.end(), compareElements);
//
//    // ��ȡ������Ԫ��
//    vector<int> result;
//    for (const auto& element : sortedElements) {
//        result.push_back(element.first);
//    }
//
//    return result;
//}
//
//int main() {
//    cout << "�������������ÿո�ָ���������Ϻ󰴻س�: ";
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
//    cout << "����������: ";
//    for (int num : result) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
