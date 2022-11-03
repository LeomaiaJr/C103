#include <iostream>
#include <iomanip>
#include <list>

using namespace std;

struct no
{
    int v;
    int p;
};

void cria_aresta(list<no> adj[], int u, int v, int p, int orientado)
{
    no aux;
    aux.v = v;
    aux.p = p;
    adj[u].push_back(aux);
    if (orientado == 0)
    {
        aux.v = u;
        adj[v].push_back(aux);
    }
}

int main()
{

    int nVertices;
    int orientado;

    cin >> nVertices >> orientado;

    list<no> adj[10];
    no aux;
    int u, v, p;

    cin >> u >> v >> p;
    while (u != -1 && v != -1 && p != -1)
    {
        cria_aresta(adj, u, v, p, orientado);
        cin >> u >> v >> p;
    }

    for (int i = 0; i < nVertices; i++)
    {
        for (list<no>::iterator it = adj[i].begin(); it != adj[i].end(); it++)
        {
            cout << i << " " << it->v << " " << it->p << endl;
        }
    }

    for (int i = 0; i < nVertices; i++)
        while (!adj[i].empty())
            adj[i].pop_front();

    return 0;
}