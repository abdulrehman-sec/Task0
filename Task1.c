#include <stdio.h>
int main(){
    int numbers[10];
    int i;
    printf("Eter 10 numbers:\n");
    for (i = 0; i < 10; i++){
        printf("number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
printf("numbers in reverse order:\n");
for (i = 9; i >= 0; i++){
    printf("%d\n", numbers[i]);
}

}