//#include<stdio.h>
//
//int main()
//{
//	int year = 0,month = 0,alldays = 0,year1 = 0,month1 = 0,firstday = 0,i = 0,daysinmonth = 0;
//	char choose = 0;
//
//	printf("Enter which year you want to display: ");
//	scanf("%d",&year);
//
//	do
//	{
//		month = 0;alldays = 0;
//		
//		while(month < 1||month > 12)
//		{
//			printf("Enter month in %d to display calendar (1-12): ",year);
//			scanf("%d",&month);
//
//			if(month < 1||month > 12)
//			{
//				printf("ERROR--- Enter month in range of (1-12)!\n");
//			}
//		}
//		for(year1 = 2010;year1 < year;year1++)
//		{
//			alldays += 365;
//		}
//
//		switch(year)
//		{
//			case 2010:
//			case 2011:
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 6:
//					case 7:
//						alldays += 1;
//						break;
//					case 3:
//						alldays -= 1;
//						break;
//					case 8:
//						alldays += 2;
//						break;
//					case 9:
//					case 10:
//						alldays += 3;
//						break;
//					case 11:
//					case 12:
//						alldays += 4;
//						break;
//				}
//				break;
//
//			case 2012:
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 4:
//					case 5:
//						alldays += 1;
//						break;
//					case 6:
//					case 7:
//						alldays += 2;
//						break;
//					case 8:
//						alldays += 3;
//						break;
//					case 9:
//					case 10:
//						alldays += 4;
//						break;
//					case 11:
//					case 12:
//						alldays += 5;
//						break;
//				}
//				break;
//
//			case 2013:
//			case 2014:
//			case 2015:
//				alldays += 1;
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 6:
//					case 7:
//						alldays += 1;
//						break;
//					case 3:
//						alldays -= 1;
//						break;
//					case 8:
//						alldays += 2;
//						break;
//					case 9:
//					case 10:
//						alldays += 3;
//						break;
//					case 11:
//					case 12:
//						alldays += 4;
//						break;
//				}
//				break;
//
//			case 2016:
//				alldays += 1;
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 4:
//					case 5:
//						alldays += 1;
//						break;
//					case 6:
//					case 7:
//						alldays += 2;
//						break;
//					case 8:
//						alldays += 3;
//						break;
//					case 9:
//					case 10:
//						alldays += 4;
//						break;
//					case 11:
//					case 12:
//						alldays += 5;
//						break;
//				}
//				break;
//
//			case 2017:
//			case 2018:
//			case 2019:
//				alldays += 2;
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 6:
//					case 7:
//						alldays += 1;
//						break;
//					case 3:
//						alldays -= 1;
//						break;
//					case 8:
//						alldays += 2;
//						break;
//					case 9:
//					case 10:
//						alldays += 3;
//						break;
//					case 11:
//					case 12:
//						alldays += 4;
//						break;
//				}
//				break;
//
//			case 2020:
//				alldays += 2;
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 4:
//					case 5:
//						alldays += 1;
//						break;
//					case 6:
//					case 7:
//						alldays += 2;
//						break;
//					case 8:
//						alldays += 3;
//						break;
//					case 9:
//					case 10:
//						alldays += 4;
//						break;
//					case 11:
//					case 12:
//						alldays += 5;
//						break;
//				}
//				break;
//
//			case 2021:
//				alldays += 3;
//				for(month1 = 1;month1 < month;month1++)
//				{
//					alldays +=30;
//				}
//				switch(month)
//				{
//					case 2:
//					case 6:
//					case 7:
//						alldays += 1;
//						break;
//					case 3:
//						alldays -= 1;
//						break;
//					case 8:
//						alldays += 2;
//						break;
//					case 9:
//					case 10:
//						alldays += 3;
//						break;
//					case 11:
//					case 12:
//						alldays += 4;
//						break;
//				}
//				break;
//		}
//
//		firstday = alldays % 7;
//
//		printf("***************************************\n");
//		printf("MON   TUE   WED   THU   FIR   SAT   SUN\n");
//
//		if(firstday<=2)
//		{
//			for(i = 0;i < firstday + 4;i++)
//			{
//				printf("      ");
//			}
//		}
//		else
//		{
//			for(i = 0;i < firstday - 3;i++)
//			{
//				printf("      ");
//			}
//		}
//
//		
//			switch(month)
//			{
//				case 1:
//				case 3:
//				case 5:
//				case 7:
//				case 8:
//				case 10:
//				case 12:
//					daysinmonth = 31;
//					break;
//				case 2:
//					if(year == 2012||year == 2016||year == 2020)
//					{
//						daysinmonth = 29;
//					}
//					else
//					{
//						daysinmonth = 28;
//					}
//					break;
//				case 4:
//				case 6:
//				case 9:
//				case 11:
//					daysinmonth = 30;
//					break;
//			}
//			
//		for(i = 1;i <= daysinmonth;i++)
//		{
//			printf(" %2d   ",i);
//			if((firstday + i - 3) % 7 == 0)
//			{
//				printf("\n");
//			}
//		}
//
//		printf("\nWould you like to display another month (y/n) ?");
//		scanf(" %c",&choose);
//	}
//	while(choose == 'y');
//
//	return 0;
//}