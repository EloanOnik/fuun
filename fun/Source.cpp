#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main() {
	setlocale(LC_ALL, "RU");
	int a;
	std::cout << "Здравствуйте, если вы хотите чтобы массив создался с рандомными элементами нажмите '1', в протвном случае нажмите '2':";
	std::cin >> a;

	if (a == 2) {
		// Создание массива
		std::vector<float> masiv;
		float element, n;
		std::cout << "Введите количество элементов масива:";
		while (!(std::cin >> n)) { // Проверка на коректный ввод, ткк когда вводил буквы или слово выводило ошибку, крашилось
			std::cout << "Некорректный ввод. Пожалуйста введите число:";//В интернете написал, как проверить число на ввод
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		// Проверка на натуральное число
		if (n == int(n)) {
			std::cout << "Введите элементы массива:" << std::endl;
			for (int i = 0; i < n; ++i) {
				std::cout << "Элемент" << i + 1 << ":";
				std::cin >> element;
				masiv.push_back(element);
			}

			// Нахождение среднего значения
			float sr = 0;
			for (int i = 0; i < n; ++i) {
				sr = sr + masiv[i];
			}
			sr = sr / n;

			// Нахождение минимального значения 
			float min = masiv[0];
			for (int i = 1; i < n; ++i) {
				if (masiv[i] < min) {
					min = masiv[i];
				}
			}

			// Создание еще двух массивов, что бы не засорять исходный
			std::vector<float> masiv_1_element, masiv_vse_element;
			masiv_1_element = masiv;
			masiv_vse_element = masiv;

			// Замена первого минимального элемента массива
			for (int i = 0; i < n; ++i) {
				if (masiv_1_element[i] == min) {
					masiv_1_element[i] = sr;
					break;
				}
			}

			// Замена всех минимальных элементов мвссива
			for (int i = 0; i < n; ++i) {
				if (masiv_vse_element[i] == min) {
					masiv_vse_element[i] = sr;
				}
			}

			// Вывод исходного массива
			std::cout << "Исходный массив:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv[i] << "  ";
			}
			std::cout << std::endl;

			// Ввывод массива с измененным одним минимальным элементом
			std::cout << "Массив с измененным одним минимальным элементом:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_1_element[i] << "  ";
			}
			std::cout << std::endl;

			// Ввывод массива с измененными всеми минимальными элементами массива
			std::cout << "Массив с изменением всех минимальных элементов:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_vse_element[i] << "  ";
			}
		}
		else std::cout << "Введенный символ должен быть: числом, положительным, целым";
	}

	if (a == 1) {
		srand(time(0));
		int n, min, max;
		std::cout << "Введите количество элементов в массиве:";
		while (!(std::cin >> n)) { // Проверка на коректный ввод, ткк когда вводил буквы или слово выводило ошибку, крашилось
			std::cout << "Некорректный ввод. Пожалуйста введите число:";//В интернете написал, как проверить число на ввод
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}
		if (n == int(n)) {

			// Граници массива
			std::cout << "Введите минимальное значение, которое может принимать элемент:";
			std::cin >> min;
			std::cout << "Введите максимальное значение, которое может принимать элемент:";
			std::cin >> max;

			// Создание массива
			std::vector<float> masiv;
			for (int i = 0; i < n; ++i) {
				float element;
				element = rand() % (max - min + 1) + min;
				masiv.push_back(element);
			}

			// Нахождение среднего значения
			float sr = 0;
			for (int i = 0; i < n; ++i) {
				sr = sr + masiv[i];
			}
			sr = sr / n;

			// Нахождение минимального элемента 
			float min_element = masiv[0];
			for (int i = 1; i < n; ++i) {
				if (masiv[i] < min_element) {
					min_element = masiv[i];
				}
			}

			// Создание еще двух массивов, что бы не зосорять основной
			std::vector<float> masiv_1_element, masiv_vse_element;
			masiv_1_element = masiv;
			masiv_vse_element = masiv;

			// Замена первого минимального элемента массива
			for (int i = 0; i < n; ++i) {
				if (masiv_1_element[i] == min_element) {
					masiv_1_element[i] = sr;
					break;
				}
			}

			// Замена всех минимальных элементов массива
			for (int i = 0; i < n; ++i) {
				if (masiv_vse_element[i] == min_element) {
					masiv_vse_element[i] = sr;
				}
			}


			// Вывод исходного массива 
			std::cout << "Исходный массив:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv[i] << "  ";
			}
			std::cout << std::endl;

			// Вывод массива с одной заменой
			std::cout << "Массив с заменой первого минимального элемента:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_1_element[i] << "  ";
			}
			std::cout << std::endl;

			// Ввывод массива с заменой всех элементов 
			std::cout << "Массив с заменой всех минимальных значений:";
			for (int i = 0; i < n; ++i) {
				std::cout << masiv_vse_element[i] << "  ";
			}
			std::cout << std::endl;

		}
		else std::cout << "Введенный символ должен быть: числом, положительным, целым";
	}

	else std::cout << "Пожалста введите '1' или '2'";
	return 0;
}