#include <stdio.h> // header standar untuk c
#include <conio.h>

int main () {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("hello world\n"); //prinf disini untuk fungsi outpun pada c

    printf("masukkan nama: ");
    gets(nama); //gets --> get string

    printf("masukkan nim: ");
    scanf("%d", &nim);

    getchar(); 

    printf("masukkan kom : ");
    gets(kom);

    printf("masukkan ip: ");
    scanf("%f", &ip);

    /* ini untuk output */
    printf("Nama : ");
    puts(nama); //puts --> out string, untuk string dalam bentuj array char

    printf("nim : %d\n", nim);

    printf("kom : ");
    puts(kom);

    printf("ip : %.2f\n", ip); 

    printf("press any button to continue...");
    getch();
    
}
