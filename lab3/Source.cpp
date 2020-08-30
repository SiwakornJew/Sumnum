#include<iostream>
using namespace std;
int sum(int x)
{
	int ans = 0;
	while (x>0)
	{
		ans = ans + x % 10;
		x /= 10;
	}
	return ans;

}
int main()
{

	int n,x;
	cin >> n;
	x = n;
	if (x < 10)
	{
	cout << x;
	}
	else
	{
	cout << x << "->";
while (1)
	{
            x = sum(n);
			if (x < 10)
			{
				cout << x;
              break;
		    }
			else
			cout << x << "->";
			n = x;
			
	}
	}
	
		   
}