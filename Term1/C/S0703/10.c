#include <stdio.h>

main(){
	char www[] = "World\0Wide\0Web";
	printf("%s,%s,%s\n",www,www+6,www+11);
}
