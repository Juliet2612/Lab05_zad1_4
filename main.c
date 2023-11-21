#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    int grade;
    printf("Podaj liczbę punktów: ");
    scanf("%d", &grade);
    if (grade <=0 || grade > 100) {
        puts("Niepoprawne dane!\n");
        fflush(stdin);
        getchar();
        exit(EXIT_FAILURE);
    }
    if (grade >= 91) {
        puts ("ocena: 5(bdb)\n");
    } // koniec if
    else if (grade >= 81) {
        puts ("ocena: 4.5(db+)\n");
    } // koniec bloku else if
    else if (grade >= 71) {
        puts ("ocena: 4(db)\n");
    } // koniec bloku else if
    else if (grade >= 61) {
        puts ("ocena: 4.5(dst+)\n");
    } // koniec bloku else if
    else if (grade >= 51) {
        puts ("ocena: 3(dst)\n");
    } // koniec bloku else if
    else {
        puts ("ocena: 2(ndst)\n");
    } // koniec bloku else
    fflush(stdin);
    getchar();
    return 0;
}