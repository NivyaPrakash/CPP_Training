#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int slno;
	string name,name1,name2,name3,name4;
	float m1, m2, m3, m4,m01,m02,m03,m04,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m35;
	double avg;
	scanf("%d%s,%f%f%f%f",&slno,&name,&m1,&m2,&m3,&m4);
	scanf("%s,%f%f%f%f",  &name1, &m01, &m02, &m03, &m04);
	scanf("%s,%f%f%f%f", &name2, &m11, &m12, &m13, &m14);
	scanf("%s,%f%f%f%f", &name3, &m21, &m22, &m23, &m24);
	scanf("%s,%f%f%f%f", &name4, &m31, &m32, &m33, &m34);
	printf("==============================================");
	printf("\n id | name | m1 | m2 | m3 | m4 | avg |\n");
	printf("==============================================");
	printf("\n %d \n %s \n %f \n %f \n %f \n %f", slno, name, m1, m2, m3, m4);
	slno++;
	printf("\n %d \n %s \n %f \n %f \n %f \n %f", slno, name1, m01, m02, m03, m04);
	slno++;
	printf("\n %d \n %s \n %f \n %f \n %f \n %f", slno, name2, m11, m12, m13, m14);
	slno++;
	printf("\n %d \n %s \n %f \n %f \n %f \n %f", slno, name3, m21, m22, m23, m24);
	slno++;
	printf("\n %d \n %s \n %f \n %f \n %f \n %f", slno, name4, m31, m32, m33, m34);
	

}