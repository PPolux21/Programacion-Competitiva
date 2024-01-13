
#include <stdio.h>

int main()
{
    int shovelPrice, extraCoin, minShovels = 1, totalPrice;

    scanf("%d %d", &shovelPrice, &extraCoin);  

    if(1 <= shovelPrice && shovelPrice <= 1000 && 1 <= extraCoin && extraCoin <=9)
    {

        while (true)
        {
            totalPrice = (shovelPrice * minShovels) - extraCoin;

            if(totalPrice%10 == 0 || (shovelPrice * minShovels)%10 == 0)
            {
                break;
            }

            minShovels++;
        }
    
        printf("%d \n",minShovels);
    }
    else
    {
        return 1;
    }

    return 0;
}