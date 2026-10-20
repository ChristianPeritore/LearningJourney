#include <iostream>
#include <string>
using namespace std;

// Definizione della struttura Sezione
struct Sezione {
	string nome;
	double incasso;
} ;

// Funzione per inserire gli incassi da tastiera
void inserisciIncassi(Sezione sezioni[], int dim) {
	cout<<"Incassi giornalieri"<<endl;
	for (int i = 0; i < dim; i++) {
		cout<<"Sezione "<<sezioni[i].nome<<endl;
		cout<<"Inserisci l'incasso "<<endl;
		cin>>sezioni[i].incasso;

		// Controllo validazione base per evitare valori negativi
		while (sezioni[i].incasso < 0) {
			cout<<"Errore, riprova "<<endl;
			cin>>sezioni[i].incasso;
		}
	}
}

// Funzione per stampare il report degli incassi
void stampaIncassi(const Sezione sezioni[], int dim) {
	cout<<"Incassi sezioni"<<endl;
	for (int i = 0; i < dim; i++) {
		cout<<sezioni[i].nome<<": "<<sezioni[i].incasso<<" €"<<endl;
	}
}

// Funzione per calcolare l'incasso totale della giornata
double calcolaTotale(const Sezione sezioni[], int dim) {
	double totale = 0.0;
	for (int i = 0; i < dim; i++) {
		totale += sezioni[i].incasso;
	}
	return totale;
}

// Funzione per trovare e stampare la sezione che ha incassato di più
void trovaMigliore(const Sezione sezioni[], int dim) {
	if (dim <= 0) return;
	int indiceMigliore = 0;
	for (int i = 1; i < dim; i++) {
		if (sezioni[i].incasso > sezioni[indiceMigliore].incasso) {
			indiceMigliore = i;
		}
	}
	cout<<"La sezione con l'incasso maggiore e' "<<sezioni[indiceMigliore].nome<<" con "<<sezioni[indiceMigliore].incasso<<" €"<<endl;
}

int main() {
	const int numeroSezioni = 4;
	// Inizializzazione dell'array di strutture con i nomi delle sezioni del pub
	string nomi[] = {"Birreria", "Cucina", "Cocktail Bar", "Pizzeria"};
	Sezione sezioni[4];
	for (int i = 0; i < 4; i++) {
		sezioni[i] = {nomi[i], 0.0};
	}
	// Invocazione delle funzioni richieste
	inserisciIncassi(sezioni, numeroSezioni);
	stampaIncassi(sezioni, numeroSezioni);
	double totaleGiornaliero = calcolaTotale(sezioni, numeroSezioni);
	cout<<"Totale complessivo "<<totaleGiornaliero<<" €"<<endl;
	trovaMigliore(sezioni, numeroSezioni);
	return 0;
}
