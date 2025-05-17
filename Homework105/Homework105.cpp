#include <iostream>
using namespace std;

struct PralnaMashynka {
    char firma[50];
    char kolir[20];
    float shyryna;
    float dovzhyna;
    float vysota;
    int potuzhnist;
    int shvydkist;
    float temperaturaNagrevu;
};

void vyvestyMashynku(const PralnaMashynka &m) {
    cout << "Фірма: " << m.firma << endl;
    cout << "Колір: " << m.kolir << endl;
    cout << "Ширина: " << m.shyryna << " см" << endl;
    cout << "Довжина: " << m.dovzhyna << " см" << endl;
    cout << "Висота: " << m.vysota << " см" << endl;
    cout << "Потужність: " << m.potuzhnist << " Вт" << endl;
    cout << "Швидкість: " << m.shvydkist << " об/хв" << endl;
    cout << "Температура нагріву: " << m.temperaturaNagrevu << " °C" << endl;
}

int main() {
    PralnaMashynka mashynka;

    
    strcpy(mashynka.firma, "Samsung");
    strcpy(mashynka.kolir, "Білий");
    mashynka.shyryna = 60.0;
    mashynka.dovzhyna = 55.0;
    mashynka.vysota = 85.0;
    mashynka.potuzhnist = 2000;
    mashynka.shvydkist = 1200;
    mashynka.temperaturaNagrevu = 90.0;

    
    vyvestyMashynku(mashynka);

    return 0;
}