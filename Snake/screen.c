#include <stdio.h>

// the window is 50*20 (margin 52*22)
int ChooseScreen(int no) {
	system("cls");
	if (no == 0) {
		// empty screen
		printf("\n");
		printf(" ####################################################\n");
		for (int i = 0; i < 20; i++)
			printf(" #                                                  #\n");
		printf(" ####################################################\n");
		printf("\n");
	}
	else if (no == 1) {
		// main screen
		printf("\n");
		printf(" ####################################################\n");
		for (int i = 0; i < 3; i++)
			printf(" #                                                  #\n");
		printf(" #           _____             _                    #\n");
		printf(" #          / ____|           | |                   #\n");
		printf(" #         | (___  _ __   __ _| | _____             #\n");
		printf(" #          \\___ \\| '_ \\ / _` | |/ / _ \\            #\n");
		printf(" #          ____) | | | | (_| |   <  __/            #\n");
		printf(" #         |_____/|_| |_|\\__,_|_|\\_\\___|            #\n");
		printf(" #                                                  #\n");

		printf(" #                                                  #\n");
		printf(" #                                                  #\n");
		printf(" #                 PLAY NOW!                        #\n");
		printf(" #                                                  #\n");
		printf(" #                 EXIT                             #\n");
		printf(" #                                                  #\n");
		printf(" #                                                  #\n");
		printf(" #                          Operations: W S A D     #\n");
		printf(" #                          DesignedBy: Hsiang.     #\n");
		printf(" #                                                  #\n");
		printf(" ####################################################\n");
		printf("\n");
	}
	else if (no == 2) {
		// main screen PLAY NOW!
		printf("\n");
		printf(" ####################################################\n");
		for (int i = 0; i < 3; i++)
			printf(" #                                                  #\n");
		printf(" #           _____             _                    #\n");
		printf(" #          / ____|           | |                   #\n");
		printf(" #         | (___  _ __   __ _| | _____             #\n");
		printf(" #          \\___ \\| '_ \\ / _` | |/ / _ \\            #\n");
		printf(" #          ____) | | | | (_| |   <  __/            #\n");
		printf(" #         |_____/|_| |_|\\__,_|_|\\_\\___|            #\n");
		printf(" #                                                  #\n");

		printf(" #                                                  #\n");
		printf(" #                                                  #\n");
		printf(" #                 PLAY NOW!    ¡û                  #\n");
		printf(" #                                                  #\n");
		printf(" #                 EXIT                             #\n");
		printf(" #                                                  #\n");
		printf(" #                                                  #\n");
		printf(" #                          Operations: W S A D     #\n");
		printf(" #                          DesignedBy: Hsiang.     #\n");
		printf(" #                                                  #\n");
		printf(" ####################################################\n");
		printf("\n");
	}
	else if (no == 3) {
		// main screen EXIT
		printf("\n");
		printf(" ####################################################\n");
		for (int i = 0; i < 3; i++)
			printf(" #                                                  #\n");
		printf(" #           _____             _                    #\n");
		printf(" #          / ____|           | |                   #\n");
		printf(" #         | (___  _ __   __ _| | _____             #\n");
		printf(" #          \\___ \\| '_ \\ / _` | |/ / _ \\            #\n");
		printf(" #          ____) | | | | (_| |   <  __/            #\n");
		printf(" #         |_____/|_| |_|\\__,_|_|\\_\\___|            #\n");
		printf(" #                                                  #\n");

		printf(" #                                                  #\n");
		printf(" #                                                  #\n");
		printf(" #                 PLAY NOW!                        #\n");
		printf(" #                                                  #\n");
		printf(" #                 EXIT         ¡û                  #\n");
		printf(" #                                                  #\n");
		printf(" #                                                  #\n");
		printf(" #                          Operations: W S A D     #\n");
		printf(" #                          DesignedBy: Hsiang.     #\n");
		printf(" #                                                  #\n");
		printf(" ####################################################\n");
		printf("\n");
	}
	else {
		return 0;
	}
	return 1;
}

