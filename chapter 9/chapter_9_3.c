#include <stdio.h>
#include <string.h>//Lowercase letters will be changed into UPPERCASE LETTERS.
#include <ctype.h> //�ҹ��� -> �빮�� �빮�� -> �ҹ��� lower upper is,to 
int main(void) {
	int i, len;
	char str[100] = "";
	printf("���ڿ�? ");
	gets(str);

	len = strlen(str);
	printf("��ȯ ��: ");
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
