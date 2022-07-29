#ifndef CIRCUITPY_INCLUDED_SHARED_MODULE_CUSTOMIO___INIT___H
#define CIRCUITPY_INCLUDED_SHARED_MODULE_CUSTOMIO___INIT___H

#include <string.h>
#include "py/obj.h"

const char* customio_get_question(void);
mp_int_t customio_get_answer(void);
unsigned long long customio_read_register(unsigned long long address);
void customio_write_register(unsigned long long address, unsigned long value);

#endif//CIRCUITPY_INCLUDED_SHARED_MODULE_CUSTOMIO___INIT___H