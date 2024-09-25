#include <stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int cnt=0;
    while (c!='.'){
        scanf("%c",&c);
        if (c>='1' && c<='9'){
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}