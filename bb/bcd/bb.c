//Developed By Basant Singh
//Roll No:A29
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void indexa();
struct water_index
{   char state[20],dist[20];
    float ph,wqii;
    int ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod;
}water,k,v,sort[7],tempp;

tim()
{
   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );
   printf("\t\t\t\t%s", asctime(info));

   return(0);
}

void indexa()
{   float tot=0;
    float qn[13];
    int i;
    for(int i=0;i<8;i++)
    {
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
    }
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
        water.wqii=wqt/tot;
        printf("%f\n",water.wqii);
        if(water.wqii>0 && water.wqii<25)
            printf("Excellent Water Quality.\n");
        else if(water.wqii>26 && water.wqii<50)
            printf("Good Water Water Quality.\n");
        else if(water.wqii>51 && water.wqii<75)
            printf("Poor Water Quality.\n");
        if(water.wqii>76 && water.wqii <100)
            printf("Very Poor Water Quality.\n");
        else
            printf("Unsuitable For Drinking.\n \n");
        return(0);


}

int main()
{
    FILE *fp,*fp1;
	char c;
	int i,zon,del_line,menu,flag=0,temp;
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
                    indexa();
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
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
                    indexa();
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
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
                    indexa();
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
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
                    indexa();
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
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
                    indexa();
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
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
                    indexa();
                    fprintf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
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
                    printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                             c= getc(fp);
                             fflush(stdout);

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {
                            if(strcasecmp(k.dist,water.dist)!=0)
                            {
                            fp1=fopen("replica.txt","a");
                            fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                        fclose(fp);
                        fclose(fp1);
                        remove("North_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                         c = getc(fp);
                        while (c != EOF)
                        {   c=getc(fp);
                            printf("%c",c);

                        }
                        fclose(fp);
                        printf("\t===============================================================\n");
                        goto delm;



                break;

			case 2:
                    fp=fopen("East_zone.txt","r");
                    char z[]="East_zone.txt";
                    char d[]="replica.txt";
                    printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                             c= getc(fp);
                             fflush(stdout);

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {
                            if(strcasecmp(k.dist,water.dist)!=0)
                            {
                            fp1=fopen("replica.txt","a");
                            fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                        fclose(fp);
                        fclose(fp1);
                        remove("East_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                         c = getc(fp);
                        while (c != EOF)
                        {   c=getc(fp);
                            printf("%c",c);

                        }
                        fclose(fp);
                        printf("\t===============================================================\n");
                        goto delm;


			case 3:
					fp=fopen("West_zone.txt","r");
                    char e[]="West_zone.txt";
                    char f[]="replica.txt";
                     printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                             c= getc(fp);
                             fflush(stdout);

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {
                            if(strcasecmp(k.dist,water.dist)!=0)
                            {
                            fp1=fopen("replica.txt","a");
                            fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                        fclose(fp);
                        fclose(fp1);
                        remove("West_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                         c = getc(fp);
                        while (c != EOF)
                        {   c=getc(fp);
                            printf("%c",c);

                        }
                        fclose(fp);
                        printf("\t===============================================================\n");
                        goto delm;


			case 4:
					fp=fopen("South_zone.txt","r");
                    char g[]="South_zone.txt";
                    char h[]="replica.txt";
                    printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                             c= getc(fp);
                             fflush(stdout);

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {
                            if(strcasecmp(k.dist,water.dist)!=0)
                            {
                            fp1=fopen("replica.txt","a");
                            fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                        fclose(fp);
                        fclose(fp1);
                        remove("South_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                         c = getc(fp);
                        while (c != EOF)
                        {   c=getc(fp);
                            printf("%c",c);

                        }
                        fclose(fp);
                        printf("\t===============================================================\n");
                        goto delm;

			case 5:
					fp=fopen("Central_zone.txt","r");
                    char i[]="Central_zone.txt";
                    char j[]="replica.txt";
                   printf("Enter District:");
                    scanf("%s",k.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                             c= getc(fp);
                             fflush(stdout);

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {
                            if(strcasecmp(k.dist,water.dist)!=0)
                            {
                            fp1=fopen("replica.txt","a");
                            fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                        fclose(fp);
                        fclose(fp1);
                        remove("Central_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_zone.txt", "r");
                         c = getc(fp);
                        while (c != EOF)
                        {   c=getc(fp);
                            printf("%c",c);

                        }
                        fclose(fp);
                        printf("\t===============================================================\n");
                        goto delm;

            case 6:
					fp=fopen("North_East_zone.txt","r");
                    char k[]="North_East_zone.txt";
                    char l[]="replica.txt";
                    printf("Enter District:");
                    scanf("%s",v.dist);
                    if (fp== NULL)
                            {
                                printf("Cannot open file \n");
                                exit(0);
                            }
                             c= getc(fp);
                             fflush(stdout);

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {
                            if(strcasecmp(v.dist,water.dist)!=0)
                            {
                            fp1=fopen("replica.txt","a");
                            fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;

                        }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!");
                        fclose(fp);
                        fclose(fp1);
                        remove("North_zone.txt");
                        rename(b,a);
                        printf("\n The contents of file after being modified are as follows:\n");
                        fp= fopen("North_East_zone.txt", "r");
                         c = getc(fp);
                        while (c != EOF)
                        {   c=getc(fp);
                            printf("%c",c);

                        }
                        fclose(fp);
                        printf("\t===============================================================\n");
                        goto delm;





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
			case 1:{ int i=0;
                    fp=fopen("North_zone.txt","r");
                    fp1=fopen("Sort_data.txt","a");
                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                      {  while(i!=0)
                      {
                      fprintf(fp1,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",sort[i].dist,sort[i].state,sort[i].ph,sort[i].ec,sort[i].tds,sort[i].ta,sort[i].th,sort[i].tss,sort[i].cal,sort[i].mag,sort[i].chl,sort[i].nit,sort[i].sul,sort[i].doxy,sort[i].bod,sort[i].wqii);
                           i++;
                        }
                        }



                        }

                    fclose(fp);
                   // fclose(fp1);

                    printf("\n\t===============================================================\n");
                    goto sortm;

                    break;

			case 2:
                    fp=fopen("East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",v.state);
                    fprintf(fp,"State = %s\n",v.state);
                    printf("Enter District\n");
                    scanf("%s",v.dist);
                    fprintf(fp, "District = %s\n", v.dist);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 3:
					fp=fopen("West_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",v.state);
                    fprintf(fp,"State = %s\n",v.state);
                    printf("Enter District\n");
                    scanf("%s",v.dist);
                    fprintf(fp, "District = %s\n", v.dist);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 4:
					fp=fopen("South_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",v.state);
                    fprintf(fp,"State = %s\n",v.state);
                    printf("Enter District\n");
                    scanf("%s",v.dist);
                    fprintf(fp, "District = %s\n", v.dist);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 5:
					fp=fopen("Central_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",v.state);
                    fprintf(fp,"State = %s\n",v.state);
                    printf("Enter District\n");
                    scanf("%s",v.dist);
                    fprintf(fp, "District = %s\n", v.dist);
                    fclose(fp);
                    printf("\t===============================================================\n");
                    goto sortm;

                    break;

			case 6:
					fp=fopen("North_East_zone.txt","a");
                    printf("Enter State\n");
                    scanf("%s",v.state);
                    fprintf(fp,"State = %s\n",v.state);
                    printf("Enter District\n");
                    scanf("%s",v.dist);
                    fprintf(fp, "District = %s\n", v.dist);
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

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                            printf("\t\tDistrict=%s \n \t\tState=%s \n \t\tPh Value=%f \n \t\tElectricity Conductivity=%d \n \t\tTotal Dissolved Solids=%d \n \t\tTotal alkalinity=%d \n \t\tTotal Hardness=%d \n \t\tTotal Suspended Solids=%d \n \t\tCalcium=%d \n \t\tMagnesium=%d \n \t\tChlorides=%d, \n \t\tNitrate=%d \n \t\tSulphate=%d \n \t\tDissolved Oxygen=%d \n \t\tBiological Oxygen Demand=%d \n \t\tWater Quality=%f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                        if(flag==0)
                        printf("\nData Not Found!!\n");
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

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                            printf("\t\tDistrict=%s \n \t\tState=%s \n \t\tPh Value=%f \n \t\tElectricity Conductivity=%d \n \t\tTotal Dissolved Solids=%d \n \t\tTotal alkalinity=%d \n \t\tTotal Hardness=%d \n \t\tTotal Suspended Solids=%d \n \t\tCalcium=%d \n \t\tMagnesium=%d \n \t\tChlorides=%d, \n \t\tNitrate=%d \n \t\tSulphate=%d \n \t\tDissolved Oxygen=%d \n \t\tBiological Oxygen Demand=%d \n \t\tWater Quality=%f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                    if(flag==0)
                    printf("\nData Not Found!!\n");
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

                     while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                            printf("\t\tDistrict=%s \n \t\tState=%s \n \t\tPh Value=%f \n \t\tElectricity Conductivity=%d \n \t\tTotal Dissolved Solids=%d \n \t\tTotal alkalinity=%d \n \t\tTotal Hardness=%d \n \t\tTotal Suspended Solids=%d \n \t\tCalcium=%d \n \t\tMagnesium=%d \n \t\tChlorides=%d, \n \t\tNitrate=%d \n \t\tSulphate=%d \n \t\tDissolved Oxygen=%d \n \t\tBiological Oxygen Demand=%d \n \t\tWater Quality=%f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                    if(flag==0)
                    printf("\nData Not Found!!\n");
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

                     while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                             printf("\t\tDistrict=%s \n \t\tState=%s \n \t\tPh Value=%f \n \t\tElectricity Conductivity=%d \n \t\tTotal Dissolved Solids=%d \n \t\tTotal alkalinity=%d \n \t\tTotal Hardness=%d \n \t\tTotal Suspended Solids=%d \n \t\tCalcium=%d \n \t\tMagnesium=%d \n \t\tChlorides=%d, \n \t\tNitrate=%d \n \t\tSulphate=%d \n \t\tDissolved Oxygen=%d \n \t\tBiological Oxygen Demand=%d \n \t\tWater Quality=%f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }
                    if(flag==0)
                    printf("\nData Not Found!!\n");
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

                    while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                             printf("\t\tDistrict=%s \n \t\tState=%s \n \t\tPh Value=%f \n \t\tElectricity Conductivity=%d \n \t\tTotal Dissolved Solids=%d \n \t\tTotal alkalinity=%d \n \t\tTotal Hardness=%d \n \t\tTotal Suspended Solids=%d \n \t\tCalcium=%d \n \t\tMagnesium=%d \n \t\tChlorides=%d, \n \t\tNitrate=%d \n \t\tSulphate=%d \n \t\tDissolved Oxygen=%d \n \t\tBiological Oxygen Demand=%d \n \t\tWater Quality=%f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }

                    if(flag==0)
                    printf("\nData Not Found!!\n");
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

                     while(fscanf(fp,"%s  %s  %f  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d  %d %f\n",&water.dist,&water.state,&water.ph,&water.ec,&water.tds,&water.ta,&water.th,&water.tss,&water.cal,&water.mag,&water.chl,&water.nit,&water.sul,&water.doxy,&water.bod,&water.wqii)!=EOF)
                        {   if(strcasecmp(k.dist,water.dist)==0)
                            {
                            printf("\t\tDistrict=%s \n \t\tState=%s \n \t\tPh Value=%f \n \t\tElectricity Conductivity=%d \n \t\tTotal Dissolved Solids=%d \n \t\tTotal alkalinity=%d \n \t\tTotal Hardness=%d \n \t\tTotal Suspended Solids=%d \n \t\tCalcium=%d \n \t\tMagnesium=%d \n \t\tChlorides=%d, \n \t\tNitrate=%d \n \t\tSulphate=%d \n \t\tDissolved Oxygen=%d \n \t\tBiological Oxygen Demand=%d \n \t\tWater Quality=%f\n",water.dist,water.state,water.ph,water.ec,water.tds,water.ta,water.th,water.tss,water.cal,water.mag,water.chl,water.nit,water.sul,water.doxy,water.bod,water.wqii);
                            flag=1;
                            }
                        }
                    if(flag==0)
                    printf("\nData Not Found!!\n");
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
