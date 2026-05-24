#include<stdio.h>
int main()
{
    FILE*fp;
    fp = fopen("test_file.txt","a+");

    int i;
    for(i = 65; i < 90; i++){                         //ASCII value দিয়ে একটি করে character printf করা শিখলাম
        fputc(i, fp);
        printf("%c", i);
    }

    char arr[100] ="Hi, I am Rommon!";               //এখানে প্রথম থেকে শুরু করবে মানে A থেকে Z পর্যন্ত caracter করবে
    fputs(arr, fp);                                  //
    fprintf(fp, "My id is: %d\n", 100);              //


    int c;                                           //এখানে পরবর্তী অক্ষর থেকে printf করবে
    c = fgetc(fp);                                   //মানে A এর পর থেকে B থেকে printf করবে
    printf("The char is: %c\n", c);                  //


    char buff[100];                                  //এখানে B থেকে শুরু করবে মানে পরবর্তী অক্ষর থেকে শুরু করবে
    fscanf(fp, "%s", buff);                          //
    printf("The data in buffer is: %s\n", buff);


    fgets(buff, 500, fp);                              //
    printf("The data in buffer is: %s\n", buff);

    fclose(fp);
    return 0;
}
