#include <iostream>

using namespace std;

int vowels(string str)
{
	int hash[5] = { 0 };

	for (int j = 0; j < str.length(); j++) {

		if (str[j] == 'A' || str[j] == 'a')
			hash[0] = 1;

		else if (str[j] == 'E' || str[j] == 'e')
			hash[1] = 1;

		else if (str[j] == 'I' || str[j] == 'i')
			hash[2] = 1;

		else if (str[j] == 'O' || str[j] == 'o')
			hash[3] = 1;

		else if (str[j] == 'U' || str[j] == 'u')
			hash[4] = 1;
	}

	for (int i = 0; i < 5; i++) {
		if (hash[i] == 0) {
			return 1;
		}
	}
	return 0;
}

int Vowelsout(string str)
{

	if (vowels(str))
		cout <<"NO\n";
	else
		cout <<"YES\n";
}

int main()
{
	int o;
	cin>>o;
	while(o--)
	{
		string str;
		cin>>str;
		Vowelsout(str);
	}

	return 0;
}
