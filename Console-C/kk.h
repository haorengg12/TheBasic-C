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
void hh(){     HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);     //获得标准输出设备句柄  
    CONSOLE_CURSOR_INFO cci;         //定义光标信息结构体  
    GetConsoleCursorInfo(handle_out, &cci);      //获得当前光标信息  
    cci.bVisible =  false;        //设置光标为不可见  
    SetConsoleCursorInfo(handle_out, &cci);  
    }
void aa(){     HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);     //获得标准输出设备句柄  
	CONSOLE_CURSOR_INFO cci;         //定义光标信息结构体  
	GetConsoleCursorInfo(handle_out, &cci);      //获得当前光标信息  
    cci.dwSize = 100;    //设置光标尺寸为100  
    SetConsoleCursorInfo(handle_out, &cci);  
	}
#endif
