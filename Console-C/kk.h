#ifndef _KK_H
#define _KK_H

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h> 

void kk(){system("C:\\WINDOWS\\system32\\mode con cols=16 lines=3");}
void cc(){system("C:\\WINDOWS\\system32\\mode con cols=25 lines=5");}
void hh(){     HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);     //��ñ�׼����豸���  
    CONSOLE_CURSOR_INFO cci;         //��������Ϣ�ṹ��  
    GetConsoleCursorInfo(handle_out, &cci);      //��õ�ǰ�����Ϣ  
    cci.bVisible =  false;        //���ù��Ϊ���ɼ�  
    SetConsoleCursorInfo(handle_out, &cci);  
    }
void aa(){     HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);     //��ñ�׼����豸���  
	CONSOLE_CURSOR_INFO cci;         //��������Ϣ�ṹ��  
	GetConsoleCursorInfo(handle_out, &cci);      //��õ�ǰ�����Ϣ  
    cci.dwSize = 100;    //���ù��ߴ�Ϊ100  
    SetConsoleCursorInfo(handle_out, &cci);  
	}
#endif
