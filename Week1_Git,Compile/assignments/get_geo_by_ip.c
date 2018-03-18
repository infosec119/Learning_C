#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    FILE *fp; //파일 변수. 지금은 신경쓰지 않아도 된다
    char result[1035];

    //popen("프로그램 경로", "r");
    fp = popen("curl -s https://freegeoip.net/csv/168.131.32.1", "r");
    
    sleep(3); // 인터넷이므로 결과가 오길 기다려야 한다.


    /*
    fgets(char[] 버퍼, 최대 갯수(버퍼의 사이즈), FILE* 변수)
    * 프로그램의 결과를 fp가 받아온다.
    * 받아온 결과를 result에 저장한다.
    */
    while(fgets(result, sizeof(result), fp) != NULL){
        printf("%s", result);
    }

    pclose(fp);

    return 0;
}