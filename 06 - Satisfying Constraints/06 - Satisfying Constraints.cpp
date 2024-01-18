#include <bits/stdc++.h>

using namespace std;

int evaluacion(int aa[],int xx[],int nn);

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

        int nn;
        cin>>nn;

        int aa[nn],xx[nn];

        for(int i=0;i<nn;i++)
        {
            cin>>aa[i]>>xx[i];
        }

        cout<<evaluacion(aa,xx,nn)<<"\n";
    }

	return 0;
}

int evaluacion(int aa[],int xx[],int nn)
{
    int mayor=-1,menor=-1,excepcion=0,res;

    for(int i=0;i<nn;i++)
    {
        switch(aa[i])
        {
            case 1:
                if(menor == -1 || xx[i] > menor)
                    menor=xx[i];
                break;
            case 2:
                if(mayor == -1 || xx[i] < mayor)
                    mayor=xx[i];
                break;
        }
    }

    for(int i=0;i<nn;i++)
    {
        if(aa[i]==3 && xx[i]>=menor && xx[i]<=mayor)
        {
            excepcion++;
        }
    }

    res = mayor-menor-excepcion+1;

    if (res > 0)
        return res;
    else
        return 0;
}
