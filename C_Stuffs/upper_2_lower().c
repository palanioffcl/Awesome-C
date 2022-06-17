#include <stdio.h>
#include <ctype.h>

main() {
	char in;
	scanf("%c",in);
	if(isupper(in) == 1) {
		printf(tolower(in));
	}else{
		printf(toupper(in));
}
