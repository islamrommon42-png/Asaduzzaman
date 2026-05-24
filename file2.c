#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("data.txt", "r");
    int c;
    int cCounter = 0,vCounter = 0, sCounter = 0;
    while(1)
    {
       c = fgetc(fp);
       if(c == EOF){
        break;
    }

       if(c == 32){
        sCounter++;
        }else if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        vCounter++;

       }else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
           vCounter++;
       }else{
           cCounter++;
       }
    }

    printf("vowel: %d\n", vCounter);
    printf("consonent: %d\n", cCounter);
    printf("space and newline: %d\n", sCounter);

    return 0;
}
