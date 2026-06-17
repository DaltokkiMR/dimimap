#include <stdio.h>
#include <string.h>
int show_map(int a){
    switch(a){
        case 1:
            printf("남학생  교복실 문서   302호 303호 304호   1-1반   미화원    남자        \n");
            printf("탈의실        보관실                             휴게공간  화장실      계단\n");
            printf("\n");
            printf("계단             1-4반      1-3반        305호                         여자\n");
            printf("                                                                      화장실\n");
            printf("\n");
            printf("                                                                    양치하는\n");
            printf("                                                                       공간\n");
            printf("                                                    상담실\n");
            printf("                                                                       구\n");
            printf("                                                     제3             샤워실\n");
            printf("                                                   교무실\n");
            printf("                                                                      306호\n");
            printf("                                                     1-5반\n");
            printf("                                                                      307호\n");
            printf("\n");
            printf("                                                     1-6반            1-2반\n");
            printf("\n");
            printf("                                                                     사물함실\n");
            printf("\n");
            printf("                                                     계단             여학생\n");
            printf("                                                                      탈의실\n");
            break;
        case 2:

        case 3:
        
        case 4:

        case 5:

        default:
            printf("잘못된 입력입니다\n");
    }
    return 0;
}
int main(){
    int a = 0;
    printf("-----------------------\n");
    printf("      디미고 지도\n");
    printf("-----------------------\n");
    printf("1.본관\n");
    printf("2.신관\n");
    printf("3.체육관\n");
    printf("4.기타\n");
    printf("5.돌아가기\n");
    printf("-----------------------\n");
    printf("메뉴 입력:");
    scanf("%d",&a);
    show_map(a);
}