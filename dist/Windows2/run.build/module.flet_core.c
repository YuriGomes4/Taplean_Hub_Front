/* Generated code for Python module 'flet_core'
 * created by Nuitka version 1.8.4
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

/* The "module_flet_core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core;
PyDictObject *moduledict_flet_core;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[416];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[416];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("flet_core"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 416; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_flet_core(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 416; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4b038c4e374049c80563b49ffe2e97ea;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[413]); CHECK_OBJECT(module_filename_obj);
    codeobj_4b038c4e374049c80563b49ffe2e97ea = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[414], mod_consts[414], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


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
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_flet_core[] = {

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
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_flet_core;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
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

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_flet_core) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

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
        functable_flet_core[offset],
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
        module_flet_core,
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
PyObject *modulecode_flet_core(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core");

    // Store the module for future use.
    module_flet_core = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

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
        PRINT_STRING("flet_core: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("flet_core: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core\n");

    moduledict_flet_core = MODULE_DICT(module_flet_core);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[415]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_flet_core);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_14__module = NULL;
    PyObject *tmp_import_from_15__module = NULL;
    PyObject *tmp_import_from_16__module = NULL;
    PyObject *tmp_import_from_17__module = NULL;
    PyObject *tmp_import_from_18__module = NULL;
    PyObject *tmp_import_from_19__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_20__module = NULL;
    PyObject *tmp_import_from_21__module = NULL;
    PyObject *tmp_import_from_22__module = NULL;
    PyObject *tmp_import_from_23__module = NULL;
    PyObject *tmp_import_from_24__module = NULL;
    PyObject *tmp_import_from_25__module = NULL;
    PyObject *tmp_import_from_26__module = NULL;
    PyObject *tmp_import_from_27__module = NULL;
    PyObject *tmp_import_from_28__module = NULL;
    PyObject *tmp_import_from_29__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_30__module = NULL;
    PyObject *tmp_import_from_31__module = NULL;
    PyObject *tmp_import_from_32__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
    struct Nuitka_FrameObject *frame_4b038c4e374049c80563b49ffe2e97ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    frame_4b038c4e374049c80563b49ffe2e97ea = MAKE_MODULE_FRAME(codeobj_4b038c4e374049c80563b49ffe2e97ea, module_flet_core);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4b038c4e374049c80563b49ffe2e97ea);
    assert(Py_REFCNT(frame_4b038c4e374049c80563b49ffe2e97ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[2]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[4]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[6]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[9], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[10], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[14];
        tmp_level_value_1 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core,
                mod_consts[16],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[16]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core,
                mod_consts[17],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[17]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core,
                mod_consts[18],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[18]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core,
                mod_consts[19],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[19]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core,
                mod_consts[20],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[20]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core,
                mod_consts[21],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[21]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core,
                mod_consts[22],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[22]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core,
                mod_consts[23],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[23]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core,
                mod_consts[24],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[24]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core,
                mod_consts[25],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[25]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core,
                mod_consts[26],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[26]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core,
                mod_consts[27],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[27]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core,
                mod_consts[28],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[28]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[29];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[30];
        tmp_level_value_2 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 16;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core,
                mod_consts[31],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[32];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[33];
        tmp_level_value_3 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 17;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core,
                mod_consts[34],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[35];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[36];
        tmp_level_value_4 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 18;
        tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core,
                mod_consts[37],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[37]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core,
                mod_consts[38],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[38]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[39];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[40];
        tmp_level_value_5 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 19;
        tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_flet_core,
                mod_consts[41],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[41]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_flet_core,
                mod_consts[42],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[42]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_26);
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[43];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[44];
        tmp_level_value_6 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 20;
        tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_flet_core,
                mod_consts[45],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[46];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[47];
        tmp_level_value_7 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 21;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_flet_core,
                mod_consts[48],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[49];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[50];
        tmp_level_value_8 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 22;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_flet_core,
                mod_consts[51],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[52];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[53];
        tmp_level_value_9 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 23;
        tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_23 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_flet_core,
                mod_consts[54],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[54]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_24 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_flet_core,
                mod_consts[55],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[55]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_32);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[56];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[57];
        tmp_level_value_10 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 24;
        tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_25 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_flet_core,
                mod_consts[58],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[58]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_26 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_flet_core,
                mod_consts[59],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[59]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_35);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[60];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[61];
        tmp_level_value_11 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 25;
        tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_flet_core,
                mod_consts[62],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[63];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[64];
        tmp_level_value_12 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 26;
        tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_flet_core,
                mod_consts[65],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[66];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[67];
        tmp_level_value_13 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 27;
        tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_29 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_flet_core,
                mod_consts[68],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[68]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_30 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_flet_core,
                mod_consts[69],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[69]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_31 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_flet_core,
                mod_consts[70],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[70]);
        }

        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_32 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_flet_core,
                mod_consts[71],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[71]);
        }

        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_33 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_flet_core,
                mod_consts[72],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[72]);
        }

        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_34 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_flet_core,
                mod_consts[73],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[73]);
        }

        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_35 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_flet_core,
                mod_consts[74],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[74]);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_45);
    }
    goto try_end_6;
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[75];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[76];
        tmp_level_value_14 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 36;
        tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_flet_core,
                mod_consts[77],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[78];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[79];
        tmp_level_value_15 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 37;
        tmp_assign_source_47 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_37 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_flet_core,
                mod_consts[80],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[80]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_38 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_38,
                (PyObject *)moduledict_flet_core,
                mod_consts[81],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[81]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_49);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[82];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[83];
        tmp_level_value_16 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 38;
        tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_39,
                (PyObject *)moduledict_flet_core,
                mod_consts[84],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[85];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[86];
        tmp_level_value_17 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 39;
        tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_40,
                (PyObject *)moduledict_flet_core,
                mod_consts[87],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[88];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[89];
        tmp_level_value_18 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 40;
        tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_41,
                (PyObject *)moduledict_flet_core,
                mod_consts[90],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[91];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[92];
        tmp_level_value_19 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 41;
        tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_42,
                (PyObject *)moduledict_flet_core,
                mod_consts[93],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[94];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[95];
        tmp_level_value_20 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 42;
        tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_43,
                (PyObject *)moduledict_flet_core,
                mod_consts[96],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[97];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[98];
        tmp_level_value_21 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 43;
        tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_44,
                (PyObject *)moduledict_flet_core,
                mod_consts[99],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[100];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[101];
        tmp_level_value_22 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 44;
        tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_45,
                (PyObject *)moduledict_flet_core,
                mod_consts[102],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[103];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[104];
        tmp_level_value_23 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 45;
        tmp_assign_source_57 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_8__module == NULL);
        tmp_import_from_8__module = tmp_assign_source_57;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_46;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_46 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_46,
                (PyObject *)moduledict_flet_core,
                mod_consts[105],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts[105]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_47;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_47 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_47,
                (PyObject *)moduledict_flet_core,
                mod_consts[106],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts[106]);
        }

        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_48;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_48 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_48,
                (PyObject *)moduledict_flet_core,
                mod_consts[107],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts[107]);
        }

        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_49;
        CHECK_OBJECT(tmp_import_from_8__module);
        tmp_import_name_from_49 = tmp_import_from_8__module;
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_49,
                (PyObject *)moduledict_flet_core,
                mod_consts[108],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts[108]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_61);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_import_from_8__module);
    Py_DECREF(tmp_import_from_8__module);
    tmp_import_from_8__module = NULL;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[109];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[110];
        tmp_level_value_24 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 51;
        tmp_assign_source_62 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_9__module == NULL);
        tmp_import_from_9__module = tmp_assign_source_62;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_50;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_50 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_50,
                (PyObject *)moduledict_flet_core,
                mod_consts[111],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts[111]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_51;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_51 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_51,
                (PyObject *)moduledict_flet_core,
                mod_consts[112],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts[112]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_52;
        CHECK_OBJECT(tmp_import_from_9__module);
        tmp_import_name_from_52 = tmp_import_from_9__module;
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_52,
                (PyObject *)moduledict_flet_core,
                mod_consts[113],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts[113]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_65);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_import_from_9__module);
    Py_DECREF(tmp_import_from_9__module);
    tmp_import_from_9__module = NULL;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[114];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[115];
        tmp_level_value_25 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 52;
        tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_53,
                (PyObject *)moduledict_flet_core,
                mod_consts[116],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[117];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[118];
        tmp_level_value_26 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 53;
        tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_54,
                (PyObject *)moduledict_flet_core,
                mod_consts[119],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[120];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[121];
        tmp_level_value_27 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 54;
        tmp_assign_source_68 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_10__module == NULL);
        tmp_import_from_10__module = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_55;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_55 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_55,
                (PyObject *)moduledict_flet_core,
                mod_consts[122],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts[122]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_56;
        CHECK_OBJECT(tmp_import_from_10__module);
        tmp_import_name_from_56 = tmp_import_from_10__module;
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_56,
                (PyObject *)moduledict_flet_core,
                mod_consts[123],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts[123]);
        }

        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_70);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_import_from_10__module);
    Py_DECREF(tmp_import_from_10__module);
    tmp_import_from_10__module = NULL;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[124];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[125];
        tmp_level_value_28 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 55;
        tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_57,
                (PyObject *)moduledict_flet_core,
                mod_consts[126],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts[126]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[127];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[128];
        tmp_level_value_29 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 56;
        tmp_import_name_from_58 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_58,
                (PyObject *)moduledict_flet_core,
                mod_consts[129],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts[129]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[130];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[131];
        tmp_level_value_30 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 57;
        tmp_import_name_from_59 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_59,
                (PyObject *)moduledict_flet_core,
                mod_consts[132],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts[132]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[133];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[134];
        tmp_level_value_31 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 58;
        tmp_import_name_from_60 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_import_name_from_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_60,
                (PyObject *)moduledict_flet_core,
                mod_consts[135],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[136];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[137];
        tmp_level_value_32 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 59;
        tmp_assign_source_75 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_11__module == NULL);
        tmp_import_from_11__module = tmp_assign_source_75;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_61;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_61 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_61,
                (PyObject *)moduledict_flet_core,
                mod_consts[138],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts[138]);
        }

        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_62;
        CHECK_OBJECT(tmp_import_from_11__module);
        tmp_import_name_from_62 = tmp_import_from_11__module;
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_62,
                (PyObject *)moduledict_flet_core,
                mod_consts[139],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts[139]);
        }

        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_77);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_import_from_11__module);
    Py_DECREF(tmp_import_from_11__module);
    tmp_import_from_11__module = NULL;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[140];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[141];
        tmp_level_value_33 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 60;
        tmp_assign_source_78 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_12__module == NULL);
        tmp_import_from_12__module = tmp_assign_source_78;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_63;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_63 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_63,
                (PyObject *)moduledict_flet_core,
                mod_consts[142],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts[142]);
        }

        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_64;
        CHECK_OBJECT(tmp_import_from_12__module);
        tmp_import_name_from_64 = tmp_import_from_12__module;
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_64,
                (PyObject *)moduledict_flet_core,
                mod_consts[143],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts[143]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_80);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_import_from_12__module);
    Py_DECREF(tmp_import_from_12__module);
    tmp_import_from_12__module = NULL;
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[144];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[145];
        tmp_level_value_34 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 61;
        tmp_import_name_from_65 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_65,
                (PyObject *)moduledict_flet_core,
                mod_consts[146],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts[146]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[147];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[148];
        tmp_level_value_35 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 62;
        tmp_assign_source_82 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_13__module == NULL);
        tmp_import_from_13__module = tmp_assign_source_82;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_66;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_66 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_66,
                (PyObject *)moduledict_flet_core,
                mod_consts[149],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts[149]);
        }

        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_67;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_67 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_67,
                (PyObject *)moduledict_flet_core,
                mod_consts[150],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts[150]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_68;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_68 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_68,
                (PyObject *)moduledict_flet_core,
                mod_consts[151],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts[151]);
        }

        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_69;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_69 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_69,
                (PyObject *)moduledict_flet_core,
                mod_consts[152],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts[152]);
        }

        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_70;
        CHECK_OBJECT(tmp_import_from_13__module);
        tmp_import_name_from_70 = tmp_import_from_13__module;
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_70,
                (PyObject *)moduledict_flet_core,
                mod_consts[153],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts[153]);
        }

        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto try_except_handler_13;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_87);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_import_from_13__module);
    Py_DECREF(tmp_import_from_13__module);
    tmp_import_from_13__module = NULL;
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_71;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[154];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[155];
        tmp_level_value_36 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 69;
        tmp_import_name_from_71 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_71,
                (PyObject *)moduledict_flet_core,
                mod_consts[156],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts[156]);
        }

        Py_DECREF(tmp_import_name_from_71);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[157];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[158];
        tmp_level_value_37 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 70;
        tmp_assign_source_89 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_14__module == NULL);
        tmp_import_from_14__module = tmp_assign_source_89;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_72;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_72 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_72,
                (PyObject *)moduledict_flet_core,
                mod_consts[159],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts[159]);
        }

        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_73;
        CHECK_OBJECT(tmp_import_from_14__module);
        tmp_import_name_from_73 = tmp_import_from_14__module;
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_73,
                (PyObject *)moduledict_flet_core,
                mod_consts[160],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts[160]);
        }

        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto try_except_handler_14;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_91);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_import_from_14__module);
    Py_DECREF(tmp_import_from_14__module);
    tmp_import_from_14__module = NULL;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_74;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[161];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[162];
        tmp_level_value_38 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 71;
        tmp_import_name_from_74 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_import_name_from_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_74,
                (PyObject *)moduledict_flet_core,
                mod_consts[163],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts[163]);
        }

        Py_DECREF(tmp_import_name_from_74);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_75;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[164];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[165];
        tmp_level_value_39 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 72;
        tmp_import_name_from_75 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_75,
                (PyObject *)moduledict_flet_core,
                mod_consts[166],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts[166]);
        }

        Py_DECREF(tmp_import_name_from_75);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_import_name_from_76;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[167];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[168];
        tmp_level_value_40 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 73;
        tmp_import_name_from_76 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_76,
                (PyObject *)moduledict_flet_core,
                mod_consts[169],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_76);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[170];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[171];
        tmp_level_value_41 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 74;
        tmp_assign_source_95 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_15__module == NULL);
        tmp_import_from_15__module = tmp_assign_source_95;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_import_name_from_77;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_77 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_77,
                (PyObject *)moduledict_flet_core,
                mod_consts[172],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts[172]);
        }

        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_import_name_from_78;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_78 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_78,
                (PyObject *)moduledict_flet_core,
                mod_consts[173],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts[173]);
        }

        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_import_name_from_79;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_79 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_79,
                (PyObject *)moduledict_flet_core,
                mod_consts[174],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts[174]);
        }

        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_import_name_from_80;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_80 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_80,
                (PyObject *)moduledict_flet_core,
                mod_consts[175],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts[175]);
        }

        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_import_name_from_81;
        CHECK_OBJECT(tmp_import_from_15__module);
        tmp_import_name_from_81 = tmp_import_from_15__module;
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_81,
                (PyObject *)moduledict_flet_core,
                mod_consts[176],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts[176]);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto try_except_handler_15;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_100);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_import_from_15__module);
    Py_DECREF(tmp_import_from_15__module);
    tmp_import_from_15__module = NULL;
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_import_name_from_82;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[177];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[178];
        tmp_level_value_42 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 81;
        tmp_import_name_from_82 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_82,
                (PyObject *)moduledict_flet_core,
                mod_consts[179],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts[179]);
        }

        Py_DECREF(tmp_import_name_from_82);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_import_name_from_83;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[180];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[181];
        tmp_level_value_43 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 82;
        tmp_import_name_from_83 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_83,
                (PyObject *)moduledict_flet_core,
                mod_consts[182],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts[182]);
        }

        Py_DECREF(tmp_import_name_from_83);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_import_name_from_84;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[183];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[184];
        tmp_level_value_44 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 83;
        tmp_import_name_from_84 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_84,
                (PyObject *)moduledict_flet_core,
                mod_consts[185],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts[185]);
        }

        Py_DECREF(tmp_import_name_from_84);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_import_name_from_85;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_45;
        PyObject *tmp_locals_arg_value_45;
        PyObject *tmp_fromlist_value_45;
        PyObject *tmp_level_value_45;
        tmp_name_value_45 = mod_consts[186];
        tmp_globals_arg_value_45 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_45 = Py_None;
        tmp_fromlist_value_45 = mod_consts[187];
        tmp_level_value_45 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 84;
        tmp_import_name_from_85 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
        if (tmp_import_name_from_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_85,
                (PyObject *)moduledict_flet_core,
                mod_consts[188],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts[188]);
        }

        Py_DECREF(tmp_import_name_from_85);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_import_name_from_86;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_46;
        PyObject *tmp_locals_arg_value_46;
        PyObject *tmp_fromlist_value_46;
        PyObject *tmp_level_value_46;
        tmp_name_value_46 = mod_consts[189];
        tmp_globals_arg_value_46 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_46 = Py_None;
        tmp_fromlist_value_46 = mod_consts[190];
        tmp_level_value_46 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 85;
        tmp_import_name_from_86 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
        if (tmp_import_name_from_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_86,
                (PyObject *)moduledict_flet_core,
                mod_consts[191],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts[191]);
        }

        Py_DECREF(tmp_import_name_from_86);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_47;
        PyObject *tmp_locals_arg_value_47;
        PyObject *tmp_fromlist_value_47;
        PyObject *tmp_level_value_47;
        tmp_name_value_47 = mod_consts[192];
        tmp_globals_arg_value_47 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_47 = Py_None;
        tmp_fromlist_value_47 = mod_consts[193];
        tmp_level_value_47 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 86;
        tmp_assign_source_106 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_16__module == NULL);
        tmp_import_from_16__module = tmp_assign_source_106;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_import_name_from_87;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_87 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_87,
                (PyObject *)moduledict_flet_core,
                mod_consts[194],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts[194]);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_import_name_from_88;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_88 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_88,
                (PyObject *)moduledict_flet_core,
                mod_consts[195],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts[195]);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_import_name_from_89;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_89 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_89)) {
            tmp_assign_source_109 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_89,
                (PyObject *)moduledict_flet_core,
                mod_consts[196],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_109 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts[196]);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_import_name_from_90;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_90 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_90)) {
            tmp_assign_source_110 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_90,
                (PyObject *)moduledict_flet_core,
                mod_consts[197],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_110 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts[197]);
        }

        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_import_name_from_91;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_91 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_91)) {
            tmp_assign_source_111 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_91,
                (PyObject *)moduledict_flet_core,
                mod_consts[198],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_111 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts[198]);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_import_name_from_92;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_92 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_92)) {
            tmp_assign_source_112 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_92,
                (PyObject *)moduledict_flet_core,
                mod_consts[199],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_112 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_92, mod_consts[199]);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_import_name_from_93;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_93 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_93)) {
            tmp_assign_source_113 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_93,
                (PyObject *)moduledict_flet_core,
                mod_consts[200],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_113 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_93, mod_consts[200]);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_import_name_from_94;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_94 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_94)) {
            tmp_assign_source_114 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_94,
                (PyObject *)moduledict_flet_core,
                mod_consts[201],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_114 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_94, mod_consts[201]);
        }

        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_import_name_from_95;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_95 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_95)) {
            tmp_assign_source_115 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_95,
                (PyObject *)moduledict_flet_core,
                mod_consts[202],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_115 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_95, mod_consts[202]);
        }

        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_import_name_from_96;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_96 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_96)) {
            tmp_assign_source_116 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_96,
                (PyObject *)moduledict_flet_core,
                mod_consts[203],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_116 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_96, mod_consts[203]);
        }

        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_import_name_from_97;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_97 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_97)) {
            tmp_assign_source_117 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_97,
                (PyObject *)moduledict_flet_core,
                mod_consts[204],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_117 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_97, mod_consts[204]);
        }

        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_import_name_from_98;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_98 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_98)) {
            tmp_assign_source_118 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_98,
                (PyObject *)moduledict_flet_core,
                mod_consts[205],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_118 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_98, mod_consts[205]);
        }

        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_import_name_from_99;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_99 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_99)) {
            tmp_assign_source_119 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_99,
                (PyObject *)moduledict_flet_core,
                mod_consts[206],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_119 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_99, mod_consts[206]);
        }

        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_import_name_from_100;
        CHECK_OBJECT(tmp_import_from_16__module);
        tmp_import_name_from_100 = tmp_import_from_16__module;
        if (PyModule_Check(tmp_import_name_from_100)) {
            tmp_assign_source_120 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_100,
                (PyObject *)moduledict_flet_core,
                mod_consts[207],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_120 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_100, mod_consts[207]);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_16;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_120);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_import_from_16__module);
    Py_DECREF(tmp_import_from_16__module);
    tmp_import_from_16__module = NULL;
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_name_value_48;
        PyObject *tmp_globals_arg_value_48;
        PyObject *tmp_locals_arg_value_48;
        PyObject *tmp_fromlist_value_48;
        PyObject *tmp_level_value_48;
        tmp_name_value_48 = mod_consts[208];
        tmp_globals_arg_value_48 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_48 = Py_None;
        tmp_fromlist_value_48 = mod_consts[209];
        tmp_level_value_48 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 102;
        tmp_assign_source_121 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_17__module == NULL);
        tmp_import_from_17__module = tmp_assign_source_121;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_import_name_from_101;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_101 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_101)) {
            tmp_assign_source_122 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_101,
                (PyObject *)moduledict_flet_core,
                mod_consts[210],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_122 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_101, mod_consts[210]);
        }

        if (tmp_assign_source_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_import_name_from_102;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_102 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_102)) {
            tmp_assign_source_123 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_102,
                (PyObject *)moduledict_flet_core,
                mod_consts[211],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_123 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_102, mod_consts[211]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_import_name_from_103;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_103 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_103)) {
            tmp_assign_source_124 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_103,
                (PyObject *)moduledict_flet_core,
                mod_consts[212],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_124 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_103, mod_consts[212]);
        }

        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_import_name_from_104;
        CHECK_OBJECT(tmp_import_from_17__module);
        tmp_import_name_from_104 = tmp_import_from_17__module;
        if (PyModule_Check(tmp_import_name_from_104)) {
            tmp_assign_source_125 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_104,
                (PyObject *)moduledict_flet_core,
                mod_consts[213],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_125 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_104, mod_consts[213]);
        }

        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_17;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_125);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_import_from_17__module);
    Py_DECREF(tmp_import_from_17__module);
    tmp_import_from_17__module = NULL;
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_import_name_from_105;
        PyObject *tmp_name_value_49;
        PyObject *tmp_globals_arg_value_49;
        PyObject *tmp_locals_arg_value_49;
        PyObject *tmp_fromlist_value_49;
        PyObject *tmp_level_value_49;
        tmp_name_value_49 = mod_consts[214];
        tmp_globals_arg_value_49 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_49 = Py_None;
        tmp_fromlist_value_49 = mod_consts[215];
        tmp_level_value_49 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 108;
        tmp_import_name_from_105 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
        if (tmp_import_name_from_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_105)) {
            tmp_assign_source_126 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_105,
                (PyObject *)moduledict_flet_core,
                mod_consts[216],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_126 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_105, mod_consts[216]);
        }

        Py_DECREF(tmp_import_name_from_105);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_import_name_from_106;
        PyObject *tmp_name_value_50;
        PyObject *tmp_globals_arg_value_50;
        PyObject *tmp_locals_arg_value_50;
        PyObject *tmp_fromlist_value_50;
        PyObject *tmp_level_value_50;
        tmp_name_value_50 = mod_consts[217];
        tmp_globals_arg_value_50 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_50 = Py_None;
        tmp_fromlist_value_50 = mod_consts[218];
        tmp_level_value_50 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 109;
        tmp_import_name_from_106 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
        if (tmp_import_name_from_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_106)) {
            tmp_assign_source_127 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_106,
                (PyObject *)moduledict_flet_core,
                mod_consts[219],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_127 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_106, mod_consts[219]);
        }

        Py_DECREF(tmp_import_name_from_106);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_107;
        PyObject *tmp_name_value_51;
        PyObject *tmp_globals_arg_value_51;
        PyObject *tmp_locals_arg_value_51;
        PyObject *tmp_fromlist_value_51;
        PyObject *tmp_level_value_51;
        tmp_name_value_51 = mod_consts[220];
        tmp_globals_arg_value_51 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_51 = Py_None;
        tmp_fromlist_value_51 = mod_consts[221];
        tmp_level_value_51 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 110;
        tmp_import_name_from_107 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
        if (tmp_import_name_from_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_107)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_107,
                (PyObject *)moduledict_flet_core,
                mod_consts[222],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_107, mod_consts[222]);
        }

        Py_DECREF(tmp_import_name_from_107);
        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_import_name_from_108;
        PyObject *tmp_name_value_52;
        PyObject *tmp_globals_arg_value_52;
        PyObject *tmp_locals_arg_value_52;
        PyObject *tmp_fromlist_value_52;
        PyObject *tmp_level_value_52;
        tmp_name_value_52 = mod_consts[223];
        tmp_globals_arg_value_52 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_52 = Py_None;
        tmp_fromlist_value_52 = mod_consts[224];
        tmp_level_value_52 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 111;
        tmp_import_name_from_108 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
        if (tmp_import_name_from_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_108)) {
            tmp_assign_source_129 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_108,
                (PyObject *)moduledict_flet_core,
                mod_consts[225],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_129 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_108, mod_consts[225]);
        }

        Py_DECREF(tmp_import_name_from_108);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_import_name_from_109;
        PyObject *tmp_name_value_53;
        PyObject *tmp_globals_arg_value_53;
        PyObject *tmp_locals_arg_value_53;
        PyObject *tmp_fromlist_value_53;
        PyObject *tmp_level_value_53;
        tmp_name_value_53 = mod_consts[226];
        tmp_globals_arg_value_53 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_53 = Py_None;
        tmp_fromlist_value_53 = mod_consts[227];
        tmp_level_value_53 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 112;
        tmp_import_name_from_109 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
        if (tmp_import_name_from_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_109)) {
            tmp_assign_source_130 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_109,
                (PyObject *)moduledict_flet_core,
                mod_consts[228],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_130 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_109, mod_consts[228]);
        }

        Py_DECREF(tmp_import_name_from_109);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_import_name_from_110;
        PyObject *tmp_name_value_54;
        PyObject *tmp_globals_arg_value_54;
        PyObject *tmp_locals_arg_value_54;
        PyObject *tmp_fromlist_value_54;
        PyObject *tmp_level_value_54;
        tmp_name_value_54 = mod_consts[229];
        tmp_globals_arg_value_54 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_54 = Py_None;
        tmp_fromlist_value_54 = mod_consts[230];
        tmp_level_value_54 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 113;
        tmp_import_name_from_110 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
        if (tmp_import_name_from_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_110)) {
            tmp_assign_source_131 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_110,
                (PyObject *)moduledict_flet_core,
                mod_consts[231],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_131 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_110, mod_consts[231]);
        }

        Py_DECREF(tmp_import_name_from_110);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_import_name_from_111;
        PyObject *tmp_name_value_55;
        PyObject *tmp_globals_arg_value_55;
        PyObject *tmp_locals_arg_value_55;
        PyObject *tmp_fromlist_value_55;
        PyObject *tmp_level_value_55;
        tmp_name_value_55 = mod_consts[232];
        tmp_globals_arg_value_55 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_55 = Py_None;
        tmp_fromlist_value_55 = mod_consts[233];
        tmp_level_value_55 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 114;
        tmp_import_name_from_111 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
        if (tmp_import_name_from_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_111)) {
            tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_111,
                (PyObject *)moduledict_flet_core,
                mod_consts[234],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_132 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_111, mod_consts[234]);
        }

        Py_DECREF(tmp_import_name_from_111);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_import_name_from_112;
        PyObject *tmp_name_value_56;
        PyObject *tmp_globals_arg_value_56;
        PyObject *tmp_locals_arg_value_56;
        PyObject *tmp_fromlist_value_56;
        PyObject *tmp_level_value_56;
        tmp_name_value_56 = mod_consts[235];
        tmp_globals_arg_value_56 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_56 = Py_None;
        tmp_fromlist_value_56 = mod_consts[236];
        tmp_level_value_56 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 115;
        tmp_import_name_from_112 = IMPORT_MODULE5(tstate, tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
        if (tmp_import_name_from_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_112)) {
            tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_112,
                (PyObject *)moduledict_flet_core,
                mod_consts[237],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_133 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_112, mod_consts[237]);
        }

        Py_DECREF(tmp_import_name_from_112);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_name_value_57;
        PyObject *tmp_globals_arg_value_57;
        PyObject *tmp_locals_arg_value_57;
        PyObject *tmp_fromlist_value_57;
        PyObject *tmp_level_value_57;
        tmp_name_value_57 = mod_consts[238];
        tmp_globals_arg_value_57 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_57 = Py_None;
        tmp_fromlist_value_57 = mod_consts[239];
        tmp_level_value_57 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 116;
        tmp_assign_source_134 = IMPORT_MODULE5(tstate, tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_18__module == NULL);
        tmp_import_from_18__module = tmp_assign_source_134;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_import_name_from_113;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_113 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_113)) {
            tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_113,
                (PyObject *)moduledict_flet_core,
                mod_consts[240],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_135 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_113, mod_consts[240]);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_import_name_from_114;
        CHECK_OBJECT(tmp_import_from_18__module);
        tmp_import_name_from_114 = tmp_import_from_18__module;
        if (PyModule_Check(tmp_import_name_from_114)) {
            tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_114,
                (PyObject *)moduledict_flet_core,
                mod_consts[241],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_136 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_114, mod_consts[241]);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto try_except_handler_18;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_136);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_import_from_18__module);
    Py_DECREF(tmp_import_from_18__module);
    tmp_import_from_18__module = NULL;
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_name_value_58;
        PyObject *tmp_globals_arg_value_58;
        PyObject *tmp_locals_arg_value_58;
        PyObject *tmp_fromlist_value_58;
        PyObject *tmp_level_value_58;
        tmp_name_value_58 = mod_consts[242];
        tmp_globals_arg_value_58 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_58 = Py_None;
        tmp_fromlist_value_58 = mod_consts[243];
        tmp_level_value_58 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 117;
        tmp_assign_source_137 = IMPORT_MODULE5(tstate, tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_19__module == NULL);
        tmp_import_from_19__module = tmp_assign_source_137;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_import_name_from_115;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_115 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_115)) {
            tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_115,
                (PyObject *)moduledict_flet_core,
                mod_consts[244],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_138 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_115, mod_consts[244]);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_import_name_from_116;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_116 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_116)) {
            tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_116,
                (PyObject *)moduledict_flet_core,
                mod_consts[245],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_139 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_116, mod_consts[245]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_import_name_from_117;
        CHECK_OBJECT(tmp_import_from_19__module);
        tmp_import_name_from_117 = tmp_import_from_19__module;
        if (PyModule_Check(tmp_import_name_from_117)) {
            tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_117,
                (PyObject *)moduledict_flet_core,
                mod_consts[246],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_140 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_117, mod_consts[246]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto try_except_handler_19;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_140);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_import_from_19__module);
    Py_DECREF(tmp_import_from_19__module);
    tmp_import_from_19__module = NULL;
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_name_value_59;
        PyObject *tmp_globals_arg_value_59;
        PyObject *tmp_locals_arg_value_59;
        PyObject *tmp_fromlist_value_59;
        PyObject *tmp_level_value_59;
        tmp_name_value_59 = mod_consts[247];
        tmp_globals_arg_value_59 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_59 = Py_None;
        tmp_fromlist_value_59 = mod_consts[248];
        tmp_level_value_59 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 122;
        tmp_assign_source_141 = IMPORT_MODULE5(tstate, tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_20__module == NULL);
        tmp_import_from_20__module = tmp_assign_source_141;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_import_name_from_118;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_118 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_118)) {
            tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_118,
                (PyObject *)moduledict_flet_core,
                mod_consts[249],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_142 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_118, mod_consts[249]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_import_name_from_119;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_119 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_119)) {
            tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_119,
                (PyObject *)moduledict_flet_core,
                mod_consts[250],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_143 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_119, mod_consts[250]);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        PyObject *tmp_import_name_from_120;
        CHECK_OBJECT(tmp_import_from_20__module);
        tmp_import_name_from_120 = tmp_import_from_20__module;
        if (PyModule_Check(tmp_import_name_from_120)) {
            tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_120,
                (PyObject *)moduledict_flet_core,
                mod_consts[251],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_144 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_120, mod_consts[251]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto try_except_handler_20;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_144);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_import_from_20__module);
    Py_DECREF(tmp_import_from_20__module);
    tmp_import_from_20__module = NULL;
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_import_name_from_121;
        PyObject *tmp_name_value_60;
        PyObject *tmp_globals_arg_value_60;
        PyObject *tmp_locals_arg_value_60;
        PyObject *tmp_fromlist_value_60;
        PyObject *tmp_level_value_60;
        tmp_name_value_60 = mod_consts[252];
        tmp_globals_arg_value_60 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_60 = Py_None;
        tmp_fromlist_value_60 = mod_consts[253];
        tmp_level_value_60 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 127;
        tmp_import_name_from_121 = IMPORT_MODULE5(tstate, tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
        if (tmp_import_name_from_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_121)) {
            tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_121,
                (PyObject *)moduledict_flet_core,
                mod_consts[254],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_145 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_121, mod_consts[254]);
        }

        Py_DECREF(tmp_import_name_from_121);
        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[254], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_import_name_from_122;
        PyObject *tmp_name_value_61;
        PyObject *tmp_globals_arg_value_61;
        PyObject *tmp_locals_arg_value_61;
        PyObject *tmp_fromlist_value_61;
        PyObject *tmp_level_value_61;
        tmp_name_value_61 = mod_consts[255];
        tmp_globals_arg_value_61 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_61 = Py_None;
        tmp_fromlist_value_61 = mod_consts[256];
        tmp_level_value_61 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 128;
        tmp_import_name_from_122 = IMPORT_MODULE5(tstate, tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
        if (tmp_import_name_from_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_122)) {
            tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_122,
                (PyObject *)moduledict_flet_core,
                mod_consts[257],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_146 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_122, mod_consts[257]);
        }

        Py_DECREF(tmp_import_name_from_122);
        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_name_value_62;
        PyObject *tmp_globals_arg_value_62;
        PyObject *tmp_locals_arg_value_62;
        PyObject *tmp_fromlist_value_62;
        PyObject *tmp_level_value_62;
        tmp_name_value_62 = mod_consts[258];
        tmp_globals_arg_value_62 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_62 = Py_None;
        tmp_fromlist_value_62 = mod_consts[259];
        tmp_level_value_62 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 129;
        tmp_assign_source_147 = IMPORT_MODULE5(tstate, tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_21__module == NULL);
        tmp_import_from_21__module = tmp_assign_source_147;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_import_name_from_123;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_123 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_123)) {
            tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_123,
                (PyObject *)moduledict_flet_core,
                mod_consts[260],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_148 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_123, mod_consts[260]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_import_name_from_124;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_124 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_124)) {
            tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_124,
                (PyObject *)moduledict_flet_core,
                mod_consts[261],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_149 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_124, mod_consts[261]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_import_name_from_125;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_125 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_125)) {
            tmp_assign_source_150 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_125,
                (PyObject *)moduledict_flet_core,
                mod_consts[262],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_150 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_125, mod_consts[262]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_import_name_from_126;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_126 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_126)) {
            tmp_assign_source_151 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_126,
                (PyObject *)moduledict_flet_core,
                mod_consts[263],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_151 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_126, mod_consts[263]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_import_name_from_127;
        CHECK_OBJECT(tmp_import_from_21__module);
        tmp_import_name_from_127 = tmp_import_from_21__module;
        if (PyModule_Check(tmp_import_name_from_127)) {
            tmp_assign_source_152 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_127,
                (PyObject *)moduledict_flet_core,
                mod_consts[264],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_152 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_127, mod_consts[264]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto try_except_handler_21;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_152);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_import_from_21__module);
    Py_DECREF(tmp_import_from_21__module);
    tmp_import_from_21__module = NULL;
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_name_value_63;
        PyObject *tmp_globals_arg_value_63;
        PyObject *tmp_locals_arg_value_63;
        PyObject *tmp_fromlist_value_63;
        PyObject *tmp_level_value_63;
        tmp_name_value_63 = mod_consts[265];
        tmp_globals_arg_value_63 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_63 = Py_None;
        tmp_fromlist_value_63 = mod_consts[266];
        tmp_level_value_63 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 136;
        tmp_assign_source_153 = IMPORT_MODULE5(tstate, tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_22__module == NULL);
        tmp_import_from_22__module = tmp_assign_source_153;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_154;
        PyObject *tmp_import_name_from_128;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_128 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_128)) {
            tmp_assign_source_154 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_128,
                (PyObject *)moduledict_flet_core,
                mod_consts[267],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_154 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_128, mod_consts[267]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_129;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_129 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_129)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_129,
                (PyObject *)moduledict_flet_core,
                mod_consts[268],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_129, mod_consts[268]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_130;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_130 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_130)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_130,
                (PyObject *)moduledict_flet_core,
                mod_consts[269],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_130, mod_consts[269]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_131;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_131 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_131)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_131,
                (PyObject *)moduledict_flet_core,
                mod_consts[270],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_131, mod_consts[270]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_import_name_from_132;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_132 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_132)) {
            tmp_assign_source_158 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_132,
                (PyObject *)moduledict_flet_core,
                mod_consts[271],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_158 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_132, mod_consts[271]);
        }

        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_import_name_from_133;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_133 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_133)) {
            tmp_assign_source_159 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_133,
                (PyObject *)moduledict_flet_core,
                mod_consts[272],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_159 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_133, mod_consts[272]);
        }

        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_import_name_from_134;
        CHECK_OBJECT(tmp_import_from_22__module);
        tmp_import_name_from_134 = tmp_import_from_22__module;
        if (PyModule_Check(tmp_import_name_from_134)) {
            tmp_assign_source_160 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_134,
                (PyObject *)moduledict_flet_core,
                mod_consts[273],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_160 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_134, mod_consts[273]);
        }

        if (tmp_assign_source_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto try_except_handler_22;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_160);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_22__module);
    Py_DECREF(tmp_import_from_22__module);
    tmp_import_from_22__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_import_from_22__module);
    Py_DECREF(tmp_import_from_22__module);
    tmp_import_from_22__module = NULL;
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_name_value_64;
        PyObject *tmp_globals_arg_value_64;
        PyObject *tmp_locals_arg_value_64;
        PyObject *tmp_fromlist_value_64;
        PyObject *tmp_level_value_64;
        tmp_name_value_64 = mod_consts[274];
        tmp_globals_arg_value_64 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_64 = Py_None;
        tmp_fromlist_value_64 = mod_consts[275];
        tmp_level_value_64 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 145;
        tmp_assign_source_161 = IMPORT_MODULE5(tstate, tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
        if (tmp_assign_source_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_23__module == NULL);
        tmp_import_from_23__module = tmp_assign_source_161;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_import_name_from_135;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_135 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_135)) {
            tmp_assign_source_162 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_135,
                (PyObject *)moduledict_flet_core,
                mod_consts[276],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_162 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_135, mod_consts[276]);
        }

        if (tmp_assign_source_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_import_name_from_136;
        CHECK_OBJECT(tmp_import_from_23__module);
        tmp_import_name_from_136 = tmp_import_from_23__module;
        if (PyModule_Check(tmp_import_name_from_136)) {
            tmp_assign_source_163 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_136,
                (PyObject *)moduledict_flet_core,
                mod_consts[277],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_163 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_136, mod_consts[277]);
        }

        if (tmp_assign_source_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_23;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_163);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_23__module);
    Py_DECREF(tmp_import_from_23__module);
    tmp_import_from_23__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_import_from_23__module);
    Py_DECREF(tmp_import_from_23__module);
    tmp_import_from_23__module = NULL;
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_import_name_from_137;
        PyObject *tmp_name_value_65;
        PyObject *tmp_globals_arg_value_65;
        PyObject *tmp_locals_arg_value_65;
        PyObject *tmp_fromlist_value_65;
        PyObject *tmp_level_value_65;
        tmp_name_value_65 = mod_consts[278];
        tmp_globals_arg_value_65 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_65 = Py_None;
        tmp_fromlist_value_65 = mod_consts[279];
        tmp_level_value_65 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 146;
        tmp_import_name_from_137 = IMPORT_MODULE5(tstate, tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
        if (tmp_import_name_from_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_137)) {
            tmp_assign_source_164 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_137,
                (PyObject *)moduledict_flet_core,
                mod_consts[280],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_164 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_137, mod_consts[280]);
        }

        Py_DECREF(tmp_import_name_from_137);
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[280], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_import_name_from_138;
        PyObject *tmp_name_value_66;
        PyObject *tmp_globals_arg_value_66;
        PyObject *tmp_locals_arg_value_66;
        PyObject *tmp_fromlist_value_66;
        PyObject *tmp_level_value_66;
        tmp_name_value_66 = mod_consts[281];
        tmp_globals_arg_value_66 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_66 = Py_None;
        tmp_fromlist_value_66 = mod_consts[282];
        tmp_level_value_66 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 147;
        tmp_import_name_from_138 = IMPORT_MODULE5(tstate, tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
        if (tmp_import_name_from_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_138)) {
            tmp_assign_source_165 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_138,
                (PyObject *)moduledict_flet_core,
                mod_consts[283],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_165 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_138, mod_consts[283]);
        }

        Py_DECREF(tmp_import_name_from_138);
        if (tmp_assign_source_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_import_name_from_139;
        PyObject *tmp_name_value_67;
        PyObject *tmp_globals_arg_value_67;
        PyObject *tmp_locals_arg_value_67;
        PyObject *tmp_fromlist_value_67;
        PyObject *tmp_level_value_67;
        tmp_name_value_67 = mod_consts[284];
        tmp_globals_arg_value_67 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_67 = Py_None;
        tmp_fromlist_value_67 = mod_consts[285];
        tmp_level_value_67 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 148;
        tmp_import_name_from_139 = IMPORT_MODULE5(tstate, tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
        if (tmp_import_name_from_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_139)) {
            tmp_assign_source_166 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_139,
                (PyObject *)moduledict_flet_core,
                mod_consts[286],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_166 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_139, mod_consts[286]);
        }

        Py_DECREF(tmp_import_name_from_139);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_import_name_from_140;
        PyObject *tmp_name_value_68;
        PyObject *tmp_globals_arg_value_68;
        PyObject *tmp_locals_arg_value_68;
        PyObject *tmp_fromlist_value_68;
        PyObject *tmp_level_value_68;
        tmp_name_value_68 = mod_consts[287];
        tmp_globals_arg_value_68 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_68 = Py_None;
        tmp_fromlist_value_68 = mod_consts[288];
        tmp_level_value_68 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 149;
        tmp_import_name_from_140 = IMPORT_MODULE5(tstate, tmp_name_value_68, tmp_globals_arg_value_68, tmp_locals_arg_value_68, tmp_fromlist_value_68, tmp_level_value_68);
        if (tmp_import_name_from_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_140)) {
            tmp_assign_source_167 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_140,
                (PyObject *)moduledict_flet_core,
                mod_consts[289],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_167 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_140, mod_consts[289]);
        }

        Py_DECREF(tmp_import_name_from_140);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_import_name_from_141;
        PyObject *tmp_name_value_69;
        PyObject *tmp_globals_arg_value_69;
        PyObject *tmp_locals_arg_value_69;
        PyObject *tmp_fromlist_value_69;
        PyObject *tmp_level_value_69;
        tmp_name_value_69 = mod_consts[290];
        tmp_globals_arg_value_69 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_69 = Py_None;
        tmp_fromlist_value_69 = mod_consts[291];
        tmp_level_value_69 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 150;
        tmp_import_name_from_141 = IMPORT_MODULE5(tstate, tmp_name_value_69, tmp_globals_arg_value_69, tmp_locals_arg_value_69, tmp_fromlist_value_69, tmp_level_value_69);
        if (tmp_import_name_from_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_141)) {
            tmp_assign_source_168 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_141,
                (PyObject *)moduledict_flet_core,
                mod_consts[292],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_168 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_141, mod_consts[292]);
        }

        Py_DECREF(tmp_import_name_from_141);
        if (tmp_assign_source_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_import_name_from_142;
        PyObject *tmp_name_value_70;
        PyObject *tmp_globals_arg_value_70;
        PyObject *tmp_locals_arg_value_70;
        PyObject *tmp_fromlist_value_70;
        PyObject *tmp_level_value_70;
        tmp_name_value_70 = mod_consts[293];
        tmp_globals_arg_value_70 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_70 = Py_None;
        tmp_fromlist_value_70 = mod_consts[294];
        tmp_level_value_70 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 151;
        tmp_import_name_from_142 = IMPORT_MODULE5(tstate, tmp_name_value_70, tmp_globals_arg_value_70, tmp_locals_arg_value_70, tmp_fromlist_value_70, tmp_level_value_70);
        if (tmp_import_name_from_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_142)) {
            tmp_assign_source_169 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_142,
                (PyObject *)moduledict_flet_core,
                mod_consts[295],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_169 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_142, mod_consts[295]);
        }

        Py_DECREF(tmp_import_name_from_142);
        if (tmp_assign_source_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_import_name_from_143;
        PyObject *tmp_name_value_71;
        PyObject *tmp_globals_arg_value_71;
        PyObject *tmp_locals_arg_value_71;
        PyObject *tmp_fromlist_value_71;
        PyObject *tmp_level_value_71;
        tmp_name_value_71 = mod_consts[296];
        tmp_globals_arg_value_71 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_71 = Py_None;
        tmp_fromlist_value_71 = mod_consts[297];
        tmp_level_value_71 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 152;
        tmp_import_name_from_143 = IMPORT_MODULE5(tstate, tmp_name_value_71, tmp_globals_arg_value_71, tmp_locals_arg_value_71, tmp_fromlist_value_71, tmp_level_value_71);
        if (tmp_import_name_from_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_143)) {
            tmp_assign_source_170 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_143,
                (PyObject *)moduledict_flet_core,
                mod_consts[298],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_170 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_143, mod_consts[298]);
        }

        Py_DECREF(tmp_import_name_from_143);
        if (tmp_assign_source_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_import_name_from_144;
        PyObject *tmp_name_value_72;
        PyObject *tmp_globals_arg_value_72;
        PyObject *tmp_locals_arg_value_72;
        PyObject *tmp_fromlist_value_72;
        PyObject *tmp_level_value_72;
        tmp_name_value_72 = mod_consts[299];
        tmp_globals_arg_value_72 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_72 = Py_None;
        tmp_fromlist_value_72 = mod_consts[300];
        tmp_level_value_72 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 153;
        tmp_import_name_from_144 = IMPORT_MODULE5(tstate, tmp_name_value_72, tmp_globals_arg_value_72, tmp_locals_arg_value_72, tmp_fromlist_value_72, tmp_level_value_72);
        if (tmp_import_name_from_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_144)) {
            tmp_assign_source_171 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_144,
                (PyObject *)moduledict_flet_core,
                mod_consts[301],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_171 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_144, mod_consts[301]);
        }

        Py_DECREF(tmp_import_name_from_144);
        if (tmp_assign_source_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_import_name_from_145;
        PyObject *tmp_name_value_73;
        PyObject *tmp_globals_arg_value_73;
        PyObject *tmp_locals_arg_value_73;
        PyObject *tmp_fromlist_value_73;
        PyObject *tmp_level_value_73;
        tmp_name_value_73 = mod_consts[302];
        tmp_globals_arg_value_73 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_73 = Py_None;
        tmp_fromlist_value_73 = mod_consts[303];
        tmp_level_value_73 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 154;
        tmp_import_name_from_145 = IMPORT_MODULE5(tstate, tmp_name_value_73, tmp_globals_arg_value_73, tmp_locals_arg_value_73, tmp_fromlist_value_73, tmp_level_value_73);
        if (tmp_import_name_from_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_145)) {
            tmp_assign_source_172 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_145,
                (PyObject *)moduledict_flet_core,
                mod_consts[304],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_172 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_145, mod_consts[304]);
        }

        Py_DECREF(tmp_import_name_from_145);
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_import_name_from_146;
        PyObject *tmp_name_value_74;
        PyObject *tmp_globals_arg_value_74;
        PyObject *tmp_locals_arg_value_74;
        PyObject *tmp_fromlist_value_74;
        PyObject *tmp_level_value_74;
        tmp_name_value_74 = mod_consts[305];
        tmp_globals_arg_value_74 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_74 = Py_None;
        tmp_fromlist_value_74 = mod_consts[306];
        tmp_level_value_74 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 155;
        tmp_import_name_from_146 = IMPORT_MODULE5(tstate, tmp_name_value_74, tmp_globals_arg_value_74, tmp_locals_arg_value_74, tmp_fromlist_value_74, tmp_level_value_74);
        if (tmp_import_name_from_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_146)) {
            tmp_assign_source_173 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_146,
                (PyObject *)moduledict_flet_core,
                mod_consts[307],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_173 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_146, mod_consts[307]);
        }

        Py_DECREF(tmp_import_name_from_146);
        if (tmp_assign_source_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_import_name_from_147;
        PyObject *tmp_name_value_75;
        PyObject *tmp_globals_arg_value_75;
        PyObject *tmp_locals_arg_value_75;
        PyObject *tmp_fromlist_value_75;
        PyObject *tmp_level_value_75;
        tmp_name_value_75 = mod_consts[308];
        tmp_globals_arg_value_75 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_75 = Py_None;
        tmp_fromlist_value_75 = mod_consts[309];
        tmp_level_value_75 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 156;
        tmp_import_name_from_147 = IMPORT_MODULE5(tstate, tmp_name_value_75, tmp_globals_arg_value_75, tmp_locals_arg_value_75, tmp_fromlist_value_75, tmp_level_value_75);
        if (tmp_import_name_from_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_147)) {
            tmp_assign_source_174 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_147,
                (PyObject *)moduledict_flet_core,
                mod_consts[310],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_174 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_147, mod_consts[310]);
        }

        Py_DECREF(tmp_import_name_from_147);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_import_name_from_148;
        PyObject *tmp_name_value_76;
        PyObject *tmp_globals_arg_value_76;
        PyObject *tmp_locals_arg_value_76;
        PyObject *tmp_fromlist_value_76;
        PyObject *tmp_level_value_76;
        tmp_name_value_76 = mod_consts[311];
        tmp_globals_arg_value_76 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_76 = Py_None;
        tmp_fromlist_value_76 = mod_consts[312];
        tmp_level_value_76 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 157;
        tmp_import_name_from_148 = IMPORT_MODULE5(tstate, tmp_name_value_76, tmp_globals_arg_value_76, tmp_locals_arg_value_76, tmp_fromlist_value_76, tmp_level_value_76);
        if (tmp_import_name_from_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_148)) {
            tmp_assign_source_175 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_148,
                (PyObject *)moduledict_flet_core,
                mod_consts[313],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_175 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_148, mod_consts[313]);
        }

        Py_DECREF(tmp_import_name_from_148);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_name_value_77;
        PyObject *tmp_globals_arg_value_77;
        PyObject *tmp_locals_arg_value_77;
        PyObject *tmp_fromlist_value_77;
        PyObject *tmp_level_value_77;
        tmp_name_value_77 = mod_consts[314];
        tmp_globals_arg_value_77 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_77 = Py_None;
        tmp_fromlist_value_77 = mod_consts[315];
        tmp_level_value_77 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 158;
        tmp_assign_source_176 = IMPORT_MODULE5(tstate, tmp_name_value_77, tmp_globals_arg_value_77, tmp_locals_arg_value_77, tmp_fromlist_value_77, tmp_level_value_77);
        if (tmp_assign_source_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_24__module == NULL);
        tmp_import_from_24__module = tmp_assign_source_176;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_import_name_from_149;
        CHECK_OBJECT(tmp_import_from_24__module);
        tmp_import_name_from_149 = tmp_import_from_24__module;
        if (PyModule_Check(tmp_import_name_from_149)) {
            tmp_assign_source_177 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_149,
                (PyObject *)moduledict_flet_core,
                mod_consts[316],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_177 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_149, mod_consts[316]);
        }

        if (tmp_assign_source_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_import_name_from_150;
        CHECK_OBJECT(tmp_import_from_24__module);
        tmp_import_name_from_150 = tmp_import_from_24__module;
        if (PyModule_Check(tmp_import_name_from_150)) {
            tmp_assign_source_178 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_150,
                (PyObject *)moduledict_flet_core,
                mod_consts[317],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_178 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_150, mod_consts[317]);
        }

        if (tmp_assign_source_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_178);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_24__module);
    Py_DECREF(tmp_import_from_24__module);
    tmp_import_from_24__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_import_from_24__module);
    Py_DECREF(tmp_import_from_24__module);
    tmp_import_from_24__module = NULL;
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_import_name_from_151;
        PyObject *tmp_name_value_78;
        PyObject *tmp_globals_arg_value_78;
        PyObject *tmp_locals_arg_value_78;
        PyObject *tmp_fromlist_value_78;
        PyObject *tmp_level_value_78;
        tmp_name_value_78 = mod_consts[318];
        tmp_globals_arg_value_78 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_78 = Py_None;
        tmp_fromlist_value_78 = mod_consts[319];
        tmp_level_value_78 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 159;
        tmp_import_name_from_151 = IMPORT_MODULE5(tstate, tmp_name_value_78, tmp_globals_arg_value_78, tmp_locals_arg_value_78, tmp_fromlist_value_78, tmp_level_value_78);
        if (tmp_import_name_from_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_151)) {
            tmp_assign_source_179 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_151,
                (PyObject *)moduledict_flet_core,
                mod_consts[320],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_179 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_151, mod_consts[320]);
        }

        Py_DECREF(tmp_import_name_from_151);
        if (tmp_assign_source_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_import_name_from_152;
        PyObject *tmp_name_value_79;
        PyObject *tmp_globals_arg_value_79;
        PyObject *tmp_locals_arg_value_79;
        PyObject *tmp_fromlist_value_79;
        PyObject *tmp_level_value_79;
        tmp_name_value_79 = mod_consts[321];
        tmp_globals_arg_value_79 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_79 = Py_None;
        tmp_fromlist_value_79 = mod_consts[322];
        tmp_level_value_79 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 160;
        tmp_import_name_from_152 = IMPORT_MODULE5(tstate, tmp_name_value_79, tmp_globals_arg_value_79, tmp_locals_arg_value_79, tmp_fromlist_value_79, tmp_level_value_79);
        if (tmp_import_name_from_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_152)) {
            tmp_assign_source_180 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_152,
                (PyObject *)moduledict_flet_core,
                mod_consts[323],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_180 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_152, mod_consts[323]);
        }

        Py_DECREF(tmp_import_name_from_152);
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_name_value_80;
        PyObject *tmp_globals_arg_value_80;
        PyObject *tmp_locals_arg_value_80;
        PyObject *tmp_fromlist_value_80;
        PyObject *tmp_level_value_80;
        tmp_name_value_80 = mod_consts[324];
        tmp_globals_arg_value_80 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_80 = Py_None;
        tmp_fromlist_value_80 = mod_consts[325];
        tmp_level_value_80 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 161;
        tmp_assign_source_181 = IMPORT_MODULE5(tstate, tmp_name_value_80, tmp_globals_arg_value_80, tmp_locals_arg_value_80, tmp_fromlist_value_80, tmp_level_value_80);
        if (tmp_assign_source_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_25__module == NULL);
        tmp_import_from_25__module = tmp_assign_source_181;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_import_name_from_153;
        CHECK_OBJECT(tmp_import_from_25__module);
        tmp_import_name_from_153 = tmp_import_from_25__module;
        if (PyModule_Check(tmp_import_name_from_153)) {
            tmp_assign_source_182 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_153,
                (PyObject *)moduledict_flet_core,
                mod_consts[326],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_182 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_153, mod_consts[326]);
        }

        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_import_name_from_154;
        CHECK_OBJECT(tmp_import_from_25__module);
        tmp_import_name_from_154 = tmp_import_from_25__module;
        if (PyModule_Check(tmp_import_name_from_154)) {
            tmp_assign_source_183 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_154,
                (PyObject *)moduledict_flet_core,
                mod_consts[327],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_183 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_154, mod_consts[327]);
        }

        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_import_name_from_155;
        CHECK_OBJECT(tmp_import_from_25__module);
        tmp_import_name_from_155 = tmp_import_from_25__module;
        if (PyModule_Check(tmp_import_name_from_155)) {
            tmp_assign_source_184 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_155,
                (PyObject *)moduledict_flet_core,
                mod_consts[328],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_184 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_155, mod_consts[328]);
        }

        if (tmp_assign_source_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_25;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_184);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_25__module);
    Py_DECREF(tmp_import_from_25__module);
    tmp_import_from_25__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_import_from_25__module);
    Py_DECREF(tmp_import_from_25__module);
    tmp_import_from_25__module = NULL;
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_import_name_from_156;
        PyObject *tmp_name_value_81;
        PyObject *tmp_globals_arg_value_81;
        PyObject *tmp_locals_arg_value_81;
        PyObject *tmp_fromlist_value_81;
        PyObject *tmp_level_value_81;
        tmp_name_value_81 = mod_consts[329];
        tmp_globals_arg_value_81 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_81 = Py_None;
        tmp_fromlist_value_81 = mod_consts[330];
        tmp_level_value_81 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 162;
        tmp_import_name_from_156 = IMPORT_MODULE5(tstate, tmp_name_value_81, tmp_globals_arg_value_81, tmp_locals_arg_value_81, tmp_fromlist_value_81, tmp_level_value_81);
        if (tmp_import_name_from_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_156)) {
            tmp_assign_source_185 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_156,
                (PyObject *)moduledict_flet_core,
                mod_consts[331],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_185 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_156, mod_consts[331]);
        }

        Py_DECREF(tmp_import_name_from_156);
        if (tmp_assign_source_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_import_name_from_157;
        PyObject *tmp_name_value_82;
        PyObject *tmp_globals_arg_value_82;
        PyObject *tmp_locals_arg_value_82;
        PyObject *tmp_fromlist_value_82;
        PyObject *tmp_level_value_82;
        tmp_name_value_82 = mod_consts[332];
        tmp_globals_arg_value_82 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_82 = Py_None;
        tmp_fromlist_value_82 = mod_consts[333];
        tmp_level_value_82 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 163;
        tmp_import_name_from_157 = IMPORT_MODULE5(tstate, tmp_name_value_82, tmp_globals_arg_value_82, tmp_locals_arg_value_82, tmp_fromlist_value_82, tmp_level_value_82);
        if (tmp_import_name_from_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_157)) {
            tmp_assign_source_186 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_157,
                (PyObject *)moduledict_flet_core,
                mod_consts[334],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_186 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_157, mod_consts[334]);
        }

        Py_DECREF(tmp_import_name_from_157);
        if (tmp_assign_source_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[334], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_name_value_83;
        PyObject *tmp_globals_arg_value_83;
        PyObject *tmp_locals_arg_value_83;
        PyObject *tmp_fromlist_value_83;
        PyObject *tmp_level_value_83;
        tmp_name_value_83 = mod_consts[335];
        tmp_globals_arg_value_83 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_83 = Py_None;
        tmp_fromlist_value_83 = mod_consts[336];
        tmp_level_value_83 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 164;
        tmp_assign_source_187 = IMPORT_MODULE5(tstate, tmp_name_value_83, tmp_globals_arg_value_83, tmp_locals_arg_value_83, tmp_fromlist_value_83, tmp_level_value_83);
        if (tmp_assign_source_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_26__module == NULL);
        tmp_import_from_26__module = tmp_assign_source_187;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_import_name_from_158;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_158 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_158)) {
            tmp_assign_source_188 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_158,
                (PyObject *)moduledict_flet_core,
                mod_consts[337],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_188 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_158, mod_consts[337]);
        }

        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_import_name_from_159;
        CHECK_OBJECT(tmp_import_from_26__module);
        tmp_import_name_from_159 = tmp_import_from_26__module;
        if (PyModule_Check(tmp_import_name_from_159)) {
            tmp_assign_source_189 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_159,
                (PyObject *)moduledict_flet_core,
                mod_consts[338],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_189 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_159, mod_consts[338]);
        }

        if (tmp_assign_source_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_189);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_26__module);
    Py_DECREF(tmp_import_from_26__module);
    tmp_import_from_26__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    CHECK_OBJECT(tmp_import_from_26__module);
    Py_DECREF(tmp_import_from_26__module);
    tmp_import_from_26__module = NULL;
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_import_name_from_160;
        PyObject *tmp_name_value_84;
        PyObject *tmp_globals_arg_value_84;
        PyObject *tmp_locals_arg_value_84;
        PyObject *tmp_fromlist_value_84;
        PyObject *tmp_level_value_84;
        tmp_name_value_84 = mod_consts[339];
        tmp_globals_arg_value_84 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_84 = Py_None;
        tmp_fromlist_value_84 = mod_consts[340];
        tmp_level_value_84 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 165;
        tmp_import_name_from_160 = IMPORT_MODULE5(tstate, tmp_name_value_84, tmp_globals_arg_value_84, tmp_locals_arg_value_84, tmp_fromlist_value_84, tmp_level_value_84);
        if (tmp_import_name_from_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_160)) {
            tmp_assign_source_190 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_160,
                (PyObject *)moduledict_flet_core,
                mod_consts[341],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_190 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_160, mod_consts[341]);
        }

        Py_DECREF(tmp_import_name_from_160);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_name_value_85;
        PyObject *tmp_globals_arg_value_85;
        PyObject *tmp_locals_arg_value_85;
        PyObject *tmp_fromlist_value_85;
        PyObject *tmp_level_value_85;
        tmp_name_value_85 = mod_consts[342];
        tmp_globals_arg_value_85 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_85 = Py_None;
        tmp_fromlist_value_85 = mod_consts[343];
        tmp_level_value_85 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 166;
        tmp_assign_source_191 = IMPORT_MODULE5(tstate, tmp_name_value_85, tmp_globals_arg_value_85, tmp_locals_arg_value_85, tmp_fromlist_value_85, tmp_level_value_85);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_27__module == NULL);
        tmp_import_from_27__module = tmp_assign_source_191;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_import_name_from_161;
        CHECK_OBJECT(tmp_import_from_27__module);
        tmp_import_name_from_161 = tmp_import_from_27__module;
        if (PyModule_Check(tmp_import_name_from_161)) {
            tmp_assign_source_192 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_161,
                (PyObject *)moduledict_flet_core,
                mod_consts[344],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_192 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_161, mod_consts[344]);
        }

        if (tmp_assign_source_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_import_name_from_162;
        CHECK_OBJECT(tmp_import_from_27__module);
        tmp_import_name_from_162 = tmp_import_from_27__module;
        if (PyModule_Check(tmp_import_name_from_162)) {
            tmp_assign_source_193 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_162,
                (PyObject *)moduledict_flet_core,
                mod_consts[345],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_193 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_162, mod_consts[345]);
        }

        if (tmp_assign_source_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_import_name_from_163;
        CHECK_OBJECT(tmp_import_from_27__module);
        tmp_import_name_from_163 = tmp_import_from_27__module;
        if (PyModule_Check(tmp_import_name_from_163)) {
            tmp_assign_source_194 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_163,
                (PyObject *)moduledict_flet_core,
                mod_consts[346],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_194 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_163, mod_consts[346]);
        }

        if (tmp_assign_source_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto try_except_handler_27;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_194);
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_27__module);
    Py_DECREF(tmp_import_from_27__module);
    tmp_import_from_27__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    CHECK_OBJECT(tmp_import_from_27__module);
    Py_DECREF(tmp_import_from_27__module);
    tmp_import_from_27__module = NULL;
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_import_name_from_164;
        PyObject *tmp_name_value_86;
        PyObject *tmp_globals_arg_value_86;
        PyObject *tmp_locals_arg_value_86;
        PyObject *tmp_fromlist_value_86;
        PyObject *tmp_level_value_86;
        tmp_name_value_86 = mod_consts[347];
        tmp_globals_arg_value_86 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_86 = Py_None;
        tmp_fromlist_value_86 = mod_consts[348];
        tmp_level_value_86 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 167;
        tmp_import_name_from_164 = IMPORT_MODULE5(tstate, tmp_name_value_86, tmp_globals_arg_value_86, tmp_locals_arg_value_86, tmp_fromlist_value_86, tmp_level_value_86);
        if (tmp_import_name_from_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_164)) {
            tmp_assign_source_195 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_164,
                (PyObject *)moduledict_flet_core,
                mod_consts[349],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_195 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_164, mod_consts[349]);
        }

        Py_DECREF(tmp_import_name_from_164);
        if (tmp_assign_source_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_import_name_from_165;
        PyObject *tmp_name_value_87;
        PyObject *tmp_globals_arg_value_87;
        PyObject *tmp_locals_arg_value_87;
        PyObject *tmp_fromlist_value_87;
        PyObject *tmp_level_value_87;
        tmp_name_value_87 = mod_consts[350];
        tmp_globals_arg_value_87 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_87 = Py_None;
        tmp_fromlist_value_87 = mod_consts[351];
        tmp_level_value_87 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 168;
        tmp_import_name_from_165 = IMPORT_MODULE5(tstate, tmp_name_value_87, tmp_globals_arg_value_87, tmp_locals_arg_value_87, tmp_fromlist_value_87, tmp_level_value_87);
        if (tmp_import_name_from_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_165)) {
            tmp_assign_source_196 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_165,
                (PyObject *)moduledict_flet_core,
                mod_consts[352],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_196 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_165, mod_consts[352]);
        }

        Py_DECREF(tmp_import_name_from_165);
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[352], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_name_value_88;
        PyObject *tmp_globals_arg_value_88;
        PyObject *tmp_locals_arg_value_88;
        PyObject *tmp_fromlist_value_88;
        PyObject *tmp_level_value_88;
        tmp_name_value_88 = mod_consts[353];
        tmp_globals_arg_value_88 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_88 = Py_None;
        tmp_fromlist_value_88 = mod_consts[354];
        tmp_level_value_88 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 169;
        tmp_assign_source_197 = IMPORT_MODULE5(tstate, tmp_name_value_88, tmp_globals_arg_value_88, tmp_locals_arg_value_88, tmp_fromlist_value_88, tmp_level_value_88);
        if (tmp_assign_source_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_28__module == NULL);
        tmp_import_from_28__module = tmp_assign_source_197;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_import_name_from_166;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_166 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_166)) {
            tmp_assign_source_198 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_166,
                (PyObject *)moduledict_flet_core,
                mod_consts[355],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_198 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_166, mod_consts[355]);
        }

        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_import_name_from_167;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_167 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_167)) {
            tmp_assign_source_199 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_167,
                (PyObject *)moduledict_flet_core,
                mod_consts[356],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_199 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_167, mod_consts[356]);
        }

        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_import_name_from_168;
        CHECK_OBJECT(tmp_import_from_28__module);
        tmp_import_name_from_168 = tmp_import_from_28__module;
        if (PyModule_Check(tmp_import_name_from_168)) {
            tmp_assign_source_200 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_168,
                (PyObject *)moduledict_flet_core,
                mod_consts[357],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_200 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_168, mod_consts[357]);
        }

        if (tmp_assign_source_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto try_except_handler_28;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_200);
    }
    goto try_end_28;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_28__module);
    Py_DECREF(tmp_import_from_28__module);
    tmp_import_from_28__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_import_from_28__module);
    Py_DECREF(tmp_import_from_28__module);
    tmp_import_from_28__module = NULL;
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_name_value_89;
        PyObject *tmp_globals_arg_value_89;
        PyObject *tmp_locals_arg_value_89;
        PyObject *tmp_fromlist_value_89;
        PyObject *tmp_level_value_89;
        tmp_name_value_89 = mod_consts[358];
        tmp_globals_arg_value_89 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_89 = Py_None;
        tmp_fromlist_value_89 = mod_consts[359];
        tmp_level_value_89 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 170;
        tmp_assign_source_201 = IMPORT_MODULE5(tstate, tmp_name_value_89, tmp_globals_arg_value_89, tmp_locals_arg_value_89, tmp_fromlist_value_89, tmp_level_value_89);
        if (tmp_assign_source_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_29__module == NULL);
        tmp_import_from_29__module = tmp_assign_source_201;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_import_name_from_169;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_169 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_169)) {
            tmp_assign_source_202 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_169,
                (PyObject *)moduledict_flet_core,
                mod_consts[360],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_202 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_169, mod_consts[360]);
        }

        if (tmp_assign_source_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_import_name_from_170;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_170 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_170)) {
            tmp_assign_source_203 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_170,
                (PyObject *)moduledict_flet_core,
                mod_consts[361],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_203 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_170, mod_consts[361]);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_import_name_from_171;
        CHECK_OBJECT(tmp_import_from_29__module);
        tmp_import_name_from_171 = tmp_import_from_29__module;
        if (PyModule_Check(tmp_import_name_from_171)) {
            tmp_assign_source_204 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_171,
                (PyObject *)moduledict_flet_core,
                mod_consts[362],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_204 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_171, mod_consts[362]);
        }

        if (tmp_assign_source_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_29;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_204);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_29__module);
    Py_DECREF(tmp_import_from_29__module);
    tmp_import_from_29__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    CHECK_OBJECT(tmp_import_from_29__module);
    Py_DECREF(tmp_import_from_29__module);
    tmp_import_from_29__module = NULL;
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_name_value_90;
        PyObject *tmp_globals_arg_value_90;
        PyObject *tmp_locals_arg_value_90;
        PyObject *tmp_fromlist_value_90;
        PyObject *tmp_level_value_90;
        tmp_name_value_90 = mod_consts[363];
        tmp_globals_arg_value_90 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_90 = Py_None;
        tmp_fromlist_value_90 = mod_consts[364];
        tmp_level_value_90 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 171;
        tmp_assign_source_205 = IMPORT_MODULE5(tstate, tmp_name_value_90, tmp_globals_arg_value_90, tmp_locals_arg_value_90, tmp_fromlist_value_90, tmp_level_value_90);
        if (tmp_assign_source_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_30__module == NULL);
        tmp_import_from_30__module = tmp_assign_source_205;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_import_name_from_172;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_172 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_172)) {
            tmp_assign_source_206 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_172,
                (PyObject *)moduledict_flet_core,
                mod_consts[365],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_206 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_172, mod_consts[365]);
        }

        if (tmp_assign_source_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_import_name_from_173;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_173 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_173)) {
            tmp_assign_source_207 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_173,
                (PyObject *)moduledict_flet_core,
                mod_consts[366],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_207 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_173, mod_consts[366]);
        }

        if (tmp_assign_source_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        PyObject *tmp_import_name_from_174;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_174 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_174)) {
            tmp_assign_source_208 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_174,
                (PyObject *)moduledict_flet_core,
                mod_consts[367],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_208 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_174, mod_consts[367]);
        }

        if (tmp_assign_source_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_import_name_from_175;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_175 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_175)) {
            tmp_assign_source_209 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_175,
                (PyObject *)moduledict_flet_core,
                mod_consts[368],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_209 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_175, mod_consts[368]);
        }

        if (tmp_assign_source_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[368], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        PyObject *tmp_import_name_from_176;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_176 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_176)) {
            tmp_assign_source_210 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_176,
                (PyObject *)moduledict_flet_core,
                mod_consts[369],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_210 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_176, mod_consts[369]);
        }

        if (tmp_assign_source_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_import_name_from_177;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_177 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_177)) {
            tmp_assign_source_211 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_177,
                (PyObject *)moduledict_flet_core,
                mod_consts[370],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_211 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_177, mod_consts[370]);
        }

        if (tmp_assign_source_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_import_name_from_178;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_178 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_178)) {
            tmp_assign_source_212 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_178,
                (PyObject *)moduledict_flet_core,
                mod_consts[371],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_212 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_178, mod_consts[371]);
        }

        if (tmp_assign_source_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_import_name_from_179;
        CHECK_OBJECT(tmp_import_from_30__module);
        tmp_import_name_from_179 = tmp_import_from_30__module;
        if (PyModule_Check(tmp_import_name_from_179)) {
            tmp_assign_source_213 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_179,
                (PyObject *)moduledict_flet_core,
                mod_consts[372],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_213 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_179, mod_consts[372]);
        }

        if (tmp_assign_source_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_30;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_213);
    }
    goto try_end_30;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_30__module);
    Py_DECREF(tmp_import_from_30__module);
    tmp_import_from_30__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    CHECK_OBJECT(tmp_import_from_30__module);
    Py_DECREF(tmp_import_from_30__module);
    tmp_import_from_30__module = NULL;
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_import_name_from_180;
        PyObject *tmp_name_value_91;
        PyObject *tmp_globals_arg_value_91;
        PyObject *tmp_locals_arg_value_91;
        PyObject *tmp_fromlist_value_91;
        PyObject *tmp_level_value_91;
        tmp_name_value_91 = mod_consts[373];
        tmp_globals_arg_value_91 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_91 = Py_None;
        tmp_fromlist_value_91 = mod_consts[374];
        tmp_level_value_91 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 181;
        tmp_import_name_from_180 = IMPORT_MODULE5(tstate, tmp_name_value_91, tmp_globals_arg_value_91, tmp_locals_arg_value_91, tmp_fromlist_value_91, tmp_level_value_91);
        if (tmp_import_name_from_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_180)) {
            tmp_assign_source_214 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_180,
                (PyObject *)moduledict_flet_core,
                mod_consts[375],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_214 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_180, mod_consts[375]);
        }

        Py_DECREF(tmp_import_name_from_180);
        if (tmp_assign_source_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_name_value_92;
        PyObject *tmp_globals_arg_value_92;
        PyObject *tmp_locals_arg_value_92;
        PyObject *tmp_fromlist_value_92;
        PyObject *tmp_level_value_92;
        tmp_name_value_92 = mod_consts[376];
        tmp_globals_arg_value_92 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_92 = Py_None;
        tmp_fromlist_value_92 = mod_consts[377];
        tmp_level_value_92 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 182;
        tmp_assign_source_215 = IMPORT_MODULE5(tstate, tmp_name_value_92, tmp_globals_arg_value_92, tmp_locals_arg_value_92, tmp_fromlist_value_92, tmp_level_value_92);
        if (tmp_assign_source_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_31__module == NULL);
        tmp_import_from_31__module = tmp_assign_source_215;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_import_name_from_181;
        CHECK_OBJECT(tmp_import_from_31__module);
        tmp_import_name_from_181 = tmp_import_from_31__module;
        if (PyModule_Check(tmp_import_name_from_181)) {
            tmp_assign_source_216 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_181,
                (PyObject *)moduledict_flet_core,
                mod_consts[378],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_216 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_181, mod_consts[378]);
        }

        if (tmp_assign_source_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_31;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_import_name_from_182;
        CHECK_OBJECT(tmp_import_from_31__module);
        tmp_import_name_from_182 = tmp_import_from_31__module;
        if (PyModule_Check(tmp_import_name_from_182)) {
            tmp_assign_source_217 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_182,
                (PyObject *)moduledict_flet_core,
                mod_consts[379],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_217 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_182, mod_consts[379]);
        }

        if (tmp_assign_source_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_31;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        PyObject *tmp_import_name_from_183;
        CHECK_OBJECT(tmp_import_from_31__module);
        tmp_import_name_from_183 = tmp_import_from_31__module;
        if (PyModule_Check(tmp_import_name_from_183)) {
            tmp_assign_source_218 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_183,
                (PyObject *)moduledict_flet_core,
                mod_consts[380],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_218 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_183, mod_consts[380]);
        }

        if (tmp_assign_source_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto try_except_handler_31;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[380], tmp_assign_source_218);
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_31__module);
    Py_DECREF(tmp_import_from_31__module);
    tmp_import_from_31__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    CHECK_OBJECT(tmp_import_from_31__module);
    Py_DECREF(tmp_import_from_31__module);
    tmp_import_from_31__module = NULL;
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_import_name_from_184;
        PyObject *tmp_name_value_93;
        PyObject *tmp_globals_arg_value_93;
        PyObject *tmp_locals_arg_value_93;
        PyObject *tmp_fromlist_value_93;
        PyObject *tmp_level_value_93;
        tmp_name_value_93 = mod_consts[381];
        tmp_globals_arg_value_93 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_93 = Py_None;
        tmp_fromlist_value_93 = mod_consts[382];
        tmp_level_value_93 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 183;
        tmp_import_name_from_184 = IMPORT_MODULE5(tstate, tmp_name_value_93, tmp_globals_arg_value_93, tmp_locals_arg_value_93, tmp_fromlist_value_93, tmp_level_value_93);
        if (tmp_import_name_from_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_184)) {
            tmp_assign_source_219 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_184,
                (PyObject *)moduledict_flet_core,
                mod_consts[383],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_219 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_184, mod_consts[383]);
        }

        Py_DECREF(tmp_import_name_from_184);
        if (tmp_assign_source_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        PyObject *tmp_name_value_94;
        PyObject *tmp_globals_arg_value_94;
        PyObject *tmp_locals_arg_value_94;
        PyObject *tmp_fromlist_value_94;
        PyObject *tmp_level_value_94;
        tmp_name_value_94 = mod_consts[384];
        tmp_globals_arg_value_94 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_94 = Py_None;
        tmp_fromlist_value_94 = mod_consts[385];
        tmp_level_value_94 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 184;
        tmp_assign_source_220 = IMPORT_MODULE5(tstate, tmp_name_value_94, tmp_globals_arg_value_94, tmp_locals_arg_value_94, tmp_fromlist_value_94, tmp_level_value_94);
        if (tmp_assign_source_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_32__module == NULL);
        tmp_import_from_32__module = tmp_assign_source_220;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_import_name_from_185;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_185 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_185)) {
            tmp_assign_source_221 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_185,
                (PyObject *)moduledict_flet_core,
                mod_consts[386],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_221 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_185, mod_consts[386]);
        }

        if (tmp_assign_source_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        PyObject *tmp_import_name_from_186;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_186 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_186)) {
            tmp_assign_source_222 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_186,
                (PyObject *)moduledict_flet_core,
                mod_consts[387],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_222 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_186, mod_consts[387]);
        }

        if (tmp_assign_source_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_import_name_from_187;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_187 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_187)) {
            tmp_assign_source_223 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_187,
                (PyObject *)moduledict_flet_core,
                mod_consts[388],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_223 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_187, mod_consts[388]);
        }

        if (tmp_assign_source_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        PyObject *tmp_import_name_from_188;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_188 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_188)) {
            tmp_assign_source_224 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_188,
                (PyObject *)moduledict_flet_core,
                mod_consts[389],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_224 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_188, mod_consts[389]);
        }

        if (tmp_assign_source_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_import_name_from_189;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_189 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_189)) {
            tmp_assign_source_225 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_189,
                (PyObject *)moduledict_flet_core,
                mod_consts[390],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_225 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_189, mod_consts[390]);
        }

        if (tmp_assign_source_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        PyObject *tmp_import_name_from_190;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_190 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_190)) {
            tmp_assign_source_226 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_190,
                (PyObject *)moduledict_flet_core,
                mod_consts[391],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_226 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_190, mod_consts[391]);
        }

        if (tmp_assign_source_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_import_name_from_191;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_191 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_191)) {
            tmp_assign_source_227 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_191,
                (PyObject *)moduledict_flet_core,
                mod_consts[392],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_227 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_191, mod_consts[392]);
        }

        if (tmp_assign_source_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        PyObject *tmp_import_name_from_192;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_192 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_192)) {
            tmp_assign_source_228 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_192,
                (PyObject *)moduledict_flet_core,
                mod_consts[393],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_228 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_192, mod_consts[393]);
        }

        if (tmp_assign_source_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        PyObject *tmp_import_name_from_193;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_193 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_193)) {
            tmp_assign_source_229 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_193,
                (PyObject *)moduledict_flet_core,
                mod_consts[394],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_229 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_193, mod_consts[394]);
        }

        if (tmp_assign_source_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_import_name_from_194;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_194 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_194)) {
            tmp_assign_source_230 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_194,
                (PyObject *)moduledict_flet_core,
                mod_consts[395],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_230 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_194, mod_consts[395]);
        }

        if (tmp_assign_source_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_import_name_from_195;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_195 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_195)) {
            tmp_assign_source_231 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_195,
                (PyObject *)moduledict_flet_core,
                mod_consts[396],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_231 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_195, mod_consts[396]);
        }

        if (tmp_assign_source_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_import_name_from_196;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_196 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_196)) {
            tmp_assign_source_232 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_196,
                (PyObject *)moduledict_flet_core,
                mod_consts[397],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_232 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_196, mod_consts[397]);
        }

        if (tmp_assign_source_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_import_name_from_197;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_197 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_197)) {
            tmp_assign_source_233 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_197,
                (PyObject *)moduledict_flet_core,
                mod_consts[398],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_233 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_197, mod_consts[398]);
        }

        if (tmp_assign_source_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_import_name_from_198;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_198 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_198)) {
            tmp_assign_source_234 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_198,
                (PyObject *)moduledict_flet_core,
                mod_consts[399],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_234 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_198, mod_consts[399]);
        }

        if (tmp_assign_source_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_import_name_from_199;
        CHECK_OBJECT(tmp_import_from_32__module);
        tmp_import_name_from_199 = tmp_import_from_32__module;
        if (PyModule_Check(tmp_import_name_from_199)) {
            tmp_assign_source_235 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_199,
                (PyObject *)moduledict_flet_core,
                mod_consts[400],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_235 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_199, mod_consts[400]);
        }

        if (tmp_assign_source_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto try_except_handler_32;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_235);
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_32__module);
    Py_DECREF(tmp_import_from_32__module);
    tmp_import_from_32__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    CHECK_OBJECT(tmp_import_from_32__module);
    Py_DECREF(tmp_import_from_32__module);
    tmp_import_from_32__module = NULL;
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_import_name_from_200;
        PyObject *tmp_name_value_95;
        PyObject *tmp_globals_arg_value_95;
        PyObject *tmp_locals_arg_value_95;
        PyObject *tmp_fromlist_value_95;
        PyObject *tmp_level_value_95;
        tmp_name_value_95 = mod_consts[401];
        tmp_globals_arg_value_95 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_95 = Py_None;
        tmp_fromlist_value_95 = mod_consts[402];
        tmp_level_value_95 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 201;
        tmp_import_name_from_200 = IMPORT_MODULE5(tstate, tmp_name_value_95, tmp_globals_arg_value_95, tmp_locals_arg_value_95, tmp_fromlist_value_95, tmp_level_value_95);
        if (tmp_import_name_from_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_200)) {
            tmp_assign_source_236 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_200,
                (PyObject *)moduledict_flet_core,
                mod_consts[403],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_236 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_200, mod_consts[403]);
        }

        Py_DECREF(tmp_import_name_from_200);
        if (tmp_assign_source_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_import_name_from_201;
        PyObject *tmp_name_value_96;
        PyObject *tmp_globals_arg_value_96;
        PyObject *tmp_locals_arg_value_96;
        PyObject *tmp_fromlist_value_96;
        PyObject *tmp_level_value_96;
        tmp_name_value_96 = mod_consts[404];
        tmp_globals_arg_value_96 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_96 = Py_None;
        tmp_fromlist_value_96 = mod_consts[405];
        tmp_level_value_96 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 202;
        tmp_import_name_from_201 = IMPORT_MODULE5(tstate, tmp_name_value_96, tmp_globals_arg_value_96, tmp_locals_arg_value_96, tmp_fromlist_value_96, tmp_level_value_96);
        if (tmp_import_name_from_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_201)) {
            tmp_assign_source_237 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_201,
                (PyObject *)moduledict_flet_core,
                mod_consts[406],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_237 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_201, mod_consts[406]);
        }

        Py_DECREF(tmp_import_name_from_201);
        if (tmp_assign_source_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        PyObject *tmp_import_name_from_202;
        PyObject *tmp_name_value_97;
        PyObject *tmp_globals_arg_value_97;
        PyObject *tmp_locals_arg_value_97;
        PyObject *tmp_fromlist_value_97;
        PyObject *tmp_level_value_97;
        tmp_name_value_97 = mod_consts[407];
        tmp_globals_arg_value_97 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_97 = Py_None;
        tmp_fromlist_value_97 = mod_consts[408];
        tmp_level_value_97 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 203;
        tmp_import_name_from_202 = IMPORT_MODULE5(tstate, tmp_name_value_97, tmp_globals_arg_value_97, tmp_locals_arg_value_97, tmp_fromlist_value_97, tmp_level_value_97);
        if (tmp_import_name_from_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_202)) {
            tmp_assign_source_238 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_202,
                (PyObject *)moduledict_flet_core,
                mod_consts[409],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_238 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_202, mod_consts[409]);
        }

        Py_DECREF(tmp_import_name_from_202);
        if (tmp_assign_source_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        PyObject *tmp_import_name_from_203;
        PyObject *tmp_name_value_98;
        PyObject *tmp_globals_arg_value_98;
        PyObject *tmp_locals_arg_value_98;
        PyObject *tmp_fromlist_value_98;
        PyObject *tmp_level_value_98;
        tmp_name_value_98 = mod_consts[410];
        tmp_globals_arg_value_98 = (PyObject *)moduledict_flet_core;
        tmp_locals_arg_value_98 = Py_None;
        tmp_fromlist_value_98 = mod_consts[411];
        tmp_level_value_98 = mod_consts[15];
        frame_4b038c4e374049c80563b49ffe2e97ea->m_frame.f_lineno = 204;
        tmp_import_name_from_203 = IMPORT_MODULE5(tstate, tmp_name_value_98, tmp_globals_arg_value_98, tmp_locals_arg_value_98, tmp_fromlist_value_98, tmp_level_value_98);
        if (tmp_import_name_from_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_203)) {
            tmp_assign_source_239 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_203,
                (PyObject *)moduledict_flet_core,
                mod_consts[412],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_239 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_203, mod_consts[412]);
        }

        Py_DECREF(tmp_import_name_from_203);
        if (tmp_assign_source_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_239);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b038c4e374049c80563b49ffe2e97ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b038c4e374049c80563b49ffe2e97ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b038c4e374049c80563b49ffe2e97ea, exception_lineno);
    }



    assertFrameObject(frame_4b038c4e374049c80563b49ffe2e97ea);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core", false);

    Py_INCREF(module_flet_core);
    return module_flet_core;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
