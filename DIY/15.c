/*古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
（输出前40个月即可）*/
#include <stdio.h> 

int main(){
	int f1=1;
	int f2=1;
	int i;
	for(i=1;i<=20;i++){
		printf("%12d%12d", f1,f2);	//%12d 输出12位的整型数，按右对齐 
		if(i%2==0){
			printf("\n");
		}
		f1=f1+f2;
		f2=f1+f2;
	}
	return 0;
}
/*
i	1	2	3	4	...
f1	1	2	5	13
f2	1	3	8	21
输出结果：1 1 2 3 5 8 13 21(对）... 
*/ 
