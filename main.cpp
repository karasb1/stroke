#include <iostream>
using namespace std;

void w(char* txt, int words = 0)
{
	for (int i = 0; txt[i+1] != '\0'; i++)
	{
		if (txt[i+1] == ' ' || txt[i + 1] == '.' || txt[i + 1] == ',' || txt[i + 1] == '!' || txt[i + 1] == '?')
		{
			words++;
		}
	}
	cout << "Words : " << words << endl;
}




int main()
{
	char str[] = "Lorem ipsum dolor sit amet.Ut nisi sapiente et consequatur commodi ut iste perspiciatis?Et quam animi et enim quasi et incidunt dolores aut quod mollitia.";
	cout << str << endl;
	w(str);
	return 0;
}