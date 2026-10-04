#include <stdio.h>

int main()
{
    char date[20];
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    if (sscanf(date, "%d/%d/%d", &day, &month, &year) == 3)
    {
        switch (month)
        {
            case 1: printf("%02d-Jan-%04d\n", day, year); break;
            case 2: printf("%02d-Feb-%04d\n", day, year); break;
            case 3: printf("%02d-Mar-%04d\n", day, year); break;
            case 4: printf("%02d-Apr-%04d\n", day, year); break;
            case 5: printf("%02d-May-%04d\n", day, year); break;
            case 6: printf("%02d-Jun-%04d\n", day, year); break;
            case 7: printf("%02d-Jul-%04d\n", day, year); break;
            case 8: printf("%02d-Aug-%04d\n", day, year); break;
            case 9: printf("%02d-Sep-%04d\n", day, year); break;
            case 10: printf("%02d-Oct-%04d\n", day, year); break;
            case 11: printf("%02d-Nov-%04d\n", day, year); break;
            case 12: printf("%02d-Dec-%04d\n", day, year); break;
            default: printf("Invalid month in date\n"); break;
        }
    }
    else
    {
        printf("Invalid date format\n");
    }

    return 0;
}
