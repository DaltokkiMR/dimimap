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
int show_bonguan_2(){
    printf(" 법인             201호    202호   203호           양치실    남자        \n");
    printf("사무실                                                    화장실        계단\n");
    printf("\n");
    printf("계단             2-4반     2-3반    2-1반                              여자\n");
    printf("                                                                      화장실\n");
    printf("\n");
    printf("                                                                      서버룸\n");
    printf("                                                                          \n");
    printf("                                                                     교구관리실2\n");
    printf("\n");
    printf("                                                                  정보보호관리실습실\n");
    printf("                                                     2-2반\n"); 
    printf("\n");
    printf("                                                     2-5반\n");
    printf("\n");
    printf("                                                                      회계실무실습실\n");
    printf("                                                     2-6반\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                                                     계단             상담실\n");
    printf("                                             엘리베이터\n");
    return 0;
}
int show_bonguan_1(){
    printf("                  도서관   성고충상담실-여    보건실\n");
    printf("계단                                                                  계단\n");
    printf("        문서보관실(행정)     교장실   교육행정실\n");   
    printf("                                                                      여자\n");
    printf("                                                                     화장실\n");
    printf("\n");  
    printf("                                                                    휴게실\n");
    printf("\n");
    printf("                                                                    과학실\n");
    printf("                                                      제1\n");
    printf("                                                      교\n"); 
    printf("                                                      무\n");
    printf("                                                      실\n");
    printf("                                              성고충상담실-남\n");
    printf("\n");
    printf("                                                                     비즈쿨실\n");
    printf("\n");
    printf("                                                     계단             방송실\n");
    printf("                                                   엘리베이터               \n");
    printf("                                                                    대걸레 거치대\n");
    return 0;
}
int show_gym_0(){
    printf("                          신발장\n");
    printf("\n");
    printf("                                                   스쿼시 장   \n");
    printf("                                                                          당구장\n");
    printf("입구                     농구장                             거울 방\n");
    printf("                                                     헬스장               탁구장\n");
    printf("                            의자\n");
    return 0;
}
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
                    printf("                시청각실\n");
                    printf("\n");
                    printf("                       IT\n");
                    printf("                    프로젝트실\n");
                    printf("\n");
                    printf("   사물인터넷서비스\n");
                    printf("      기획실습실      화장실\n");
                    printf("\n");
                    printf("       계단        엘리베이터       휴머노이드연구소     매점\n");
                    printf("                                                                매점 테라스\n");
                    printf("     세미나실                        3학년부 교무실\n");
                    printf("                 입구\n");
                    printf("-------------------------------------\n");
                case 2:
                    printf("-------------------------------------\n");
                    printf("                시청각실\n");
                    printf("It정보과학          3-6반\n");
                    printf("영재학급            3-4반\n");
                    printf("방송콘텐츠제작실습실\n");
                    printf("멀티미디어실         3-2반\n");
                    printf("윈도우앱창작터실습실\n");
                    printf("      화장실         화장실\n");
                    printf("\n");
                    printf("       계단        엘리베이터              3-5반\n");
                    printf("                                                            음악실\n"); 
                    printf("     연구실                3-1반  3-3반              계단\n");
                    printf("\n");
                    printf("-------------------------------------\n");
                case 3:
                printf("-------------------------------------\n");
                    printf("도서관\n");
                    printf("\n");
                    printf("       계단             엘리베이터    데이터베이스프로그래밍실습실\n");
                    printf("                                                            음악실\n"); 
                    printf("                        이사장실   애니메이션컨텐츠  첨단영상            계단\n");
                    printf("                                      제작실습실      제작실\n");
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
                    printf("	     신발장      계단          입구\n");
                    printf("독서실\n");
                    printf("						                    화장실\n");
                    printf("\n");
                    printf("	                                       심야자습실\n");
                    printf("        	             신발장\n");
                    printf("\n");
                    printf("        	                       심야자습실\n");
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
                    break;
                case 3:
                    printf("-------------------------------------\n");
                    printf("               휴게실       계단\n");
                    printf("                                    화장실\n");
                    printf("호실						                       호실\n");
                    printf("         교무실\n");  
                    printf("	                                 샤워실\n");
                    printf("        	    샤워실\n");
                    printf("\n");
                    printf("        	             호실\n");
                    printf("-------------------------------------\n");
                    break;
                case 4:
                    printf("-------------------------------------\n");
                    printf("               휴게실       계단\n");
                    printf("                                    화장실\n");
                    printf("호실						                       호실\n");
                    printf("         교무실\n");  
                    printf("	                                 샤워실\n");
                    printf("        	    샤워실\n");
                    printf("\n");
                    printf("        	             호실\n");
                    printf("-------------------------------------\n");
                    break;
                case 5:
                    printf("-------------------------------------\n");
                    printf("                       계단\n");
                    printf("\n");
                    printf("               호실		         호실\n");
                    printf("\n");  
                    printf("	                   호실\n");
                    printf("        	    화장실\n");
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
int want_map(){
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
    if (show_map != 0){
        show_map(building);
    }
    else{
        return 0;
    }
}