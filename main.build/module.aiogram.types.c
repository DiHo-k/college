/* Generated code for Python module 'aiogram.types'
 * created by Nuitka version 1.6.6
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_aiogram$types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiogram$types;
PyDictObject *moduledict_aiogram$types;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[480];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[480];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("aiogram.types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 480; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_aiogram$types(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 480; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5e50155ed2ae6ac457f3cbd2ca8d0ddb;
static PyCodeObject *codeobj_0f440aee008b7f0557d673cbe0bb2e62;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[475]); CHECK_OBJECT(module_filename_obj);
    codeobj_5e50155ed2ae6ac457f3cbd2ca8d0ddb = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_NEWLOCALS, mod_consts[476], mod_consts[476], mod_consts[477], NULL, 1, 0, 0);
    codeobj_0f440aee008b7f0557d673cbe0bb2e62 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[478], mod_consts[478], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_dict_unpacking_checks(PyObject **python_pars);


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_aiogram$types[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_aiogram$types;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_aiogram$types) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_aiogram$types[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_aiogram$types,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiogram$types(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiogram.types");

    // Store the module for future use.
    module_aiogram$types = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("aiogram.types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("aiogram.types: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("aiogram.types: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initaiogram$types\n");

    moduledict_aiogram$types = MODULE_DICT(module_aiogram$types);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiogram$types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiogram$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[479]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiogram$types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiogram$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiogram$types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiogram$types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_aiogram$types);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dict_unpacking_call_1__called = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_0f440aee008b7f0557d673cbe0bb2e62;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_0f440aee008b7f0557d673cbe0bb2e62 = MAKE_MODULE_FRAME(codeobj_0f440aee008b7f0557d673cbe0bb2e62, module_aiogram$types);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f440aee008b7f0557d673cbe0bb2e62);
    assert(Py_REFCNT(frame_0f440aee008b7f0557d673cbe0bb2e62) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[2]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[2]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_3 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[5]);
                } else {
                    tmp_expression_value_3 = NULL;
                }
            }
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);
                Py_DECREF(tmp_expression_value_3);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[7]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_args_element_value_3 = mod_consts[8];
            frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
            frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[5]);
                } else {
                    tmp_expression_value_4 = NULL;
                }
            }
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_4);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[9]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_subscript_value_1 = mod_consts[11];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[15], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[17],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[17]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[18];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[19];
        tmp_level_value_1 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 3;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[21],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[22];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[23];
        tmp_level_value_2 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[24],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[25];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[26];
        tmp_level_value_3 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[27],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[27]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[28],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[28]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_10);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[29];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[30];
        tmp_level_value_4 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[31],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[32];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[33];
        tmp_level_value_5 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[34],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[35];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[36];
        tmp_level_value_6 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[37],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[38];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[39];
        tmp_level_value_7 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 11;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[40],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[40]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[41];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[42];
        tmp_level_value_8 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[43],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[44];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[45];
        tmp_level_value_9 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 13;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[46],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[47];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[48];
        tmp_level_value_10 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 14;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[49],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[50];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[51];
        tmp_level_value_11 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 15;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[52],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[53];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[54];
        tmp_level_value_12 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 16;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[55],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[56];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[57];
        tmp_level_value_13 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 17;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[58],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[59];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[60];
        tmp_level_value_14 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 18;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[61],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[62];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[63];
        tmp_level_value_15 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 19;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[64],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[65];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[66];
        tmp_level_value_16 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 20;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[67],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[68];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[69];
        tmp_level_value_17 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 21;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[70],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[71];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[72];
        tmp_level_value_18 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 22;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[73],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[74];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[75];
        tmp_level_value_19 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 23;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[76],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[77];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[78];
        tmp_level_value_20 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 24;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[79],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[80];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[81];
        tmp_level_value_21 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 25;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[82],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[83];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[84];
        tmp_level_value_22 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 26;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[85],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[86];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[87];
        tmp_level_value_23 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 27;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[88],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_25, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[89];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[90];
        tmp_level_value_24 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 28;
        tmp_import_name_from_26 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[91],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_26, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[92];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[93];
        tmp_level_value_25 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 29;
        tmp_import_name_from_27 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[94],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_27, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[95];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[96];
        tmp_level_value_26 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 30;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[97],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_28, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[98];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[99];
        tmp_level_value_27 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 31;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[100],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_29, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[101];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[102];
        tmp_level_value_28 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 32;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[103],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_30, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[104];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[105];
        tmp_level_value_29 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 33;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[106],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_31, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[107];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[108];
        tmp_level_value_30 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 34;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[109],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_32, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[110];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[111];
        tmp_level_value_31 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 35;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[112],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_33, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[113];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[114];
        tmp_level_value_32 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 36;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[115],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_34, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[116];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[117];
        tmp_level_value_33 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 37;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[118],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_35, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[119];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[120];
        tmp_level_value_34 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 38;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[121],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_36, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[122];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[123];
        tmp_level_value_35 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 39;
        tmp_import_name_from_37 = IMPORT_MODULE5(tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_import_name_from_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[124],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_37, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[125];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[126];
        tmp_level_value_36 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 40;
        tmp_import_name_from_38 = IMPORT_MODULE5(tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[127],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_38, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[128];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[129];
        tmp_level_value_37 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 41;
        tmp_import_name_from_39 = IMPORT_MODULE5(tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[130],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_39, mod_consts[130]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[131];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[132];
        tmp_level_value_38 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 42;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[133],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_40, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[134];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[135];
        tmp_level_value_39 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 43;
        tmp_import_name_from_41 = IMPORT_MODULE5(tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[136],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_41, mod_consts[136]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[137];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[138];
        tmp_level_value_40 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 44;
        tmp_import_name_from_42 = IMPORT_MODULE5(tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[139],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_42, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[140];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[141];
        tmp_level_value_41 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 45;
        tmp_import_name_from_43 = IMPORT_MODULE5(tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[142],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_43, mod_consts[142]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[143];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[144];
        tmp_level_value_42 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 46;
        tmp_import_name_from_44 = IMPORT_MODULE5(tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[145],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_44, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[146];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[147];
        tmp_level_value_43 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 47;
        tmp_import_name_from_45 = IMPORT_MODULE5(tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[148],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_45, mod_consts[148]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[149];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[150];
        tmp_level_value_44 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 48;
        tmp_import_name_from_46 = IMPORT_MODULE5(tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[151],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_46, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_45;
        PyObject *tmp_locals_arg_value_45;
        PyObject *tmp_fromlist_value_45;
        PyObject *tmp_level_value_45;
        tmp_name_value_45 = mod_consts[152];
        tmp_globals_arg_value_45 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_45 = Py_None;
        tmp_fromlist_value_45 = mod_consts[153];
        tmp_level_value_45 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 49;
        tmp_import_name_from_47 = IMPORT_MODULE5(tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
        if (tmp_import_name_from_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[154],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_47, mod_consts[154]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_46;
        PyObject *tmp_locals_arg_value_46;
        PyObject *tmp_fromlist_value_46;
        PyObject *tmp_level_value_46;
        tmp_name_value_46 = mod_consts[155];
        tmp_globals_arg_value_46 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_46 = Py_None;
        tmp_fromlist_value_46 = mod_consts[156];
        tmp_level_value_46 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 50;
        tmp_import_name_from_48 = IMPORT_MODULE5(tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
        if (tmp_import_name_from_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[157],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_48, mod_consts[157]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_47;
        PyObject *tmp_locals_arg_value_47;
        PyObject *tmp_fromlist_value_47;
        PyObject *tmp_level_value_47;
        tmp_name_value_47 = mod_consts[158];
        tmp_globals_arg_value_47 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_47 = Py_None;
        tmp_fromlist_value_47 = mod_consts[159];
        tmp_level_value_47 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 51;
        tmp_import_name_from_49 = IMPORT_MODULE5(tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
        if (tmp_import_name_from_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[160],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_49, mod_consts[160]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_50;
        PyObject *tmp_name_value_48;
        PyObject *tmp_globals_arg_value_48;
        PyObject *tmp_locals_arg_value_48;
        PyObject *tmp_fromlist_value_48;
        PyObject *tmp_level_value_48;
        tmp_name_value_48 = mod_consts[161];
        tmp_globals_arg_value_48 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_48 = Py_None;
        tmp_fromlist_value_48 = mod_consts[162];
        tmp_level_value_48 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 52;
        tmp_import_name_from_50 = IMPORT_MODULE5(tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
        if (tmp_import_name_from_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_50,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[163],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_50, mod_consts[163]);
        }

        Py_DECREF(tmp_import_name_from_50);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_value_49;
        PyObject *tmp_globals_arg_value_49;
        PyObject *tmp_locals_arg_value_49;
        PyObject *tmp_fromlist_value_49;
        PyObject *tmp_level_value_49;
        tmp_name_value_49 = mod_consts[164];
        tmp_globals_arg_value_49 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_49 = Py_None;
        tmp_fromlist_value_49 = mod_consts[165];
        tmp_level_value_49 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 53;
        tmp_import_name_from_51 = IMPORT_MODULE5(tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
        if (tmp_import_name_from_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_51,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[166],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_51, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_value_50;
        PyObject *tmp_globals_arg_value_50;
        PyObject *tmp_locals_arg_value_50;
        PyObject *tmp_fromlist_value_50;
        PyObject *tmp_level_value_50;
        tmp_name_value_50 = mod_consts[167];
        tmp_globals_arg_value_50 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_50 = Py_None;
        tmp_fromlist_value_50 = mod_consts[168];
        tmp_level_value_50 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 54;
        tmp_import_name_from_52 = IMPORT_MODULE5(tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
        if (tmp_import_name_from_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_52,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[169],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_52, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_value_51;
        PyObject *tmp_globals_arg_value_51;
        PyObject *tmp_locals_arg_value_51;
        PyObject *tmp_fromlist_value_51;
        PyObject *tmp_level_value_51;
        tmp_name_value_51 = mod_consts[170];
        tmp_globals_arg_value_51 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_51 = Py_None;
        tmp_fromlist_value_51 = mod_consts[171];
        tmp_level_value_51 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 55;
        tmp_import_name_from_53 = IMPORT_MODULE5(tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
        if (tmp_import_name_from_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_53,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[172],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_53, mod_consts[172]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_value_52;
        PyObject *tmp_globals_arg_value_52;
        PyObject *tmp_locals_arg_value_52;
        PyObject *tmp_fromlist_value_52;
        PyObject *tmp_level_value_52;
        tmp_name_value_52 = mod_consts[173];
        tmp_globals_arg_value_52 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_52 = Py_None;
        tmp_fromlist_value_52 = mod_consts[174];
        tmp_level_value_52 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 56;
        tmp_import_name_from_54 = IMPORT_MODULE5(tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
        if (tmp_import_name_from_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_54,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[175],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_54, mod_consts[175]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_55;
        PyObject *tmp_name_value_53;
        PyObject *tmp_globals_arg_value_53;
        PyObject *tmp_locals_arg_value_53;
        PyObject *tmp_fromlist_value_53;
        PyObject *tmp_level_value_53;
        tmp_name_value_53 = mod_consts[176];
        tmp_globals_arg_value_53 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_53 = Py_None;
        tmp_fromlist_value_53 = mod_consts[177];
        tmp_level_value_53 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 57;
        tmp_import_name_from_55 = IMPORT_MODULE5(tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
        if (tmp_import_name_from_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_55,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[178],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_55, mod_consts[178]);
        }

        Py_DECREF(tmp_import_name_from_55);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_56;
        PyObject *tmp_name_value_54;
        PyObject *tmp_globals_arg_value_54;
        PyObject *tmp_locals_arg_value_54;
        PyObject *tmp_fromlist_value_54;
        PyObject *tmp_level_value_54;
        tmp_name_value_54 = mod_consts[179];
        tmp_globals_arg_value_54 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_54 = Py_None;
        tmp_fromlist_value_54 = mod_consts[180];
        tmp_level_value_54 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 58;
        tmp_import_name_from_56 = IMPORT_MODULE5(tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
        if (tmp_import_name_from_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_56,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[181],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_56, mod_consts[181]);
        }

        Py_DECREF(tmp_import_name_from_56);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_value_55;
        PyObject *tmp_globals_arg_value_55;
        PyObject *tmp_locals_arg_value_55;
        PyObject *tmp_fromlist_value_55;
        PyObject *tmp_level_value_55;
        tmp_name_value_55 = mod_consts[182];
        tmp_globals_arg_value_55 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_55 = Py_None;
        tmp_fromlist_value_55 = mod_consts[183];
        tmp_level_value_55 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 59;
        tmp_import_name_from_57 = IMPORT_MODULE5(tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
        if (tmp_import_name_from_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_57,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[184],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_57, mod_consts[184]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_value_56;
        PyObject *tmp_globals_arg_value_56;
        PyObject *tmp_locals_arg_value_56;
        PyObject *tmp_fromlist_value_56;
        PyObject *tmp_level_value_56;
        tmp_name_value_56 = mod_consts[185];
        tmp_globals_arg_value_56 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_56 = Py_None;
        tmp_fromlist_value_56 = mod_consts[186];
        tmp_level_value_56 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 60;
        tmp_import_name_from_58 = IMPORT_MODULE5(tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
        if (tmp_import_name_from_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_58,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[187],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_58, mod_consts[187]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_value_57;
        PyObject *tmp_globals_arg_value_57;
        PyObject *tmp_locals_arg_value_57;
        PyObject *tmp_fromlist_value_57;
        PyObject *tmp_level_value_57;
        tmp_name_value_57 = mod_consts[188];
        tmp_globals_arg_value_57 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_57 = Py_None;
        tmp_fromlist_value_57 = mod_consts[189];
        tmp_level_value_57 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 61;
        tmp_import_name_from_59 = IMPORT_MODULE5(tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
        if (tmp_import_name_from_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_59,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[190],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_59, mod_consts[190]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_value_58;
        PyObject *tmp_globals_arg_value_58;
        PyObject *tmp_locals_arg_value_58;
        PyObject *tmp_fromlist_value_58;
        PyObject *tmp_level_value_58;
        tmp_name_value_58 = mod_consts[191];
        tmp_globals_arg_value_58 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_58 = Py_None;
        tmp_fromlist_value_58 = mod_consts[192];
        tmp_level_value_58 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 62;
        tmp_import_name_from_60 = IMPORT_MODULE5(tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
        if (tmp_import_name_from_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_60,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[193],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_60, mod_consts[193]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_61;
        PyObject *tmp_name_value_59;
        PyObject *tmp_globals_arg_value_59;
        PyObject *tmp_locals_arg_value_59;
        PyObject *tmp_fromlist_value_59;
        PyObject *tmp_level_value_59;
        tmp_name_value_59 = mod_consts[194];
        tmp_globals_arg_value_59 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_59 = Py_None;
        tmp_fromlist_value_59 = mod_consts[195];
        tmp_level_value_59 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 63;
        tmp_import_name_from_61 = IMPORT_MODULE5(tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
        if (tmp_import_name_from_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_61,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[196],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_61, mod_consts[196]);
        }

        Py_DECREF(tmp_import_name_from_61);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_62;
        PyObject *tmp_name_value_60;
        PyObject *tmp_globals_arg_value_60;
        PyObject *tmp_locals_arg_value_60;
        PyObject *tmp_fromlist_value_60;
        PyObject *tmp_level_value_60;
        tmp_name_value_60 = mod_consts[197];
        tmp_globals_arg_value_60 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_60 = Py_None;
        tmp_fromlist_value_60 = mod_consts[198];
        tmp_level_value_60 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 64;
        tmp_import_name_from_62 = IMPORT_MODULE5(tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
        if (tmp_import_name_from_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_62,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[199],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_62, mod_consts[199]);
        }

        Py_DECREF(tmp_import_name_from_62);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_63;
        PyObject *tmp_name_value_61;
        PyObject *tmp_globals_arg_value_61;
        PyObject *tmp_locals_arg_value_61;
        PyObject *tmp_fromlist_value_61;
        PyObject *tmp_level_value_61;
        tmp_name_value_61 = mod_consts[200];
        tmp_globals_arg_value_61 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_61 = Py_None;
        tmp_fromlist_value_61 = mod_consts[201];
        tmp_level_value_61 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 65;
        tmp_import_name_from_63 = IMPORT_MODULE5(tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
        if (tmp_import_name_from_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_63,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[202],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_63, mod_consts[202]);
        }

        Py_DECREF(tmp_import_name_from_63);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_64;
        PyObject *tmp_name_value_62;
        PyObject *tmp_globals_arg_value_62;
        PyObject *tmp_locals_arg_value_62;
        PyObject *tmp_fromlist_value_62;
        PyObject *tmp_level_value_62;
        tmp_name_value_62 = mod_consts[203];
        tmp_globals_arg_value_62 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_62 = Py_None;
        tmp_fromlist_value_62 = mod_consts[204];
        tmp_level_value_62 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 66;
        tmp_import_name_from_64 = IMPORT_MODULE5(tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
        if (tmp_import_name_from_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_64,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[205],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_64, mod_consts[205]);
        }

        Py_DECREF(tmp_import_name_from_64);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_value_63;
        PyObject *tmp_globals_arg_value_63;
        PyObject *tmp_locals_arg_value_63;
        PyObject *tmp_fromlist_value_63;
        PyObject *tmp_level_value_63;
        tmp_name_value_63 = mod_consts[206];
        tmp_globals_arg_value_63 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_63 = Py_None;
        tmp_fromlist_value_63 = mod_consts[207];
        tmp_level_value_63 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 67;
        tmp_import_name_from_65 = IMPORT_MODULE5(tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
        if (tmp_import_name_from_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_65,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[208],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_65, mod_consts[208]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_66;
        PyObject *tmp_name_value_64;
        PyObject *tmp_globals_arg_value_64;
        PyObject *tmp_locals_arg_value_64;
        PyObject *tmp_fromlist_value_64;
        PyObject *tmp_level_value_64;
        tmp_name_value_64 = mod_consts[209];
        tmp_globals_arg_value_64 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_64 = Py_None;
        tmp_fromlist_value_64 = mod_consts[210];
        tmp_level_value_64 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 68;
        tmp_import_name_from_66 = IMPORT_MODULE5(tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
        if (tmp_import_name_from_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_66,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[211],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_66, mod_consts[211]);
        }

        Py_DECREF(tmp_import_name_from_66);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_67;
        PyObject *tmp_name_value_65;
        PyObject *tmp_globals_arg_value_65;
        PyObject *tmp_locals_arg_value_65;
        PyObject *tmp_fromlist_value_65;
        PyObject *tmp_level_value_65;
        tmp_name_value_65 = mod_consts[212];
        tmp_globals_arg_value_65 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_65 = Py_None;
        tmp_fromlist_value_65 = mod_consts[213];
        tmp_level_value_65 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 69;
        tmp_import_name_from_67 = IMPORT_MODULE5(tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
        if (tmp_import_name_from_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_67,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[214],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_67, mod_consts[214]);
        }

        Py_DECREF(tmp_import_name_from_67);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_68;
        PyObject *tmp_name_value_66;
        PyObject *tmp_globals_arg_value_66;
        PyObject *tmp_locals_arg_value_66;
        PyObject *tmp_fromlist_value_66;
        PyObject *tmp_level_value_66;
        tmp_name_value_66 = mod_consts[215];
        tmp_globals_arg_value_66 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_66 = Py_None;
        tmp_fromlist_value_66 = mod_consts[216];
        tmp_level_value_66 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 70;
        tmp_import_name_from_68 = IMPORT_MODULE5(tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
        if (tmp_import_name_from_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_68,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[217],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_68, mod_consts[217]);
        }

        Py_DECREF(tmp_import_name_from_68);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_69;
        PyObject *tmp_name_value_67;
        PyObject *tmp_globals_arg_value_67;
        PyObject *tmp_locals_arg_value_67;
        PyObject *tmp_fromlist_value_67;
        PyObject *tmp_level_value_67;
        tmp_name_value_67 = mod_consts[218];
        tmp_globals_arg_value_67 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_67 = Py_None;
        tmp_fromlist_value_67 = mod_consts[219];
        tmp_level_value_67 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 71;
        tmp_import_name_from_69 = IMPORT_MODULE5(tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
        if (tmp_import_name_from_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_69,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[220],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_69, mod_consts[220]);
        }

        Py_DECREF(tmp_import_name_from_69);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_70;
        PyObject *tmp_name_value_68;
        PyObject *tmp_globals_arg_value_68;
        PyObject *tmp_locals_arg_value_68;
        PyObject *tmp_fromlist_value_68;
        PyObject *tmp_level_value_68;
        tmp_name_value_68 = mod_consts[221];
        tmp_globals_arg_value_68 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_68 = Py_None;
        tmp_fromlist_value_68 = mod_consts[222];
        tmp_level_value_68 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 72;
        tmp_import_name_from_70 = IMPORT_MODULE5(tmp_name_value_68, tmp_globals_arg_value_68, tmp_locals_arg_value_68, tmp_fromlist_value_68, tmp_level_value_68);
        if (tmp_import_name_from_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_70,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[223],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_70, mod_consts[223]);
        }

        Py_DECREF(tmp_import_name_from_70);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_71;
        PyObject *tmp_name_value_69;
        PyObject *tmp_globals_arg_value_69;
        PyObject *tmp_locals_arg_value_69;
        PyObject *tmp_fromlist_value_69;
        PyObject *tmp_level_value_69;
        tmp_name_value_69 = mod_consts[224];
        tmp_globals_arg_value_69 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_69 = Py_None;
        tmp_fromlist_value_69 = mod_consts[225];
        tmp_level_value_69 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 73;
        tmp_import_name_from_71 = IMPORT_MODULE5(tmp_name_value_69, tmp_globals_arg_value_69, tmp_locals_arg_value_69, tmp_fromlist_value_69, tmp_level_value_69);
        if (tmp_import_name_from_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_71,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[226],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_71, mod_consts[226]);
        }

        Py_DECREF(tmp_import_name_from_71);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_72;
        PyObject *tmp_name_value_70;
        PyObject *tmp_globals_arg_value_70;
        PyObject *tmp_locals_arg_value_70;
        PyObject *tmp_fromlist_value_70;
        PyObject *tmp_level_value_70;
        tmp_name_value_70 = mod_consts[227];
        tmp_globals_arg_value_70 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_70 = Py_None;
        tmp_fromlist_value_70 = mod_consts[228];
        tmp_level_value_70 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 74;
        tmp_import_name_from_72 = IMPORT_MODULE5(tmp_name_value_70, tmp_globals_arg_value_70, tmp_locals_arg_value_70, tmp_fromlist_value_70, tmp_level_value_70);
        if (tmp_import_name_from_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_72,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[229],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_72, mod_consts[229]);
        }

        Py_DECREF(tmp_import_name_from_72);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_73;
        PyObject *tmp_name_value_71;
        PyObject *tmp_globals_arg_value_71;
        PyObject *tmp_locals_arg_value_71;
        PyObject *tmp_fromlist_value_71;
        PyObject *tmp_level_value_71;
        tmp_name_value_71 = mod_consts[230];
        tmp_globals_arg_value_71 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_71 = Py_None;
        tmp_fromlist_value_71 = mod_consts[231];
        tmp_level_value_71 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 75;
        tmp_import_name_from_73 = IMPORT_MODULE5(tmp_name_value_71, tmp_globals_arg_value_71, tmp_locals_arg_value_71, tmp_fromlist_value_71, tmp_level_value_71);
        if (tmp_import_name_from_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_73,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[232],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_73, mod_consts[232]);
        }

        Py_DECREF(tmp_import_name_from_73);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_74;
        PyObject *tmp_name_value_72;
        PyObject *tmp_globals_arg_value_72;
        PyObject *tmp_locals_arg_value_72;
        PyObject *tmp_fromlist_value_72;
        PyObject *tmp_level_value_72;
        tmp_name_value_72 = mod_consts[233];
        tmp_globals_arg_value_72 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_72 = Py_None;
        tmp_fromlist_value_72 = mod_consts[234];
        tmp_level_value_72 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 76;
        tmp_import_name_from_74 = IMPORT_MODULE5(tmp_name_value_72, tmp_globals_arg_value_72, tmp_locals_arg_value_72, tmp_fromlist_value_72, tmp_level_value_72);
        if (tmp_import_name_from_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_74,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[235],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_74, mod_consts[235]);
        }

        Py_DECREF(tmp_import_name_from_74);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_75;
        PyObject *tmp_name_value_73;
        PyObject *tmp_globals_arg_value_73;
        PyObject *tmp_locals_arg_value_73;
        PyObject *tmp_fromlist_value_73;
        PyObject *tmp_level_value_73;
        tmp_name_value_73 = mod_consts[236];
        tmp_globals_arg_value_73 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_73 = Py_None;
        tmp_fromlist_value_73 = mod_consts[237];
        tmp_level_value_73 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 77;
        tmp_import_name_from_75 = IMPORT_MODULE5(tmp_name_value_73, tmp_globals_arg_value_73, tmp_locals_arg_value_73, tmp_fromlist_value_73, tmp_level_value_73);
        if (tmp_import_name_from_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_75,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[238],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_75, mod_consts[238]);
        }

        Py_DECREF(tmp_import_name_from_75);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_76;
        PyObject *tmp_name_value_74;
        PyObject *tmp_globals_arg_value_74;
        PyObject *tmp_locals_arg_value_74;
        PyObject *tmp_fromlist_value_74;
        PyObject *tmp_level_value_74;
        tmp_name_value_74 = mod_consts[239];
        tmp_globals_arg_value_74 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_74 = Py_None;
        tmp_fromlist_value_74 = mod_consts[240];
        tmp_level_value_74 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 78;
        tmp_import_name_from_76 = IMPORT_MODULE5(tmp_name_value_74, tmp_globals_arg_value_74, tmp_locals_arg_value_74, tmp_fromlist_value_74, tmp_level_value_74);
        if (tmp_import_name_from_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_76,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[241],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_76, mod_consts[241]);
        }

        Py_DECREF(tmp_import_name_from_76);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_name_value_75;
        PyObject *tmp_globals_arg_value_75;
        PyObject *tmp_locals_arg_value_75;
        PyObject *tmp_fromlist_value_75;
        PyObject *tmp_level_value_75;
        tmp_name_value_75 = mod_consts[242];
        tmp_globals_arg_value_75 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_75 = Py_None;
        tmp_fromlist_value_75 = mod_consts[243];
        tmp_level_value_75 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 79;
        tmp_assign_source_82 = IMPORT_MODULE5(tmp_name_value_75, tmp_globals_arg_value_75, tmp_locals_arg_value_75, tmp_fromlist_value_75, tmp_level_value_75);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_82;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_77 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_77,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[244],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_77, mod_consts[244]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_78 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_78,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[245],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_78, mod_consts[245]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_79 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_79,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[246],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_79, mod_consts[246]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_80 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_80,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[247],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_80, mod_consts[247]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_86);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_81;
        PyObject *tmp_name_value_76;
        PyObject *tmp_globals_arg_value_76;
        PyObject *tmp_locals_arg_value_76;
        PyObject *tmp_fromlist_value_76;
        PyObject *tmp_level_value_76;
        tmp_name_value_76 = mod_consts[248];
        tmp_globals_arg_value_76 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_76 = Py_None;
        tmp_fromlist_value_76 = mod_consts[249];
        tmp_level_value_76 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 80;
        tmp_import_name_from_81 = IMPORT_MODULE5(tmp_name_value_76, tmp_globals_arg_value_76, tmp_locals_arg_value_76, tmp_fromlist_value_76, tmp_level_value_76);
        if (tmp_import_name_from_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_81,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[250],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_81, mod_consts[250]);
        }

        Py_DECREF(tmp_import_name_from_81);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_82;
        PyObject *tmp_name_value_77;
        PyObject *tmp_globals_arg_value_77;
        PyObject *tmp_locals_arg_value_77;
        PyObject *tmp_fromlist_value_77;
        PyObject *tmp_level_value_77;
        tmp_name_value_77 = mod_consts[251];
        tmp_globals_arg_value_77 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_77 = Py_None;
        tmp_fromlist_value_77 = mod_consts[252];
        tmp_level_value_77 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 81;
        tmp_import_name_from_82 = IMPORT_MODULE5(tmp_name_value_77, tmp_globals_arg_value_77, tmp_locals_arg_value_77, tmp_fromlist_value_77, tmp_level_value_77);
        if (tmp_import_name_from_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_82,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[253],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_82, mod_consts[253]);
        }

        Py_DECREF(tmp_import_name_from_82);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_83;
        PyObject *tmp_name_value_78;
        PyObject *tmp_globals_arg_value_78;
        PyObject *tmp_locals_arg_value_78;
        PyObject *tmp_fromlist_value_78;
        PyObject *tmp_level_value_78;
        tmp_name_value_78 = mod_consts[254];
        tmp_globals_arg_value_78 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_78 = Py_None;
        tmp_fromlist_value_78 = mod_consts[255];
        tmp_level_value_78 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 82;
        tmp_import_name_from_83 = IMPORT_MODULE5(tmp_name_value_78, tmp_globals_arg_value_78, tmp_locals_arg_value_78, tmp_fromlist_value_78, tmp_level_value_78);
        if (tmp_import_name_from_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_83,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[256],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_83, mod_consts[256]);
        }

        Py_DECREF(tmp_import_name_from_83);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_84;
        PyObject *tmp_name_value_79;
        PyObject *tmp_globals_arg_value_79;
        PyObject *tmp_locals_arg_value_79;
        PyObject *tmp_fromlist_value_79;
        PyObject *tmp_level_value_79;
        tmp_name_value_79 = mod_consts[257];
        tmp_globals_arg_value_79 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_79 = Py_None;
        tmp_fromlist_value_79 = mod_consts[258];
        tmp_level_value_79 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 83;
        tmp_import_name_from_84 = IMPORT_MODULE5(tmp_name_value_79, tmp_globals_arg_value_79, tmp_locals_arg_value_79, tmp_fromlist_value_79, tmp_level_value_79);
        if (tmp_import_name_from_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_84,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[259],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_84, mod_consts[259]);
        }

        Py_DECREF(tmp_import_name_from_84);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_85;
        PyObject *tmp_name_value_80;
        PyObject *tmp_globals_arg_value_80;
        PyObject *tmp_locals_arg_value_80;
        PyObject *tmp_fromlist_value_80;
        PyObject *tmp_level_value_80;
        tmp_name_value_80 = mod_consts[260];
        tmp_globals_arg_value_80 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_80 = Py_None;
        tmp_fromlist_value_80 = mod_consts[261];
        tmp_level_value_80 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 84;
        tmp_import_name_from_85 = IMPORT_MODULE5(tmp_name_value_80, tmp_globals_arg_value_80, tmp_locals_arg_value_80, tmp_fromlist_value_80, tmp_level_value_80);
        if (tmp_import_name_from_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_85,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[262],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_85, mod_consts[262]);
        }

        Py_DECREF(tmp_import_name_from_85);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_86;
        PyObject *tmp_name_value_81;
        PyObject *tmp_globals_arg_value_81;
        PyObject *tmp_locals_arg_value_81;
        PyObject *tmp_fromlist_value_81;
        PyObject *tmp_level_value_81;
        tmp_name_value_81 = mod_consts[263];
        tmp_globals_arg_value_81 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_81 = Py_None;
        tmp_fromlist_value_81 = mod_consts[264];
        tmp_level_value_81 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 85;
        tmp_import_name_from_86 = IMPORT_MODULE5(tmp_name_value_81, tmp_globals_arg_value_81, tmp_locals_arg_value_81, tmp_fromlist_value_81, tmp_level_value_81);
        if (tmp_import_name_from_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_86,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[265],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_86, mod_consts[265]);
        }

        Py_DECREF(tmp_import_name_from_86);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_87;
        PyObject *tmp_name_value_82;
        PyObject *tmp_globals_arg_value_82;
        PyObject *tmp_locals_arg_value_82;
        PyObject *tmp_fromlist_value_82;
        PyObject *tmp_level_value_82;
        tmp_name_value_82 = mod_consts[266];
        tmp_globals_arg_value_82 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_82 = Py_None;
        tmp_fromlist_value_82 = mod_consts[267];
        tmp_level_value_82 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 86;
        tmp_import_name_from_87 = IMPORT_MODULE5(tmp_name_value_82, tmp_globals_arg_value_82, tmp_locals_arg_value_82, tmp_fromlist_value_82, tmp_level_value_82);
        if (tmp_import_name_from_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_87,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[268],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_87, mod_consts[268]);
        }

        Py_DECREF(tmp_import_name_from_87);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_88;
        PyObject *tmp_name_value_83;
        PyObject *tmp_globals_arg_value_83;
        PyObject *tmp_locals_arg_value_83;
        PyObject *tmp_fromlist_value_83;
        PyObject *tmp_level_value_83;
        tmp_name_value_83 = mod_consts[269];
        tmp_globals_arg_value_83 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_83 = Py_None;
        tmp_fromlist_value_83 = mod_consts[270];
        tmp_level_value_83 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 87;
        tmp_import_name_from_88 = IMPORT_MODULE5(tmp_name_value_83, tmp_globals_arg_value_83, tmp_locals_arg_value_83, tmp_fromlist_value_83, tmp_level_value_83);
        if (tmp_import_name_from_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_88,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[271],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_88, mod_consts[271]);
        }

        Py_DECREF(tmp_import_name_from_88);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_import_name_from_89;
        PyObject *tmp_name_value_84;
        PyObject *tmp_globals_arg_value_84;
        PyObject *tmp_locals_arg_value_84;
        PyObject *tmp_fromlist_value_84;
        PyObject *tmp_level_value_84;
        tmp_name_value_84 = mod_consts[272];
        tmp_globals_arg_value_84 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_84 = Py_None;
        tmp_fromlist_value_84 = mod_consts[273];
        tmp_level_value_84 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 88;
        tmp_import_name_from_89 = IMPORT_MODULE5(tmp_name_value_84, tmp_globals_arg_value_84, tmp_locals_arg_value_84, tmp_fromlist_value_84, tmp_level_value_84);
        if (tmp_import_name_from_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_89,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[274],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_89, mod_consts[274]);
        }

        Py_DECREF(tmp_import_name_from_89);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[274], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_90;
        PyObject *tmp_name_value_85;
        PyObject *tmp_globals_arg_value_85;
        PyObject *tmp_locals_arg_value_85;
        PyObject *tmp_fromlist_value_85;
        PyObject *tmp_level_value_85;
        tmp_name_value_85 = mod_consts[275];
        tmp_globals_arg_value_85 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_85 = Py_None;
        tmp_fromlist_value_85 = mod_consts[276];
        tmp_level_value_85 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 89;
        tmp_import_name_from_90 = IMPORT_MODULE5(tmp_name_value_85, tmp_globals_arg_value_85, tmp_locals_arg_value_85, tmp_fromlist_value_85, tmp_level_value_85);
        if (tmp_import_name_from_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_90,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[277],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_90, mod_consts[277]);
        }

        Py_DECREF(tmp_import_name_from_90);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_91;
        PyObject *tmp_name_value_86;
        PyObject *tmp_globals_arg_value_86;
        PyObject *tmp_locals_arg_value_86;
        PyObject *tmp_fromlist_value_86;
        PyObject *tmp_level_value_86;
        tmp_name_value_86 = mod_consts[278];
        tmp_globals_arg_value_86 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_86 = Py_None;
        tmp_fromlist_value_86 = mod_consts[279];
        tmp_level_value_86 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 90;
        tmp_import_name_from_91 = IMPORT_MODULE5(tmp_name_value_86, tmp_globals_arg_value_86, tmp_locals_arg_value_86, tmp_fromlist_value_86, tmp_level_value_86);
        if (tmp_import_name_from_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_91,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[280],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_91, mod_consts[280]);
        }

        Py_DECREF(tmp_import_name_from_91);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_92;
        PyObject *tmp_name_value_87;
        PyObject *tmp_globals_arg_value_87;
        PyObject *tmp_locals_arg_value_87;
        PyObject *tmp_fromlist_value_87;
        PyObject *tmp_level_value_87;
        tmp_name_value_87 = mod_consts[281];
        tmp_globals_arg_value_87 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_87 = Py_None;
        tmp_fromlist_value_87 = mod_consts[282];
        tmp_level_value_87 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 91;
        tmp_import_name_from_92 = IMPORT_MODULE5(tmp_name_value_87, tmp_globals_arg_value_87, tmp_locals_arg_value_87, tmp_fromlist_value_87, tmp_level_value_87);
        if (tmp_import_name_from_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_92,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[283],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_92, mod_consts[283]);
        }

        Py_DECREF(tmp_import_name_from_92);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_93;
        PyObject *tmp_name_value_88;
        PyObject *tmp_globals_arg_value_88;
        PyObject *tmp_locals_arg_value_88;
        PyObject *tmp_fromlist_value_88;
        PyObject *tmp_level_value_88;
        tmp_name_value_88 = mod_consts[284];
        tmp_globals_arg_value_88 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_88 = Py_None;
        tmp_fromlist_value_88 = mod_consts[285];
        tmp_level_value_88 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 92;
        tmp_import_name_from_93 = IMPORT_MODULE5(tmp_name_value_88, tmp_globals_arg_value_88, tmp_locals_arg_value_88, tmp_fromlist_value_88, tmp_level_value_88);
        if (tmp_import_name_from_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_93,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[286],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_93, mod_consts[286]);
        }

        Py_DECREF(tmp_import_name_from_93);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_94;
        PyObject *tmp_name_value_89;
        PyObject *tmp_globals_arg_value_89;
        PyObject *tmp_locals_arg_value_89;
        PyObject *tmp_fromlist_value_89;
        PyObject *tmp_level_value_89;
        tmp_name_value_89 = mod_consts[287];
        tmp_globals_arg_value_89 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_89 = Py_None;
        tmp_fromlist_value_89 = mod_consts[288];
        tmp_level_value_89 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 93;
        tmp_import_name_from_94 = IMPORT_MODULE5(tmp_name_value_89, tmp_globals_arg_value_89, tmp_locals_arg_value_89, tmp_fromlist_value_89, tmp_level_value_89);
        if (tmp_import_name_from_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_94,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[289],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_94, mod_consts[289]);
        }

        Py_DECREF(tmp_import_name_from_94);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_95;
        PyObject *tmp_name_value_90;
        PyObject *tmp_globals_arg_value_90;
        PyObject *tmp_locals_arg_value_90;
        PyObject *tmp_fromlist_value_90;
        PyObject *tmp_level_value_90;
        tmp_name_value_90 = mod_consts[290];
        tmp_globals_arg_value_90 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_90 = Py_None;
        tmp_fromlist_value_90 = mod_consts[291];
        tmp_level_value_90 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 94;
        tmp_import_name_from_95 = IMPORT_MODULE5(tmp_name_value_90, tmp_globals_arg_value_90, tmp_locals_arg_value_90, tmp_fromlist_value_90, tmp_level_value_90);
        if (tmp_import_name_from_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_95,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[292],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_95, mod_consts[292]);
        }

        Py_DECREF(tmp_import_name_from_95);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_96;
        PyObject *tmp_name_value_91;
        PyObject *tmp_globals_arg_value_91;
        PyObject *tmp_locals_arg_value_91;
        PyObject *tmp_fromlist_value_91;
        PyObject *tmp_level_value_91;
        tmp_name_value_91 = mod_consts[293];
        tmp_globals_arg_value_91 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_91 = Py_None;
        tmp_fromlist_value_91 = mod_consts[294];
        tmp_level_value_91 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 95;
        tmp_import_name_from_96 = IMPORT_MODULE5(tmp_name_value_91, tmp_globals_arg_value_91, tmp_locals_arg_value_91, tmp_fromlist_value_91, tmp_level_value_91);
        if (tmp_import_name_from_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_96,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[295],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_96, mod_consts[295]);
        }

        Py_DECREF(tmp_import_name_from_96);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_97;
        PyObject *tmp_name_value_92;
        PyObject *tmp_globals_arg_value_92;
        PyObject *tmp_locals_arg_value_92;
        PyObject *tmp_fromlist_value_92;
        PyObject *tmp_level_value_92;
        tmp_name_value_92 = mod_consts[296];
        tmp_globals_arg_value_92 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_92 = Py_None;
        tmp_fromlist_value_92 = mod_consts[297];
        tmp_level_value_92 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 96;
        tmp_import_name_from_97 = IMPORT_MODULE5(tmp_name_value_92, tmp_globals_arg_value_92, tmp_locals_arg_value_92, tmp_fromlist_value_92, tmp_level_value_92);
        if (tmp_import_name_from_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_97,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[298],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_97, mod_consts[298]);
        }

        Py_DECREF(tmp_import_name_from_97);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_98;
        PyObject *tmp_name_value_93;
        PyObject *tmp_globals_arg_value_93;
        PyObject *tmp_locals_arg_value_93;
        PyObject *tmp_fromlist_value_93;
        PyObject *tmp_level_value_93;
        tmp_name_value_93 = mod_consts[299];
        tmp_globals_arg_value_93 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_93 = Py_None;
        tmp_fromlist_value_93 = mod_consts[300];
        tmp_level_value_93 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 97;
        tmp_import_name_from_98 = IMPORT_MODULE5(tmp_name_value_93, tmp_globals_arg_value_93, tmp_locals_arg_value_93, tmp_fromlist_value_93, tmp_level_value_93);
        if (tmp_import_name_from_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_98,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[301],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_98, mod_consts[301]);
        }

        Py_DECREF(tmp_import_name_from_98);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_99;
        PyObject *tmp_name_value_94;
        PyObject *tmp_globals_arg_value_94;
        PyObject *tmp_locals_arg_value_94;
        PyObject *tmp_fromlist_value_94;
        PyObject *tmp_level_value_94;
        tmp_name_value_94 = mod_consts[302];
        tmp_globals_arg_value_94 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_94 = Py_None;
        tmp_fromlist_value_94 = mod_consts[303];
        tmp_level_value_94 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 98;
        tmp_import_name_from_99 = IMPORT_MODULE5(tmp_name_value_94, tmp_globals_arg_value_94, tmp_locals_arg_value_94, tmp_fromlist_value_94, tmp_level_value_94);
        if (tmp_import_name_from_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_99,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[304],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_99, mod_consts[304]);
        }

        Py_DECREF(tmp_import_name_from_99);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_import_name_from_100;
        PyObject *tmp_name_value_95;
        PyObject *tmp_globals_arg_value_95;
        PyObject *tmp_locals_arg_value_95;
        PyObject *tmp_fromlist_value_95;
        PyObject *tmp_level_value_95;
        tmp_name_value_95 = mod_consts[305];
        tmp_globals_arg_value_95 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_95 = Py_None;
        tmp_fromlist_value_95 = mod_consts[306];
        tmp_level_value_95 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 99;
        tmp_import_name_from_100 = IMPORT_MODULE5(tmp_name_value_95, tmp_globals_arg_value_95, tmp_locals_arg_value_95, tmp_fromlist_value_95, tmp_level_value_95);
        if (tmp_import_name_from_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_100,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[307],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_106 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_100, mod_consts[307]);
        }

        Py_DECREF(tmp_import_name_from_100);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_101;
        PyObject *tmp_name_value_96;
        PyObject *tmp_globals_arg_value_96;
        PyObject *tmp_locals_arg_value_96;
        PyObject *tmp_fromlist_value_96;
        PyObject *tmp_level_value_96;
        tmp_name_value_96 = mod_consts[308];
        tmp_globals_arg_value_96 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_96 = Py_None;
        tmp_fromlist_value_96 = mod_consts[309];
        tmp_level_value_96 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 100;
        tmp_import_name_from_101 = IMPORT_MODULE5(tmp_name_value_96, tmp_globals_arg_value_96, tmp_locals_arg_value_96, tmp_fromlist_value_96, tmp_level_value_96);
        if (tmp_import_name_from_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_101,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[310],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_101, mod_consts[310]);
        }

        Py_DECREF(tmp_import_name_from_101);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_102;
        PyObject *tmp_name_value_97;
        PyObject *tmp_globals_arg_value_97;
        PyObject *tmp_locals_arg_value_97;
        PyObject *tmp_fromlist_value_97;
        PyObject *tmp_level_value_97;
        tmp_name_value_97 = mod_consts[311];
        tmp_globals_arg_value_97 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_97 = Py_None;
        tmp_fromlist_value_97 = mod_consts[312];
        tmp_level_value_97 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 101;
        tmp_import_name_from_102 = IMPORT_MODULE5(tmp_name_value_97, tmp_globals_arg_value_97, tmp_locals_arg_value_97, tmp_fromlist_value_97, tmp_level_value_97);
        if (tmp_import_name_from_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_102,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[313],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_102, mod_consts[313]);
        }

        Py_DECREF(tmp_import_name_from_102);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_103;
        PyObject *tmp_name_value_98;
        PyObject *tmp_globals_arg_value_98;
        PyObject *tmp_locals_arg_value_98;
        PyObject *tmp_fromlist_value_98;
        PyObject *tmp_level_value_98;
        tmp_name_value_98 = mod_consts[314];
        tmp_globals_arg_value_98 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_98 = Py_None;
        tmp_fromlist_value_98 = mod_consts[315];
        tmp_level_value_98 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 102;
        tmp_import_name_from_103 = IMPORT_MODULE5(tmp_name_value_98, tmp_globals_arg_value_98, tmp_locals_arg_value_98, tmp_fromlist_value_98, tmp_level_value_98);
        if (tmp_import_name_from_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_103,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[316],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_103, mod_consts[316]);
        }

        Py_DECREF(tmp_import_name_from_103);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_104;
        PyObject *tmp_name_value_99;
        PyObject *tmp_globals_arg_value_99;
        PyObject *tmp_locals_arg_value_99;
        PyObject *tmp_fromlist_value_99;
        PyObject *tmp_level_value_99;
        tmp_name_value_99 = mod_consts[317];
        tmp_globals_arg_value_99 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_99 = Py_None;
        tmp_fromlist_value_99 = mod_consts[318];
        tmp_level_value_99 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 103;
        tmp_import_name_from_104 = IMPORT_MODULE5(tmp_name_value_99, tmp_globals_arg_value_99, tmp_locals_arg_value_99, tmp_fromlist_value_99, tmp_level_value_99);
        if (tmp_import_name_from_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_104,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[319],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_104, mod_consts[319]);
        }

        Py_DECREF(tmp_import_name_from_104);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_name_value_100;
        PyObject *tmp_globals_arg_value_100;
        PyObject *tmp_locals_arg_value_100;
        PyObject *tmp_fromlist_value_100;
        PyObject *tmp_level_value_100;
        tmp_name_value_100 = mod_consts[320];
        tmp_globals_arg_value_100 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_100 = Py_None;
        tmp_fromlist_value_100 = mod_consts[321];
        tmp_level_value_100 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 104;
        tmp_assign_source_111 = IMPORT_MODULE5(tmp_name_value_100, tmp_globals_arg_value_100, tmp_locals_arg_value_100, tmp_fromlist_value_100, tmp_level_value_100);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_111;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_105;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_105 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_105,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[322],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_105, mod_consts[322]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_106;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_106 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_106,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[323],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_106, mod_consts[323]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_113);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_107;
        PyObject *tmp_name_value_101;
        PyObject *tmp_globals_arg_value_101;
        PyObject *tmp_locals_arg_value_101;
        PyObject *tmp_fromlist_value_101;
        PyObject *tmp_level_value_101;
        tmp_name_value_101 = mod_consts[324];
        tmp_globals_arg_value_101 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_101 = Py_None;
        tmp_fromlist_value_101 = mod_consts[325];
        tmp_level_value_101 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 105;
        tmp_import_name_from_107 = IMPORT_MODULE5(tmp_name_value_101, tmp_globals_arg_value_101, tmp_locals_arg_value_101, tmp_fromlist_value_101, tmp_level_value_101);
        if (tmp_import_name_from_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_107,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[326],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_107, mod_consts[326]);
        }

        Py_DECREF(tmp_import_name_from_107);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_108;
        PyObject *tmp_name_value_102;
        PyObject *tmp_globals_arg_value_102;
        PyObject *tmp_locals_arg_value_102;
        PyObject *tmp_fromlist_value_102;
        PyObject *tmp_level_value_102;
        tmp_name_value_102 = mod_consts[327];
        tmp_globals_arg_value_102 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_102 = Py_None;
        tmp_fromlist_value_102 = mod_consts[328];
        tmp_level_value_102 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 106;
        tmp_import_name_from_108 = IMPORT_MODULE5(tmp_name_value_102, tmp_globals_arg_value_102, tmp_locals_arg_value_102, tmp_fromlist_value_102, tmp_level_value_102);
        if (tmp_import_name_from_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_108,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[329],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_108, mod_consts[329]);
        }

        Py_DECREF(tmp_import_name_from_108);
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_109;
        PyObject *tmp_name_value_103;
        PyObject *tmp_globals_arg_value_103;
        PyObject *tmp_locals_arg_value_103;
        PyObject *tmp_fromlist_value_103;
        PyObject *tmp_level_value_103;
        tmp_name_value_103 = mod_consts[330];
        tmp_globals_arg_value_103 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_103 = Py_None;
        tmp_fromlist_value_103 = mod_consts[331];
        tmp_level_value_103 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 107;
        tmp_import_name_from_109 = IMPORT_MODULE5(tmp_name_value_103, tmp_globals_arg_value_103, tmp_locals_arg_value_103, tmp_fromlist_value_103, tmp_level_value_103);
        if (tmp_import_name_from_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_109,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[332],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_109, mod_consts[332]);
        }

        Py_DECREF(tmp_import_name_from_109);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_110;
        PyObject *tmp_name_value_104;
        PyObject *tmp_globals_arg_value_104;
        PyObject *tmp_locals_arg_value_104;
        PyObject *tmp_fromlist_value_104;
        PyObject *tmp_level_value_104;
        tmp_name_value_104 = mod_consts[333];
        tmp_globals_arg_value_104 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_104 = Py_None;
        tmp_fromlist_value_104 = mod_consts[334];
        tmp_level_value_104 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 108;
        tmp_import_name_from_110 = IMPORT_MODULE5(tmp_name_value_104, tmp_globals_arg_value_104, tmp_locals_arg_value_104, tmp_fromlist_value_104, tmp_level_value_104);
        if (tmp_import_name_from_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_110,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[335],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_110, mod_consts[335]);
        }

        Py_DECREF(tmp_import_name_from_110);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_111;
        PyObject *tmp_name_value_105;
        PyObject *tmp_globals_arg_value_105;
        PyObject *tmp_locals_arg_value_105;
        PyObject *tmp_fromlist_value_105;
        PyObject *tmp_level_value_105;
        tmp_name_value_105 = mod_consts[336];
        tmp_globals_arg_value_105 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_105 = Py_None;
        tmp_fromlist_value_105 = mod_consts[337];
        tmp_level_value_105 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 109;
        tmp_import_name_from_111 = IMPORT_MODULE5(tmp_name_value_105, tmp_globals_arg_value_105, tmp_locals_arg_value_105, tmp_fromlist_value_105, tmp_level_value_105);
        if (tmp_import_name_from_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_111,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[338],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_111, mod_consts[338]);
        }

        Py_DECREF(tmp_import_name_from_111);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_112;
        PyObject *tmp_name_value_106;
        PyObject *tmp_globals_arg_value_106;
        PyObject *tmp_locals_arg_value_106;
        PyObject *tmp_fromlist_value_106;
        PyObject *tmp_level_value_106;
        tmp_name_value_106 = mod_consts[339];
        tmp_globals_arg_value_106 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_106 = Py_None;
        tmp_fromlist_value_106 = mod_consts[340];
        tmp_level_value_106 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 110;
        tmp_import_name_from_112 = IMPORT_MODULE5(tmp_name_value_106, tmp_globals_arg_value_106, tmp_locals_arg_value_106, tmp_fromlist_value_106, tmp_level_value_106);
        if (tmp_import_name_from_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_112,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[341],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_112, mod_consts[341]);
        }

        Py_DECREF(tmp_import_name_from_112);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_113;
        PyObject *tmp_name_value_107;
        PyObject *tmp_globals_arg_value_107;
        PyObject *tmp_locals_arg_value_107;
        PyObject *tmp_fromlist_value_107;
        PyObject *tmp_level_value_107;
        tmp_name_value_107 = mod_consts[342];
        tmp_globals_arg_value_107 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_107 = Py_None;
        tmp_fromlist_value_107 = mod_consts[343];
        tmp_level_value_107 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 111;
        tmp_import_name_from_113 = IMPORT_MODULE5(tmp_name_value_107, tmp_globals_arg_value_107, tmp_locals_arg_value_107, tmp_fromlist_value_107, tmp_level_value_107);
        if (tmp_import_name_from_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_113,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[344],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_113, mod_consts[344]);
        }

        Py_DECREF(tmp_import_name_from_113);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_import_name_from_114;
        PyObject *tmp_name_value_108;
        PyObject *tmp_globals_arg_value_108;
        PyObject *tmp_locals_arg_value_108;
        PyObject *tmp_fromlist_value_108;
        PyObject *tmp_level_value_108;
        tmp_name_value_108 = mod_consts[345];
        tmp_globals_arg_value_108 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_108 = Py_None;
        tmp_fromlist_value_108 = mod_consts[346];
        tmp_level_value_108 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 112;
        tmp_import_name_from_114 = IMPORT_MODULE5(tmp_name_value_108, tmp_globals_arg_value_108, tmp_locals_arg_value_108, tmp_fromlist_value_108, tmp_level_value_108);
        if (tmp_import_name_from_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_121 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_114,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[347],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_121 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_114, mod_consts[347]);
        }

        Py_DECREF(tmp_import_name_from_114);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_115;
        PyObject *tmp_name_value_109;
        PyObject *tmp_globals_arg_value_109;
        PyObject *tmp_locals_arg_value_109;
        PyObject *tmp_fromlist_value_109;
        PyObject *tmp_level_value_109;
        tmp_name_value_109 = mod_consts[348];
        tmp_globals_arg_value_109 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_109 = Py_None;
        tmp_fromlist_value_109 = mod_consts[349];
        tmp_level_value_109 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 113;
        tmp_import_name_from_115 = IMPORT_MODULE5(tmp_name_value_109, tmp_globals_arg_value_109, tmp_locals_arg_value_109, tmp_fromlist_value_109, tmp_level_value_109);
        if (tmp_import_name_from_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_115,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[350],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_115, mod_consts[350]);
        }

        Py_DECREF(tmp_import_name_from_115);
        if (tmp_assign_source_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_116;
        PyObject *tmp_name_value_110;
        PyObject *tmp_globals_arg_value_110;
        PyObject *tmp_locals_arg_value_110;
        PyObject *tmp_fromlist_value_110;
        PyObject *tmp_level_value_110;
        tmp_name_value_110 = mod_consts[351];
        tmp_globals_arg_value_110 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_110 = Py_None;
        tmp_fromlist_value_110 = mod_consts[352];
        tmp_level_value_110 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 114;
        tmp_import_name_from_116 = IMPORT_MODULE5(tmp_name_value_110, tmp_globals_arg_value_110, tmp_locals_arg_value_110, tmp_fromlist_value_110, tmp_level_value_110);
        if (tmp_import_name_from_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_116,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[353],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_116, mod_consts[353]);
        }

        Py_DECREF(tmp_import_name_from_116);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_117;
        PyObject *tmp_name_value_111;
        PyObject *tmp_globals_arg_value_111;
        PyObject *tmp_locals_arg_value_111;
        PyObject *tmp_fromlist_value_111;
        PyObject *tmp_level_value_111;
        tmp_name_value_111 = mod_consts[354];
        tmp_globals_arg_value_111 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_111 = Py_None;
        tmp_fromlist_value_111 = mod_consts[355];
        tmp_level_value_111 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 115;
        tmp_import_name_from_117 = IMPORT_MODULE5(tmp_name_value_111, tmp_globals_arg_value_111, tmp_locals_arg_value_111, tmp_fromlist_value_111, tmp_level_value_111);
        if (tmp_import_name_from_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_117,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[356],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_117, mod_consts[356]);
        }

        Py_DECREF(tmp_import_name_from_117);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_118;
        PyObject *tmp_name_value_112;
        PyObject *tmp_globals_arg_value_112;
        PyObject *tmp_locals_arg_value_112;
        PyObject *tmp_fromlist_value_112;
        PyObject *tmp_level_value_112;
        tmp_name_value_112 = mod_consts[357];
        tmp_globals_arg_value_112 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_112 = Py_None;
        tmp_fromlist_value_112 = mod_consts[358];
        tmp_level_value_112 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 116;
        tmp_import_name_from_118 = IMPORT_MODULE5(tmp_name_value_112, tmp_globals_arg_value_112, tmp_locals_arg_value_112, tmp_fromlist_value_112, tmp_level_value_112);
        if (tmp_import_name_from_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_118,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[359],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_118, mod_consts[359]);
        }

        Py_DECREF(tmp_import_name_from_118);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_119;
        PyObject *tmp_name_value_113;
        PyObject *tmp_globals_arg_value_113;
        PyObject *tmp_locals_arg_value_113;
        PyObject *tmp_fromlist_value_113;
        PyObject *tmp_level_value_113;
        tmp_name_value_113 = mod_consts[360];
        tmp_globals_arg_value_113 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_113 = Py_None;
        tmp_fromlist_value_113 = mod_consts[361];
        tmp_level_value_113 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 117;
        tmp_import_name_from_119 = IMPORT_MODULE5(tmp_name_value_113, tmp_globals_arg_value_113, tmp_locals_arg_value_113, tmp_fromlist_value_113, tmp_level_value_113);
        if (tmp_import_name_from_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_119,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[362],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_119, mod_consts[362]);
        }

        Py_DECREF(tmp_import_name_from_119);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_120;
        PyObject *tmp_name_value_114;
        PyObject *tmp_globals_arg_value_114;
        PyObject *tmp_locals_arg_value_114;
        PyObject *tmp_fromlist_value_114;
        PyObject *tmp_level_value_114;
        tmp_name_value_114 = mod_consts[363];
        tmp_globals_arg_value_114 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_114 = Py_None;
        tmp_fromlist_value_114 = mod_consts[364];
        tmp_level_value_114 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 118;
        tmp_import_name_from_120 = IMPORT_MODULE5(tmp_name_value_114, tmp_globals_arg_value_114, tmp_locals_arg_value_114, tmp_fromlist_value_114, tmp_level_value_114);
        if (tmp_import_name_from_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_120,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[365],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_120, mod_consts[365]);
        }

        Py_DECREF(tmp_import_name_from_120);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_121;
        PyObject *tmp_name_value_115;
        PyObject *tmp_globals_arg_value_115;
        PyObject *tmp_locals_arg_value_115;
        PyObject *tmp_fromlist_value_115;
        PyObject *tmp_level_value_115;
        tmp_name_value_115 = mod_consts[366];
        tmp_globals_arg_value_115 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_115 = Py_None;
        tmp_fromlist_value_115 = mod_consts[367];
        tmp_level_value_115 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 121;
        tmp_import_name_from_121 = IMPORT_MODULE5(tmp_name_value_115, tmp_globals_arg_value_115, tmp_locals_arg_value_115, tmp_fromlist_value_115, tmp_level_value_115);
        if (tmp_import_name_from_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_121,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[368],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_121, mod_consts[368]);
        }

        Py_DECREF(tmp_import_name_from_121);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_122;
        PyObject *tmp_name_value_116;
        PyObject *tmp_globals_arg_value_116;
        PyObject *tmp_locals_arg_value_116;
        PyObject *tmp_fromlist_value_116;
        PyObject *tmp_level_value_116;
        tmp_name_value_116 = mod_consts[369];
        tmp_globals_arg_value_116 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_116 = Py_None;
        tmp_fromlist_value_116 = mod_consts[370];
        tmp_level_value_116 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 122;
        tmp_import_name_from_122 = IMPORT_MODULE5(tmp_name_value_116, tmp_globals_arg_value_116, tmp_locals_arg_value_116, tmp_fromlist_value_116, tmp_level_value_116);
        if (tmp_import_name_from_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_122,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[371],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_122, mod_consts[371]);
        }

        Py_DECREF(tmp_import_name_from_122);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_123;
        PyObject *tmp_name_value_117;
        PyObject *tmp_globals_arg_value_117;
        PyObject *tmp_locals_arg_value_117;
        PyObject *tmp_fromlist_value_117;
        PyObject *tmp_level_value_117;
        tmp_name_value_117 = mod_consts[372];
        tmp_globals_arg_value_117 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_117 = Py_None;
        tmp_fromlist_value_117 = mod_consts[373];
        tmp_level_value_117 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 123;
        tmp_import_name_from_123 = IMPORT_MODULE5(tmp_name_value_117, tmp_globals_arg_value_117, tmp_locals_arg_value_117, tmp_fromlist_value_117, tmp_level_value_117);
        if (tmp_import_name_from_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_123,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[374],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_123, mod_consts[374]);
        }

        Py_DECREF(tmp_import_name_from_123);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_124;
        PyObject *tmp_name_value_118;
        PyObject *tmp_globals_arg_value_118;
        PyObject *tmp_locals_arg_value_118;
        PyObject *tmp_fromlist_value_118;
        PyObject *tmp_level_value_118;
        tmp_name_value_118 = mod_consts[375];
        tmp_globals_arg_value_118 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_118 = Py_None;
        tmp_fromlist_value_118 = mod_consts[376];
        tmp_level_value_118 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 124;
        tmp_import_name_from_124 = IMPORT_MODULE5(tmp_name_value_118, tmp_globals_arg_value_118, tmp_locals_arg_value_118, tmp_fromlist_value_118, tmp_level_value_118);
        if (tmp_import_name_from_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_124,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[377],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_124, mod_consts[377]);
        }

        Py_DECREF(tmp_import_name_from_124);
        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_125;
        PyObject *tmp_name_value_119;
        PyObject *tmp_globals_arg_value_119;
        PyObject *tmp_locals_arg_value_119;
        PyObject *tmp_fromlist_value_119;
        PyObject *tmp_level_value_119;
        tmp_name_value_119 = mod_consts[378];
        tmp_globals_arg_value_119 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_119 = Py_None;
        tmp_fromlist_value_119 = mod_consts[379];
        tmp_level_value_119 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 125;
        tmp_import_name_from_125 = IMPORT_MODULE5(tmp_name_value_119, tmp_globals_arg_value_119, tmp_locals_arg_value_119, tmp_fromlist_value_119, tmp_level_value_119);
        if (tmp_import_name_from_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_125,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[380],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_125, mod_consts[380]);
        }

        Py_DECREF(tmp_import_name_from_125);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_126;
        PyObject *tmp_name_value_120;
        PyObject *tmp_globals_arg_value_120;
        PyObject *tmp_locals_arg_value_120;
        PyObject *tmp_fromlist_value_120;
        PyObject *tmp_level_value_120;
        tmp_name_value_120 = mod_consts[381];
        tmp_globals_arg_value_120 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_120 = Py_None;
        tmp_fromlist_value_120 = mod_consts[382];
        tmp_level_value_120 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 126;
        tmp_import_name_from_126 = IMPORT_MODULE5(tmp_name_value_120, tmp_globals_arg_value_120, tmp_locals_arg_value_120, tmp_fromlist_value_120, tmp_level_value_120);
        if (tmp_import_name_from_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_126,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[383],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_126, mod_consts[383]);
        }

        Py_DECREF(tmp_import_name_from_126);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_127;
        PyObject *tmp_name_value_121;
        PyObject *tmp_globals_arg_value_121;
        PyObject *tmp_locals_arg_value_121;
        PyObject *tmp_fromlist_value_121;
        PyObject *tmp_level_value_121;
        tmp_name_value_121 = mod_consts[384];
        tmp_globals_arg_value_121 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_121 = Py_None;
        tmp_fromlist_value_121 = mod_consts[385];
        tmp_level_value_121 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 127;
        tmp_import_name_from_127 = IMPORT_MODULE5(tmp_name_value_121, tmp_globals_arg_value_121, tmp_locals_arg_value_121, tmp_fromlist_value_121, tmp_level_value_121);
        if (tmp_import_name_from_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_127,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[386],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_127, mod_consts[386]);
        }

        Py_DECREF(tmp_import_name_from_127);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_128;
        PyObject *tmp_name_value_122;
        PyObject *tmp_globals_arg_value_122;
        PyObject *tmp_locals_arg_value_122;
        PyObject *tmp_fromlist_value_122;
        PyObject *tmp_level_value_122;
        tmp_name_value_122 = mod_consts[387];
        tmp_globals_arg_value_122 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_122 = Py_None;
        tmp_fromlist_value_122 = mod_consts[388];
        tmp_level_value_122 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 128;
        tmp_import_name_from_128 = IMPORT_MODULE5(tmp_name_value_122, tmp_globals_arg_value_122, tmp_locals_arg_value_122, tmp_fromlist_value_122, tmp_level_value_122);
        if (tmp_import_name_from_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_128,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[389],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_128, mod_consts[389]);
        }

        Py_DECREF(tmp_import_name_from_128);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_129;
        PyObject *tmp_name_value_123;
        PyObject *tmp_globals_arg_value_123;
        PyObject *tmp_locals_arg_value_123;
        PyObject *tmp_fromlist_value_123;
        PyObject *tmp_level_value_123;
        tmp_name_value_123 = mod_consts[390];
        tmp_globals_arg_value_123 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_123 = Py_None;
        tmp_fromlist_value_123 = mod_consts[391];
        tmp_level_value_123 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 129;
        tmp_import_name_from_129 = IMPORT_MODULE5(tmp_name_value_123, tmp_globals_arg_value_123, tmp_locals_arg_value_123, tmp_fromlist_value_123, tmp_level_value_123);
        if (tmp_import_name_from_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_129,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[392],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_129, mod_consts[392]);
        }

        Py_DECREF(tmp_import_name_from_129);
        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_import_name_from_130;
        PyObject *tmp_name_value_124;
        PyObject *tmp_globals_arg_value_124;
        PyObject *tmp_locals_arg_value_124;
        PyObject *tmp_fromlist_value_124;
        PyObject *tmp_level_value_124;
        tmp_name_value_124 = mod_consts[393];
        tmp_globals_arg_value_124 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_124 = Py_None;
        tmp_fromlist_value_124 = mod_consts[394];
        tmp_level_value_124 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 130;
        tmp_import_name_from_130 = IMPORT_MODULE5(tmp_name_value_124, tmp_globals_arg_value_124, tmp_locals_arg_value_124, tmp_fromlist_value_124, tmp_level_value_124);
        if (tmp_import_name_from_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_130,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[395],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_137 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_130, mod_consts[395]);
        }

        Py_DECREF(tmp_import_name_from_130);
        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_131;
        PyObject *tmp_name_value_125;
        PyObject *tmp_globals_arg_value_125;
        PyObject *tmp_locals_arg_value_125;
        PyObject *tmp_fromlist_value_125;
        PyObject *tmp_level_value_125;
        tmp_name_value_125 = mod_consts[396];
        tmp_globals_arg_value_125 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_125 = Py_None;
        tmp_fromlist_value_125 = mod_consts[397];
        tmp_level_value_125 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 131;
        tmp_import_name_from_131 = IMPORT_MODULE5(tmp_name_value_125, tmp_globals_arg_value_125, tmp_locals_arg_value_125, tmp_fromlist_value_125, tmp_level_value_125);
        if (tmp_import_name_from_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_131,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[398],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_138 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_131, mod_consts[398]);
        }

        Py_DECREF(tmp_import_name_from_131);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_132;
        PyObject *tmp_name_value_126;
        PyObject *tmp_globals_arg_value_126;
        PyObject *tmp_locals_arg_value_126;
        PyObject *tmp_fromlist_value_126;
        PyObject *tmp_level_value_126;
        tmp_name_value_126 = mod_consts[399];
        tmp_globals_arg_value_126 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_126 = Py_None;
        tmp_fromlist_value_126 = mod_consts[400];
        tmp_level_value_126 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 132;
        tmp_import_name_from_132 = IMPORT_MODULE5(tmp_name_value_126, tmp_globals_arg_value_126, tmp_locals_arg_value_126, tmp_fromlist_value_126, tmp_level_value_126);
        if (tmp_import_name_from_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_132,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[401],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_132, mod_consts[401]);
        }

        Py_DECREF(tmp_import_name_from_132);
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_133;
        PyObject *tmp_name_value_127;
        PyObject *tmp_globals_arg_value_127;
        PyObject *tmp_locals_arg_value_127;
        PyObject *tmp_fromlist_value_127;
        PyObject *tmp_level_value_127;
        tmp_name_value_127 = mod_consts[402];
        tmp_globals_arg_value_127 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_127 = Py_None;
        tmp_fromlist_value_127 = mod_consts[403];
        tmp_level_value_127 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 133;
        tmp_import_name_from_133 = IMPORT_MODULE5(tmp_name_value_127, tmp_globals_arg_value_127, tmp_locals_arg_value_127, tmp_fromlist_value_127, tmp_level_value_127);
        if (tmp_import_name_from_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_133,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[404],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_133, mod_consts[404]);
        }

        Py_DECREF(tmp_import_name_from_133);
        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_import_name_from_134;
        PyObject *tmp_name_value_128;
        PyObject *tmp_globals_arg_value_128;
        PyObject *tmp_locals_arg_value_128;
        PyObject *tmp_fromlist_value_128;
        PyObject *tmp_level_value_128;
        tmp_name_value_128 = mod_consts[405];
        tmp_globals_arg_value_128 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_128 = Py_None;
        tmp_fromlist_value_128 = mod_consts[406];
        tmp_level_value_128 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 134;
        tmp_import_name_from_134 = IMPORT_MODULE5(tmp_name_value_128, tmp_globals_arg_value_128, tmp_locals_arg_value_128, tmp_fromlist_value_128, tmp_level_value_128);
        if (tmp_import_name_from_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_134,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[407],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_141 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_134, mod_consts[407]);
        }

        Py_DECREF(tmp_import_name_from_134);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_135;
        PyObject *tmp_name_value_129;
        PyObject *tmp_globals_arg_value_129;
        PyObject *tmp_locals_arg_value_129;
        PyObject *tmp_fromlist_value_129;
        PyObject *tmp_level_value_129;
        tmp_name_value_129 = mod_consts[408];
        tmp_globals_arg_value_129 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_129 = Py_None;
        tmp_fromlist_value_129 = mod_consts[409];
        tmp_level_value_129 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 135;
        tmp_import_name_from_135 = IMPORT_MODULE5(tmp_name_value_129, tmp_globals_arg_value_129, tmp_locals_arg_value_129, tmp_fromlist_value_129, tmp_level_value_129);
        if (tmp_import_name_from_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_135,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[410],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_135, mod_consts[410]);
        }

        Py_DECREF(tmp_import_name_from_135);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_136;
        PyObject *tmp_name_value_130;
        PyObject *tmp_globals_arg_value_130;
        PyObject *tmp_locals_arg_value_130;
        PyObject *tmp_fromlist_value_130;
        PyObject *tmp_level_value_130;
        tmp_name_value_130 = mod_consts[411];
        tmp_globals_arg_value_130 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_130 = Py_None;
        tmp_fromlist_value_130 = mod_consts[412];
        tmp_level_value_130 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 136;
        tmp_import_name_from_136 = IMPORT_MODULE5(tmp_name_value_130, tmp_globals_arg_value_130, tmp_locals_arg_value_130, tmp_fromlist_value_130, tmp_level_value_130);
        if (tmp_import_name_from_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_136,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[413],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_136, mod_consts[413]);
        }

        Py_DECREF(tmp_import_name_from_136);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_137;
        PyObject *tmp_name_value_131;
        PyObject *tmp_globals_arg_value_131;
        PyObject *tmp_locals_arg_value_131;
        PyObject *tmp_fromlist_value_131;
        PyObject *tmp_level_value_131;
        tmp_name_value_131 = mod_consts[414];
        tmp_globals_arg_value_131 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_131 = Py_None;
        tmp_fromlist_value_131 = mod_consts[415];
        tmp_level_value_131 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 137;
        tmp_import_name_from_137 = IMPORT_MODULE5(tmp_name_value_131, tmp_globals_arg_value_131, tmp_locals_arg_value_131, tmp_fromlist_value_131, tmp_level_value_131);
        if (tmp_import_name_from_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_137,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[416],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_137, mod_consts[416]);
        }

        Py_DECREF(tmp_import_name_from_137);
        if (tmp_assign_source_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_138;
        PyObject *tmp_name_value_132;
        PyObject *tmp_globals_arg_value_132;
        PyObject *tmp_locals_arg_value_132;
        PyObject *tmp_fromlist_value_132;
        PyObject *tmp_level_value_132;
        tmp_name_value_132 = mod_consts[417];
        tmp_globals_arg_value_132 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_132 = Py_None;
        tmp_fromlist_value_132 = mod_consts[418];
        tmp_level_value_132 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 138;
        tmp_import_name_from_138 = IMPORT_MODULE5(tmp_name_value_132, tmp_globals_arg_value_132, tmp_locals_arg_value_132, tmp_fromlist_value_132, tmp_level_value_132);
        if (tmp_import_name_from_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_138,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[419],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_138, mod_consts[419]);
        }

        Py_DECREF(tmp_import_name_from_138);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_139;
        PyObject *tmp_name_value_133;
        PyObject *tmp_globals_arg_value_133;
        PyObject *tmp_locals_arg_value_133;
        PyObject *tmp_fromlist_value_133;
        PyObject *tmp_level_value_133;
        tmp_name_value_133 = mod_consts[420];
        tmp_globals_arg_value_133 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_133 = Py_None;
        tmp_fromlist_value_133 = mod_consts[421];
        tmp_level_value_133 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 139;
        tmp_import_name_from_139 = IMPORT_MODULE5(tmp_name_value_133, tmp_globals_arg_value_133, tmp_locals_arg_value_133, tmp_fromlist_value_133, tmp_level_value_133);
        if (tmp_import_name_from_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_139,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[422],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_139, mod_consts[422]);
        }

        Py_DECREF(tmp_import_name_from_139);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_import_name_from_140;
        PyObject *tmp_name_value_134;
        PyObject *tmp_globals_arg_value_134;
        PyObject *tmp_locals_arg_value_134;
        PyObject *tmp_fromlist_value_134;
        PyObject *tmp_level_value_134;
        tmp_name_value_134 = mod_consts[423];
        tmp_globals_arg_value_134 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_134 = Py_None;
        tmp_fromlist_value_134 = mod_consts[424];
        tmp_level_value_134 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 140;
        tmp_import_name_from_140 = IMPORT_MODULE5(tmp_name_value_134, tmp_globals_arg_value_134, tmp_locals_arg_value_134, tmp_fromlist_value_134, tmp_level_value_134);
        if (tmp_import_name_from_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_140,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[425],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_147 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_140, mod_consts[425]);
        }

        Py_DECREF(tmp_import_name_from_140);
        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_141;
        PyObject *tmp_name_value_135;
        PyObject *tmp_globals_arg_value_135;
        PyObject *tmp_locals_arg_value_135;
        PyObject *tmp_fromlist_value_135;
        PyObject *tmp_level_value_135;
        tmp_name_value_135 = mod_consts[426];
        tmp_globals_arg_value_135 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_135 = Py_None;
        tmp_fromlist_value_135 = mod_consts[427];
        tmp_level_value_135 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 141;
        tmp_import_name_from_141 = IMPORT_MODULE5(tmp_name_value_135, tmp_globals_arg_value_135, tmp_locals_arg_value_135, tmp_fromlist_value_135, tmp_level_value_135);
        if (tmp_import_name_from_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_141,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[428],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_141, mod_consts[428]);
        }

        Py_DECREF(tmp_import_name_from_141);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_142;
        PyObject *tmp_name_value_136;
        PyObject *tmp_globals_arg_value_136;
        PyObject *tmp_locals_arg_value_136;
        PyObject *tmp_fromlist_value_136;
        PyObject *tmp_level_value_136;
        tmp_name_value_136 = mod_consts[429];
        tmp_globals_arg_value_136 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_136 = Py_None;
        tmp_fromlist_value_136 = mod_consts[430];
        tmp_level_value_136 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 142;
        tmp_import_name_from_142 = IMPORT_MODULE5(tmp_name_value_136, tmp_globals_arg_value_136, tmp_locals_arg_value_136, tmp_fromlist_value_136, tmp_level_value_136);
        if (tmp_import_name_from_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_142,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[431],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_142, mod_consts[431]);
        }

        Py_DECREF(tmp_import_name_from_142);
        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_143;
        PyObject *tmp_name_value_137;
        PyObject *tmp_globals_arg_value_137;
        PyObject *tmp_locals_arg_value_137;
        PyObject *tmp_fromlist_value_137;
        PyObject *tmp_level_value_137;
        tmp_name_value_137 = mod_consts[432];
        tmp_globals_arg_value_137 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_137 = Py_None;
        tmp_fromlist_value_137 = mod_consts[433];
        tmp_level_value_137 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 143;
        tmp_import_name_from_143 = IMPORT_MODULE5(tmp_name_value_137, tmp_globals_arg_value_137, tmp_locals_arg_value_137, tmp_fromlist_value_137, tmp_level_value_137);
        if (tmp_import_name_from_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_143,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[434],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_143, mod_consts[434]);
        }

        Py_DECREF(tmp_import_name_from_143);
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_144;
        PyObject *tmp_name_value_138;
        PyObject *tmp_globals_arg_value_138;
        PyObject *tmp_locals_arg_value_138;
        PyObject *tmp_fromlist_value_138;
        PyObject *tmp_level_value_138;
        tmp_name_value_138 = mod_consts[435];
        tmp_globals_arg_value_138 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_138 = Py_None;
        tmp_fromlist_value_138 = mod_consts[436];
        tmp_level_value_138 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 144;
        tmp_import_name_from_144 = IMPORT_MODULE5(tmp_name_value_138, tmp_globals_arg_value_138, tmp_locals_arg_value_138, tmp_fromlist_value_138, tmp_level_value_138);
        if (tmp_import_name_from_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_144,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[437],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_144, mod_consts[437]);
        }

        Py_DECREF(tmp_import_name_from_144);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_145;
        PyObject *tmp_name_value_139;
        PyObject *tmp_globals_arg_value_139;
        PyObject *tmp_locals_arg_value_139;
        PyObject *tmp_fromlist_value_139;
        PyObject *tmp_level_value_139;
        tmp_name_value_139 = mod_consts[438];
        tmp_globals_arg_value_139 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_139 = Py_None;
        tmp_fromlist_value_139 = mod_consts[439];
        tmp_level_value_139 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 145;
        tmp_import_name_from_145 = IMPORT_MODULE5(tmp_name_value_139, tmp_globals_arg_value_139, tmp_locals_arg_value_139, tmp_fromlist_value_139, tmp_level_value_139);
        if (tmp_import_name_from_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_145,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[440],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_145, mod_consts[440]);
        }

        Py_DECREF(tmp_import_name_from_145);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_import_name_from_146;
        PyObject *tmp_name_value_140;
        PyObject *tmp_globals_arg_value_140;
        PyObject *tmp_locals_arg_value_140;
        PyObject *tmp_fromlist_value_140;
        PyObject *tmp_level_value_140;
        tmp_name_value_140 = mod_consts[441];
        tmp_globals_arg_value_140 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_140 = Py_None;
        tmp_fromlist_value_140 = mod_consts[442];
        tmp_level_value_140 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 146;
        tmp_import_name_from_146 = IMPORT_MODULE5(tmp_name_value_140, tmp_globals_arg_value_140, tmp_locals_arg_value_140, tmp_fromlist_value_140, tmp_level_value_140);
        if (tmp_import_name_from_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_153 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_146,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[443],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_153 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_146, mod_consts[443]);
        }

        Py_DECREF(tmp_import_name_from_146);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_147;
        PyObject *tmp_name_value_141;
        PyObject *tmp_globals_arg_value_141;
        PyObject *tmp_locals_arg_value_141;
        PyObject *tmp_fromlist_value_141;
        PyObject *tmp_level_value_141;
        tmp_name_value_141 = mod_consts[444];
        tmp_globals_arg_value_141 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_141 = Py_None;
        tmp_fromlist_value_141 = mod_consts[445];
        tmp_level_value_141 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 147;
        tmp_import_name_from_147 = IMPORT_MODULE5(tmp_name_value_141, tmp_globals_arg_value_141, tmp_locals_arg_value_141, tmp_fromlist_value_141, tmp_level_value_141);
        if (tmp_import_name_from_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_147,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[446],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_147, mod_consts[446]);
        }

        Py_DECREF(tmp_import_name_from_147);
        if (tmp_assign_source_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_148;
        PyObject *tmp_name_value_142;
        PyObject *tmp_globals_arg_value_142;
        PyObject *tmp_locals_arg_value_142;
        PyObject *tmp_fromlist_value_142;
        PyObject *tmp_level_value_142;
        tmp_name_value_142 = mod_consts[447];
        tmp_globals_arg_value_142 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_142 = Py_None;
        tmp_fromlist_value_142 = mod_consts[448];
        tmp_level_value_142 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 148;
        tmp_import_name_from_148 = IMPORT_MODULE5(tmp_name_value_142, tmp_globals_arg_value_142, tmp_locals_arg_value_142, tmp_fromlist_value_142, tmp_level_value_142);
        if (tmp_import_name_from_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_148,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[449],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_148, mod_consts[449]);
        }

        Py_DECREF(tmp_import_name_from_148);
        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_149;
        PyObject *tmp_name_value_143;
        PyObject *tmp_globals_arg_value_143;
        PyObject *tmp_locals_arg_value_143;
        PyObject *tmp_fromlist_value_143;
        PyObject *tmp_level_value_143;
        tmp_name_value_143 = mod_consts[450];
        tmp_globals_arg_value_143 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_143 = Py_None;
        tmp_fromlist_value_143 = mod_consts[451];
        tmp_level_value_143 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 149;
        tmp_import_name_from_149 = IMPORT_MODULE5(tmp_name_value_143, tmp_globals_arg_value_143, tmp_locals_arg_value_143, tmp_fromlist_value_143, tmp_level_value_143);
        if (tmp_import_name_from_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_149,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[452],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_149, mod_consts[452]);
        }

        Py_DECREF(tmp_import_name_from_149);
        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_150;
        PyObject *tmp_name_value_144;
        PyObject *tmp_globals_arg_value_144;
        PyObject *tmp_locals_arg_value_144;
        PyObject *tmp_fromlist_value_144;
        PyObject *tmp_level_value_144;
        tmp_name_value_144 = mod_consts[453];
        tmp_globals_arg_value_144 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_144 = Py_None;
        tmp_fromlist_value_144 = mod_consts[454];
        tmp_level_value_144 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 150;
        tmp_import_name_from_150 = IMPORT_MODULE5(tmp_name_value_144, tmp_globals_arg_value_144, tmp_locals_arg_value_144, tmp_fromlist_value_144, tmp_level_value_144);
        if (tmp_import_name_from_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_150)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_150,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[455],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_150, mod_consts[455]);
        }

        Py_DECREF(tmp_import_name_from_150);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_151;
        PyObject *tmp_name_value_145;
        PyObject *tmp_globals_arg_value_145;
        PyObject *tmp_locals_arg_value_145;
        PyObject *tmp_fromlist_value_145;
        PyObject *tmp_level_value_145;
        tmp_name_value_145 = mod_consts[456];
        tmp_globals_arg_value_145 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_145 = Py_None;
        tmp_fromlist_value_145 = mod_consts[457];
        tmp_level_value_145 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 151;
        tmp_import_name_from_151 = IMPORT_MODULE5(tmp_name_value_145, tmp_globals_arg_value_145, tmp_locals_arg_value_145, tmp_fromlist_value_145, tmp_level_value_145);
        if (tmp_import_name_from_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_151)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_151,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[458],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_151, mod_consts[458]);
        }

        Py_DECREF(tmp_import_name_from_151);
        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_152;
        PyObject *tmp_name_value_146;
        PyObject *tmp_globals_arg_value_146;
        PyObject *tmp_locals_arg_value_146;
        PyObject *tmp_fromlist_value_146;
        PyObject *tmp_level_value_146;
        tmp_name_value_146 = mod_consts[459];
        tmp_globals_arg_value_146 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_146 = Py_None;
        tmp_fromlist_value_146 = mod_consts[460];
        tmp_level_value_146 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 152;
        tmp_import_name_from_152 = IMPORT_MODULE5(tmp_name_value_146, tmp_globals_arg_value_146, tmp_locals_arg_value_146, tmp_fromlist_value_146, tmp_level_value_146);
        if (tmp_import_name_from_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_152)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_152,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[461],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_152, mod_consts[461]);
        }

        Py_DECREF(tmp_import_name_from_152);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_153;
        PyObject *tmp_name_value_147;
        PyObject *tmp_globals_arg_value_147;
        PyObject *tmp_locals_arg_value_147;
        PyObject *tmp_fromlist_value_147;
        PyObject *tmp_level_value_147;
        tmp_name_value_147 = mod_consts[462];
        tmp_globals_arg_value_147 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_147 = Py_None;
        tmp_fromlist_value_147 = mod_consts[463];
        tmp_level_value_147 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 153;
        tmp_import_name_from_153 = IMPORT_MODULE5(tmp_name_value_147, tmp_globals_arg_value_147, tmp_locals_arg_value_147, tmp_fromlist_value_147, tmp_level_value_147);
        if (tmp_import_name_from_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_153)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_153,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[464],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_153, mod_consts[464]);
        }

        Py_DECREF(tmp_import_name_from_153);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_import_name_from_154;
        PyObject *tmp_name_value_148;
        PyObject *tmp_globals_arg_value_148;
        PyObject *tmp_locals_arg_value_148;
        PyObject *tmp_fromlist_value_148;
        PyObject *tmp_level_value_148;
        tmp_name_value_148 = mod_consts[465];
        tmp_globals_arg_value_148 = (PyObject *)moduledict_aiogram$types;
        tmp_locals_arg_value_148 = Py_None;
        tmp_fromlist_value_148 = mod_consts[466];
        tmp_level_value_148 = mod_consts[20];
        frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 154;
        tmp_import_name_from_154 = IMPORT_MODULE5(tmp_name_value_148, tmp_globals_arg_value_148, tmp_locals_arg_value_148, tmp_fromlist_value_148, tmp_level_value_148);
        if (tmp_import_name_from_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_154)) {
            tmp_assign_source_161 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_154,
                (PyObject *)moduledict_aiogram$types,
                mod_consts[467],
                mod_consts[11]
            );
        } else {
            tmp_assign_source_161 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_154, mod_consts[467]);
        }

        Py_DECREF(tmp_import_name_from_154);
        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[468];
        UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[469]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[469]);
        }

        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_163 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_163;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_164;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_164 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_164 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 313;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_164;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_165 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[470], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_6 = (PyObject *)moduledict_aiogram$types;
        tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[470]);

        if (unlikely(tmp_subscript_value_2 == NULL)) {
            tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[470]);
        }

        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_166 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_166);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[471]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[471]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_attribute_value_1 = mod_consts[472];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_7, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_start_1;
    branch_no_1:;
    {
        PyObject *tmp_outline_return_value_1;
        {
            PyObject *tmp_assign_source_167;
            PyObject *tmp_expression_value_8;
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[471]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[471]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_4;
            }
            tmp_assign_source_167 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[472]);
            if (tmp_assign_source_167 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dict_unpacking_call_1__called;
                tmp_dict_unpacking_call_1__called = tmp_assign_source_167;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_dircall_arg1_2;
            PyObject *tmp_dircall_arg2_2;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
            tmp_dircall_arg1_1 = tmp_dict_unpacking_call_1__called;
            CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
            tmp_dircall_arg1_2 = tmp_dict_unpacking_call_1__called;
            // Tried code:
            {
                PyObject *tmp_assign_source_168;
                PyObject *tmp_iter_arg_2;
                PyObject *tmp_called_value_5;
                PyObject *tmp_expression_value_9;
                tmp_expression_value_9 = (PyObject *)moduledict_aiogram$types;
                tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[473]);
                if (tmp_called_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;

                    goto try_except_handler_5;
                }
                frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame.f_lineno = 318;
                tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
                Py_DECREF(tmp_called_value_5);
                if (tmp_iter_arg_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;

                    goto try_except_handler_5;
                }
                tmp_assign_source_168 = MAKE_ITERATOR(tmp_iter_arg_2);
                Py_DECREF(tmp_iter_arg_2);
                if (tmp_assign_source_168 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;

                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_dictcontraction_1__$0;
                    tmp_dictcontraction_1__$0 = tmp_assign_source_168;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_169;
                tmp_assign_source_169 = MAKE_DICT_EMPTY();
                {
                    PyObject *old = tmp_dictcontraction_1__contraction;
                    tmp_dictcontraction_1__contraction = tmp_assign_source_169;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2)) {
                Py_XDECREF(cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2);

#if _DEBUG_REFCOUNTS
                if (cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2 = MAKE_FUNCTION_FRAME(codeobj_5e50155ed2ae6ac457f3cbd2ca8d0ddb, module_aiogram$types, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2->m_type_description == NULL);
            frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2 = cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2);
            assert(Py_REFCNT(frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2) == 2);

            // Framed code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_170;
                CHECK_OBJECT(tmp_dictcontraction_1__$0);
                tmp_next_source_2 = tmp_dictcontraction_1__$0;
                tmp_assign_source_170 = ITERATOR_NEXT(tmp_next_source_2);
                if (tmp_assign_source_170 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_2 = "oo";
                        exception_lineno = 318;
                        goto try_except_handler_6;
                    }
                }

                {
                    PyObject *old = tmp_dictcontraction_1__iter_value_0;
                    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_170;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_171;
                PyObject *tmp_iter_arg_3;
                CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
                tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
                tmp_assign_source_171 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
                if (tmp_assign_source_171 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;
                    type_description_2 = "oo";
                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_171;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_172;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
                tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_assign_source_172 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
                if (tmp_assign_source_172 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_2 = "oo";
                    exception_lineno = 318;
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_172;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_173;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
                tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_assign_source_173 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
                if (tmp_assign_source_173 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_2 = "oo";
                    exception_lineno = 318;
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_173;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_1;
                CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
                tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

                tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

                if (likely(tmp_iterator_attempt == NULL)) {
                    PyObject *error = GET_ERROR_OCCURRED();

                    if (error != NULL) {
                        if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                            CLEAR_ERROR_OCCURRED();
                        } else {
                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                            type_description_2 = "oo";
                            exception_lineno = 318;
                            goto try_except_handler_8;
                        }
                    }
                } else {
                    Py_DECREF(tmp_iterator_attempt);

                    exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    exception_value = mod_consts[474];
                    Py_INCREF(exception_value);
                    exception_tb = NULL;

                    type_description_2 = "oo";
                    exception_lineno = 318;
                    goto try_except_handler_8;
                }
            }
            goto try_end_4;
            // Exception handler code:
            try_except_handler_8:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto try_except_handler_7;
            // End of try:
            try_end_4:;
            goto try_end_5;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
            Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_6;
            // End of try:
            try_end_5:;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
            {
                PyObject *tmp_assign_source_174;
                CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
                tmp_assign_source_174 = tmp_dictcontraction$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_0_var_k;
                    outline_0_var_k = tmp_assign_source_174;
                    Py_INCREF(outline_0_var_k);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_175;
                CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
                tmp_assign_source_175 = tmp_dictcontraction$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_0_var_v;
                    outline_0_var_v = tmp_assign_source_175;
                    Py_INCREF(outline_0_var_v);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

            {
                bool tmp_condition_result_2;
                PyObject *tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                CHECK_OBJECT(outline_0_var_k);
                tmp_cmp_expr_left_1 = outline_0_var_k;
                tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[469]);

                if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
                    tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[469]);
                }

                if (tmp_cmp_expr_right_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;
                    type_description_2 = "oo";
                    goto try_except_handler_6;
                }
                tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;
                    type_description_2 = "oo";
                    goto try_except_handler_6;
                }
                tmp_condition_result_2 = (tmp_res == 1) ? true : false;
                if (tmp_condition_result_2 != false) {
                    goto branch_yes_2;
                } else {
                    goto branch_no_2;
                }
            }
            branch_yes_2:;
            {
                PyObject *tmp_dictset38_key_1;
                PyObject *tmp_dictset38_value_1;
                PyObject *tmp_dictset38_dict_1;
                CHECK_OBJECT(outline_0_var_k);
                tmp_dictset38_key_1 = outline_0_var_k;
                CHECK_OBJECT(outline_0_var_v);
                tmp_dictset38_value_1 = outline_0_var_v;
                CHECK_OBJECT(tmp_dictcontraction_1__contraction);
                tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
                assert(PyDict_CheckExact(tmp_dictset38_dict_1));
                tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

                if (tmp_res != 0) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 318;
                    type_description_2 = "oo";
                    goto try_except_handler_6;
                }
            }
            branch_no_2:;
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_tuple_element_1 = tmp_dictcontraction_1__contraction;
            Py_INCREF(tmp_tuple_element_1);
            goto try_return_handler_6;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_6:;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            Py_DECREF(tmp_dictcontraction_1__$0);
            tmp_dictcontraction_1__$0 = NULL;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            Py_DECREF(tmp_dictcontraction_1__contraction);
            tmp_dictcontraction_1__contraction = NULL;
            Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
            tmp_dictcontraction_1__iter_value_0 = NULL;
            goto frame_return_exit_1;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            Py_DECREF(tmp_dictcontraction_1__$0);
            tmp_dictcontraction_1__$0 = NULL;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            Py_DECREF(tmp_dictcontraction_1__contraction);
            tmp_dictcontraction_1__contraction = NULL;
            Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
            tmp_dictcontraction_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_2;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;
            frame_return_exit_1:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_5;
            frame_exception_exit_2:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2,
                type_description_2,
                outline_0_var_k,
                outline_0_var_v
            );


            // Release cached frame if used for exception.
            if (frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2 == cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2);
                cache_frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2 = NULL;
            }

            assertFrameObject(frame_5e50155ed2ae6ac457f3cbd2ca8d0ddb_2);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_1;
            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_1:;

            goto try_except_handler_5;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            Py_XDECREF(outline_0_var_k);
            outline_0_var_k = NULL;
            Py_XDECREF(outline_0_var_v);
            outline_0_var_v = NULL;
            goto outline_result_2;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_0_var_k);
            outline_0_var_k = NULL;
            Py_XDECREF(outline_0_var_v);
            outline_0_var_v = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto outline_exception_1;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_1:;
            exception_lineno = 318;
            goto try_except_handler_4;
            outline_result_2:;
            tmp_dircall_arg2_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyTuple_SET_ITEM(tmp_dircall_arg2_2, 0, tmp_tuple_element_1);
                tmp_dict_key_1 = mod_consts[17];
                tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)mod_consts[17]);

                if (unlikely(tmp_dict_value_1 == NULL)) {
                    tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                }

                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;

                    goto tuple_build_exception_1;
                }
                tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                PyTuple_SET_ITEM(tmp_dircall_arg2_2, 1, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_dircall_arg2_2);
            goto try_except_handler_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
                tmp_dircall_arg2_1 = impl___main__$$$function__2_complex_call_helper_dict_unpacking_checks(dir_call_args);
            }
            if (tmp_dircall_arg2_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_4;
            }
            Py_INCREF(tmp_dircall_arg1_1);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_outline_return_value_1 = impl___main__$$$function__4_complex_call_helper_star_dict(dir_call_args);
            }
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;

                goto try_except_handler_4;
            }
            goto outline_result_1;
        }
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        Py_DECREF(tmp_outline_return_value_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 313;

        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_aiogram$types, mod_consts[471]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[471]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 322;

        goto frame_exception_exit_1;
    }

    tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_aiogram$types, mod_consts[470]);
    if (tmp_result == false) CLEAR_ERROR_OCCURRED();

    if (unlikely(tmp_result == false)) {

        FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[470]);
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 323;

        goto frame_exception_exit_1;
    }



    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f440aee008b7f0557d673cbe0bb2e62, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f440aee008b7f0557d673cbe0bb2e62->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f440aee008b7f0557d673cbe0bb2e62, exception_lineno);
    }



    assertFrameObject(frame_0f440aee008b7f0557d673cbe0bb2e62);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiogram.types", false);

    Py_INCREF(module_aiogram$types);
    return module_aiogram$types;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiogram$types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("aiogram$types", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
