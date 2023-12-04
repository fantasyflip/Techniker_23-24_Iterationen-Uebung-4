#include <stdio.h>

void task1(){
    printf("Aufgabe 1: Fakultaet\n\n");

    //Variablen definieren
    int input = 9, output = 1;

    //Schleife so oft wiederholen wie der input
    for(int i = 1; i <= input; i ++){
        //i mit dem output multiplizieren
        output = i * output;
    }

    //Ergebnis ausgeben
    printf("Die Fakultaet der Zahl %i ist %i\n\n", input, output);
}

void task2(){
    printf("Aufgabe 2: Fibonacci\n\n");

    //Variablen definieren - die ersten beiden Fib-Zahlen sind statisch definiert. Erste Fib 'preLastFib' 0 und zweite Fib 'lastFib' 1. Das Offset wird deshalb auf 2 gesetzt.
    int target = 35, lastFib = 1, preLastFib = 0, offset = 2;

    //Ausgaben Header
    printf("Pos.\tFib.\n");

    //Ersten beiden statischen Fib-Zahlen ausgeben
    printf("%i\t%i\n", 1, 0);
    printf("%i\t%i\n", 2, 1);

    //Die restlichen Fib-Zahlen können dynamisch generiert werden. Bis zum target - den offset
    for(int i = 0; i < target - offset; i++){
        //Aktuelle Fib-Zahl berechnen
        int currentFib = lastFib + preLastFib;
        //Fib-Zahlen um eins nach hinten schieben.
        preLastFib = lastFib;
        lastFib = currentFib;

        //Aktuelle Fib-Zahl ausgeben - Position ist i + 1, da die Schleife bei 0 beginnt, + offset nach den ersten beiden statischen Fib-Zahlen
        printf("%i\t%i\n", i + 1 + offset, currentFib);
    }

    printf("\n");
}

void task3(){
    printf("Aufgabe 3: Dreieck\n\n");

    //Variable definieren
    int height = 9;

    //Schleife für die Zeilen
    for(int i = 0; i < height; i++){
        //Schleife für die Sterne
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        //Absatz nach jeder Zeile mit Sternen
        printf("\n");
    }

    printf("\n");
}

void task4(){
    printf("Aufgabe 4: Quadrat mit Diagonalen\n\n");

    const char fillIcon = 'x', spaceIcon = '-';
    const int width = 15;

    //Schleife für Zeilen
    for(int i = 0; i < width; i++){
        //Schleife für Zeichen in der Zeile
        for(int j = 0; j < width; j++){
            //Wenn es die erste oder die letzte Zeile ist
            if(i == 0 || i == width - 1){
                //fillIcon ausgeben
                printf("%c",fillIcon);
            }
            //Wenn es das erste oder letzte Zeichen in einer Zeile ist
            else if (j == 0 || j == width - 1){
                //fillIcon ausgeben
                printf("%c", fillIcon);
            }
            //Diagonalen zeichnen
            else if(i == j || i == width - j - 1){
                //fillIcon ausgeben
                printf("%c", fillIcon);
            }
            //Sonst spaceIcon ausgeben
            else {
                printf("%c", spaceIcon);
            }
        }

        //Absatz nach jeder Zeile
        printf("\n");
    }

    printf("\n");
}

void task5(){
    printf("Aufgabe 5: Raute\n\n");

    //Variablen definieren
    const char fillIcon = 'O', spaceIcon = '+';
    const int width = 21;

    //Überprüfen ob die Breite ungerade ist.
    if(width % 2 == 0){
        printf("Die Breite muss ungerade sein. Gewählte Breite: %i\n", width);
    } else {

        //Schleife für jede Zeile
        for(int i = 0; i < width; i++){
            //Schleife für jedes Zeichen
            for(int j = 0; j < width; j++){
                //Horizontale Mitte
                if(i == (width/2)){
                    printf("%c",fillIcon);
                }
                //Vertikale Mitte
                else if(j == (width/2)){
                    printf("%c",fillIcon);
                }
                //Diagonalen
                else if(j == (width/2) + i || j == (width/2) - i || j == i - (width/2) || (i > width/2 && j == (width - i-1) + (width/2))){
                    printf("%c",fillIcon);
                }
                //Restliche Zeichen
                else {
                    printf("%c",spaceIcon);
                }
            }
            printf("\n");
        }
    }

    printf("\n");
}

void task6(){
    printf("Aufgabe 6: Dreieck - Rechter Winkel unten links\n\n");

    //Variable definieren
    int height = 9;

    //Schleife für die Zeilen
    for(int i = 0; i < height; i++){
        //Schleife für die Sterne
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        //Absatz nach jeder Zeile mit Sternen
        printf("\n");
    }

    printf("\n");
}

void task7(){
    printf("Aufgabe 7: Dreieck - Rechter Winkel unten rechts\n\n");

    //Variable definieren
    int height = 9;

    //Schleife für die Zeilen
    for(int i = 0; i <= height; i++){
        //Schleife für die Leerzeichen vor den Sternen
        for(int j = 0; j < height - i; j++){
            printf(" ");
        }
        //Schleife für die Sterne
        for(int j = 0; j < i; j++){
            printf("*");
        }
        //Absatz nach jeder Zeile
        printf("\n");
    }

    printf("\n");
}

void task8(){
    printf("Aufgabe 8: Dreieck - Rechter Winkel oben links\n\n");

    //Variable definieren
    int height = 9;

    //Schleife für die Zeilen
    for(int i = height; i > 0; i--){
        //Schleife für die Sterne
        for(int j = 0; j < i; j++){
            printf("*");
        }
        //Absatz nach jeder Zeile mit Sternen
        printf("\n");
    }

    printf("\n");
}

void task9(){
    printf("Aufgabe 9: Dreieck - Rechter Winkel oben rechts\n\n");

    //Variable definieren
    int height = 9;

    //Schleife für die Zeilen
    for(int i = 0; i < height; i++){
        //Schleife für die Leerzeichen vor den Sternen
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        //Schleife für die Sterne
        for(int j = 0; j < height-i; j++){
            printf("*");
        }
        //Absatz nach jeder Zeile
        printf("\n");
    }

    printf("\n");
}

int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();

    return 0;
}
