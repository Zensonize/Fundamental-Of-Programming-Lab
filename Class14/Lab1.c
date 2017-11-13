#include <stdio.h>

struct Student1_rec{
    char ID[];
    int credits;
    double grade;
}

struct Student2_rec{
    char first[];
    char last[];
    char bd[];
    int credits;
    double grade;
}

struct Mailing{
    char first[];
    char last[];
    char street[];
    char city[];
    char country[];
    char zip[];
}

struct stock{
    char stock[];
    double price;
    char purchase_date[];
}

struct Stemp {
    struct Student1_rec;
    struct Student2_rec;
    struct Mailing;
    struct stock;
}

int main() {
    struct Stemp user;
    user.Student1_rec = {{"4672"},{68},{3.01},{"Manee"},{"Deejai"},{"8/4/1980"}};
    user.Student2_rec = {{"Manee"},{"Deejai"},{"8/4/1980"},{96},{3.89}};
    user.Mailing = {{"Mana"},{"Klahan"},{"4 Road Salaya"},{"Putthamonthon"},{"Thailand"},{"73170"}};
    user.stock = {{"ICT stock"},{134.5},{"10/1/2010"}};
    printf("%s",user.Student1_rec);
}