#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, min, i, hcf=1;                  //hcf 程そ计
    printf("叫块ㄢ钵タ俱计(丁筳): ");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
        min=n2;
    else
        min=n1;
    for(i=2; i<=min; i++)
        {
    if(n1%i==0 && n2%i==0)
        {
        hcf=i;
        }
        }
    printf("程そ计琌:%d \n",hcf);
    system("PAUSE");

    return 0;
}


