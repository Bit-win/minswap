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
//			case 1: // "a" 键
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
//			case 5: // 全选
//				if (!screen.empty()) {
//					selected = true;
//				}
//				break;
//			default:
//				std::cout << "输入的序列中有错误的数字，请重新输入";
//		}
//	}
//	return screen.length();
//}
//
//int main() {
//	std::string input;
//	std::cout << "请输入要操作的序列（用空格分开）；";
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
//	std::cout << "最终屏幕上字母的数量是：" << result << std::endl;
//}
