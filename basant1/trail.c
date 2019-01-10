//Developed By Basant Singh
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void indexa();
char state[20],dist[20];
   // float ph;
 //   int ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod;
struct water_index
{   char state[20],dist[20];
    float ph;
    int ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod;
}water,d;
tim()
{
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );
   printf("%s", asctime(info));

   return(0);
}

void indexa()
{   float tot=0;
    float qn[13],wqii;
        qn[0]=100*(ph -7)/(8.5-7);
        qn[1]=100*(ec-0)/(300.0);
        qn[2]=100*(tds-0)/(500.0);
        qn[3]=100*(ta-0)/(120.0);
        qn[4]=100*(th-0)/(300.0);
        qn[5]=100*(tss-0)/(500.0);
        qn[6]=100*(cal-0)/(75.0);
        qn[7]=100*(mag-0)/(30.0);
        qn[8]=100*(chl-0)/(250.0);
        qn[9]=100*(nit-0)/(45.0);
        qn[10]=100*(sul-0)/(150.0);
        qn[11]=100*(doxy-0)/(5.0);
        qn[12]=100*(bod-14.6)/(5-14.6);
    float wqt=0,wqi[13],wn[13]={0.2190,0.371,0.0037,0.0155,0.0062,0.0037,0.025,0.061,0.0074,0.0412,0.01236,0.3723,0.3723};

        for(int i=0;i<13;i++)
        {
            wqi[i]=qn[i]*wn[i];
            wqt=wqt+wqi[i];

        }
        for(int i=0;i<13;i++)
        {
            tot=tot+wn[i];
        }
        wqii=wqt/tot;
        printf("%f\n",wqii);
        if(wqii>0&&wqii<25)
            printf("Excellent Water Quality.\n");
        else if(wqii>26&&wqii<50)
            printf("Good Water Water Quality.\n");
        else if(wqii>51&&wqii<75)
            printf("Poor Water Quality.\n");
        if(wqii>76&&wqii<100)
            printf("Very Poor Water Quality.\n");
        else
            printf("Unsuitable For Drinking.\n \n");
        return(0);


}

float main()
{   ;
    FILE *fp,*fp1;//,*fp2,*fp3,*fp3,*fp4,*fp5,*fp6;
	char c,st[30],statet[20],distt[20];
	int zon,del_line,menu,temp=1,flag;
	float qn[13];

	printf("%c",tim());
	printf("\t \t \tWater Quality Checker Version 1.2\n");
	mainm:
	printf("Main Menu.\n");
	printf("Enter Respective Number.\n");
	printf("1.Water Index Checking.\n");
	printf("2.Modification.\n");
	printf("3.Deletion.\n");
	printf("4.Sorting.\n");
	printf("5.Display.\n");
	scanf("%d",&menu);
	switch(menu)
	{
	case 1:
	inm:
	printf("\nEnter Repective number associated with Zone\n");
	printf("1.NORTH ZONE\n");
	printf("2.EAST ZONE\n");
	printf("3.WEST ZONE\n");
	printf("4.SOUTH ZONE\n");
	printf("5.CENTRAL ZONE\n");
	printf("6.NORTH EAST ZONE\n");
	printf("7.EXIT\n");
	printf("8.Back to Main Menu\n");
	scanf("%d",&zon);
	switch(zon)
		{
			case 1:
                    fp=fopen("North_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    printf("Enter distict\n");
                    scanf("%s",dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph );
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",dist,state,ph ,ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod);
                    indexa();
                    fclose(fp);
                    goto inm;


                    break;



			case 7:
					exit(1);
					break;
            case 8:
                    goto mainm;


			default:
					printf("Invalid Number\n");
					goto inm;

	}
	break;
	case 2:
	modm:
    printf("\nEnter Repective number associated with Zone\n");
	printf("1.NORTH ZONE\n");
	printf("2.EAST ZONE\n");
	printf("3.WEST ZONE\n");
	printf("4.SOUTH ZONE\n");
	printf("5.CENTRAL ZONE\n");
	printf("6.NORTH EAST ZONE\n");
	printf("7.EXIT\n");
	printf("8.Back to Main Menu\n");
	scanf("%d",&zon);
	switch(zon)
		{
			case 1:
                    fp=fopen("North_zone.txt","r");
                    char a[]="North_zone.txt";
                    char b[]="replica.txt";
                    c=getc(fp);
                     while (c!= EOF)
                    {
                        printf("%c", c);
                        c= getc(fp);
                    }
                        rewind(fp);
                        printf("Enter line number of the line to be deleted:\n");
                        scanf("%d", &del_line);


                        fp1 = fopen("replica.txt", "w");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            c= getc(fp);
                            if (c == '\n')
                                temp++;
                                if(temp != del_line)
                                {
                                putc(c, fp1);
                                }
                               else {
                                       printf("Enter new Line:\n");
                                       scanf("%s",st);
                                       fflush(stdin);
                                       fprintf(fp,"%s",st);
                                       temp++;
                                    }

                                    c = getc(fp);


                        }

                        fclose(fp);
                        fclose(fp1);
                        remove("North_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            printf("%c", c);
                            c= getc(fp);
                        }

                    fclose(fp);
                    goto modm;

                    break;



			case 7:
					exit(1);
					break;
            case 8:
                    goto mainm;


			default:
					printf("Invalid Number\n");
					goto modm;

	}
	break;
	case 3:
	delm:
    printf("\nEnter Repective number associated with Zone\n");
	printf("1.NORTH ZONE\n");
	printf("2.EAST ZONE\n");
	printf("3.WEST ZONE\n");
	printf("4.SOUTH ZONE\n");
	printf("5.CENTRAL ZONE\n");
	printf("6.NORTH EAST ZONE\n");
	printf("7.EXIT\n");
	printf("8.Back to Main Menu\n");
	scanf("%d",&zon);
	switch(zon)
		{
			case 1:

                    fp=fopen("North_zone.txt","r");
                   // char d[]="North_zone.txt";
                   /* printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter distict\n");
                    scanf("%s",dist);
                    fprintf(fp, "distict = %s\n", dist);*/
                    char a[]="North_zone.txt";
                    char b[]="replica.txt";
                    c=getc(fp);
                     while (c!= EOF)
                    {
                        printf("%c", c);
                        c= getc(fp);
                    }
                        rewind(fp);
                        printf("Enter line number of the line to be deleted:\n");
                        scanf("%d", &del_line);
                        fp1 = fopen("replica.txt", "w");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            c= getc(fp);
                            if (c == '\n')
                                temp++;
                                if (temp != del_line)
                                {
                                putc(c, fp1);
                                }
                        }

                        fclose(fp);
                        fclose(fp1);
                        remove("North_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            printf("%c", c);
                            c= getc(fp);
                        }
                        goto delm;


                break;


			case 7:
					exit(1);
					break;

             case 8:
                    goto mainm;


			default:
					printf("Invalid Number\n");
					goto delm;


	}break;
	case 4:
	sortm:
	printf("\nEnter Repective number associated with Zone\n");
	printf("1.NORTH ZONE\n");
	printf("2.EAST ZONE\n");
	printf("3.WEST ZONE\n");
	printf("4.SOUTH ZONE\n");
	printf("5.CENTRAL ZONE\n");
	printf("6.NORTH EAST ZONE\n");
	printf("7.EXIT\n");
	printf("8.Back to Main Menu\n");
	scanf("%d",&zon);
	switch(zon)
		{
			case 1:
                    fp=fopen("North_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",statet);
                    fprintf(fp,"State = %s\n",statet);
                    printf("Enter distict\n");
                    scanf("%s",distt);
                    fprintf(fp, "distict = %s\n", distt);
                    fclose(fp);
                    goto sortm;

                    break;



			case 7:
					exit(1);
					break;
            case 8:
                    goto mainm;


			default:
					printf("Invalid Number\n");
					goto sortm;

	}break;

	case 5:
	dism:
	printf("Enter Repective number associated with Zone\n");
	printf("1.NORTH ZONE\n");
	printf("2.EAST ZONE\n");
	printf("3.WEST ZONE\n");
	printf("4.SOUTH ZONE\n");
	printf("5.CENTRAL ZONE\n");
	printf("6.NORTH EAST ZONE\n");
	printf("7.EXIT\n");
	printf("8.Back to Main Menu\n");
	scanf("%d",&zon);
	switch(zon)
		{
			case 1:
                    fp=fopen("North_zone.txt","r");
                    printf("Enter distict:");
                    scanf("%s",distt);
                    if (fp==NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                        while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",dist,state,ph,ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod))
                                {   if(strcmp(distt,dist)==0)
                                        {   printf("distict=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ");
                                            flag=1;
                                        }

                                }

                        if(flag==0)
                            printf("\nData Not Found!!");
                    fclose(fp);
                    goto dism;



                    break;


			case 7:
					exit(1);
					break;

            case 8:
                    goto mainm;

			default:
					printf("Invalid Number\n");
					goto dism;


	break;
	}

        fcloseall();
    }


}
