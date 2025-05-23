#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* join_string(const char *str1, const char *str2)
{
	char *temp;
	int str1_len, str2_len, i, temp_len;
	str1_len = strlen(str1);
	str2_len = strlen(str2);
	
	temp = (char *)malloc(sizeof(char) * (str1_len + str2_len));
	
	for(i = 0; i <str1_len; i++)
	{
		temp[i] = str1[i];
	}
	
	for(i = 0; i < str2_len; i++)
	{
		temp[str1_len + i] = str2[i];
	}
	
	
	
	return temp;
}

int main(void)
{
	
	char str1[30];
	char str2[30];
	
	printf("첫 번째 문자열? ");
	gets(str1);
	printf("두 번째 문자열? ");
	gets(str2);
	
	printf("%s",join_string(str1, str2));
	
	return 0;
}
