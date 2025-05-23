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
	
	strcpy(playlist[*playlist_cnt].sg_name, arr[sg_num-1].sg_name); //playlist[*playlist_cnt]->sg.name main 함수 내의 playlist 배열에 화살표로 왜 접근하지 못하는가? 
	strcpy(playlist[*playlist_cnt].artist, arr[sg_num-1].artist);
	strcpy(playlist[*playlist_cnt].genre, arr[sg_num-1].genre);
	playlist[*playlist_cnt].time = arr[sg_num-1].time;
    	
    for(i = 0; i <= *playlist_cnt; i++){
    	printf("%-20s%-20s%-15s%-d초\n", playlist[i].sg_name, playlist[i].artist, playlist[i].genre, playlist[i].time);
	}
	
	sum += playlist[*playlist_cnt].time;
	(*playlist_cnt)++;
	printf("총 재생시간 : %d\n",sum);
}

int main(void){
	
	int i,j, sg_num, cnt = 0;
	int playlist_cnt=0;
	char keyword[30] = "";
	CHART playlist[5];
	CHART arr[] = {
	{1,"별 보러 가자","박보검","balled",316},
	{2,"Awake","방탄소년단","balled",226},
	{3,"I'm Fine","방탄소년단","hiphop",226},
	{4,"봄날","방탄소년단","hiphop",274},
	{5,"아낙네","MINO","hiphop",241},
	{6,"thank u, next","Ariana Grande","pop",208},
	{7,"Attention","Charlie Puth","pop",211},
	{8,"How long","Charlie Puth","pop",198},
	};	
	
	printf("   %-20s%-20s%-15s%-15s\n", "제목", "아티스트", "장르", "재생시간");
	for (i = 0; i < 8; i++) {
		printf("%d: %-20s%-20s%-15s%-d초\n", i+1,arr[i].sg_name, arr[i].artist, arr[i].genre, arr[i].time);
	}
	
	while(1){
		
	printf("플레이리스트에 추가할 곡 번호? ");
	scanf("%d",&sg_num);
	if(sg_num == 0){
		break;
	}
	
	printf("<<플레이리스트>>\n");
	if(arr[sg_num-1].sg_num == sg_num){
		set_playlist(arr, playlist, sg_num, &playlist_cnt);
	}
	else{
		printf("잘못된 곡 번호입니다.\n");
	}
	
  }//while 
	return 0;
}
