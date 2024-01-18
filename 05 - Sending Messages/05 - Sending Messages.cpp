#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	freopen("prueba.txt","r",stdin);

    int tt;
    cin>>tt;

    while(tt--)
    {
        int nn,ff,aa,bb,cc=0;
        cin>>nn>>ff>>aa>>bb;
        int mm[nn];

        for(int i=0;i<nn;i++)
        {
            cin>>mm[i];
            cc += mm[i];
        }

        if(cc > 200000)
        {
            cout<< "NO\n";
            continue;
        }




    }

    return 0;
}
