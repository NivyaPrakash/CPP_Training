#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	/*char name[20] = {'N','i','v','y','a'};
	for (int i = 0;i < 20;i++)
	{
		printf("%c=%d\n", name[i], name[i]);
		for(int i=39,count=0;)
	}*/

	//char name[20] = { '\0' };
	char s3[50] = { '\0' };
	strcat(s3, "Nivya prakash");
	printf("\ns3:%s\n", s3);
	strcpy(s3, "amol");
	printf("\ns3:%s\n")
}