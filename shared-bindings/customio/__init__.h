#ifndef CIRCUITPY_INCLUDED_SHARED_BINDINGS_CUSTOMIO___INIT___H
#define CIRCUITPY_INCLUDED_SHARED_BINDINGS_CUSTOMIO___INIT___H

#include "shared-module/customio/__init__.h"

const char* customio_get_question(void);
mp_int_t customio_get_answer(void);
unsigned long long customio_read_register(unsigned long long address);
void customio_write_register(unsigned long long address, unsigned long value);

#endif//CIRCUITPY_INCLUDED_SHARED_BINDINGS_CUSTOMIO___INIT___H
