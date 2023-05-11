#include<stdio.h>
main(){
  int a;
  printf("당신이 좋아하는 과일은 무엇인가요? 아래의 번호를 선택해주세요!\n");
  printf("수박:1, 키위:2, 레몬:3, 멜론:5, 좋아하는 거 없음:0\n");
   scanf("%d", &a);

  switch(a){
    case 1: 
    printf("당신은 수박을 좋아하군요~!\n");
    break;
      case 2:
    printf("나도 육포네 키위가 좋아요~\n"); break;
    case 3:
    printf("레몬고른걸 보니~ 역시 신거파~!\n"); break;
    case 5:
    printf("멜론보다 메로나지~\n"); break;
    default:
    printf("너 과일은 안좋아하면 뭐 먹고 살거니!?!?아이고오\n"); 
  }
}