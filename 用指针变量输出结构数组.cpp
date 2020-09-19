// 用指针变量输出结构数组 
/*struct stu
{
	int num;
	char *name;
	char sex;
	float score;
}boy[5]={{101,"Zhou ping",'M',45},
         {102,"Zhang ping",'M',62.5},
		 {103,"Liou fang",'F',92.5},
		 {104,"Cheng ling",'F',87},
		 {105,"Wang ming",'M',58},
		 };
		 
#include <stdio.h> 
 main()
{
	struct stu *ps;
	printf("No\tName\t\t\tSex\tScore\t\n");
	for(ps=boy;ps<boy+5;ps++)
	printf("%d\t%s\t\t%c\t%f\t\n",ps->num,ps->name,ps->sex,ps->score);
}*/

// manybook.c -- 包含多本书的图书目录
/*#include <stdio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS  100   // 最多可以容纳的图书册数
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; 
int main(void)
{
	struct book library[MAXBKS];    // book结构数组
	int count = 0;
	int index;
	
	printf("Please enter the book title.\n");
	printf("Please [enter] at the start of a line to stop.\n");
	while(count < MAXBKS && gets(library[count].title)!= NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		gets(library[count].author);
		printf("Now enter the value.\n");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')
		continue;    // 清空输入行
		if(count < MAXBKS)
		printf("Enter the next title.\n"); 
	}
	if(count > 0)
	{
		printf("Here is the list of your books: \n");
		for(index = 0;index < count;index++)
		printf("%s by %s: $%.2f\n",library[index].title,library[index].author,library[index].value);
	}
	else
	printf("No books?Too bad.\n");
	return 0;	  
}*/
