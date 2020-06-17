#include <iostream>
#include <conio.h>
#include <list>
#include <string>
#include <vector>
#include "Arbol.h"
#include "Listas.h"
#include <stdlib.h>
#include <map>

using namespace std;
using namespace System;

int menu() {
	int opcion;

	cout << "                  menu" << endl;
	cout << " 1 - Creacion de Tablas e Insercion de columnas "<< endl; // pedirle al usuario un numero de fila y columnas, y posteriomente poder insertar columnas de manera individual
	cout << " 2 - Insercion de Registros " << endl; // Check
	cout << " 3 - Indexado de datos por columnas " << endl; //  !Esta funcionalidad no la verá el usuario¡
	cout << " 4 - Seleccion de datos por columnas " << endl;
	cout << " 5 - Filtrado de datos por columnas " << endl;
	cout << " 6 - Ordenamiento de datos por columnas " << endl;
	cout << " 7 - Exportacion de datos a archivos planos con diferente formato " << endl;
	cout << "     Ingrese opcion: "; cin >> opcion;
	cout << endl;
	Console::Clear();
	return opcion;
}

int main() {
	string nombre, edad, sexo;

	list<ListaD<string>*>* indx = new list<ListaD<string>*>();
	//Arbol<list<ListaD<string>>*>* arbol_IndxInt = new Arbol<list<ListaD<string>>*>();

	auto crInt = [](int a, int b) { return a < b; };
	auto crS = [](string a, string b) { return a.compare(b) < 0; };

	vector<Arbol<string>*>arboles;// = new vector<Arbol<string>*>();
	
//	map<string, Arbol<string>*>* arboles = new map<string, Arbol<string>*>();
//
//string n;
//(arboles)[n]->insertar("hola", crS);
//(arboles)[n]->buscar("hola");
	

	int resp;


	switch (menu()){ 
	case 1: cout << "estamos trabajando en ello " << endl; break;
	case 2:	
		do {
			ListaD<string>* lista = new ListaD<string>();
			cout << "Ingrese nombre del usuario :"; cin >> nombre;
			cout << "Ingrese edad del usuario :"; cin >> edad;
			cout << "Ingrese sexo del usuario :"; cin >> sexo;
			lista->push_back(nombre);
			lista->push_back(edad);
			lista->push_back(sexo);
		
			(arboles)[0]->insertar(nombre, crS);
			indx->push_back(lista);
			cout << "respuesta [ 1 - continuar ]: "; cin >> resp;
			cout << endl;
			if (resp != 1) {
				
				for (list<ListaD<string>*> ::iterator it = indx->begin(); it != indx->end(); ++it) {
					for (int i = 0; i < lista->size(); i++) {
						cout << (*it)->at(i)<<" ";
						
						//cout << lista->at(i) << " ";
					}cout << endl;
				}
				for (list<ListaD<string>*> ::iterator it = indx->begin(); it != indx->end(); ++it) {
					cout << "nombre encontrado: "; (arboles)[0]->buscar((*it)->at(0));
					cout << endl;
					
				}cout << "nombres ordenados alfabeticamente : "; (arboles)[0]->enOrden();
			}
		} while (resp == 1);
		break;
	case 3:	 cout << "estamos trabajando en ello " << endl; break;
	case 4:	 cout << "estamos trabajando en ello " << endl; break;
	case 5:	 cout << "estamos trabajando en ello " << endl; break;
	case 6:	 cout << "estamos trabajando en ello " << endl; break;
	case 7:	 cout << "estamos trabajando en ello " << endl; break;
	}

	
	//switch (menu())
	//{
	//case 1: cout << "estamos trabajando en ello " << endl; break;
	//case 2:	
	//	do {
	//		ListaD<string>* lista = new ListaD<string>();
	//		cout << "Ingrese nombre del usuario :"; cin >> nombre;
	//		cout << "Ingrese edad del usuario :"; cin >> edad;
	//		cout << "Ingrese sexo del usuario :"; cin >> sexo;
	//		lista->push_back(nombre);
	//		lista->push_back(edad);
	//		lista->push_back(sexo);
	//	
	//		indx->push_back(lista);
	//		cout << "respuesta [ 1 - continuar ]: "; cin >> resp;
	//		cout << endl;
	//		if (resp != 1) {
	//			for (list<ListaD<string>*> ::iterator it = indx->begin(); it != indx->end(); ++it) {
	//				for (int i = 0; i < lista->size(); i++) {
	//					cout << (*it)->at(i);
	//					
	//					//cout << lista->at(i) << " ";
	//				}cout << endl;
	//			}
	//		}
	//	} while (resp == 1);
	//	break;
	//case 3:	 cout << "estamos trabajando en ello " << endl; break;
	//case 4:	 cout << "estamos trabajando en ello " << endl; break;
	//case 5:	 cout << "estamos trabajando en ello " << endl; break;
	//case 6:	 cout << "estamos trabajando en ello " << endl; break;
	//case 7:	 cout << "estamos trabajando en ello " << endl; break;
	//}



	

	_getch();
	return 0;
}




/*Arbol<int>* arbol_IndxInt = new Arbol<int>();*/
//AVLTree<Row*, string>* arb = new AVLTree<Row*, string>([=](Row* r) {return r->getData(colName);});



//map<string, Arbol<string>>* arboles = new map<string, Arbol<string>>();
//
//string nombre;
//(*arboles)[nombre]->insertar("hola", crS);
//(*arboles)[nombre]->buscar("hola");
