#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string adjectifs[] = {"doux", "gros", "petit", "grand", "joli", "fou", "gentil", "mauvais", "vif", "sombre""funny", "crazy", "loud", "smart", "silly", "weird"};
    string noms[] = {"chat", "chien", "lion", "lapin", "ours", "poule", "renard", "souris", "tigre", "zebre", "bear", "monkey", "tiger", "elephant", "penguin"};

    // Générer un nombre aléatoire pour sélectionner un adjectif et un nom aléatoire
    srand(time(NULL));
    int random_adj = rand() % 10;
    int random_nom = rand() % 10;

    // Concaténer l'adjectif et le nom pour créer le pseudo
    string pseudo = adjectifs[random_adj] + noms[random_nom];

    // Générer un nombre aléatoire pour déterminer la longueur du nombre à ajouter
    int longueur_nombre = rand() % 5;

    // Générer un nombre aléatoire de longueur longueur_nombre et l'ajouter à la fin du pseudo
    for (int i = 0; i < longueur_nombre; i++) {
        pseudo += to_string(rand() % 10);
    }

    // Générer l'annagramme en minuscule sans le nombre
    string annagramme = "";
    string pseudo_minuscule = "";
    for (int i = 0; i < pseudo.length(); i++) {
        if (isdigit(pseudo[i])) {
            continue; // Ne pas ajouter les chiffres
        }
        pseudo_minuscule += tolower(pseudo[i]);
    }
    for (int i = 0; i < pseudo_minuscule.length(); i++) {
        int random_index = rand() % pseudo_minuscule.length();
        annagramme += pseudo_minuscule[random_index];
    }

    // Afficher le pseudo généré, son annagramme et la longueur du nombre ajouté
    cout << "Votre pseudo est : " << pseudo << endl;
    cout << "Son annagramme est : " << annagramme << endl;


    return 0;
}
