//#include <iostream>
//using namespace std;
//
//// �ж�һ�����Ƿ�������� 4
//bool containsfour(int num) {
//    while (num > 0) {
//        if (num % 10 == 4) {
//            return true;  // ���ĳһλ��4������true
//        }
//        num /= 10;
//    }
//    return false;  // û���κ�һλ��4������false
//}
//
//int main() {
//    int n;
//    cin >> n;
//
//    int actualfee = 0;  // ʵ�ʲ����ķ���
//    int counter = 0;    // ��¼��ǰʵ�ʵ������
//
//    // ����ÿ�����֣���������4������
//    for (int i = 1; i <= n; ++i) {
//        if (!containsfour(i)) {
//            counter++;
//        }
//    }
//
//    cout << counter << endl;  // ���ʵ�ʲ����ķ���
//    return 0;
//}
