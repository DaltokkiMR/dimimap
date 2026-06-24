#include <stdio.h>
#include <string.h>
#include "showmap/show_map.h"
#include "findpos/find_pos.h"
#include "findteacher/find_teacher.h"
#include "findpath/find_path.h"

int main_ui();

int main()
{
    while (main_ui() == 0);
    return 0;
}

int main_ui()
{
    int userinput = 0;
    int returned = -1;

    printf("\n\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                               디미고 지도\n");
    printf("---------------------------------------------------------------------------\n");
    printf("    1. 지도 보기\n");
    printf("    2. 위치 찾기\n");
    printf("    3. 선생님 교무실\n");
    printf("    4. 길 안내\n");
    printf("    5. 종료\n");
    printf("---------------------------------------------------------------------------\n");
    printf("매뉴 입력: ");

    scanf("%d", &userinput);
    while (getchar() != '\n');

    printf("\n");
    
    if (userinput == 1) 
        {
            returned = want_map();
        }
    else if (userinput == 2) 
        {
            returned = find_pos();
        }
    else if (userinput == 3) 
        {
            returned = find_teacher();
        }
    else if (userinput == 4)
        {
            returned = find_path();
        }
    else if (userinput == 5) 
        {
            printf("디미맵을 종료합니다.\n\n");
            return 1;
        }
    else 
        {
            printf("> 1, 2, 3, 4, 5중 하나를 입력하세요.\n");
        }

    if (returned == 0) // return이 1이면 Enter키 없이 스킵함.
    {
        printf("> Enter키를 눌러 계속");
        while (getchar() != '\n');
    }
    else if (returned == -1)
    {
        printf("> 오류가 발생했습니다. 개발자에게 문의하세요.");

    }
    return 0;
}