#include <stdio.h>
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

	int i, j;
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

	printf("%-20s%-20s%-15s%-15s\n", "제목", "아티스트", "장르", "재생시간");
	for (i = 0; i < 8; i++) {
		printf("%-20s%-20s%-15s%-d초\n", arr[i].sg_name, arr[i].artist, arr[i].genre, arr[i].time);
	}

	return 0;
}
