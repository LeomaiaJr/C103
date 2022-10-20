#include <iostream>
#include <string.h>

using namespace std;

struct aluno
{
    char nome[100];
    char curso[100];
    int matricula;
};

int main()
{

    aluno alunos[100];
    int quant = 0;

    cin >> quant;

    for (int i = 0; i < quant; i++)
    {
        cin.ignore();
        cin.getline(alunos[i].nome, 100);
        cin.getline(alunos[i].curso, 100);
        cin >> alunos[i].matricula;
    }

    char find[100];
    cin.ignore();
    cin.getline(find, 100);

    int hasFind = 0;
    for (int i = 0; i < quant; i++)
    {
        if (strcmp(alunos[i].nome, find) == 0)
        {
            hasFind = 1;
            cout << alunos[i].nome << endl;
            cout << alunos[i].curso << endl;
            cout << alunos[i].matricula << endl;
        }
    }

    if (hasFind == 0)
    {
        cout << "Aluno nao localizado" << endl;
    }

    return 0;
}