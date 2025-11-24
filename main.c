#include <stdio.h>
#include <stdlib.h>
void sayHello(){
    printf("hello,student! You just called me back\n");
}
void studentWork(void(*callbackFunc)()){
    printf("student is doing homework....\n");
    callbackFunc();
}
int main(){
    studentWork(sayHello);
    return 0;
}
