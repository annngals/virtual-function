#pragma once
#include "virtual_function.cpp"

class Base {
public:
	virtual void who() {
		cout << "Base\n";
	}
};

class first_d : public Base {
public:
	void who() {
		cout << "First derivation\n";
	}
};

class second_d : public Base {
public:
	void who() {
		cout << "Second derivation\n";
	}
};