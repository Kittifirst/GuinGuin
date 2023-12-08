#include <iostream>
using namespace std;

char before (char x)
{
	if (x == 'A')
	{
		return 'Z';
	}
	if (x > 'A' && x <= 'Z' )
	{
		return x-1;
	}
	else
	{
		return '0';
	}
	
	
}

int main(){
	char x;
	cin >> x;
	cout << before(x) << endl;
}
