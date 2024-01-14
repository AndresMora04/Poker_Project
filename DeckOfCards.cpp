#include "DeckOfCards.h"

DeckOfCards::DeckOfCards() {
    // Inicializa la matriz de cartas y carga las im�genes
    for (int i = 0; i < NUM_PALOS; ++i) {
        for (int j = 0; j < NUM_VALORES; ++j) {
            cartas[i][j] = valores[j] + " de " + palos[i];
            // Suponiendo que las im�genes est�n almacenadas en una carpeta llamada "imagenes"
            imagenesCartas[i][j].loadFromFile("imagens/" + valores[j] + "_de_" + palos[i] + ".png");
        }
    }
}

void DeckOfCards::mezclar() {
    srand(time(0));
    for (int i = 0; i < NUM_PALOS; ++i) {
        random_shuffle(begin(cartas[i]), end(cartas[i]));
    }
}

void DeckOfCards::mostrarBaraja() {
    for (int i = 0; i < NUM_PALOS; ++i) {
        for (int j = 0; j < NUM_VALORES; ++j) {
            cout << cartas[i][j] << "\n";
        }
    }
}
