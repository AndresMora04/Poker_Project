#include <iostream>
#include <string>
#include <algorithm>
#include <SFML/Graphics.hpp> 

const int NUM_PALOS = 4;
const int NUM_VALORES = 13;

using namespace std;
using namespace sf;

class DeckOfCards
{
private:
    string palos[NUM_PALOS] = { "Corazones", "Diamantes", "Treboles", "Picas" };
    string valores[NUM_VALORES] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    string cartas[NUM_PALOS][NUM_VALORES];
    Texture imagenesCartas[NUM_PALOS][NUM_VALORES];  // Array para almacenar las texturas de las imágenes
public:
    DeckOfCards();
    void mezclar();
    void mostrarBaraja();
};

