#include <stdio.h>
#include <unistd.h> // Linux 운영체제를 사용할 떄

int main(int argc, char* argv[]){
    sleep(5);
    printf("Awake!\n");

    return 0;
}