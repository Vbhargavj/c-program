#include <stdio.h>

int main()
{
    // declare veriables

    int day, month, year, date;

    // enter date from user

    printf("Enter the day  ");
    scanf("%d", &day);
    printf("Enter the month ");
    scanf("%d", &month);
    printf("Enter the year ");
    scanf("%d", &year);

    // for cheking valid information
    if (month > 12)
    {
        printf("Enter the valid month\n");
        goto end;
        }

        if (year < 2000)
        {
            printf("Please enter the above 2001 year\n");
            goto end;
        }
        if (month == 1, 3, 5, 7, 8, 10, 12)
        {
            if (day > 31)
            {
                printf("Please enter valid day\n");
                goto end;
            }
        }
        else
        {
            if (day > 30)
            {
                printf("Enter the valid date");
                goto end;
            }
        }

        // for month count

        switch (month)
        {
        case 1:
            day = day;
            break;
        case 2:
            day = day + 3;
            break;
        case 3:
            day = day + 3;
            break;
        case 4:
            day = day + 3 + 3;
            break;
        case 5:
            day = day + 3 + 3 + 2;
            break;
        case 6:
            day = day + 3 + 3 + 2 + 3;
            break;
        case 7:
            day = day + 3 + 3 + 2 + 3 + 2;
            break;
        case 8:
            day = day + 3 + 3 + 2 + 3 + 2 + 3;
            break;
        case 9:
            day = day + 3 + 3 + 2 + 3 + 2 + 3 + 3;
            break;
        case 10:
            day = day + 3 + 3 + 2 + 3 + 2 + 3 + 3 + 2;
            break;
        case 11:
            day = day + 3 + 3 + 2 + 3 + 2 + 3 + 3 + 2 + 3;
            break;
        case 12:
            day = day + 3 + 3 + 2 + 3 + 2 + 3 + 3 + 2 + 3 + 2;
            break;

        default:
            break;
        }

        // year=year-2001;
        // year=year*365;

        // printf("\n%d",year);

        // date=date+year;

        date = day % 7;
        printf("%d\n",date);
        for (int  i = 2002; i <year ; i++)
        {
            if (i%4==0)
            {
                date=date+2;
            }
            else{
                // if(month>2)
                // {date=date+2;  } 
                // else    {
                    date=date+1;

                // }         
            }
            
        }
        if (year%4==0)
        {
            if (month>2)
            {
                date=date+2;
            }
          
                        
        }
        else{
            date=date+1;
        }
        
        
        printf("\n%d\n", date);
        date=date%7;

        // for another method to use of count date

        // count date and print day

        switch (date)
        {
        case 1:
            printf("MONDAY");
            break;
        case 2:
            printf("TUESDAY");
            break;
        case 3:
            printf("WEDNESDAY");
            break;
        case 4:
            printf("THURSDAY");
            break;
        case 5:
            printf("FRIDAY");
            break;
        case 6:
            printf("SATURDAY");
            break;
        case 0:
            printf("SUNDAY");
            break;

        default:
            break;
        }
        end:

        return 0;
    }