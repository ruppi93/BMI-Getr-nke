#include <stdio.h>

// Funktionsprototyp für BMI-Aufgabe
void bmi();

// Funktionsprototyp für Getränke-Automat-Aufgabe
void automat();

// Am Hauptteil muss nichts geändert werden. Der Code kann in die zwei Funktionen geschrieben werden.
int main() {
    int aufgabe;

    printf("Fuer BMI-Aufgabe druecke 1 und fuer Getraenke-Automat druecke 2:\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        bmi();
    } else if (aufgabe == 2) {
        automat();
    } else {
        printf("Ungueltige Eingabe, Programm muss neu gestartet werden.\n");
    }
    return 0;
}

void bmi() {
    // Hier muss der Code für die BMI-Aufgabe geschrieben werden.
    float koerpergroesse, gewicht, bmi ;

    printf("Gebe deine koerpergroesse ein\n");
    scanf("%f", &koerpergroesse);

    printf("Gebe dein gewicht ein\n");
    scanf("%f", &gewicht);

    bmi = gewicht / (koerpergroesse*koerpergroesse) ;

    printf("Dein BMI betraegt %f" , bmi);

    if  ( bmi >= 15 && bmi < 20) {
        printf("\n sie sind untergewichtig\n");
    }else if ( bmi >= 20 && bmi < 25 ){
    printf("\n sie sind normalgewichtig\n");
}
    return 0;
}

void automat() {
    // Hier muss der Code für die Getränke-Automat-Aufgabe geschrieben werden.
    int auswahl ;
    float preis, eingezahlt ;

    printf("\nGeben sie ihr gewuenschtes Getraenk ein\n (1)Fuer Wasser = 0.50CHF\n (2)Fuer Limonade = 1.0CHF\n (3)Fuer Bier =1.50CHF\n Geben sie 1,2 oder 3 ein\n");
    scanf("%d",&auswahl ) ;

    if (auswahl == 1) {
        preis = 0.5;
        printf("geben sie 0,50 fuer Wasser ein\n");
    } else if (auswahl == 2) {
        preis = 1.0;
        printf("geben sie 1,0 fuer Limonade ein\n" );
    }else if (auswahl == 3) {
        preis = 1.5;
        printf("geben sie 1,5 fuer Bier ein\n" );
    }
    scanf("%f", & eingezahlt) ;
    if (eingezahlt == 0.5 ) {
        printf("Sie erhalten Wasser\n") ;
    } else if (auswahl == 1.0) {
        printf("Sie erhalten Limonade\n") ;
    } else if (auswahl == 1.5) {
        printf("Sie erhalten Bier\n") ;
    }
    return 0;
    }