//Developed By Basant Singh
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void indexa();
struct water_index
{   char state[20],dist[20];
    float ph;
    int ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod;
}water,k;
tim()
{
   time_t rawtime;
   struct tm *info;

   time( &rawtime );

   info = localtime( &rawtime );
   printf("\t\t\t\t%s", asctime(info));

   return(0);
}

void indexa()
{   float tot=0;
    float qn[13],wqii;
        qn[0]=100*(water.ph-7)/(8.5-7);
        qn[1]=100*(water.ec-0)/(300.0);
        qn[2]=100*(water.tds-0)/(500.0);
        qn[3]=100*(water.ta-0)/(120.0);
        qn[4]=100*(water.th-0)/(300.0);
        qn[5]=100*(water.tss-0)/(500.0);
        qn[6]=100*(water.cal-0)/(75.0);
        qn[7]=100*(water.mag-0)/(30.0);
        qn[8]=100*(water.chl-0)/(250.0);
        qn[9]=100*(water.nit-0)/(45.0);
        qn[10]=100*(water.sul-0)/(150.0);
        qn[11]=100*(water.doxy-0)/(5.0);
        qn[12]=100*(water.bod-14.6)/(5-14.6);
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

int main()
{
    FILE *fp,*fp1;
	char c,statet[20],distt[20];
	int zon,del_line,menu,temp=1,flag;
	tim();
	printf("\t===============================================================\n");
	printf("\t \t \tWater Quality Checker Version 1.2\n");
	mainm:
	printf("\t===============================================================\n");
	printf("Main Menu.\n");
	printf("\n");
	printf("Enter Respective Number.\n");
	printf("1.Water Index Checking.\n");
	printf("2.Deletion.\n");
	printf("3.Sorting.\n");
	printf("4.Display.\n");
	printf("5.Exit.\n");
	printf("\t===============================================================\n");
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
                    scanf("%s",water.state);
                    printf("Enter District\n");
                    scanf("%s",water.dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                    indexa();
                    printf("\t===============================================================\n");
                    fclose(fp);
                    goto inm;


                    break;

			case 2:
                    fp=fopen("East_zone.txt","a");
                     printf("Enter State\n");
                    scanf("%s",water.state);
                    printf("Enter District\n");
                    scanf("%s",water.dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                    indexa();
                    printf("\t===============================================================\n");
                    fclose(fp);
                    goto inm;

                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                     printf("Enter State\n");
                    scanf("%s",water.state);
                    printf("Enter District\n");
                    scanf("%s",water.dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                    indexa();
                    printf("\t===============================================================\n");
                    fclose(fp);
                    goto inm;

                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                     printf("Enter State\n");
                    scanf("%s",water.state);
                    printf("Enter District\n");
                    scanf("%s",water.dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                    indexa();
                    printf("\t===============================================================\n");
                    fclose(fp);
                    goto inm;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",water.state);
                    printf("Enter District\n");
                    scanf("%s",water.dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                    indexa();
                    printf("\t===============================================================\n");
                    fclose(fp);
                    goto inm;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                     printf("Enter State\n");
                    scanf("%s",water.state);
                    printf("Enter District\n");
                    scanf("%s",water.dist);
                    printf("Enter pH Value:\n");
                    scanf("%f",&water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                    indexa();
                    printf("\t===============================================================\n");
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
                    printf("\t===============================================================\n");
					goto inm;

	}
	break;

	case 2:
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
                        printf("\t===============================================================\n");
                        goto delm;


                break;

			case 2:
                    fp=fopen("East_zone.txt","r");
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
                        printf("\t===============================================================\n");
                        goto delm;
                        break;

			case 3:
					fp=fopen("West_zone.txt","r");
                    char e[]="West_zone.txt";
                    char f[]="replica.txt";
                    c=getc(fp);
                    while (c!= EOF)
                    {
                        printf("%c", c);
                        c= getc(fp);
                    }
                        rewind(fp);
                        printf("\nEnter line number of the line to be deleted:\n");
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
                        printf("\t===============================================================\n");
                        goto delm;
                        break;

			case 4:
					fp=fopen("South_zone.txt","r");
                    char g[]="South_zone.txt";
                    char h[]="replica.txt";
                    c=getc(fp);
                    while (c!= EOF)
                    {
                        printf("%c", c);
                        c= getc(fp);
                    }
                        rewind(fp);
                        printf("\nEnter line number of the line to be deleted:\n");
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
                        printf("\t===============================================================\n");
                        goto delm;
                        break;

			case 5:
					fp=fopen("Central_zone.txt","r");
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
                        printf("\t===============================================================\n");
                        goto delm;
                        break;

			case 6:
					fp=fopen("North_East_zone.txt","r");
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
                        printf("\t===============================================================\n");
                        goto delm;
                        break;

			case 7:
					exit(1);
					break;

             case 8:
                    goto mainm;


			default:
					printf("Invalid Number\n");
                    printf("\t===============================================================\n");
					goto delm;


	}break;
	case 3:
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
                    printf("Enter District\n");
                    scanf("%s",distt);
                    fprintf(fp, "District = %s\n", distt);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 2:
                    fp=fopen("East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",statet);
                    fprintf(fp,"State = %s\n",statet);
                    printf("Enter District\n");
                    scanf("%s",distt);
                    fprintf(fp, "District = %s\n", distt);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",statet);
                    fprintf(fp,"State = %s\n",statet);
                    printf("Enter District\n");
                    scanf("%s",distt);
                    fprintf(fp, "District = %s\n", distt);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",statet);
                    fprintf(fp,"State = %s\n",statet);
                    printf("Enter District\n");
                    scanf("%s",distt);
                    fprintf(fp, "District = %s\n", distt);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",statet);
                    fprintf(fp,"State = %s\n",statet);
                    printf("Enter District\n");
                    scanf("%s",distt);
                    fprintf(fp, "District = %s\n", distt);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",statet);
                    fprintf(fp,"State = %s\n",statet);
                    printf("Enter District\n");
                    scanf("%s",distt);
                    fprintf(fp, "District = %s\n", distt);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 7:
					exit(1);
					break;
            case 8:
                    goto mainm;


			default:
					printf("Invalid Number\n");
                    printf("\t===============================================================\n");
					goto sortm;

	}break;

	case 4:
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
                    printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                            printf("District=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d, \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto dism;



                    break;

			case 2:
                    fp=fopen("East_zone.txt","r");
                    printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                                {
                                printf("District=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d, \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                                flag=1;
                                }
                        }

                    if(flag==0)
                    printf("\nData Not Found!!");
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto dism;


                    break;

			case 3:
					fp=fopen("West_zone.txt","r");
					printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                                {
                                printf("District=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d, \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                                flag=1;
                                }
                        }

                    if(flag==0)
                    printf("\nData Not Found!!");
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto dism;

                    break;

			case 4:
					fp=fopen("South_zone.txt","r");
					printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod)!=EOF)
                        {  if(strcasecmp(k.dist,water.dist)==0)
                                {
                                printf("District=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d, \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                                flag=1;
                                }
                        }

                    if(flag==0)
                    printf("\nData Not Found!!");
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto dism;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","r");
					printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod)!=EOF)
                            {   if(strcasecmp(k.dist,water.dist)==0)
                                    {
                                    printf("District=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d, \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                                    flag=1;
                                    }
                            }

                    if(flag==0)
                    printf("\nData Not Found!!");
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto dism;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","r");
					printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d \n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod)!=EOF)
                            {   if(strcasecmp(k.dist,water.dist)==0)
                                    {
                                    printf("District=%s \n State=%s \n Ph Value=%f \n Electricity Conductivity=%d \n Total Dissolved Solids=%d \n Total alkalinity=%d \n Total Hardness=%d \n Total Suspended Solids=%d \n Calcium=%d \n Magnesium=%d \n Chlorides=%d, \n Nitrate=%d \n Sulphate=%d \n Dissolved Oxygen=%d \n Biological Oxygen Demand=%d \n ",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod);
                                    flag=1;
                                    }
                            }

                    if(flag==0)
                    printf("\nData Not Found!!");
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto dism;

                    break;

			case 7:
					exit(1);
					break;

            case 8:
                    goto mainm;

			default:
					printf("Invalid Number\n");
                    printf("\t===============================================================\n");
					goto dism;


	break;
	}

        fcloseall();
    case 5:
            exit(0);
    }


}
