#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
（1）提示用户输入两个不大于65535的正整数，并将用户的输入保存在两个变量中 （4分）
（2）若用户输入的不都是正整数或超出范围时，程序提示输入错误并要求用户重新输入 （6分）
（3）当用户输入的是两个不大于65535的正整数时，找到这两个正整数的所有公因数，并以从大到小的顺序显示出来 （10分）
*/

int main()
{
	int check=1,b;
	double num1, num2;
	int n1, n2, max,i;
	char c;
	
	while (check) {
		printf("输入两个不大于65535的正整数（用空格间隔）:");
		b=scanf("%lf %lf",&num1, &num2);
		do {
			scanf("%c",&c);
		}
		while(c!='\n');	// 清除缓存区，确保下次scanf的正确读取
		
		// 判断输入是否为数字。如果输入字符或其他符号，b值为0，如输入的两个数均为数字，b值为2
		if(b==2&&num1>0&&num1<=65535&&num2>0&&num2<=65535){
			check=0;
		}
		else
		{
			check=1;
			continue;
		}
		
		// 判断输入是否为正整数
		if ((int)(num1+0.5)==num1 && (int)(num2+0.5)==num2){
			check=0;
		}
		else
		{
			check=1;
			continue;
		}

		n1=(int)(num1+0.5);
		n2=(int)(num2+0.5);
	}
	

	max = (n1>n2)?n1:n2;

	printf("%d和%d的公因数有：",n1,n2);

	for (i=max;i>0;i--) {
		if (n1%i==0 && n2%i==0) {
			printf("%d\t", i);
		}
	}

	printf("\n");
	return 0;
}