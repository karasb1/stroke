#include <iostream>
using namespace std;

void tab(char* txt)
{
	for (int i = 0; txt[i] != '\0'; i++)
	{
		if (txt[i] == ' ')
		{
			txt[i] = '	';
		}
	}
}




int main()
{
	char str[] = "Lorem ipsum dolor sit amet. Ut nisi sapiente et consequatur commodi ut iste perspiciatis? Et quam animi et enim quasi et incidunt dolores aut quod mollitia.";
	tab(str);
	cout << str << endl;
	return 0;
}