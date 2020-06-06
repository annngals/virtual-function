
#include "pch.h"
#include <iostream>
#include "virtual_function.h"

using namespace std;

int main()
{
	Base base_obj;
	Base *p;
	first_d first_obj;
	second_d second_obj;
	p = &base_obj;
	p->who();
	p = &first_obj;
	p->who();
	p = &second_obj;
	p->who();
}