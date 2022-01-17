#include<stdio.h>

/*int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	
	printf("请输入密码>:");
	scanf("%s",password);
	getchar();  
	
	while((ch = getchar() )!= '\n')
	{
		;
	}
	
	printf("请确认(Y/N)>:");
	ret = getchar();
	if(ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	
	
	return 0;
}*/


/*int main()
{
	int i = 0;
	for(i=1;i<=10;i++)
	//int i = 1;while(i<=10){ i++; }
	{
		printf("%d ",i);
	}
	
return 0;
}*/
/*int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	 for(i=0;i<10;i++)
		 printf("%d ",arr[i]);
	
return 0;
}*/

//int main()
/*{
	int i = 0;
	for(i=0;i<10;i++)
	{
		int j = 0;
		for(j=0;j<10;j++)
		{
			printf("hehe\n");
		}
	}
	
	return 0;
}*/

int main()
{
	int i = 1;
	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=10);
	
	return 0;
}
