#include <stdio.h>

int main (int argc, char *argv[]) {
	for(int i = 1; i < argc; i++) {
		int valid = 1;
		for(int j = 0; argv[i][j] != 0; j++) {
			if ((argv[i][j] < 'a') | (argv[i][j] > 'z')) {
				valid = 0;
			}
		}
		if (valid) {
		printf("Argument %d: %s\n", i, argv[i]);
		} else {
			printf("Argument %d: %s is invalid\n", i, argv[i]);
		}
	}
	return 0;
}
