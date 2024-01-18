#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	freopen("prueba.txt","r",stdin);

	int nn;

	int tt;
	cin>>tt;

	while(tt--)
    {
        cin>>nn;
        int cc = 0;
        char ss[nn],ff[nn];

        for(int i=0;i<nn;i++)
        {
            cin>>ss[i];

        }
        for(int i=0;i<nn;i++)
        {
            cin>>ff[i];
        }

        int numSS=0;
        int numFF=0;

        for(int i=0;i<nn;i++)
        {
            if((ss[i])-48)
                numSS++;

            if((ff[i])-48)
                numFF++;
        }

        if(numSS < numFF)
        {
            for(int i=0; i<nn;i++)
            {
                switch(ff[i])
                {
                case '1':
                    if(ss[i] == '0')
                    {
                        cc++;
                    }
                }
            }
        }
        else
        {
            for(int i=0; i<nn;i++)
            {
                switch(ss[i])
                {
                case '1':
                    if(ff[i] == '0')
                    {
                        cc++;
                    }
                }
            }
        }

        cout<<cc<<"\n";

    }

	return 0;
}
