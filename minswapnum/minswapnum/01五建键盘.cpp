//#include <vector>
//#include <string>
//#include <iostream>
//#include <sstream>
//
//int final_screen_size(const std::vector<int>& operations) {
//	std::string screen;
//	std::string clipboard;
//	bool selected = false;
//
//	for (int op : operations) {
//		switch (op) {
//			case 1: // "a" ��
//				if (selected) {
//					screen.clear();
//					selected = false;
//				}
//				screen += "a";
//				break;
//			case 2: // "ctrl + c"
//				if (selected) {
//					clipboard = screen;
//				}
//				break;
//			case 3: // "ctrl + x"
//				if (selected) {
//					clipboard = screen;
//					screen.clear();
//					selected = false;
//				}
//				break;
//			case 4: // "ctrl + v"
//				if (!clipboard.empty()) {
//					if (selected) {
//						screen.clear();
//						selected = false;
//					}
//					screen += clipboard;
//				}
//				break;
//			case 5: // ȫѡ
//				if (!screen.empty()) {
//					selected = true;
//				}
//				break;
//			default:
//				std::cout << "������������д�������֣�����������";
//		}
//	}
//	return screen.length();
//}
//
//int main() {
//	std::string input;
//	std::cout << "������Ҫ���������У��ÿո�ֿ�����";
//	std::getline(std::cin, input);
//
//	std::istringstream iss(input);
//	std::vector<int> operations;
//	int op;
//	while (iss >> op) {
//		operations.push_back(op);
//	}
//
//	int result = final_screen_size(operations);
//	std::cout << "������Ļ����ĸ�������ǣ�" << result << std::endl;
//}
