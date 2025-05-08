#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *nexet;
};

class LinkedList
{
    Node *START;

public:
    List()
    {
        START = NULL;
    }

    void addNode()
    {
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa: ";
    cin >> nim;

    Node *nodeBaru = new Node;
    nodeBaru->noMhs = nim;

    if ((START != NULL || nim <= START->  ))
    {

        if ((START != NULL ) && (nim == START->noMhs))
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
        previous = current;
        current = current->nexet;

    }

    nodeBaru->nexet = current;
    previous->nexat = nodeBaru;


    }

    bool lis


}