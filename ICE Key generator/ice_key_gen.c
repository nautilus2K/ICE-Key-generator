//
// C
//

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MIN_CHAR 33
#define MAX_CHAR 126

int main(int argc, char** argv)
{
	puts(">> ICE Key generator: welcome!");
	
	int keyCount = 0;
	
	puts("Enter keys count:");
	scanf("%d", &keyCount);
	
	srand(time(NULL));
	
	for (int i = 0; i < keyCount; i++)
	{
		printf("%d: ", (i + 1));
		for (int j = 0; j < 8; j++)
		{
			int c = rand() % (MAX_CHAR + 1 - MIN_CHAR) + MIN_CHAR;
			putc(c, stdout);
		}
		putc('\n', stdout);
	}
	
	puts(">> ICE Key generator: ready!");
	
	system("pause");
	
	return 0;
}

