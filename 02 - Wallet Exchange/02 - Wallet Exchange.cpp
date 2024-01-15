#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//freopen("prueba.txt","r",stdin);

	int tt;
	cin>>tt;

	while(tt--)
	{
		int a,b;
		cin>>a>>b;

		if((a+b)%2 == 0)
		{
			cout<<"Bob\n";
		}
		else
		{
			cout<<"Alice\n";
		}

	}

	return 0;
}
