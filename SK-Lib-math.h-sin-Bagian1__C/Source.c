/* sin example */
#include <stdio.h>      /* printf */
#include <math.h>       /* sin */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS19
*/

#define PI 3.14159265

int main() {
	double param, result;
	param = 30.0;

	result = sin(param * PI / 180);

	printf("The sine of %f degrees is %f.\n", param, result);

	_getch();
	return 0;
}