#include "shared-bindings/customio/__init__.h"

STATIC mp_obj_t customio_obj_get_question(void)
{
    const char* str = customio_get_question();
    return mp_obj_new_str(str, strlen(str));
}
MP_DEFINE_CONST_FUN_OBJ_0(customio_get_question_obj, customio_obj_get_question);

STATIC mp_obj_t customio_obj_get_answer(void)
{
    return mp_obj_new_int(customio_get_answer());
}
MP_DEFINE_CONST_FUN_OBJ_0(customio_get_answer_obj, customio_obj_get_answer);

STATIC mp_obj_t customio_obj_read_register(mp_obj_t address)
{
    return mp_obj_new_int_from_ull(customio_read_register(mp_obj_get_int(address)));
}
MP_DEFINE_CONST_FUN_OBJ_1(customio_read_register_obj, customio_obj_read_register);

STATIC mp_obj_t customio_obj_write_register(mp_obj_t address, mp_obj_t value)
{
    customio_write_register(mp_obj_get_int(address), mp_obj_get_int(value));
    return mp_const_none;
}
MP_DEFINE_CONST_FUN_OBJ_2(customio_write_register_obj, customio_obj_write_register);

STATIC const mp_rom_map_elem_t customio_module_globals_table[] =
{
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_customio) },

    { MP_ROM_QSTR(MP_QSTR_get_question), MP_ROM_PTR(&customio_get_question_obj) },
    { MP_ROM_QSTR(MP_QSTR_get_answer), MP_ROM_PTR(&customio_get_answer_obj) },
    { MP_ROM_QSTR(MP_QSTR_read_register), MP_ROM_PTR(&customio_read_register_obj) },
    { MP_ROM_QSTR(MP_QSTR_write_register), MP_ROM_PTR(&customio_write_register_obj) },
};
STATIC MP_DEFINE_CONST_DICT(customio_module_globals, customio_module_globals_table);

const mp_obj_module_t customio_module =
{
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&customio_module_globals,
};
MP_REGISTER_MODULE(MP_QSTR_customio, customio_module, CIRCUITPY_CUSTOMIO);
