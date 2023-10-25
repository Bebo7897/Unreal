// OOPAssmt214.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

class Dog {
public:
    string breed;
    string color;
    float height;
    float weight;

public:
    void Shake() {
        cout << "Shake shake shake\n";
    }

public:
    void Sit() {
        cout << "Sit and wag tail\n";
    }

public:
    void LayDown() {
        cout << "Lay on floor\n";
    }
};


int main()
{
    Dog thisDog;

    thisDog.breed = "Hound";
    thisDog.color = "Brown";
    thisDog.height = 2;
    thisDog.weight = 60;

    cout << "Breed: " + thisDog.breed + "\n";
    cout << "Color: " + thisDog.color + "\n";
    cout << "Height: " << thisDog.height << " feet\n";
    cout << "Weight: " << thisDog.weight << " pounds\n";

    thisDog.Shake();
    thisDog.Sit();
    thisDog.LayDown();
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
