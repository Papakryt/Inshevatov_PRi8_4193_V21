#include <iostream>
#include "windows.h"
#include <string>
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "4193 - Инжеватов Дмирий Константинович\n";
	std::cout << "Мне похуй на ввод задания\n";
	bool F = 1;
	while (F) {
		char a=NULL, b=NULL;
		bool flag = 1;
		while (flag) {
			if (int(a) >= 33 and int(b) < 256 and (int(b)>int(a))) {
				flag = 0;
			}
			else {
				std::cout << "Введите два символа: ";
				std::cin >> a;
				std::cin >> b;
			}
		}
		float Size = (int(b) - int(a)) + 1;
		int* M = new int[Size];
		for (int i = 0; i < Size; i++) {
			M[i] = (i + int(a));
		}
		int mem = M[0];
		M[0] = M[int(b) - int(a)];
		M[b - a] = mem;
		for (int i = 0; i < Size; i += 3) {
			if (int(Size / 3) > i / 3) {
				std::cout << M[i] << "\t" << M[i + 1] << "\t" << M[i + 2] << std::endl;
			}
			if ((int(Size / 3) == i / 3) and (int(Size) % 3 == 1)) {
				std::cout << M[int(Size-1)] << std::endl;
			}
			if ((int(Size / 3) == i / 3) and (int(Size) % 3 == 2)) {
				std::cout << M[int(Size-2)] << "\t" << M[int(Size-1)] << std::endl;
			}
		}
		char prof;
		std::cout << "Введите символ: ";
		std::cin >> prof;
		for (int i = 0; i < Size; i++) {
			if (int(prof) == M[i]) {
				std::cout << "Этот символ есть в массиве\n";
				flag = 1;
				break;
			}
		}
		if (!flag) {
			std::cout << "Этого символа нет\n";
		}
		delete[] M;
		std::string Ans;
		flag = 0;
		while (!flag) {
			std::cout << "Повторим? ";
			std::cin >> Ans;
			if (Ans == "Да" or Ans == "да") {
				flag = 1;
			}
			else if (Ans == "Нет" or Ans == "нет") {
				F = 0;
				flag = 1;
			}
		}
	}
	return 0;
}