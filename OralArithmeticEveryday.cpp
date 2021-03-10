#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){
	int i=0,a=0,b=0;
	FILE *p = fopen("OralArithmeticEveryday_c.txt", "w");
	    if(p == NULL){
	        printf("open error!\n");
	        return 0;
	    }
	    
	srand((unsigned int)time(NULL));//设置当前时间为种子
	for (i = 0; i < 25; ++i){
	    a = rand()%20+1;//产生1~10的随机数
	    b = rand()%20+1;
	    fprintf(p,"%d + %d = \n",a,b);
	}
	for (i = 0; i < 25; ++i){
		a = rand()%20+1;//产生1~10的随机数
		b = rand()%20+1;
		fprintf(p,"%d - %d = \n",a,b);
	}
	for (i = 0; i < 25; ++i){
		a = rand()%20+1;//产生1~10的随机数
		b = rand()%20+1;
		fprintf(p,"%d × %d = \n",a,b);
	}
	for (i = 0; i < 25; ++i){
		a = rand()%20+1;//产生1~10的随机数
		b = rand()%20+1;
		fprintf(p,"%d ÷ %d = \n",a,b);
	}
	fclose(p);
} 
