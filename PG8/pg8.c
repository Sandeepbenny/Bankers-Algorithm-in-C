#include<stdio.h>
void main()
	{
	int k=0,output[10],d=0,ins[5],i,avail[5],allocated[10][5],need[10][5],MAX[10][5],pno,P[10],j,rz,count=0;
	printf("ENter the number of resources");
	scanf("%d",&rz);
	printf(" \n Enter the max instances of each resource \n ");
	for(i=0,i<rz;i++)
	{
	avail[i]=0;
	printf("%c=",(i+97));
	scanf("%d",&ins[1]);
	}
	printf("Enter the number of process");
	scanf("%d",&pno);
	printf("Enter the allocation matrix");
	for(i=0;i<rz;i++)
	printf("%c",(i+97));
	printf("\n");
	for(i=0;i<pno;i++)
	{ 
	P[i]=i;
	printf("P[%d]",P[i]);
	for(j=0;j<rz;j++)
	{
	scanf("%d",&allocated[i][j]);
	avail[j]+=allocated[i][j];
	}
	}
	printf("\n Enter the Max Matrix");
	for(i=0;i<rz;i++)
	{
	printf("%c",(i=97));
	avail[i]=ins[i]-avail[i]:
	}
	printf("P[%d]",i);
	for(j=0;j<rz;j++)
	scanf("%d",&MAX[i][j]);
	}	
	printf("\n");
	A: d=-1;
	for(i=0;i<pno;i++)
	{
	count=0;t=p[i];
	for(j=0;j<rz;j++)
	{
