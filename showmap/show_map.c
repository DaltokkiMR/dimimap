#include <stdio.h>
#include <string.h>

#include "bonguan/bonguan.h"
#include "others/others.h"


int show_map(int a){
    int floor = 0;
    printf("-----------------------\n");
    printf("      층 입력(지하는 0을 입력하세요)\n");
    printf("-----------------------\n");
    scanf("%d",&floor);
    switch(a){
        case 1:
            switch(floor){
                case 0:
                    printf("-----------------------\n");
                    printf("        식당\n");
                    printf("계단\n");
                    printf("-----------------------\n");
                    break;
                case 1:
                    printf("-------------------------------------\n");
                    show_bonguan_1();
                    printf("-------------------------------------\n");
                    break;
                case 2:
                    printf("-------------------------------------\n");
                    show_bonguan_2();
                    printf("-------------------------------------\n");
                    break;
                case 3:
                    printf("-------------------------------------\n");
                    show_bonguan_3();
                    printf("-------------------------------------\n");
                    break;
                default:
                    printf("잘못된 입력입니다\n");
            }
        case 2:
            switch(floor){
                case 1:
                    printf("-------------------------------------\n");
                    sin_guan_1();
                    printf("-------------------------------------\n");
                case 2:
                    printf("-------------------------------------\n");
                    sin_guan_2();
                    printf("-------------------------------------\n");
                case 3:
                    printf("-------------------------------------\n");
                    sin_guan_3();
                    printf("-------------------------------------\n");
                case 4:
                    printf("-------------------------------------\n");
                    printf("대강당\n");
                    printf("-------------------------------------\n");
                    break;
                default:
                    printf("잘못된 입력입니다\n");
            }
        case 3:
            switch(floor){
                case 0:
                    printf("-------------------------------------\n");
                    show_gym_0();
                    printf("-------------------------------------\n");
                    break;
                case 1:
                    printf("-------------------------------------\n");
                    printf("축구장     잔디밭          스마트팜\n");
                    printf("-------------------------------------\n");
                    break;
                default:
                    printf("잘못된 입력입니다\n");
            }
        case 4:
            switch(floor){
                case 1:
                    printf("-------------------------------------\n");
                    dorm_1();
                    printf("-------------------------------------\n");
                    break;
                case 2:
                    printf("-------------------------------------\n");
                    dorm_2();
                    printf("-------------------------------------\n");
                    break;
                case 3:
                    printf("-------------------------------------\n");
                    dorm_3();
                    printf("-------------------------------------\n");
                    break;
                case 4:
                    printf("-------------------------------------\n");
                    dorm_4();
                    printf("-------------------------------------\n");
                    break;
                case 5:
                    printf("-------------------------------------\n");
                    dorm_5();
                    printf("-------------------------------------\n");
                    break;
                default:
                    printf("잘못된 입력입니다\n");
            }
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
    printf("-----------------------\n");
    printf("      디미고 지도\n");
    printf("-----------------------\n");
    printf("1.본관\n");
    printf("2.신관\n");
    printf("3.체육관\n");
    printf("4.학봉관\n");
    printf("5.돌아가기\n");
    printf("-----------------------\n");
    printf("원하는 위치 입력:");
    scanf("%d",&building);
    if (building != 0){
        show_map(building);
    }
    return;
}
