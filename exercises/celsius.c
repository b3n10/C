#include <stdio.h>

#define SCALE_FACTOR (5.0f / 9.0f)
#define FREEZING_PT 32.0f

int main(void) {
	float farenheit, celcius;

	printf("Enter Farneheit temperature: ");
	scanf("%f", &farenheit);

	celcius = (farenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celcius equivalent: %.1f\n", celcius);

	return 0;
}
