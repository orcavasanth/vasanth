/* Chapter-10 Example-10.6 Reading Lines of Data 
* Vasanth [22 September 2014] */

#include <stdio.h>

int main(void)
{
	int i;
	char line[81];
	void readLine(char buffer[]);
	
	for (i = 0; i < 3; ++i)
	{
		readLine(line);
		
		printf("%s\n\n", line);
	}
	
	return 0;
}

/* Function to read a Line of text from the terminal */

void readLine(char buffer[])
{
	char character;
	int i = 0;
	
	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}
	while (character != '\n');
	
	buffer[i - 1] = '\0';
}
