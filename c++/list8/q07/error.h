#ifndef ERROR_H
#define ERROR_H

#include <stdexcept>

class segunda : public std::runtime_error {
public:
	segunda(const char *e = "segundo lançamento de erro")
		: runtime_error(e){};

};

class terceiro: public segunda{
public:
terceiro(const char *e = "terceiro lançamento de erro")
		: segunda(e){};
};
#endif
