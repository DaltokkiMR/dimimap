#include <stdio.h>
#include <string.h>
int show_bonguan_3(){
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
    return 0;
}
int show_gym_0(){
    printf("                          신발장\n");
    printf("\n");
    printf("                                                   스쿼시 장   \n");
    printf("                                                                          당구장\n");
    printf("입구                       농구장                            거울 방\n");
    printf("                                                     헬스장               탁구장\n");
    printf("                            의자\n");
    return 0;
}
int show_map(int a){
    int b = 0;
    printf("-----------------------\n");
    printf("      층 입력(지하는 0을 입력하세요)\n");
    printf("-----------------------\n");
    scanf("%d",&b);
    switch(a){
        case 1:
            switch(b){
                case 0:
                    printf("-----------------------\n");
                    printf("        식당\n");
                    printf("계단\n");
                    printf("-----------------------\n");
                    break;
                case 1:
                case 2:
                case 3:
                    printf("-------------------------------------\n");
                    show_bonguan_3();
                    printf("-------------------------------------\n");
                    break;
                default:
                    printf("잘못된 입력입니다\n");
            }
        case 2:
        switch(b){
            case 1:
            case 2:
                printf("-------------------------------------\n");
                printf("                입구\n");
                printf("\n");
                printf("   멀티미디어실          반\n");
                printf("\n");
                printf("       계단                          반\n");
                printf("       입구                                         음악실\n");
                printf("                                     반\n");
                printf(" 연구실\n");
                printf("-------------------------------------\n");
            case 3:
            case 4:
                printf("-------------------------------------\n");
                printf("대강당\n");
                printf("-------------------------------------\n");
                break;
            default:
                printf("잘못된 입력입니다\n");
            }
        case 3:
            switch(b){
                case 0:
                    printf("-------------------------------------\n");
                    show_gym_0();
                    printf("-------------------------------------\n");
                    break;
                case 1:
                    printf("-------------------------------------\n");
                    printf("축구장     잔디밭          스마트팜"\n);
                    printf("-------------------------------------\n");
                    break;
                default:
                    printf("잘못된 입력입니다\n");
            }
        case 4:
            switch(b){
                case 1:
                    printf("-------------------------------------\n");
                    printf("	     신발장      계단          입구\n");
                    printf("독서실\n");
                    printf("						                    화장실\n");
                    printf("\n");
                    printf("	                                       심야자습실\n");
                    printf("        	             신발장\n");
                    printf("\n");
                    printf("        	                       심자실\n");
                    printf("-------------------------------------\n");
                    break;
                case 2:
                    printf("-------------------------------------\n");
                    printf("  입구                계단\n");
                    printf("                                  화장실\n");
                    printf("  교무실                                      호실\n");
                    printf("                                  샤워실\n");
                    printf("\n");  
                    printf("         샤워실\n");
                    printf("\n");
                    printf("        	            호실\n");
                    printf("-------------------------------------\n");
                case 3:
                    printf("-------------------------------------\n");
                    printf("                        계단\n");
                    printf("         교무실                       화장실\n");
                    printf("호실						                       호실\n");
                    printf("\n");  
                    printf("	                                 샤워실\n");
                    printf("        	    샤워실\n");
                    printf("\n");
                    printf("        	             호실\n");
                    printf("-------------------------------------\n");
                    break;
                case 4:
                default:
                    printf("잘못된 입력입니다\n");
            }
        case 5:

        case 6:

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
    printf("4.학봉관\n");
    printf("5.우정학사\n");
    printf("6.돌아가기\n");
    printf("-----------------------\n");
    printf("메뉴 입력:");
    scanf("%d",&a);
    show_map(a);
}