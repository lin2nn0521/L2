#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, n2, min, i, hcf=1;                  //hcf ���̤j���]��
    printf("�п�J��Ӭ۲��������(�H�Ů涡�j): ");
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
    printf("�̤j���]�ƬO:%d \n",hcf);
    system("PAUSE");

    return 0;
}


