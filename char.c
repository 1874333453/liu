#include<stdio.h>
main()
{
char a[100],word[30];
int i=0,j,na=0,nw=0,count=0,sum=0;
printf("请输入一句英文\n");
while((a[i] = getchar()) != '\n')
{
na++;
i++;
}
i=0;
printf("请输入要查找的单词\n");
while((word[i] = getchar()) != '\n')
{
nw++;
i++;
}
for (i = 0; i < na; i++)
{   count = 0;
    if(a[i] == word[0])
	{
        for(j=0;j<nw;j++)
		{
            if(a[i+j] == word[j])
			{
                count++;
            }
        }
        if(count == nw)
			sum++;
    }
}
printf("你查找的单词个数:%d\n",sum);
}