#include <stdio.h>


const char *stringadd(char *);

int main()
{
	char a[10] = "123456780";
	const char *b;
	int i;
	b = stringadd(a);
	for(i=0; i<10; i++) {
			printf("%c", b[i]);
	}

}

const char  *stringadd(char *a) {
	char *tmp = a;
	return tmp;
}
