#include <iostream>
using namespace std;

void c(char* txt, int a = 0, int b = 0, int c = 0)
{
	for (int i = 0; txt[i] != '\0'; i++)
	{
		if (int(txt[i]) >= 65 && int(txt[i]) <= 90 || int(txt[i]) >= 97 && int(txt[i]) <= 122)
		{
			a++;
		}
		else if (int(txt[i]) >= 48 && int(txt[i]) <= 57)
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	cout << "Letters : " << a << endl;
	cout << "Numbers : " << b << endl;
	cout << "Other : " << c << endl;
}




int main()
{
	char str[] = "1234567890Lorem-ipsum-dolor-sit&amet.^Ut:nisi;sapiente?et consequatur commodi ut iste perspiciatis? Et quam animi et enim quasi et incidunt dolores aut quod mollitia.";
	c(str);
	return 0;
}