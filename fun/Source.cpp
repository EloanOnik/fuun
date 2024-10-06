#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "RU");
	int a;
	std::cout << "������������, ���� �� ������ ����� ������ �������� � ���������� ���������� ������� '1', � �������� ������ ������� '2':";
	std::cin >> a;

	if (a == 2) {
		// �������� �������
		std::vector<float> masiv;
		float element, n;
		std::cout << "������� ���������� ��������� ������:";
		while (!(std::cin >> n)) { // �������� �� ��������� ����, ��� ����� ������ ����� ��� ����� �������� ������, ���������
			std::cout << "������������ ����. ���������� ������� �����:";//� ��������� �������, ��� ��������� ����� �� ����
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		// �������� �� ����������� �����
		if (n == int(n)) {
			std::cout << "������� �������� �������:" << std::endl;
			for (int i = 0; i < n; ++i) {
				std::cout << "�������" << i + 1 << ":";
				std::cin >> element;
				masiv.push_back(element);
			}

			// ���������� �������� ��������
			float sr = 0;
			for (int i = 0; i < n; ++i) {
				sr = sr + masiv[i];
			}
			sr = sr / n;

			// ���������� ������������ �������� 
			float min = masiv[0];
			for (int i = 1; i < n; ++i) {
				if (masiv[i] < min) {
					min = masiv[i];
				}
			}

			// �������� ��� ���� ��������, ��� �� �� �������� ��������
			std::vector<float> masiv_1_element, masiv_vse_element;
			masiv_1_element = masiv;
			masiv_vse_element = masiv;

			// ������ ������� ������������ �������� �������
			for (int i = 0; i < n; ++i) {
				if (masiv_1_element[i] == min) {
					masiv_1_element[i] = sr;
					break;
				}
			}

			// ������ ���� ����������� ��������� �������
			for (int i = 0; i < n; ++i) {
				if (masiv_vse_element[i] == min) {
					masiv_vse_element[i] = sr;
				}
			}

			// ����� ��������� �������
			std::cout << "�������� ������:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv[i] << "  ";
			}
			std::cout << std::endl;

			// ������ ������� � ���������� ����� ����������� ���������
			std::cout << "������ � ���������� ����� ����������� ���������:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_1_element[i] << "  ";
			}
			std::cout << std::endl;

			// ������ ������� � ����������� ����� ������������ ���������� �������
			std::cout << "������ � ���������� ���� ����������� ���������:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_vse_element[i] << "  ";
			}
		}
		else std::cout << "��������� ������ ������ ����: ������, �������������, �����";
	}

	if (a == 1) {
		srand(time(0));
		int n, min, max;
		std::cout << "������� ���������� ��������� � �������:";
		while (!(std::cin >> n)) { // �������� �� ��������� ����, ��� ����� ������ ����� ��� ����� �������� ������, ���������
			std::cout << "������������ ����. ���������� ������� �����:";//� ��������� �������, ��� ��������� ����� �� ����
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		if (n == int(n)) {

			// ������� �������
			std::cout << "������� ����������� ��������, ������� ����� ��������� �������:";
			std::cin >> min;
			std::cout << "������� ������������ ��������, ������� ����� ��������� �������:";
			std::cin >> max;

			// �������� �������
			std::vector<float> masiv;
			for (int i = 0; i < n; ++i) {
				float element;
				element = rand() % (max - min + 1) + min;
				masiv.push_back(element);
			}

			// ���������� �������� ��������
			float sr = 0;
			for (int i = 0; i < n; ++i) {
				sr = sr + masiv[i];
			}
			sr = sr / n;

			// ���������� ������������ �������� 
			float min_element = masiv[0];
			for (int i = 1; i < n; ++i) {
				if (masiv[i] < min_element) {
					min_element = masiv[i];
				}
			}

			// �������� ��� ���� ��������, ��� �� �� �������� ��������
			std::vector<float> masiv_1_element, masiv_vse_element;
			masiv_1_element = masiv;
			masiv_vse_element = masiv;

			// ������ ������� ������������ �������� �������
			for (int i = 0; i < n; ++i) {
				if (masiv_1_element[i] == min_element) {
					masiv_1_element[i] = sr;
					break;
				}
			}

			// ������ ���� ����������� ��������� �������
			for (int i = 0; i < n; ++i) {
				if (masiv_vse_element[i] == min_element) {
					masiv_vse_element[i] = sr;
				}
			}


			// ����� ��������� ������� 
			std::cout << "�������� ������:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv[i] << "  ";
			}
			std::cout << std::endl;

			// ����� ������� � ����� �������
			std::cout << "������ � ������� ������� ������������ ��������:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_1_element[i] << "  ";
			}
			std::cout << std::endl;

			// ������ ������� � ������� ���� ��������� 
			std::cout << "������ � ������� ���� ����������� ��������:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_vse_element[i] << "  ";
			}
			std::cout << std::endl;

		}
		else std::cout << "��������� ������ ������ ����: ������, �������������, �����";
	}

	else std::cout << "�������� ������� '1' ��� '2'";
	return 0;
}