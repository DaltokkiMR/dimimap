#include <stdio.h>
#include <string.h>
#include "find_pos.h"

int main(int argc, char const *argv[])
{
    find_pos();
    return 0;
}


void find_pos()
{
    char location_input[100];
    int location_index = -1;

    printf("\n\n");
    printf("---------------------------------------------------------------------------\n");
    printf("                                위치 찾기\n");
    printf("---------------------------------------------------------------------------\n");
    printf("            위치를 찾으려는 교실, 교무실, 시설의 이름을 입력하세요.\n");
    printf("---------------------------------------------------------------------------\n");
    printf("장소 입력: ");
    fgets(location_input ,sizeof(location_input), stdin);
    location_input[strcspn(location_input, "\n")] = '\0';

    printf("\n");
    printf("-> ");

    for (int i = 0; i < 200; i++)
    {
        if (strcmp(ROOM[i][0], location_input) == 0)
        {
            location_index = i;
            break; 
        }
        else if ( (strcmp(ROOM_ALTER[i][0], location_input) == 0 || strcmp(ROOM_ALTER[i][1], location_input) == 0 || strcmp(ROOM_ALTER[i][2], location_input) == 0 || strcmp(ROOM_ALTER[i][3], location_input) == 0) && strcmp(ROOM_ALTER[i][0], "") != 0 )
        {
            location_index = i;
            break;
        }
    }

    if (location_index == -1) printf("해당 장소를 찾을 수 없습니다.");
    else printf("%s은(는) %s %d층 %s에 있습니다.", ROOM[location_index][0], ROOM[location_index][1], ROOM[location_index][3][0], ROOM[location_index][2]);

    while (getchar() != '\0');

    return;
}