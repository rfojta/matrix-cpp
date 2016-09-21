//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "MaticeOne.h"
#include <iostream>
using namespace std;

int main() {

	// initialization
	MaticeOne *m = new MaticeOne();
	m->set(0, 1, 2);
	m->set(0, 2, 3);
	m->set(0, 3, 4);
	m->set(0, 4, 5);

	MaticeOne *n = new MaticeOne();
	n->set(1, 0, 1);
	n->set(2, 0, 1);
	n->set(3, 0, 1);
	n->set(4, 0, 1);

	Matice *r = m->multiply(n);

	// output
	m->print();
	cout << endl;

	n->print();
	cout << endl;

	r->print();
	cout << endl;

	// one more thing
	Matice *s = m->add(n);

	// s->times(10);
	s->print();

	// clean up
	delete m;
	delete n;
	delete r;
	delete s;

	// exit
	return 0;
}

