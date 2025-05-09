#include <iostream>
#include "Material.h"
#include "Persistenceutils.h"
#include "Vector.h"
#include "Queue.h"
#include "PriorityQueue.h"
#include "PersitenciaMateriales.h"
using namespace std;


int main() {
    Vector<Material> materialesVector;
    Queue<Material> materialesQueue;
    PriorityQueue<Material> materialesPQ;
    //prueba
    cargarEnVector(materialesVector);
    cout << endl;

    cargarEnQueue(materialesQueue);
    cout << endl;

    cargarEnPriorityQueue(materialesPQ);
    cout << endl;

    return 0;
}}
