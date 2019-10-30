#include <stdio.h>

int main()
{
	int i,t;
	scanf("%d", &t);
	for (i=0;i<t;i++)
	{
		char c[5000];
		scanf("%s",c);
		int j,a=0,b=0,ch=0;
		for (j=0; c[j]!='\0'; j++)
		{
			if (c[j] == 'A') a++;
			if (c[j] == 'B') b++;
			if (c[j] == '.') ch++;
		}
//		printf("ch=%d, b=%d , c=%s\t", ch, b, c);
		if (ch > 0 && ch-b < 1 && b>0)
		{
			printf("Case #%d: Y\n", i+1);
		}
		else printf("Case #%d: N\n", i+1);
	}

	return 0;
}
