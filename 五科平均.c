#include <stdio.h>

int main()
{
    printf("�Ш̧ǨåH�ťն����J���B�^��B�ƾǡB���|�B�۵M����U�۪����Z: \n");
    float scoreChinese, scoreEnglish, scoreMath, scoreSocial, scoreScience;
    scanf("%f %f %f %f %f",&scoreChinese,&scoreEnglish,&scoreMath,&scoreScience,&scoreSocial);
    printf("���쪺�����O: %.2f ",(scoreChinese+scoreEnglish+scoreMath+scoreScience+scoreSocial)/5.0);
}
