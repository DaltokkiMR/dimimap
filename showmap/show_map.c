#include <stdio.h>
#include <string.h>

#include "bonguan/bonguan.h"
#include "others/others.h"


int show_map(int a){
    int floor = 0;
    printf("---------------------------------------------------------------------------\n");
    printf("                   층 입력(지하는 0을 입력하세요)\n");
    printf("---------------------------------------------------------------------------\n");
    scanf("%d",&floor);
    switch(a){
        case 1:
            printf("-------------------------------------------------------------------------\n");
            switch(floor){
                case 0:
                    printf("        식당\n");
                    printf("계단\n");
                    break;
                case 1:
                    show_bonguan_1();
                    break;
                case 2:
                    show_bonguan_2();
                    break;
                case 3:
                    show_bonguan_3();
                    break;
                default:
                    printf("                        잘못된 입력입니다\n");
            }
            printf("-------------------------------------------------------------------------\n");
            break;
        case 2:
            printf("-------------------------------------------------------------------------\n");
            switch(floor){
                case 1:
                    sin_guan_1();
                    break;
                case 2:
                    sin_guan_2();
                    break;
                case 3:
                    sin_guan_3();
                    break;
                case 4:
                    printf("대강당\n");
                    break;
                default:
                    printf("                        잘못된 입력입니다\n");
            }
            printf("-------------------------------------------------------------------------\n");
            break;
        case 3:
            printf("-------------------------------------------------------------------------\n");
            switch(floor){
                case 0:
                    show_gym_0();
                    break;
                case 1:
                    printf("축구장     잔디밭          스마트팜\n");
                    break;
                default:
                    printf("                        잘못된 입력입니다\n");
            }
            printf("-------------------------------------------------------------------------\n");
            break;
        case 4:
            printf("-------------------------------------------------------------------------\n");
            switch(floor){
                case 1:
                    dorm_1();
                    break;
                case 2:
                    dorm_2();
                    break;
                case 3:
                    dorm_3();
                    break;
                case 4:
                    dorm_4();
                    break;
                case 5:
                    dorm_5();
                    break;
                default:
                    printf("                        잘못된 입력입니다\n");
            }
            printf("-------------------------------------------------------------------------\n");
            break;
        case 5:
            return 0;
            break;
        default:
            printf("잘못된 입력입니다\n");
    }
    return 5;
}

void want_map(){
    int building = 0;
    printf("---------------------------------------------------------------------------\n");
    printf("      디미고 지도\n");
    printf("---------------------------------------------------------------------------\n");
    printf("1.본관\n");
    printf("2.신관\n");
    printf("3.체육관\n");
    printf("4.학봉관\n");
    printf("5.돌아가기\n");
    printf("---------------------------------------------------------------------------\n");
    printf("원하는 위치 입력:");
    scanf("%d",&building);
    if (building != 0){
        show_map(building);
    }
    return;
}
