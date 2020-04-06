#include <bits/stdc++.h>
using namespace std;

void writeToFile(FILE *file)
{
	for (int i = 1; i <= 5; i++)
		fprintf(file, "This is an example line %d\n", i);
}

void readFromFile(FILE *file)
{
	char str[255];
	while (fgets(str, 255, file) != NULL)
	{
		std::cout << str;
	}
}

int main()
{
	const char *filePath = "output.txt";
	FILE *file = fopen(filePath, "r+");;
	if (!file)
		std::cout << "Can not open this file" << std::endl;
	else
		std::cout << "File is opened" << std::endl;

	writeToFile(file);
	readFromFile(file);

	fclose(file);

	return 0;
}