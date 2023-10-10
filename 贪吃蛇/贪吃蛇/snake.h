#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include<time.h>


#define map_height 20
#define map_width 40
#define up 'w'
#define down 's'
#define right 'd'
#define left 'a'

typedef struct //定义食物和蛇节点位置
{
	int x;
	int y;
}Food,Snakenode;

typedef struct
{
	Snakenode snakeNODE[1000];//蛇节点上限
	int length;
	int speed;
}Snake;

/*函数定义*/
void GotoXY(int, int);//光标定位
void Hide();//隐藏光标
void Help();//帮助
void About();//关于
void InitMap();//地图初始化
void printfood();//食物生成
void speedcontrol();//速度控制
int Snakemove();//蛇移动
int check();//自撞与撞墙检测
int Menu();//主菜单
