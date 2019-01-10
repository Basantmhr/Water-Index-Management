//Developed By Basant Singh
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
struct water_index
{ float ph;
    int ec,tds,ta,th,tss,cal,mag,chl,nit,sul,doxy,bod;





}water;
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
                    scanf("%f",&water.ph);
                    fprintf(fp,"pH= %f\n",water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    fprintf(fp,"Total Alkalinity= %d\n",water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    fprintf(fp,"Total Hardness = %d\n",water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    fprintf(fp,"calcium Value= %d\n",water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    fprintf(fp,"Total Magnesium= %d\n",water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    fprintf(fp,"Total Chlorides= %d\n",water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    fprintf(fp,"Total Nitrate= %d\n",water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    fprintf(fp,"Total Sulphate= %d\n",water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",water.bod);

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
                    scanf("%f",&water.ph);
                    fprintf(fp,"pH= %f\n",water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    fprintf(fp,"Total Alkalinity= %d\n",water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    fprintf(fp,"Total Hardness = %d\n",water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    fprintf(fp,"calcium Value= %d\n",water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    fprintf(fp,"Total Magnesium= %d\n",water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    fprintf(fp,"Total Chlorides= %d\n",water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    fprintf(fp,"Total Nitrate= %d\n",water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    fprintf(fp,"Total Sulphate= %d\n",water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",water.bod);
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
                    scanf("%f",&water.ph);
                    fprintf(fp,"pH= %f\n",water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    fprintf(fp,"Total Alkalinity= %d\n",water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    fprintf(fp,"Total Hardness = %d\n",water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    fprintf(fp,"calcium Value= %d\n",water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    fprintf(fp,"Total Magnesium= %d\n",water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    fprintf(fp,"Total Chlorides= %d\n",water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    fprintf(fp,"Total Nitrate= %d\n",water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    fprintf(fp,"Total Sulphate= %d\n",water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",water.bod);
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
                    scanf("%f",&water.ph);
                    fprintf(fp,"pH= %f\n",water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    fprintf(fp,"Total Alkalinity= %d\n",water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    fprintf(fp,"Total Hardness = %d\n",water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    fprintf(fp,"calcium Value= %d\n",water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    fprintf(fp,"Total Magnesium= %d\n",water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    fprintf(fp,"Total Chlorides= %d\n",water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    fprintf(fp,"Total Nitrate= %d\n",water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    fprintf(fp,"Total Sulphate= %d\n",water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",water.bod);
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
                    scanf("%f",&water.ph);
                    fprintf(fp,"pH= %f\n",water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    fprintf(fp,"Total Alkalinity= %d\n",water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    fprintf(fp,"Total Hardness = %d\n",water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    fprintf(fp,"calcium Value= %d\n",water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    fprintf(fp,"Total Magnesium= %d\n",water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    fprintf(fp,"Total Chlorides= %d\n",water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    fprintf(fp,"Total Nitrate= %d\n",water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    fprintf(fp,"Total Sulphate= %d\n",water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",water.bod);
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
                    scanf("%f",&water.ph);
                    fprintf(fp,"pH= %f\n",water.ph);
                    printf("Enter Electricity Conductivity Value:\n");
                    scanf("%d",&water.ec);
                    fprintf(fp,"Electricity Conductivity= %d\n",water.ec);
                    printf("Enter Total Dissolved Solid Value:\n");
                    scanf("%d",&water.tds);
                    fprintf(fp,"Total Dissolved Solids= %d\n",water.tds);
                    printf("Enter Total Alkalinity Value:\n");
                    scanf("%d",&water.ta);
                    fprintf(fp,"Total Alkalinity= %d\n",water.ta);
                    printf("Enter Total Hardness Value:\n");
                    scanf("%d",&water.th);
                    fprintf(fp,"Total Hardness = %d\n",water.th);
                    printf("Enter Total Suspended Solids Value:\n");
                    scanf("%d",&water.tss);
                    fprintf(fp,"Total Suspended Solids= %d\n",water.tss);
                    printf("Enter Calcium Value:\n");
                    scanf("%d",&water.cal);
                    fprintf(fp,"calcium Value= %d\n",water.cal);
                    printf("Enter Magnesium Value:\n");
                    scanf("%d",&water.mag);
                    fprintf(fp,"Total Magnesium= %d\n",water.mag);
                    printf("Enter Chlorides Value:\n");
                    scanf("%d",&water.chl);
                    fprintf(fp,"Total Chlorides= %d\n",water.chl);
                    printf("Enter Nitrate Value:\n");
                    scanf("%d",&water.nit);
                    fprintf(fp,"Total Nitrate= %d\n",water.nit);
                    printf("Enter Sulphate Value:\n");
                    scanf("%d",&water.sul);
                    fprintf(fp,"Total Sulphate= %d\n",water.sul);
                    printf("Enter Dissolved Oxygen Value:\n");
                    scanf("%d",&water.doxy);
                    fprintf(fp,"Total Dissolved oxygen= %d\n",water.doxy);
                    printf("Enter Biological Oxygen Demand Value:\n");
                    scanf("%d",&water.bod);
                    fprintf(fp,"Total Biological Oxygen Demand= %d/\n",water.bod);
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
