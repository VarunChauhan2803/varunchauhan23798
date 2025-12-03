#include <stdio.h>
int main() {
    char date[20];
    int day, year;
    printf("Enter date in format dd/04/yyyy: ");
    scanf("%d/04/%d", &day, &year);
    printf("%02d-Apr-%d\n", day, year);

    return 0;
}