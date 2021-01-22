#include <stdio.h>
#define OUTPUT "Grace_kid.c"
#define CODE "#include <stdio.h>%c#define OUTPUT %c%s%c%c#define CODE %c%s%c%c#define FT(x)int main(){fprintf(fopen(OUTPUT, x), CODE, 10, 34, OUTPUT, 34, 10, 34, CODE, 34, 10, 10, 34, 34, 10, 10, 10, 10);}%cFT(%cw%c)%c/*%chfrankly%c*/%c"
#define FT(x)int main(){fprintf(fopen(OUTPUT, x), CODE, 10, 34, OUTPUT, 34, 10, 34, CODE, 34, 10, 10, 34, 34, 10, 10, 10, 10);}
FT("w")
/*
hfrankly
*/
