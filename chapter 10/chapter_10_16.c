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
	{"�� ���� ����","�ں���","balled",316},
	{"Awake","��ź�ҳ��","balled",226},
	{"I'm Fine","��ź�ҳ��","hiphop",226},
	{"����","��ź�ҳ��","hiphop",274},
	{"�Ƴ���","MINO","hiphop",241},
	{"thank u, next","Ariana Grande","pop",208},
	{"Attention","Charlie Puth","pop",211},
	{"How long","Charlie Puth","pop",198},
	};

	printf("%-20s%-20s%-15s%-15s\n", "����", "��Ƽ��Ʈ", "�帣", "����ð�");
	for (i = 0; i < 8; i++) {
		printf("%-20s%-20s%-15s%-d��\n", arr[i].sg_name, arr[i].artist, arr[i].genre, arr[i].time);
	}

	return 0;
}
