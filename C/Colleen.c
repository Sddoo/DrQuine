#include <stdio.h>
/*
hfrankly
*/
void testFunc(void) {}
int main(void) {
	testFunc();
	char *c = "#include <stdio.h>%c/*%chfrankly%c*/%cvoid testFunc(void) {}%cint main(void) {%c%ctestFunc();%c%cchar *c = %c%s%c;%c%cprintf(c, 10, 10, 10, 10, 10, 10, 9, 10, 9, 34, c, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c%c/*%c%chfrankly%c%c*/%c}%c";
	printf(c, 10, 10, 10, 10, 10, 10, 9, 10, 9, 34, c, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
	/*
	hfrankly
	*/
}
