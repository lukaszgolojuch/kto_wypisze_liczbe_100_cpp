# O programie

    Nazwa Programu: „Kto poda liczbę 100?”
    Projekt z przedmiotu: Techniki Programowania
    Język programu: C++

    Autor programu: Łukasz Gołojuch

## Opis programu 

   Program jest grą polegającą na interakcji użytkownika z komputerem. Poniżej zostaną przedstawione zasady tej interakcji oraz przeprowadzania gry.   
   Na początku działania aplikacji do programu z linii komend zostaje wprowadzony w postaci parametru poziom od 1 do 3, przy podaniu parametru 4, komputer losuje poziom, z równymi szansami na wystąpienie jednego z trzech wyżej wymienionych za pomocą modułu do generowania liczb pseudolosowych (Dokładny opis poziomów na stronie nr. 2). Dodatkowo, gdy jako parametr podamy liczbę 5 zostanie wczytany ostatni zapis z pliku tekstowego o nazwie „save.html”.
   Po wybraniu poziomu następuje wylosowanie za pomocą wcześniej wspomnianego generatora liczb pseudolosowych, kto pierwszy wykonuje ruch: komputer czy użytkownik aplikacji. Szanse na rozpoczynanie gry przez gracza lub komputer wynoszą 50/50.
   Gra polega na sumowaniu podanych na zmianę przez gracza i komputer liczb, z których każda z nich musi być większa co najmniej o 1, lecz nie więcej niż o 10. Gra kończy się gdy któryś z graczy, w naszym przypadku użytkownik aplikacji lub komputer, poda taka liczbę, że suma wszystkich wcześniej podanych liczb i tej podanej w ostatnim ruchu da sumę równą 100.
   Zwycięzcą jest gracz, który poda liczbę, której suma razem z wcześniej podanymi wyniesie 100.

## Usage

Parametry:

Podanie określonych parametrów przy uruchamianiu aplikacji z poziomu linii komend powoduje określone działanie programu. Poniżej zostały opisane działania jakie są wykonywane przy określonym parametrze:
‚1’ - uruchomienie rozgrywki na poziomie pierwszym
‚2’ - uruchomienie rozgrywki na poziomie drugim
‚3’ - uruchomienie rozgrywki na poziomie trzecim
‚4’ - losowanie poziomu rozgrywki z prawdopodobieństwem wylosowania danego poziomu równym 1/3
‚5’ - wczytanie ostatniego zapisu z pliku „save.txt”
Przy podaniu parametru innego niż podane powyżej zostaje wyświetlone wyjaśnienie problemu i wyjaśnienie sposobu działania programu.

## Moduły

main.cpp - moduł główny zawierający rdzeń funkcjonowania programu 
move.cpp - moduł zawierający funkcje wykonujące ruchy graczy 
counting.cpp - moduł zawierający funkcje obliczeniowe
number_generator.cpp - moduł wykonujący proces generowania liczb pseudolosowych i wybieranie/losowanie poziomu rozgrywki
level1_computer.cpp - moduł wykonujący obliczenia potrzebne do wykonanie ruchu przez komputer gdy prowadzona jest rozgrywka na poziomie 1
level2_computer.cpp -moduł wykonujący obliczenia potrzebne do wykonanie ruchu przez komputer gdy prowadzona jest rozgrywka na poziomie 2
level3_computer.cpp -moduł wykonujący obliczenia potrzebne do wykonanie ruchu przez komputer gdy prowadzona jest rozgrywka na poziomie 3

## Licencja
[Open Source]
