#include <stdio.h>

/**
 * main - calculate my burdget
 * Return: 0 as success
 */

int main(void)
{
	float buy_car, rent_hous, utilities;
	float total;

	printf("how mush would you spend on buying car\n");
	scanf("%f", &buy_car);

	printf("how much would you spend on renting house\n");
	scanf("%f", &rent_house);

	printf("how mush would you spend on your utilities\n");
	scanf("%f", &utilities);

	total = buy_car + rent_house + utilities;

	printf("ÿour total burdget will be $%.2f\n", total);

	return (0);
}
