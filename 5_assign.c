#include <stdio.h>

int main()
{
    int m_degree, c_degree, p_degree;
    printf("수학, 물리, 화학 점수 입력: ");
    scanf("%d %d %d", &m_degree, &p_degree, &c_degree);
    
    if(m_degree>=50 && c_degree>=50 && p_degree>=50)
    {
        if(p_degree+m_degree>=150 || m_degree+c_degree>=150)
        {
            printf("가입할 수 있습니다");
        }

        else
        {
            printf("2차 탈락");
        }
    }

    else
    {
        printf("1차 탈락");
    }
}