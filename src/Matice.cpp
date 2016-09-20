/*
 * Matice.cpp
 *
 *  Created on: 21. 9. 2016
 *      Author: Richard
 */

#include "Matice.h"
#include <iostream>
#include <iomanip>

using namespace std;

Matice::Matice() {
	// TODO Auto-generated constructor stub
	// data = new int*[5];
	for (int i = 0; i < 5; i++)
		data[i] = new int[5];
	init();
}

Matice::~Matice() {
	// TODO Auto-generated destructor stub
	for (int i = 0; i < 5; i++)
		delete data[i];
	// delete [] data;
}

void Matice::init() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			data[i][j] = 0;
		}
	}
}

void Matice::set(int i, int j, int val) {
	data[i][j] = val;
}

int Matice::get(int i, int j) {
	return data[i][j];
}

void Matice::print() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(3) << data[i][j];
		}
		cout << endl;
	}
}

Matice* Matice::multiply(Matice *m) {
	Matice* ret = new Matice();
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			for (int k = 0; k < 5; k++)
				ret->set(i, j, ret->get(i, j) + get(i, k) * m->get(k, j));
	return ret;
}

Matice* Matice::add(Matice *m) {
	Matice* ret = new Matice();
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			ret->set(i, j, get(i, j) + m->get(i, j));
	return ret;
}

void Matice::times(int k) {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			data[i][j] *= k;
}
