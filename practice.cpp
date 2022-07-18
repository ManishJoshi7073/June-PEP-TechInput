//input : "whereabouts"
// output: "CVCVCVC"
// C for consonants V for vowels
// CVCVCVC
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char *vowl(char *str)
{
	int size = 1;
	while (str[size])
		size++;

	char *vowel = new char[size];

	int i = 0;
	int j = 0;

	for (i = 0; i < size; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			if (i == 0)
			{
				vowel[j] = 'V';
				j++;
			}
			else if (vowel[j - 1] != 'V')
			{
				vowel[j] = 'V';
				j++;
			}
		}
		else
		{
			if (i == 0)
			{
				vowel[j] = 'C';
				j++;
			}
			else if (vowel[j - 1] != 'C')
			{
				vowel[j] = 'C';
				j++;
			}
		}
	}

	vowel[j] = '\0';
	return vowel;
}
int main()
{
	char str[] = "aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbbbccccccccccceeeeeeddd";

	char *vowel = vowl(str);
	cout << vowel << endl;
	return 0;
}