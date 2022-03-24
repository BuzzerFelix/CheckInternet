#include "includes.h"
#include "checkinet.h"

int main() {
	SetConsoleTitleA((LPCSTR)"Check Internet");
	CheckInternet((LPCSTR)"https://www.google.com/");
	Sleep(5000);
	return 0;
}
