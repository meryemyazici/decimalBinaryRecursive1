#include <stdio.h>
#include <stdlib.h>

int convert(int);

int main()
{
    int dec, bin;

    printf("Decimal bir sayi giriniz: ");
    scanf("%d", &dec);
    bin = convert(dec);
    printf("Decimal hali: %d - Binary hali: %d\n", dec, bin);

    return 0;
}

int convert(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * convert(dec / 2));
    }
}
