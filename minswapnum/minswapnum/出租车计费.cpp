//#include <iostream>
//using namespace std;
//
//// 判断一个数是否包含数字 4
//bool containsfour(int num) {
//    while (num > 0) {
//        if (num % 10 == 4) {
//            return true;  // 如果某一位是4，返回true
//        }
//        num /= 10;
//    }
//    return false;  // 没有任何一位是4，返回false
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    int actualfee = 0;  // 实际产生的费用
//    int counter = 0;    // 记录当前实际的里程数
//
//    // 遍历每个数字，跳过包含4的数字
//    for (int i = 1; i <= n; ++i) {
//        if (!containsfour(i)) {
//            counter++;
//        }
//    }
//
//    cout << counter << endl;  // 输出实际产生的费用
//    return 0;
//}
