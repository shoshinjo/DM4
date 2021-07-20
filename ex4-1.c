#include <stdio.h>
#include <stdlib.h>

int main(){
int x, num, head = 0, tail = 0;

printf("Tossing a coin...\n");

for(x = 0; x < 3; x++){
num = rand();
if(num%2 == 0){
printf("Round %d: head\n", x+1);
head++;
}

else{
printf("Round %d: tail\n", x+1);
tail++;
}

printf("head: %d, tail: %d\n", head, tail);

return 0;
}
