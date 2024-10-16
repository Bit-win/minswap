#include <iostream>
#include <vector>
#include <sstream>
#include <string>

long long count_subarrays_with_sum_at_least_x(int c, int x, const std::vector<int>& arr) {
   int left = 0;
   long long current_sum = 0;
   long long count = 0;

   for (int right = 0; right < c; ++right) {
       current_sum += arr[right];  // ��չ�ұ߽�

       // ����ǰ����ʹ��ڵ��� x ʱ��������߽�
       while (current_sum >= x) {
           // �� left �� right �����������䶼������������������Ϊ (c - right)
           count += (c - right);  // ��Ϊÿ���µ������䶼�Ǵ� right ������
           current_sum -= arr[left];  // ��С��߽�
           ++left;
       }
   }

   return count;
}

int main() {
	int c, x;

	std::cout << "���������鳤�� c ��Ŀ��� x��";
	std::cin >> c >> x;
	std::cin.ignore();  // ���Ի��з�
/*������������У�std::cin.ignore() ȷʵ�Ǳ�Ҫ�ġ����ҽ���ԭ��

��������״̬��
����ʹ�� std::cin >> c >> x; ��ȡ���ֺ�����������Ȼ����һ�����з���\n����������Ϊ�û����������ֺ��˻س�����
std::getline() �Ĺ�����ʽ��
std::getline() �������ȡֱ���������з�Ϊֹ��������ȡ�������ݣ����������з����洢��ָ�����ַ����С�
�������ڣ�
�����ʹ�� std::cin.ignore()�������� std::cin >> c >> x; ֮��� std::getline(std::cin, input); ��������ȡ�������������еĻ��з�����Ϊ���Ѿ���ȡ��һ�У�һ�����У���Ȼ�������������û�и��û���������ʵ�ʵ�����Ԫ�ء�
std::cin.ignore() �����ã�
��������������е���һ���ַ�������������¾����Ǹ����з����������������� std::getline() �ͻ�ȴ��û��������룬������������ȡ��һ�����С�
Ϊʲô������������Ǳ�Ҫ�ģ�
��ʹ����"����һ"����ȡ����Ԫ�أ����ַ��������� std::getline() ����ȡ�������롣���û�� std::cin.ignore()��std::getline() ���޷���ȷ��ȡ�û����������Ԫ�ء�
 */ 
//  ����һ
	std::string input;
	std::cout << " ������ " << c << "���������ÿո�ָ���";
	std::getline(std::cin, input);

	std::istringstream iss(input);
	std::vector<int> arr;

	int op;
	while (iss >> op) {
		arr.push_back(op);
	}

  // �пմ���
  if (arr.empty()) {
      std::cerr << "����δ�ܶ�ȡ���κ�����Ԫ�أ��������롣" << std::endl;
      return 1;  // ���ط���ֵ��ʾ����
  }

   // ������
  // std::vector<int> arr(c);
  // std::cout << "������ " << c  << "���������ÿո�ָ���";
  // for (int i = 0; i < c; i++) {
      // std::cin >> arr[i];
  // }

   long long result = count_subarrays_with_sum_at_least_x(c, x, arr);
   std::cout << "����������������������" << result << std::endl;

   return 0;


}