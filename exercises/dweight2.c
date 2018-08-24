#include <stdio.h>

#define INCHES_PER_SECOND 166

int main(void) {
	int height, length, width, volume, weight;

	printf("Enter box dimensions..\n");
	printf("Height: ");
	scanf("%d", &height);
	printf("Length: ");
	scanf("%d", &length);
	printf("Width: ");
	scanf("%d", &width);

	volume = height * length * width;
	weight = (volume + (INCHES_PER_SECOND - 1)) / INCHES_PER_SECOND;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}
