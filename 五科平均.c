#include <stdio.h>

int main()
{
    printf("請依序並以空白間格輸入國文、英文、數學、社會、自然五科各自的成績: \n");
    float scoreChinese, scoreEnglish, scoreMath, scoreSocial, scoreScience;
    scanf("%f %f %f %f %f",&scoreChinese,&scoreEnglish,&scoreMath,&scoreScience,&scoreSocial);
    printf("五科的平均是: %.2f ",(scoreChinese+scoreEnglish+scoreMath+scoreScience+scoreSocial)/5.0);
}
