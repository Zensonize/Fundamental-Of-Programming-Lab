#include <stdio.h>

struct date{
    int day;
    int month;
    int year;
};

struct name{
    char first[50];
    char last[50];
};

struct score{
    int grade;
    double credit;
};

struct Student1_rec{
    char ID[8];
    struct score st1;
};

struct Student2_rec{
    struct name uname;
    struct date bd;
    struct score st2;
};

struct Mailing{
    struct name mailn;
    char street[50];
    char city[50];
    char country[50];
    char zip[10];
};

struct stock{
    char stock[50];
    double price;
    struct date purchase_date;
};

struct Stemp {
    struct Student1_rec stu1;
    struct Student2_rec stu2;
    struct Mailing mail;
    struct stock stockinfo;
};

int main() {
    struct Stemp user  = {  {"4672",{68,3.01}}, 
                            {"Manee","Deejai",{8,4,1980},{96,3.89}},
                            {"Mana","Klahan","4 Road Salaya","Putthamonthon","Thailand","73170"},
                            {"ICT stock",134.5,{10,1,2010}}
    };
    printf("%s %d %f\n",user.stu1,user.stu1.st1.grade,user.stu1.st1.credit);
    printf("%s\n",user.stu2);
}