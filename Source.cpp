#include <iostream>
#include <conio.h>
#include <list>
#include <string>
#include <vector>
#include "Arbol.h"
#include "Listas.h"

using namespace std;
using namespace System;

int menu() {
	int opcion;
	cout << "                  menu" << endl;
	cout << " 1 - Creacion de Tablas e Insercion de columnas " << endl; // pedirle al usuario un numero de fila y columnas, y posteriomente poder insertar columnas de manera individual
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
	vector<Arbol<list<ListaD<string>*>*>*>* arbolIndx = new vector<Arbol<list<ListaD<string>*>*>*>();
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
		
			indx->push_back(lista);
			cout << "respuesta [ 1 - continuar ]: "; cin >> resp;
			cout << endl;
			if (resp != 1) {
				for (list<ListaD<string>*> ::iterator it = indx->begin(); it != indx->end(); ++it) {
					for (int i = 0; i < lista->size(); i++) {
						cout << (*it)->at(i);
						
						//cout << lista->at(i) << " ";
					}cout << endl;
				}
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