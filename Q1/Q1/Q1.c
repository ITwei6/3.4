#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
��1����ʾ�û���������������65535���������������û������뱣�������������� ��4�֣�
��2�����û�����Ĳ������������򳬳���Χʱ��������ʾ�������Ҫ���û��������� ��6�֣�
��3�����û������������������65535��������ʱ���ҵ������������������й����������ԴӴ�С��˳����ʾ���� ��10�֣�
*/

int main()
{
	int check=1,b;
	double num1, num2;
	int n1, n2, max,i;
	char c;
	
	while (check) {
		printf("��������������65535�����������ÿո�����:");
		b=scanf("%lf %lf",&num1, &num2);
		do {
			scanf("%c",&c);
		}
		while(c!='\n');	// �����������ȷ���´�scanf����ȷ��ȡ
		
		// �ж������Ƿ�Ϊ���֡���������ַ����������ţ�bֵΪ0�����������������Ϊ���֣�bֵΪ2
		if(b==2&&num1>0&&num1<=65535&&num2>0&&num2<=65535){
			check=0;
		}
		else
		{
			check=1;
			continue;
		}
		
		// �ж������Ƿ�Ϊ������
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

	printf("%d��%d�Ĺ������У�",n1,n2);

	for (i=max;i>0;i--) {
		if (n1%i==0 && n2%i==0) {
			printf("%d\t", i);
		}
	}

	printf("\n");
	return 0;
}