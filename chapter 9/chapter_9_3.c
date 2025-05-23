#include <stdio.h>
#include <string.h>//Lowercase letters will be changed into UPPERCASE LETTERS.
#include <ctype.h> //소문자 -> 대문자 대문자 -> 소문자 lower upper is,to 
int main(void) {
	int i, len;
	char str[100] = "";
	printf("문자열? ");
	gets(str);

	len = strlen(str);
	printf("변환 후: ");
	for (i = 0; i < len - 1; i++) {
		if (isspace(str[i]) != 0) {
			str[i] = ' ';
			printf("%c", str[i]);
		}
		if (islower(str[i]) != 0) {
			str[i] = toupper(str[i]);
			printf("%c", str[i]);
		}
		else if (isupper(str[i]) != 0) {
			str[i] = tolower(str[i]);
			printf("%c", str[i]);
		}
	}

	return 0;
}
