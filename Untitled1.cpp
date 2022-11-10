#include <iostream>
using namespace std;

int main()
{
	char a;
	int b,c,d;
	cout<<"Enter a character: ";
	cin>>a;
	b=int(a)-48;
	if (b<0)
		cout<<"It is a special symbole";
	else if (b<=0 || b<=9)
	{
		c= b % 2;
    	if (c == 0)
        	cout <<"It is an even digit " << endl;
    	else
        	cout <<"It is an odd digit " << endl;
	}
	else
	{
		c=int(a);
		if (c<=65 || c<=90)
			cout<<"It is an alphabet in UPPERCASE";
		else if (c<=97 || c<=122)
			cout<<"It is an alphabet in lowercase";
	}
	return 0;
}

	