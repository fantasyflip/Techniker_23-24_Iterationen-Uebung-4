#include <stdio.h>

void task1(){
    printf("Aufgabe 1: Fakultät\n\n");

    //Variablen definieren
    int input = 9, output = 1;

    //Schleife so oft wiederholen wie der input
    for(int i = 1; i <= input; i ++){
        //i mit dem output multiplizieren
        output = i * output;
    }

    //Ergebnis ausgeben
    printf("Die Fakultät der Zahl %i ist %i\n\n", input, output);
}

int main()
{
    task1();

    return 0;
}
