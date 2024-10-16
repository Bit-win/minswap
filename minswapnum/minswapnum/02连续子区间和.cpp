#include <iostream>
#include <vector>
#include <sstream>
#include <string>

long long count_subarrays_with_sum_at_least_x(int c, int x, const std::vector<int>& arr) {
   int left = 0;
   long long current_sum = 0;
   long long count = 0;

   for (int right = 0; right < c; ++right) {
       current_sum += arr[right];  // 扩展右边界

       // 当当前区间和大于等于 x 时，收缩左边界
       while (current_sum >= x) {
           // 从 left 到 right 的所有子区间都满足条件，区间数量为 (c - right)
           count += (c - right);  // 因为每个新的子区间都是从 right 到结束
           current_sum -= arr[left];  // 缩小左边界
           ++left;
       }
   }

   return count;
}

int main() {
	int c, x;

	std::cout << "请输入数组长度 c 和目标和 x：";
	std::cin >> c >> x;
	std::cin.ignore();  // 忽略换行符
/*在这个上下文中，std::cin.ignore() 确实是必要的。让我解释原因：

输入流的状态：
当你使用 std::cin >> c >> x; 读取数字后，输入流中仍然留有一个换行符（\n）。这是因为用户在输入数字后按了回车键。
std::getline() 的工作方式：
std::getline() 函数会读取直到遇到换行符为止，并将读取到的内容（不包括换行符）存储到指定的字符串中。
问题所在：
如果不使用 std::cin.ignore()，紧接着 std::cin >> c >> x; 之后的 std::getline(std::cin, input); 会立即读取到留在输入流中的换行符，认为它已经读取了一行（一个空行），然后结束。这样就没有给用户机会输入实际的数组元素。
std::cin.ignore() 的作用：
它会忽略输入流中的下一个字符（在这种情况下就是那个换行符）。这样，后续的 std::getline() 就会等待用户的新输入，而不是立即读取到一个空行。
为什么在这个代码中是必要的：
你使用了"方法一"来读取数组元素，这种方法依赖于 std::getline() 来读取整行输入。如果没有 std::cin.ignore()，std::getline() 将无法正确读取用户输入的数组元素。
 */ 
//  方法一
	std::string input;
	std::cout << " 请输入 " << c << "个整数，用空格分隔：";
	std::getline(std::cin, input);

	std::istringstream iss(input);
	std::vector<int> arr;

	int op;
	while (iss >> op) {
		arr.push_back(op);
	}

  // 判空处理
  if (arr.empty()) {
      std::cerr << "错误：未能读取到任何数组元素，请检查输入。" << std::endl;
      return 1;  // 返回非零值表示错误
  }

   // 方法二
  // std::vector<int> arr(c);
  // std::cout << "请输入 " << c  << "个整数，用空格分隔：";
  // for (int i = 0; i < c; i++) {
      // std::cin >> arr[i];
  // }

   long long result = count_subarrays_with_sum_at_least_x(c, x, arr);
   std::cout << "满足条件的子数组数量：" << result << std::endl;

   return 0;


}