#include "main.h"
#include <unistd.h>
/** print_chessboard
 * takes in a 2D matrix
 * and represents it on the console
 */

void print_chessboard(char (*a)[8]){
	
	int i = 0;	

	while (i < 8)
	{
		char *letter = a[i];	
		write(1, letter, 8);
		i++;
		write(1, "\n", 1);
	}	
}

