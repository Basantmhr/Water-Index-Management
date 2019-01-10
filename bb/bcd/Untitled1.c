//Developed By Basant Singh
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void indexa();
    extern float ph;
  extern  int ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod;

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
{

    float qn[13];
        qn[0]=100*(ph-7)/(8.5-7);
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
        qn[12]=100*(bod-0)/(5.0);
    float wqt=0,wqi[13],wn[13]={0.2190,0.371,0.0037,0.0155,0.0062,0.0037,0.025,0.061,0.0074,0.0412,0.01236,0.3723,0.3723};

        for(int i=0;i<13;i++)
        {
            wqi[i]=qn[i]*wn[i];
            wqt=wqt+wqi[i];

        }
        printf("%f",wqt);
}
void main()
{

    FILE *fp,*fp1;
	char state[20],dist[20],c;
	int zon,del_line,menu,temp=1;
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
                    fp=fopen("North_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph);
                    fprintf(fp,"pH= %f\n",ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    fprintf(fp,"Total Alkalinity= %d\n",ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    fprintf(fp,"Total Hardness = %d\n",th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    fprintf(fp,"calcium Value= %d\n",cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    fprintf(fp,"Total Magnesium= %d\n",mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    fprintf(fp,"Total Chlorides= %d\n",chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    fprintf(fp,"Total Nitrate= %d\n",nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    fprintf(fp,"Total Sulphate= %d\n",sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",bod);
                    index();
                    fclose(fp);
                    goto inm;


                    break;

			case 2:
                    fp=fopen("East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph);
                    fprintf(fp,"pH= %f\n",ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    fprintf(fp,"Total Alkalinity= %d\n",ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    fprintf(fp,"Total Hardness = %d\n",th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    fprintf(fp,"calcium Value= %d\n",cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    fprintf(fp,"Total Magnesium= %d\n",mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    fprintf(fp,"Total Chlorides= %d\n",chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    fprintf(fp,"Total Nitrate= %d\n",nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    fprintf(fp,"Total Sulphate= %d\n",sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",bod);
                    fclose(fp);
                    goto inm;

                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph);
                    fprintf(fp,"pH= %f\n",ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    fprintf(fp,"Total Alkalinity= %d\n",ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    fprintf(fp,"Total Hardness = %d\n",th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    fprintf(fp,"calcium Value= %d\n",cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    fprintf(fp,"Total Magnesium= %d\n",mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    fprintf(fp,"Total Chlorides= %d\n",chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    fprintf(fp,"Total Nitrate= %d\n",nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    fprintf(fp,"Total Sulphate= %d\n",sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",bod);
                    goto inm;

                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph);
                    fprintf(fp,"pH= %f\n",ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    fprintf(fp,"Total Alkalinity= %d\n",ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    fprintf(fp,"Total Hardness = %d\n",th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    fprintf(fp,"calcium Value= %d\n",cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    fprintf(fp,"Total Magnesium= %d\n",mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    fprintf(fp,"Total Chlorides= %d\n",chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    fprintf(fp,"Total Nitrate= %d\n",nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    fprintf(fp,"Total Sulphate= %d\n",sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",bod);
                    goto inm;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph);
                    fprintf(fp,"pH= %f\n",ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    fprintf(fp,"Total Alkalinity= %d\n",ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    fprintf(fp,"Total Hardness = %d\n",th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    fprintf(fp,"calcium Value= %d\n",cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    fprintf(fp,"Total Magnesium= %d\n",mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    fprintf(fp,"Total Chlorides= %d\n",chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    fprintf(fp,"Total Nitrate= %d\n",nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    fprintf(fp,"Total Sulphate= %d\n",sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",bod);
                    goto inm;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&ph);
                    fprintf(fp,"pH= %f\n",ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&ta);
                    fprintf(fp,"Total Alkalinity= %d\n",ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&th);
                    fprintf(fp,"Total Hardness = %d\n",th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&cal);
                    fprintf(fp,"calcium Value= %d\n",cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&mag);
                    fprintf(fp,"Total Magnesium= %d\n",mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&chl);
                    fprintf(fp,"Total Chlorides= %d\n",chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&nit);
                    fprintf(fp,"Total Nitrate= %d\n",nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&sul);
                    fprintf(fp,"Total Sulphate= %d\n",sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",bod);
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
                    goto modm;

                    break;

			case 2:
                    fp=fopen("East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto modm;

                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto modm;

                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto modm;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto modm;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
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
                   // char d[]="North_zone.txt";
                   /* printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);*/
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

			case 2:
                    fp=fopen("East_zone.txt","a");
                     char z[]="East_zone.txt";
                    char d[]="replica.txt";
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
                        remove("East_zone.txt");
                        rename(d,z);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("East_zone.txt", "r");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            printf("%c", c);
                            c= getc(fp);
                        }
                    goto delm;
                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                    char e[]="West_zone.txt";
                    char f[]="replica.txt";
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
                        remove("West_zone.txt");
                        rename(f,e);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("West_zone.txt", "r");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            printf("%c", c);
                            c= getc(fp);
                        }
                    goto delm;
                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                 char g[]="South_zone.txt";
                    char h[]="replica.txt";
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
                        remove("South_zone.txt");
                        rename(h,g);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("South_zone.txt", "r");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            printf("%c", c);
                            c= getc(fp);
                        }
                    goto delm;
                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                   char i[]="Central_zone.txt";
                    char j[]="replica.txt";
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
                        remove("Central_zone.txt");
                        rename(j,i);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("Central_zone.txt", "r");
                        c = getc(fp);
                        while (c != EOF)
                        {
                            printf("%c", c);
                            c= getc(fp);
                        }
                    goto delm;
                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                    char k[]="North_East_zone.txt";
                    char l[]="replica.txt";
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
                        remove("North_East_zone.txt");
                        rename(l,k);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_East_zone.txt", "r");
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
                    fp=fopen("North_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto sortm;

                    break;

			case 2:
                    fp=fopen("East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto sortm;

                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto sortm;

                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto sortm;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                    goto sortm;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
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
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                    printf("Enter State\n");
                    scanf("%s",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    while (c!= '/')
                    {
                        printf ("%c", c);
                        c= fgetc(fp);
                    }
                    goto dism;



                    break;

			case 2:
                    fp=fopen("East_zone.txt","r");
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                     while (c!= '/')
                    {
                        printf ("%c\n", c);
                        c= fgetc(fp);
                    }
                    goto dism;


                    break;

			case 3:
					fp=fopen("West_zone.txt","r");
					if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                     while (c!= '/')
                    {
                        printf ("%c\n", c);
                        c= fgetc(fp);
                    }
                    goto dism;

                    break;

			case 4:
					fp=fopen("South_zone.txt","r");
					if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                     while (c!= '/')
                    {
                        printf ("%c\n", c);
                        c= fgetc(fp);
                    }
                    goto dism;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","r");
					if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                     while (c!= '/')
                    {
                        printf ("%c\n", c);
                        c= fgetc(fp);
                    }
                    goto dism;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","r");
					if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                    printf("Enter State\n");
                    scanf("%s",state);
                    fprintf(fp,"State = %s\n",state);
                    printf("Enter District\n");
                    scanf("%s",dist);
                    fprintf(fp, "District = %s\n", dist);
                     while (c!= '/')
                    {
                        printf ("%c\n", c);
                        c= fgetc(fp);
                    }
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
