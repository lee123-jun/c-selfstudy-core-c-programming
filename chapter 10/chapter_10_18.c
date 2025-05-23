#include <stdio.h>
#include <string.h>

typedef struct song {
	int sg_num;
	char sg_name[30];
	char artist[30];
	char genre[10];
	int time;
}CHART;

void set_playlist(CHART *arr,CHART *playlist, int sg_num, int *playlist_cnt){
	int i = 0;
	static int sum = 0;
	
	strcpy(playlist[*playlist_cnt].sg_name, arr[sg_num-1].sg_name); //playlist[*playlist_cnt]->sg.name main �Լ� ���� playlist �迭�� ȭ��ǥ�� �� �������� ���ϴ°�? 
	strcpy(playlist[*playlist_cnt].artist, arr[sg_num-1].artist);
	strcpy(playlist[*playlist_cnt].genre, arr[sg_num-1].genre);
	playlist[*playlist_cnt].time = arr[sg_num-1].time;
    	
    for(i = 0; i <= *playlist_cnt; i++){
    	printf("%-20s%-20s%-15s%-d��\n", playlist[i].sg_name, playlist[i].artist, playlist[i].genre, playlist[i].time);
	}
	
	sum += playlist[*playlist_cnt].time;
	(*playlist_cnt)++;
	printf("�� ����ð� : %d\n",sum);
}

int main(void){
	
	int i,j, sg_num, cnt = 0;
	int playlist_cnt=0;
	char keyword[30] = "";
	CHART playlist[5];
	CHART arr[] = {
	{1,"�� ���� ����","�ں���","balled",316},
	{2,"Awake","��ź�ҳ��","balled",226},
	{3,"I'm Fine","��ź�ҳ��","hiphop",226},
	{4,"����","��ź�ҳ��","hiphop",274},
	{5,"�Ƴ���","MINO","hiphop",241},
	{6,"thank u, next","Ariana Grande","pop",208},
	{7,"Attention","Charlie Puth","pop",211},
	{8,"How long","Charlie Puth","pop",198},
	};	
	
	printf("   %-20s%-20s%-15s%-15s\n", "����", "��Ƽ��Ʈ", "�帣", "����ð�");
	for (i = 0; i < 8; i++) {
		printf("%d: %-20s%-20s%-15s%-d��\n", i+1,arr[i].sg_name, arr[i].artist, arr[i].genre, arr[i].time);
	}
	
	while(1){
		
	printf("�÷��̸���Ʈ�� �߰��� �� ��ȣ? ");
	scanf("%d",&sg_num);
	if(sg_num == 0){
		break;
	}
	
	printf("<<�÷��̸���Ʈ>>\n");
	if(arr[sg_num-1].sg_num == sg_num){
		set_playlist(arr, playlist, sg_num, &playlist_cnt);
	}
	else{
		printf("�߸��� �� ��ȣ�Դϴ�.\n");
	}
	
  }//while 
	return 0;
}
