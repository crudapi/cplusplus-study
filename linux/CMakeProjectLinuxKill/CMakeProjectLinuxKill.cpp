﻿// CMakeProjectLinuxKill.cpp: 定义应用程序的入口点。
//

#include "CMakeProjectLinuxKill.h"

using namespace std;

#include<stdio.h>  
#include<stdlib.h>  
#include <pthread.h>  
#include <unistd.h> //sleep
void* thfunc(void* arg)
{
	int i = 1;
	printf("thread start-------- \n");
	while (1)
	{
		i++;
		pthread_testcancel();
	}

	return (void*)0;
}
int main()
{
	void* ret = NULL;
	int iret = 0;
	pthread_t tid;
	pthread_create(&tid, NULL, thfunc, NULL);
	sleep(1);

	pthread_cancel(tid);//È¡ÏûÏß³Ì  
	pthread_join(tid, &ret);
	if (ret == PTHREAD_CANCELED)
		printf("thread has stopped,and exit code: %d\n", ret);
	else
		printf("some error occured");

	return 0;

}