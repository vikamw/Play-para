// Таймер который начинается с началом игры и который считает до конца времени
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <Windows.h>

using namespace std;

void timer() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int seconds; // количество секунд до закрытия программы

	cout << "Введите сколько секунд вы хотите играть: ";
	cin >> seconds;

	for (int i = 0; i < seconds; i++) {
		// Задержка в выполнении программы
		this_thread::sleep_for(chrono::seconds(1));

		// Очисшение меню консоли
		system("cls");
		cout << seconds - i << endl;
	}

	cout << "Таймер истек. Программа будет закрыта." << endl;

	// Закрытие программы
	exit(0);
}