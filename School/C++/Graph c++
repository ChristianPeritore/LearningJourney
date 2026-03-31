#include <iostream>
using namespace std;
int main() {
    const int MAX_NODES = 10;
    int N;
    int graph[MAX_NODES][MAX_NODES];
    cout << "Enter the number of nodes (maximum 10): ";
    cin >> N;
    if (N < 1 || N > 10) {
        cout << "Invalid number of nodes!" << endl;
        return 1;
    }
    cout << "Enter the adjacency matrix (0 or 1):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "graph[" << i << "][" << j << "]: ";
            cin >> graph[i][j];
        }
    }
    cout << "\nEntered Adjacency Matrix:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nDegree of each node:" << endl;
    for (int i = 0; i < N; i++) {
        int degree = 0;
        for (int j = 0; j < N; j++) {
            degree += graph[i][j];
        }
        cout << "Node " << i << ": degree = " << degree << endl;
    }
    int totalEdges = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            totalEdges += graph[i][j];
        }
    }
    totalEdges /= 2;
    cout << "\nTotal number of edges: " << totalEdges << endl;
    bool isComplete = true;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j && graph[i][j] != 1) {
                isComplete = false;
                break;
            }
        }
        if (!isComplete) break;
    }
    if (isComplete) {
        cout << "The graph is complete." << endl;
    } else {
        cout << "The graph is NOT complete." << endl;
    }
    return 0;
}
