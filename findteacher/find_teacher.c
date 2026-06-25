#include <stdio.h>
#include <string.h>

int find_teacher() // 선생님 찾기
{
    char str[101];
    char main1[101][101] = {"김성열", "성기하", "김진주","안수진","이동규","동카쌤","장문석","양동민","박경수","이병혁","강은솔","이혜연","김종수","함지연","하미영","황승현","송다솔","장미영","마성옥","정희범","김혁준","이연슬","성연준","조혜연","전윤정","전효진","허관무","손현원","정지훈","조승혜","허철","이경은","김준식"};
    char main3[101][101] = {"이효현","행수쌤","이민주","제제쌤","전유원","김동영"};
    char new1[101][101] = {"임재훈","류명희","정재호","이호성","김재영","양재덕","박성수"};
    char principal[101] = "남승완";
    int locate = -1;


    
    printf("---------------------------------------------------------------------------\n");
    printf("                                위치 찾기\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                 찾고 싶은 교실, 교무실 등을 입력하세요.\n");
    printf("                   0을 입력하면 처음으로 돌아갑니다.\n");
    printf("---------------------------------------------------------------------------\n");
    printf("선생님 입력: ");
    fgets(str, sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';


    while (strcmp(str, "") == 0) // 공백문자 입력시 재시도
    {
        printf("공백 문자가 입력되었습니다. 다시 입력하세요.\n");
        printf("선생님 입력: ");
        fgets(str ,sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';
    }
    if (strcmp(str, "0") == 0) return 1; // 0 입력시 돌아가기, 1 return해서 enter키 계속 없애기.

    
    if(strcmp(principal,str) == 0) 
    {
        locate = 1;
    }
    for(int i = 0; i < 101; i++)
        if(strcmp(str,main3[i]) == 0)
        {
            locate = 2;
            break;
        }
    for(int i = 0; i < 101; i++)
        if(strcmp(str,new1[i]) == 0)
        {
            locate = 3;
            break;
        }
    for(int i = 0; i < 101; i++)
        if(strcmp(str,main1[i]) == 0)
        {
            locate = 4;
            break;
        }
    printf("-> ");
    if (locate == 1) printf("본관 1층 교장실\n");
    else if (locate == 2) printf("본관 3층 교무실\n");
    else if (locate == 3) printf("신관 1층 교무실\n");
    else if (locate == 4) printf("본관 1층 교무실\n");
    else printf("선생님을 찾을 수 없습니다.\n");

    return 0;
}
