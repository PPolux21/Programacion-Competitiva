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
        int xx=0,yy=0;

        int cord1[2],cord2[2],cord3[2],cord4[2];

        cin>>cord1[0]>>cord1[1];
        cin>>cord2[0]>>cord2[1];
        cin>>cord3[0]>>cord3[1];
        cin>>cord4[0]>>cord4[1];

        if(cord1[0]==cord2[0])
            yy = abs(cord1[1]-cord2[1]);

        if(cord1[0]==cord3[0])
            yy = abs(cord1[1]-cord3[1]);

        if(cord1[0]==cord4[0])
            yy = abs(cord1[1]-cord4[1]);

        if(cord1[1]==cord2[1])
            xx = abs(cord1[0]-cord2[0]);

        if(cord1[1]==cord3[1])
            xx = abs(cord1[0]-cord3[0]);

        if(cord1[1]==cord4[1])
            xx = abs(cord1[0]-cord4[0]);

        cout<<xx*yy<<"\n";
    }

	return 0;
}
