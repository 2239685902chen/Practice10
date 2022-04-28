#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Compare(const void* e1, const void* e2)
{
	return (strcmp((char*)e1, (char*)e2));
}
int main()
{
	char q[] = "jowenhsc";
	int e = 0;
	int w = strlen(q);
	qsort(q, w, sizeof(q[0]), Compare);
	for (e = 0; e < w; e++)
	{
		printf("%c ", q[e]);
	}
	printf("\n");
	return 0;
}