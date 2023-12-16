// “аймер который начинаетс€ с началом игры и который считает до конца времени
#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <Windows.h>
// јјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјјј

using namespace std;

void timer() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int seconds; // количество секунд до закрыти€ программы

	cout << "¬ведите сколько секунд вы хотите играть: ";
	cin >> seconds;

	for (int i = 0; i < seconds; i++) {
		// «адержка в выполнении программы
		this_thread::sleep_for(chrono::seconds(1));

		// ќчисшение меню консоли
		system("cls");
		cout << seconds - i << endl;
	}

	cout << "“аймер истек. ѕрограмма будет закрыта." << endl;

	// «акрытие программы
	exit(0);
}