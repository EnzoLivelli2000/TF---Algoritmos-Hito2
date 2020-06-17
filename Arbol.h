#pragma once
#include <iostream>
#include <functional>

using namespace std;

template <class T>
class Arbol {
private:
	template <class T>
	struct Nodo {
	public:
		T dato;
		Nodo<T> * derecha;
		Nodo<T> * izquierda;
		Nodo(T d) {
			dato = d;
			derecha = izquierda = nullptr; // chequear si esta sintaxis está bien
		}
	};
	Nodo<T> *raiz;
	long cantidad;

	void insertar(Nodo<T> *& nodo, T &dato, function<bool(T, T)> criterio) {
		if (nodo == nullptr) {
			nodo = new Nodo<T>(dato);
			cantidad++;
		}
		else if (criterio(dato, nodo->dato)) {
			insertar(nodo->izquierda, dato, criterio);
		}
		else {
			insertar(nodo->derecha, dato, criterio);
		}
	}

	void destruir(Nodo<T> & nodo) {
		if (nodo != nullptr) {
			destruir(nodo->izquierda);
			destruir(nodo->derecha);
			delete nodo;
		}
	}

	void buscar(Nodo<T> *nodo, T dato) {
		bool encontrado = false;
		if (nodo == nullptr) {
			if(encontrado == false)return;
		}
		else {
			if (nodo->dato == dato) {
				cout << nodo->dato;
				encontrado = true;
				if (encontrado == true)return;
			}
			else if (dato <= nodo->dato) {
				buscar(nodo->izquierda, dato);
			}
			else {
				buscar(nodo->derecha, dato);
			}
		}
	}

	void enOrden(Nodo<T> * nodo) {
		if (nodo != nullptr) {
			enOrden(nodo->izquierda);
			cout << nodo->dato << " ";
			enOrden(nodo->derecha);
		}
	}

public:
	Arbol() { raiz = nullptr, cantidad = 0; }
	~Arbol() {};
	void insertar(T dato, function<bool(T, T)>crit) {
		insertar(raiz, dato, crit);
	}
	void destruir() {
		destruir(raiz);
	}
	void buscar(T dato) {
		
		buscar(raiz, dato);
		
	}
	void enOrden() {
		enOrden(raiz);
	}
};