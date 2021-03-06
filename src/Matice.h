/*
 * Matice.h
 *
 *  Created on: 21. 9. 2016
 *      Author: Richard
 */

#ifndef MATICE_H_
#define MATICE_H_

#define DIM 5

class Matice {
	int *data[DIM];
public:
	Matice();
	void print();
	void init();
	void set(int i, int j, int val);
	int get(int i, int j);
	virtual ~Matice();
	Matice* multiply(Matice *m);
	Matice* add(Matice *m);
	void times(int k);
};

#endif /* MATICE_H_ */
