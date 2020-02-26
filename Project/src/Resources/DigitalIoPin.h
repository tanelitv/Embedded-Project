/*
 * DigitalIoPin.h
 *
 *  Created on: 26 Feb 2020
 *      Author: Lauri
 */



#include "board.h"


class DigitalIoPin {
private:
	int port,pin;
	bool invert;
public:
	DigitalIoPin(int Port, int Pin, bool Input, bool Pullup, bool Invert);
	~DigitalIoPin();
	//functions
	void flipOutput();
	void write(bool b);
	volatile bool read();
	// operator overloads
	void operator=(const bool b);
	operator bool();
};
