#include "kk.h"
/*背景图片 字体大小 */

void guanji(int ,int *,int );
int shurushijian(int *,int *,int ,int );
int huoquxianzaishijian(int *,int * ,int *);
void hide(void);
void show(void);


int main()
{
	cc(); 
	aa();
	int k,x,y,tt,hh,mm,h,m,s;
	printf("随时关闭控制台，以取消关机\n");
	x=shurushijian(&hh,&mm,tt,x);
	huoquxianzaishijian(&h,&m,&s);
	if(hh>=h) k=(hh-h)*3600+(mm-m)*60-s;
	else k=(24+hh-h)*3600+(mm-m)*60-s;
	guanji(k,&x,y);
	exit(0);
}

int shurushijian(int *hh,int *mm,int tt,int x)
{
	printf("输入的时间格式为hhmm：\n=>=>=>=>=>=>=>=>");
	scanf("%d",&tt);
	system("cls");
	printf("关机/休眠/重启？（1/2/3）");
	scanf("%d",&x);
	hide();
	*hh= tt/100; 
	*mm=tt-*hh*100;
	return x;
}

int huoquxianzaishijian(int *h,int *m ,int *s)
{
	int argc;
	char **argv;
	time_t temp;
	struct tm *t;
	time(&temp);
	t=localtime(&temp);
	*m=t->tm_min;
	*s=t->tm_sec;
	*h=t->tm_hour;
}

void guanji(int k,int *x,int y)
{
	int i,a,b,c;
	i=k-60;
	system("cls");
	show();
	if(i>60)
	{
		kk();
		hh();
		for(k;k>60;k--) /*倒数计时*/
		{
			c = k % 60;
		    b = k / 60;
		    a = b / 60;
		    b = b % 60;
			printf("还剩%d:%d:%d",a,b,c);
			if(*x==1)printf("关机");
			else if(*x==2) printf("休眠");
			else printf("重启");
			sleep(1);
			system("cls");
		}
		system("cls"); 
		if(*x==1)
		{
		system("C:\\WINDOWS\\system32\\shutdown -s -f -t 60");
		}
		else if(*x==2)
		{
		sleep(60);
		system("C:\\WINDOWS\\system32\\shutdown -h");
		}
		else
		{
		sleep(60);
		system("C:\\WINDOWS\\system32\\shutdown -r");
		}
		return;
	}
		else
		{
		printf("关闭程序以取消操作");
		sleep(k);/*这里用管道*/
		if(*x==0)system("C:\\WINDOWS\\system32\\shutdown -s -f -t 0");
		else if(*x==1)system("C:\\WINDOWS\\system32\\shutdown -h");
		else system("C:\\WINDOWS\\system32\\shutdown -r");
		}return;
}

void hide(void)
{
HWND hwnd;
hwnd=FindWindow("ConsoleWindowClass",NULL);
if(hwnd)
{
ShowOwnedPopups(hwnd,SW_HIDE);
ShowWindow(hwnd,SW_HIDE);
}
}

void show(void)
{
HWND hwnd;
hwnd=FindWindow("ConsoleWindowClass",NULL);
if(hwnd)
{
ShowOwnedPopups(hwnd,SW_SHOW);
ShowWindow(hwnd,SW_SHOW);
}
}
