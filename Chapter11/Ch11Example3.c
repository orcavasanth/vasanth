/* Chapter-11 Example-11.3 Using pointer in Expressions
* Vasanth [28 september 2014] */

#include <stdio.h>

int main(void)
{
	int i1;
	int i2;
	int *p1;
	int *p2;
	
	i1 = 5;
	p1 = &i1;
	i2 = *p1 / 2 + 10;
	p2 = p1;
	
	printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);
	
	return 0;
}
