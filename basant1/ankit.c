#include<stdio.h>
//#include<conio.h>
#include<string.h>
#include<stdlib.h>
int display();
int up();
int bh();
int pj();
int sk();
int upr();
int bhr();
int pjr();
int skr();
int improve();
int check();
int sort();
int north();
int east();
int add();
int main()
{
system("color 20");
system("cls");
	printf("\t\t  Water Quality checker\t\t\n");
	printf("press 1 for load\n");
	printf("press 2 to display data\n");
	printf("press 3 for check\n");
	printf("press 4 for sorting\n");
	printf("press 5 for searhing\n");
	printf("press 6 to  exit program");
int A;
scanf("%d",&A);
switch(A)
{
	case 1:improve();
	break;
	case 2:display();
	break;
	case 3:check();
	break;
	case 4: sort();
	break;
	case 5: find();
	break;
	//case 6:getch();
	//break;
	default :
	printf("Please choose the correct option.");
	main();
	return 0;
}
}
int display()
{
system("cls");
int s;
	printf("press 1 if you want to display uttar pradesh  data\n");
	printf("press 2 if you want to display punjab data\n");
	printf("press 3 if you want to display bihar data\n");
	printf("press 4 if you want to display  sikkim data\n");
	scanf("%d",&s);
	switch(s)
	{
		case 1: upr();
		break;
		case 2: pjr();
		break;
		case 3: bhr();
		break;
		case 4: skr();
		break;
		default :
		printf("press right key");

	}
		return 0;
}
int improve()
{
system("cls");
int s;
	printf("press 1 if you want to enter north data\n");
	printf("press 2 if you want to enter east data\n");
	scanf("%d",&s);
	switch(s)
	{
		case 1: north();
		break;
		case 2: east();
		break;
		default :
		printf("press right key");
		return 0;
	}
}

int north()
{
	system("cls");
	printf("press 1. if want to load data of Uttar pradesh\n");
	printf("press 2. if want to load data of Punjab\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:up();
		break;
		case 2:pj();
		break;
		default :
		printf("Please choose the correct option.");
		return 0;
	}

}
struct ind
{
	char a[100];
	float ph;
	int tds,ec,alkinity,th,od;
}q[10],t,k;
int up()
{
	system("cls");
	 int i;
  FILE *Z;
     Z=fopen("Data.txt","a");
     for(i=1;i<=2;i++)
     {
	 fflush(stdin);
	printf("enter the district name ");
	gets(q[i].a);
	fprintf(Z,"%s",q[i].a);
	fflush(stdin);
	printf("enter the ph ");
	scanf("%f",&q[i].ph);
	fprintf(Z,"%f",q[i].ph);
	fflush(stdin);
	printf("enter the tds");
	scanf("%d",&q[i].tds);
		fprintf(Z,"%d",q[i].tds);
	fflush(stdin);
	printf("enter the electric conductivity");
	scanf("%d",&q[i].ec);
		fprintf(Z,"%d",q[i].ec);
	fflush(stdin);
	printf("enter the alkinity ");
	scanf("%d",&q[i].alkinity);
		fprintf(Z,"%d",q[i].alkinity);
	fflush(stdin);
	printf("enter the TH value");
	scanf("%d",&q[i].th);
		fprintf(Z,"%d",q[i].th);
	fflush(stdin);
	printf("enter the value of total dissolved Oxygen");
	scanf("%d",&q[i].od);
		fprintf(Z,"%d",q[i].od);
	printf("\n");
	}
fclose(Z);
return 0;
}
int upr()
{
system("cls");
int i,a;
	FILE *w;
	w=fopen("D://Data.txt","r");

	for(i=1;i<=2;i++)
{
	fscanf(w,"%s%f%d%d%d%d%d",&q[i].a,&q[i].ph,&q[i].tds,&q[i].ec,&q[i].alkinity,&q[i].th,&q[i].od);
	printf("%s\t%f\t%d\t%d\t%d\t%d\t%d\n",q[i].a,q[i].ph,q[i].tds,q[i].ec,q[i].alkinity,q[i].th,q[i].od);
}
fclose(w);
printf("\npress 1 for main menu");
	scanf("%d",&a);
	if(a==1)
	main();
}
int pj()
{
	system("cls");
	int i;
     FILE *Z;
     Z=fopen("D://Data1.txt","a");
     for(i=1;i<=2;i++)
     {
	 fflush(stdin);
	printf("enter the district name ");
	gets(q[i].a);
	fprintf(Z,"%s",q[i].a);
	fflush(stdin);
	printf("enter the ph ");
	scanf("%f",&q[i].ph);
	fprintf(Z,"%f",q[i].ph);
	fflush(stdin);
	printf("enter the tds");
	scanf("%d",&q[i].tds);
	fprintf(Z,"%d",q[i].tds);
	fflush(stdin);
	printf("enter the electric conductivity");
	scanf("%d",&q[i].ec);
	fprintf(Z,"%d",q[i].ec);
	fflush(stdin);
	printf("enter the alkinity ");
	scanf("%d",&q[i].alkinity);
	fprintf(Z,"%d",q[i].alkinity);
	fflush(stdin);
	printf("enter the TH value");
	scanf("%d",&q[i].th);
	fprintf(Z,"%d",q[i].th);
	fflush(stdin);
	printf("enter the value of tota dissolved Oxygen");
	scanf("%d",&q[i].od);
	fprintf(Z,"%d",q[i].od);
	printf("\n");
}
fclose(Z);
return 0;
}
int pjr()
{
	system("cls");
int i,a;
	FILE *w;
	w=fopen("D://Data1.txt","r");
		for(i=1;i<=2;i++)
{
fscanf(w,"%s%f%d%d%d%d%d",&q[i].a,&q[i].ph,&q[i].tds,&q[i].ec,&q[i].alkinity,&q[i].th,&q[i].od);
printf("%s\t%f\t%d\t%d\t%d\t%d\t%d\n",q[i].a,q[i].ph,q[i].tds,q[i].ec,q[i].alkinity,q[i].th,q[i].od);
}
	fclose(w);
	printf("\npress 1 for main menu");
	scanf("%d",&a);
	if(a==1)
	main();
}
int east()
{
	system("cls");
	printf("press 1. if want to enter data of bihar\n");
	printf("press 2. if want to enter data of sikkim\n");
	int a;
	scanf("%d",&a);
	switch(a)
	{
		case 1:bh();
		break;
		case 2:sk();
		break;
		default :
		printf("Please choose the correct option.");
		return 0;
	}

}
int bh()
{
	system("cls");
		int i;
     FILE *Z;
     Z=fopen("D://Data2.txt","a");
     for(i=1;i<=2;i++)
     {
	 fflush(stdin);
	printf("enter the district name ");
	gets(q[i].a);
	fprintf(Z,"%s",q[i].a);
	fflush(stdin);
	printf("enter the ph ");
	scanf("%f",&q[i].ph);
	fprintf(Z,"%f",q[i].ph);
	fflush(stdin);
	printf("enter the tds");
	scanf("%d",&q[i].tds);
	fprintf(Z,"%d",q[i].tds);
	fflush(stdin);
	printf("enter the electric conductivity");
	scanf("%d",&q[i].ec);
	fprintf(Z,"%d",q[i].ec);
	fflush(stdin);
	printf("enter the alkinity ");
	scanf("%d",&q[i].alkinity);
	fprintf(Z,"%d",q[i].alkinity);
	fflush(stdin);
	printf("enter the TH value");
	scanf("%d",&q[i].th);
	fprintf(Z,"%d",q[i].th);
	fflush(stdin);
	printf("enter the value of tota dissolved Oxygen");
	scanf("%d",&q[i].od);
	fprintf(Z,"%d",q[i].od);
	printf("\n");
}
fclose(Z);
return 0;
}
int bhr()
{
	system("cls");
int i,a;

	FILE *w;
	w=fopen("D://Data2.txt","r");
		for(i=1;i<=2;i++)
	{
	fscanf(w,"%s%f%d%d%d%d%d",&q[i].a,&q[i].ph,&q[i].tds,&q[i].ec,&q[i].alkinity,&q[i].th,&q[i].od);
	printf("%s\t%f\t%d\t%d\t%d\t%d\t%d\n",q[i].a,q[i].ph,q[i].tds,q[i].ec,q[i].alkinity,q[i].th,q[i].od);
	}
fclose(w);
printf("\npress 1 for main menu");
	scanf("%d",&a);
	if(a==1)
	main();
return 0;
}
int sk()
{
	system("cls");
		int i;
     FILE *Z;
     Z=fopen("D://Data3.txt","a");
     for(i=1;i<=2;i++)
     {
	 fflush(stdin);
	printf("enter the district name ");
	gets(q[i].a);
	fprintf(Z,"%s",q[i].a);
	fflush(stdin);
	printf("enter the ph ");
	scanf("%f",&q[i].ph);
	fprintf(Z,"%f",q[i].ph);
	fflush(stdin);
	printf("enter the tds");
	scanf("%d",&q[i].tds);
	fprintf(Z,"%d",q[i].tds);
	fflush(stdin);
	printf("enter the electric conductivity");
	scanf("%d",&q[i].ec);
	fprintf(Z,"%d",q[i].ec);
	fflush(stdin);
	printf("enter the alkinity ");
	scanf("%d",&q[i].alkinity);
	fprintf(Z,"%d",q[i].alkinity);
	fflush(stdin);
	printf("enter the TH value");
	scanf("%d",&q[i].th);
	fprintf(Z,"%d",q[i].th);
	fflush(stdin);
	printf("enter the value of tota dissolved Oxygen");
	scanf("%d",&q[i].od);
	fprintf(Z,"%d",q[i].od);
	printf("\n");
}
fclose(Z);
return 0;
}
int skr()
{
	system("cls");
	int i,a;
	FILE *w;
	w=fopen("D://Data3.txt","r");
		for(i=1;i<=2;i++)
{
	fscanf(w,"%s%f%d%d%d%d%d",&q[i].a,&q[i].ph,&q[i].tds,&q[i].ec,&q[i].alkinity,&q[i].th,&q[i].od);
	printf("%s\t%f\t%d\t%d\t%d\t%d\t%d\n",q[i].a,q[i].ph,q[i].tds,q[i].ec,q[i].alkinity,q[i].th,q[i].od);
}	fclose(w);
printf("\npress 1 for main menu");
	scanf("%d",&a);
	if(a==1)
	main();
return 0;
}



int check()
{
	system("cls");
	int tds,al,n;
	float ph;
	printf("enter the ph of water ");
	scanf("%f",&ph);
	printf("enter the tds of water ");
	scanf("%d",&tds);
	printf("enter the alkinity ");
	scanf("%d",&al);
	if(ph==7.0&&30<=tds<=500&&al<=300)
	printf("water is okkk\n");
	else
	printf("dont drink it\n");
	return 0;
}
int add()
{
	system("cls");
		int i;
     FILE *Z;
     Z=fopen("D://Datas.txt","w");
     for(i=1;i<=8;i++)
     {
	 fflush(stdin);
	printf("enter the district name ");
	gets(q[i].a);
	fprintf(Z,"%s",q[i].a);
	fflush(stdin);
	printf("enter the ph ");
	scanf("%f",&q[i].ph);
	fprintf(Z,"%f",q[i].ph);
	fflush(stdin);
	printf("enter the tds");
	scanf("%d",&q[i].tds);
	fprintf(Z,"%d",q[i].tds);
	fflush(stdin);
	printf("enter the electric conductivity");
	scanf("%d",&q[i].ec);
	fprintf(Z,"%d",q[i].ec);
	fflush(stdin);
	printf("enter the alkinity ");
	scanf("%d",&q[i].alkinity);
	fprintf(Z,"%d",q[i].alkinity);
	fflush(stdin);
	printf("enter the TH value");
	scanf("%d",&q[i].th);
	fprintf(Z,"%d",q[i].th);
	fflush(stdin);
	printf("enter the value of tota dissolved Oxygen");
	scanf("%d",&q[i].od);
	fprintf(Z,"%d",q[i].od);
	printf("\n");
}
fclose(Z);
return 0;
}
int sort()
{
	int i,j,c;
	system("cls");
		FILE *z;
		z=fopen("D://Datas.txt","r");
		for(i=1;i<=8;i++)
	fscanf(z,"%s%f%d%d%d%d%d",&q[i].a,&q[i].ph,&q[i].tds,&q[i].ec,&q[i].alkinity,&q[i].th,&q[i].od);
			for(i=1;i<=8;i++)
		{
			for(j=0;j<=7;j++)
			{
				if(q[j].od>q[j+1].od)
				{
					t=q[j];
					q[j]=q[j+1];
					q[j+1]=t;
				}
			}
		}
			printf("data  with sorted  od of water\n\n");
			for(i=1;i<=8;i++)
			{
				printf("%s\t%f\t%d\t%d\t%d\t%d\t%d\n",q[i].a,q[i].ph,q[i].tds,q[i].ec,q[i].alkinity,q[i].th,q[i].od);

			}
			fclose(z);
	printf("\n\n");
	printf("press 1. if you want to go back to menu  \n\n");
	printf("press 2. if you want to exit  ");
	scanf("%d",&c);
	if(c==1)
	main();
	else if(c==2)
	  return 0;

}
int find()
{ int b,i;
   	FILE *d;
   	d=fopen("D://Datas.txt","r");
   		printf("enter the place name which you want to search  ");
   	scanf("%s",k.a);
   	for(i=0;i<=10;i++)
   while(fscanf(d,"%s%f%d%d%d%d",q[i].a,&q[i].ph,&q[i].tds,&q[i].ec,&q[i].alkinity,&q[i].th,&q[i].od) != EOF)
   {
	 if(strcmp(k.a,q[i].a)==0)
    printf("%s\t%f\t%d\t%d\t%d\n",q[i].a,q[i].ph,q[i].tds,q[i].ec,q[i].alkinity,q[i].th,q[i].od);
    }
	fclose(d);
	printf("press 1. if you want to go back to menu  \n\n");
	printf("press 2. if you want to exit  ");
	scanf("%d",&b);
	if(b==1)
	main();
	else if(b==2)
	  return 0;
}
