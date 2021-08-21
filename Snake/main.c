#include <stdio.h>
#include <Windows.h>
#include "screen.h"

int SplashScreen(void) {
	int state;

	while (1) {
		ChooseScreen(1);
		Sleep(300);
		ChooseScreen(2);
		Sleep(300);
	}

	return 0;

}


int main(int argc, char** argv) {

	SplashScreen();
	

	return 0;
}