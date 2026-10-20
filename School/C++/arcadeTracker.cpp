#include <iostream>
#include <vector>
using namespace std;

// Funzione per aggiungere un nuovo punteggio al vettore (accetta solo valori >= 0)
void aggiungiPunteggio(vector<int>& v, int nuovoPunteggio) { // vector<int>& v -> Passaggio per riferimento: la funzione lavora direttamente sul vettore originale
    if (nuovoPunteggio >= 0) {
        v.push_back(nuovoPunteggio); // Inserisce il punteggio in fondo al vettore
        cout<<"Punteggio aggiunto "<<endl;
    } else {
        cout<<"Errore: il punteggio non puo' essere negativo "<<endl;
    }
}

// Funzione per stampare tutti i punteggi registrati finora con il rispettivo numero di match
void stampaPunteggi(const vector<int>& v) {
    if (v.empty()) { // Controlla se il vettore e' vuoto
        cout<<"Non ci sono partite registrate "<<endl;
        return;
    }
    for (int i = 0; i < v.size(); i++) {
        cout<<i + 1<<"Numero partita "<<v[i]<<" | "<<endl;
    }
}

// Funzione per calcolare la media aritmetica dei punteggi
float calcolaMedia(const vector<int>& v) {
    if (v.empty()) {
        return 0.0f; // Restituisce 0 (f sta per float) se non ci sono punteggi per evitare divisioni per zero
    }
    int somma = 0;
    for (int i = 0; i < v.size(); i++) {
        somma += v[i]; // Somma accumulata di tutti i punteggi
    }
    return (float)somma / v.size(); // Calcola e restituisce la media in formato float
}

// Funzione per trovare il punteggio piu' alto (Top Score)
int trovaTopScore(const vector<int>& v) {
    if (v.empty()) {
        return 0;
    }
    int max = v[0]; // Inizializza il massimo con il primo elemento
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max) { // Aggiorna il massimo se trova un valore superiore
            max = v[i];
        }
    }
    return max;
}

// Funzione per applicare una percentuale di bonus a tutti i punteggi memorizzati
void applicaBonusPowerUp(vector<int>& v, float percentuale) {
    for (int i = 0; i < v.size(); i++) {
        v[i] = v[i] + (v[i] * percentuale / 100); // Incrementa ogni singolo punteggio della percentuale data
    }
    cout<<"Bonus applicato "<<endl;
}

// Funzione per contare quante partite superano un determinato valore soglia
int contaPartiteSopraSoglia(const vector<int>& v, int soglia) {
    int contatore = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > soglia) {
            contatore++; // Incrementa il contatore se il punteggio e' maggiore della soglia
        }
    }
    return contatore;
}

int main() {
    vector<int> punteggi; // Vettore dinamico per memorizzare la lista dei punteggi
    int scelta;
    do {
        cout<<"Ciao, seleziona un'opzione a schermo digitando un numero tra 1 e 6"<<endl;
        cout<<"1. Inserisci nuovo punteggio "<<endl; // Stampa a schermo il menu principale del programma
        cout<<"2. Mostra tutti i punteggi "<<endl;
        cout<<"3. Calcola media punteggi "<<endl;
        cout<<"4. Mostra Top Score "<<endl;
        cout<<"5. Applica Power-Up Bonus "<<endl;
        cout<<"6. Conta partite sopra una soglia "<<endl;
        cout<<"0. Esci "<<endl;
        cout<<"Scelta "<<endl;
        cin>>scelta; // Legge l'opzione scelta dall'utente
        while (scelta < 0 || scelta > 6) {
            cout<<"Errore, riprova "<<endl;
            cin>>scelta;
        }
        switch (scelta) {
            case 1: {
                int p;
                cout<<"Inserisci punteggio "<<endl;
                cin>>p;
                while (p < 0) {
                    cout<<"Errore, riprova "<<endl;
                    cin>>p;
                }
                aggiungiPunteggio(punteggi, p);
                break;
            }
            case 2:
                stampaPunteggi(punteggi);
                break;
            case 3:
                cout<<"Media "<<calcolaMedia(punteggi)<<endl;
                break;
            case 4:
                cout<<"Top Score "<<trovaTopScore(punteggi)<<endl;
                break;
            case 5: {
                float perc;
                cout<<"Inserisci percentuale "<<endl;
                cin>>perc;
                while (perc < 0 || perc > 100) {
                    cout<<"Errore, riprova "<<endl;
                    cin>>perc;
                }    
                applicaBonusPowerUp(punteggi, perc);
                break;
            }
            case 6: {
                int soglia;
                cout<<"Inserisci soglia "<<endl;
                cin>>soglia;
                cout<<"Partite sopra la soglia "<<contaPartiteSopraSoglia(punteggi, soglia)<<endl;
                break;
            }
            case 0:
                cout<<"Uscita in corso "<<endl;
                break;
            default:
                cout<<"Scelta non valida "<<endl;
        }
    } while (scelta != 0); // Il ciclo continua finche' l'utente non inserisce 0 per uscire
    return 0;
}
