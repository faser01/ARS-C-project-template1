// Персон6альный шаблон С++
#include < iostream>
#include "windows.h"
#include <conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	char sym;
	bool f = false;
	int timer = 0;

	while (!f) {
		if (_kbhit()) {
			sym = _getch();
			switch (sym) {
			case 'w': case 'W': system("cls"); cout << "up\n"; break;
			case 's': case 'S': system("cls"); cout << "up\n"; break;
			case 'a': case 'A': system("cls"); cout << "up\n"; break;
			case 'd': case 'D': system("cls"); cout << "up\n"; break;
			case 'q': case 'Q': f = true;
			}
		}
		Sleep(100);
		timer += 100;
		if (timer % 1000 == 0) {
			cout << ". \n";
			timer = 0;
		}
		
	}
	return 0;
}