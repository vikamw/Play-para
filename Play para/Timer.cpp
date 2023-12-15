#include <iostream>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

void main() {
	int seconds; // количество секунд до закрытия программы

	cout << "Введите сколько секунд вы хотите играть: ";
	cin >> seconds;

	// Задержка в выполнении программы
	this_thread::sleep_for(chrono::seconds(seconds));

	cout << "Таймер истек. Программа будет закрыта." << endl;

	// Закрытие программы
	exit(0);
}
