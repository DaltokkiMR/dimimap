#include <stdio.h>
#include <string.h>
#include "showmap/show_map.h"
#include "findpos/find_pos.h"
#include "findteacher/find_teacher.h"

void main_ui();

int main(int argc, char const *argv[])
{
    while (1) main_ui();
    return 0;
}

void main_ui()
{
    int userinput = 0;

    printf("\n\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                               디미고 지도\n");
    printf("---------------------------------------------------------------------------\n");
    printf("    1. 지도 보기\n");
    printf("    2. 위치 찾기\n");
    printf("    3. 선생님 교무실\n");
    printf("    4. 길 안내\n");
    printf("---------------------------------------------------------------------------\n");
    printf("매뉴 입력: ");

    scanf("%d", &userinput);
    while (getchar() != '\0');

    printf("\n");

    if (userinput == 1) show_map();
    else if (userinput == 2) find_pos();
    else if (userinput == 3) find_teacher();
    else if (userinput == 4) printf("준비중입니다");
    else printf("[Error] 1, 2, 3, 4중 하나를 입력하세요.");
}