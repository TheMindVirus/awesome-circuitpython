#include "shared-module/customio/__init__.h"

const char* customio_get_question(void)
{
    return "Win"; //"Windows"; //!!!BUG: region 'SRAM' overflowed by 4 bytes
}

mp_int_t customio_get_answer(void)
{
    return 11;
}

unsigned long long customio_read_register(unsigned long long address)
{
    //volatile void* pointer = (volatile void*)address;
    //unsigned long long value = *(volatile unsigned long long*)pointer;
    //unsigned long long value = *(volatile unsigned long*)(address & 0xFFFFFFFF);

    if ((address % 4) != 0) { return 0ull; } //!!!BUG: Unaligned Access Not Handled By Hardware (Cycle Penalty)
    //TODO: Add More Conditions if necessary...

    volatile unsigned long* pointer = (volatile unsigned long*)(unsigned long)(address & 0xFFFFFFFF);
    //unsigned long long value = *pointer; //!!!BUG: region 'SRAM' overflowed by 4 bytes

    //return value;
    return *pointer;
}

void customio_write_register(unsigned long long address, unsigned long value)
{
    if ((address % 4) != 0) { return; } //!!!BUG: Unaligned Access Not Handled By Hardware (Cycle Penalty)
    //TODO: Add More Conditions if necessary...

    volatile unsigned long* pointer = (volatile unsigned long*)(unsigned long)(address & 0xFFFFFFFF);
    *pointer = value;
}