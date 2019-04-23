/*************************************************************************
	> File Name: shuchu.c
	> Author: 谈尤帅 
	> Mail: 2924381097@qq.com 
	> Created Time: 2019年04月23日 星期二 18时04分45秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

int main (){
    char hostname[32];
    char* name;
    char* path;
    name = getenv("LOGNAME");
    path = getenv("PWD");
    gethostname(hostname, sizeof(hostname));
    printf("\033[;34m%s\033[0m", name);
    printf("\033[;34m@\033[0m");
    printf("\033[;34m%s\033[0m", hostname);
    printf("\033[;34m:\033[0m");
    printf("\033[;34m%s\n",path);
    return 0;
}
