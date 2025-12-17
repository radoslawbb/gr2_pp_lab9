// gr2_pp_lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//zadanie 1
struct Punkt {
    int x = 1;
    int y = 1;
};

//zadanie 2
struct Prostokat {
    float a = 1;
    float b = 1;
};

float poleProstokata(Prostokat* pro) {
    return (*pro).a * (*pro).b;
}

//zadanie 3
struct trojkat {
    float a = 1;
    float b = 1;
    float c = 1;
};

void przepisanie(trojkat trojkat_1, trojkat* trojkat_2) {
    (*trojkat_2).a = trojkat_1.a;
    (*trojkat_2).b = trojkat_1.b;
    (*trojkat_2).c = trojkat_1.c;
}

int main()
{
    /*zadanie 1 
    Punkt punkt1;
    punkt1.x = 5;
    punkt1.y = 12;
    cout << "x = " << punkt1.x << "\ty = " << punkt1.y << endl;*/

    /*zadanie 2 
    Prostokat prostokat1;
    prostokat1.a = 5;
    prostokat1.b = 6;
    cout << "a: " << prostokat1.a << "\tb: " << prostokat1.b << "\npole: " << poleProstokata(&prostokat1);*/

    /*zadanie 3 */
    trojkat troj1;
    trojkat troj2;

    troj1.a = 1;
    troj1.b = 2;
    troj1.c = 3;

    troj2.a = 6;
    troj2.b = 5;
    troj2.c = 4;

    cout << "troj1: " << endl << troj1.a << endl << troj1.b << endl << troj1.c << endl << endl << "troj2: " << endl << troj2.a << endl << troj2.b << endl << troj2.c << endl;

    przepisanie(troj1, &troj2);
    cout << endl;

    cout << "troj1: " << endl << troj1.a << endl << troj1.b << endl << troj1.c << endl << endl << "troj2: " << endl <<  troj2.a << endl << troj2.b << endl << troj2.c << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
