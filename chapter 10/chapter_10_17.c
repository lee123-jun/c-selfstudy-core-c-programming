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
	{"별 보러 가자","박보검","balled",316},
	{"Awake","방탄소년단","balled",226},
	{"I'm Fine","방탄소년단","hiphop",226},
	{"봄날","방탄소년단","hiphop",274},
	{"아낙네","MINO","hiphop",241},
	{"thank u, next","Ariana Grande","pop",208},
	{"Attention","Charlie Puth","pop",211},
	{"How long","Charlie Puth","pop",198},
	};

	while (1) {
		printf("키워드(제목/아티스트)? ");
		gets(keyword);
		//printf("%s \n", keyword); //입력확인용

		if (keyword[0] == '.'){
			break;
		}

		for (i = 0; i < 8; i++) {
			char* ptr = strstr(arr[i].sg_name, keyword);
			char* ptr1 = strstr(arr[i].artist, keyword);
			if (ptr == NULL) {
			//	printf("ptr NULL값이 반환됩니다.\n"); //입력확인용
			}
			if(ptr1 == NULL) {
			//	printf("ptr1 NULL값이 반환됩니다.\n"); //입력확인용
			}
			if (ptr != NULL || ptr1 != NULL) {
				printf("%-20s%-20s%-15s%-d초\n", arr[i].sg_name, arr[i].artist, arr[i].genre, arr[i].time);
				
			}
		} //for

	}//while
	return 0;
}
