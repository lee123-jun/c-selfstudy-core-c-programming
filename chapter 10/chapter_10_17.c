#include <stdio.h>
#include <string.h>

typedef struct song {
	char sg_name[30];
	char artist[30];
	char genre[10];
	int time;
}CHART;

typedef enum genre {
	balled,
	hiphop,
	pop,
}GENRE;

int main(void) {
	int i;
	char keyword[30] = "";
	CHART arr[] = {
	{"�� ���� ����","�ں���","balled",316},
	{"Awake","��ź�ҳ��","balled",226},
	{"I'm Fine","��ź�ҳ��","hiphop",226},
	{"����","��ź�ҳ��","hiphop",274},
	{"�Ƴ���","MINO","hiphop",241},
	{"thank u, next","Ariana Grande","pop",208},
	{"Attention","Charlie Puth","pop",211},
	{"How long","Charlie Puth","pop",198},
	};

	while (1) {
		printf("Ű����(����/��Ƽ��Ʈ)? ");
		gets(keyword);
		//printf("%s \n", keyword); //�Է�Ȯ�ο�

		if (keyword[0] == '.'){
			break;
		}

		for (i = 0; i < 8; i++) {
			char* ptr = strstr(arr[i].sg_name, keyword);
			char* ptr1 = strstr(arr[i].artist, keyword);
			if (ptr == NULL) {
			//	printf("ptr NULL���� ��ȯ�˴ϴ�.\n"); //�Է�Ȯ�ο�
			}
			if(ptr1 == NULL) {
			//	printf("ptr1 NULL���� ��ȯ�˴ϴ�.\n"); //�Է�Ȯ�ο�
			}
			if (ptr != NULL || ptr1 != NULL) {
				printf("%-20s%-20s%-15s%-d��\n", arr[i].sg_name, arr[i].artist, arr[i].genre, arr[i].time);
				
			}
		} //for

	}//while
	return 0;
}
