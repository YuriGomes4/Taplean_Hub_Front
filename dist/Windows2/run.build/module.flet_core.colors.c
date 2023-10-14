/* Generated code for Python module 'flet_core.colors'
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

/* The "module_flet_core$colors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$colors;
PyDictObject *moduledict_flet_core$colors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[685];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[685];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("flet_core.colors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 685; i++) {
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
void checkModuleConstants_flet_core$colors(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 685; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_16b3a876850bbe9de0a71c30d5a99dc6;
static PyCodeObject *codeobj_e4e81fd88d925f4a9ac43239fcf9cb4a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[682]); CHECK_OBJECT(module_filename_obj);
    codeobj_16b3a876850bbe9de0a71c30d5a99dc6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[683], mod_consts[683], NULL, NULL, 0, 0, 0);
    codeobj_e4e81fd88d925f4a9ac43239fcf9cb4a = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[684], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_flet_core$colors$$$function__1_with_opacity(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$colors$$$function__1_with_opacity(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_opacity = python_pars[0];
    PyObject *par_color = python_pars[1];
    struct Nuitka_FrameObject *frame_e4e81fd88d925f4a9ac43239fcf9cb4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a)) {
        Py_XDECREF(cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a = MAKE_FUNCTION_FRAME(tstate, codeobj_e4e81fd88d925f4a9ac43239fcf9cb4a, module_flet_core$colors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a->m_type_description == NULL);
    frame_e4e81fd88d925f4a9ac43239fcf9cb4a = cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e4e81fd88d925f4a9ac43239fcf9cb4a);
    assert(Py_REFCNT(frame_e4e81fd88d925f4a9ac43239fcf9cb4a) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_color);
        tmp_format_value_1 = par_color;
        tmp_format_spec_1 = mod_consts[0];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[1];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_opacity);
            tmp_format_value_2 = par_opacity;
            tmp_format_spec_2 = mod_consts[0];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[0], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4e81fd88d925f4a9ac43239fcf9cb4a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4e81fd88d925f4a9ac43239fcf9cb4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4e81fd88d925f4a9ac43239fcf9cb4a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4e81fd88d925f4a9ac43239fcf9cb4a,
        type_description_1,
        par_opacity,
        par_color
    );


    // Release cached frame if used for exception.
    if (frame_e4e81fd88d925f4a9ac43239fcf9cb4a == cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a);
        cache_frame_e4e81fd88d925f4a9ac43239fcf9cb4a = NULL;
    }

    assertFrameObject(frame_e4e81fd88d925f4a9ac43239fcf9cb4a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_color);
    Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_flet_core$colors$$$function__1_with_opacity(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$colors$$$function__1_with_opacity,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e4e81fd88d925f4a9ac43239fcf9cb4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$colors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_flet_core$colors[] = {
    impl_flet_core$colors$$$function__1_with_opacity,
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

    function_impl_code *current = functable_flet_core$colors;
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

    if (offset > sizeof(functable_flet_core$colors) || offset < 0) {
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
        functable_flet_core$colors[offset],
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
        module_flet_core$colors,
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
PyObject *modulecode_flet_core$colors(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.colors");

    // Store the module for future use.
    module_flet_core$colors = module;

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
        PRINT_STRING("flet_core.colors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("flet_core.colors: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$colors\n");

    moduledict_flet_core$colors = MODULE_DICT(module_flet_core$colors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$colors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$colors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[0]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$colors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$colors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$colors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$colors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_flet_core$colors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_16b3a876850bbe9de0a71c30d5a99dc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_2);
    }
    frame_16b3a876850bbe9de0a71c30d5a99dc6 = MAKE_MODULE_FRAME(codeobj_16b3a876850bbe9de0a71c30d5a99dc6, module_flet_core$colors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_16b3a876850bbe9de0a71c30d5a99dc6);
    assert(Py_REFCNT(frame_16b3a876850bbe9de0a71c30d5a99dc6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16b3a876850bbe9de0a71c30d5a99dc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16b3a876850bbe9de0a71c30d5a99dc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16b3a876850bbe9de0a71c30d5a99dc6, exception_lineno);
    }



    assertFrameObject(frame_16b3a876850bbe9de0a71c30d5a99dc6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[8]);


        tmp_assign_source_4 = MAKE_FUNCTION_flet_core$colors$$$function__1_with_opacity(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[10];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[18];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[26];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[32];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[34];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[42];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[44];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[48];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[54];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[96];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[98];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[100];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[110];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[112];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[114];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[116];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[118];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[124];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[128];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[132];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[136];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[146];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = mod_consts[148];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[150];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[164];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[166];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[168];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[170];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[174];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[176];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[220];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[222];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[224];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[226];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[228];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[230];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[232];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[234];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[246];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[256];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[258];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[260];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[262];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[264];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[266];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[268];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[270];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[272];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[274];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[276];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[277], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[278];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[280];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[282];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[284];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[286];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[287], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[288];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[290];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[292];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[294];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[296];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[297], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[298];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[299], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[300];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[302];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[303], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[304];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[306];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[308];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[310];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[312];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = mod_consts[314];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        tmp_assign_source_158 = mod_consts[316];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        tmp_assign_source_159 = mod_consts[318];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = mod_consts[320];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = mod_consts[322];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        tmp_assign_source_162 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        tmp_assign_source_163 = mod_consts[326];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[327], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        tmp_assign_source_164 = mod_consts[328];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[329], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = mod_consts[330];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        tmp_assign_source_166 = mod_consts[332];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        tmp_assign_source_167 = mod_consts[334];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = mod_consts[336];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[337], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        tmp_assign_source_169 = mod_consts[338];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[339], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        tmp_assign_source_170 = mod_consts[340];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[341], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        tmp_assign_source_171 = mod_consts[342];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        tmp_assign_source_172 = mod_consts[344];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = mod_consts[346];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        tmp_assign_source_174 = mod_consts[348];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        tmp_assign_source_175 = mod_consts[350];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = mod_consts[352];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        tmp_assign_source_177 = mod_consts[354];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[355], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        tmp_assign_source_178 = mod_consts[356];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        tmp_assign_source_179 = mod_consts[358];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        tmp_assign_source_180 = mod_consts[360];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[361], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = mod_consts[362];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        tmp_assign_source_182 = mod_consts[364];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = mod_consts[366];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = mod_consts[368];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        tmp_assign_source_185 = mod_consts[370];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        tmp_assign_source_186 = mod_consts[372];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = mod_consts[374];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        tmp_assign_source_188 = mod_consts[376];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[377], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = mod_consts[378];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = mod_consts[382];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = mod_consts[384];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        tmp_assign_source_193 = mod_consts[386];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        tmp_assign_source_194 = mod_consts[388];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = mod_consts[390];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        tmp_assign_source_196 = mod_consts[392];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = mod_consts[394];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        tmp_assign_source_198 = mod_consts[396];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = mod_consts[398];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = mod_consts[400];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        tmp_assign_source_201 = mod_consts[402];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = mod_consts[404];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = mod_consts[406];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[407], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        tmp_assign_source_204 = mod_consts[408];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[409], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        tmp_assign_source_205 = mod_consts[410];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[411], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        tmp_assign_source_206 = mod_consts[412];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[413], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        tmp_assign_source_207 = mod_consts[414];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[415], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = mod_consts[416];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[417], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        tmp_assign_source_209 = mod_consts[418];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[419], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = mod_consts[420];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[421], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        tmp_assign_source_211 = mod_consts[422];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[423], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        tmp_assign_source_212 = mod_consts[424];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        tmp_assign_source_213 = mod_consts[426];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[427], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        tmp_assign_source_214 = mod_consts[428];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[429], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        tmp_assign_source_215 = mod_consts[430];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[431], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        tmp_assign_source_216 = mod_consts[432];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[433], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        tmp_assign_source_217 = mod_consts[434];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[435], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = mod_consts[436];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[437], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        tmp_assign_source_219 = mod_consts[438];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = mod_consts[440];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[441], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        tmp_assign_source_221 = mod_consts[442];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = mod_consts[444];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        tmp_assign_source_223 = mod_consts[446];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = mod_consts[448];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[449], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        tmp_assign_source_225 = mod_consts[450];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[451], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = mod_consts[452];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        tmp_assign_source_227 = mod_consts[454];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[455], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = mod_consts[456];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[457], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = mod_consts[458];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[459], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        tmp_assign_source_230 = mod_consts[460];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[461], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        tmp_assign_source_231 = mod_consts[462];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[463], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        tmp_assign_source_232 = mod_consts[464];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[465], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        tmp_assign_source_233 = mod_consts[466];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[467], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        tmp_assign_source_234 = mod_consts[468];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        tmp_assign_source_235 = mod_consts[470];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[471], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        tmp_assign_source_236 = mod_consts[472];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[473], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        tmp_assign_source_237 = mod_consts[474];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[476];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[477], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[478];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        tmp_assign_source_240 = mod_consts[480];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[482];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[483], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[484];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[485], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[486];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[488];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[490];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[492];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[494];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[495], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[496];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[497], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[498];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[500];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        tmp_assign_source_251 = mod_consts[502];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[503], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        tmp_assign_source_252 = mod_consts[504];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[505], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[506];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[507], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[508];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[509], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[510];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[511], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[512];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[513], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[514];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[515], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[516];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[517], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[518];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[519], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[520];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[521], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[522];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[523], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[524];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[525], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[526];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[527], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[528];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[529], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[530];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[531], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[532];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[533], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[534];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[535], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        tmp_assign_source_268 = mod_consts[536];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[537], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        tmp_assign_source_269 = mod_consts[538];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[539], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        tmp_assign_source_270 = mod_consts[540];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[541], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        tmp_assign_source_271 = mod_consts[542];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[543], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        tmp_assign_source_272 = mod_consts[544];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[545], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        tmp_assign_source_273 = mod_consts[546];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[547], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        tmp_assign_source_274 = mod_consts[548];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[549], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        tmp_assign_source_275 = mod_consts[550];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[551], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        tmp_assign_source_276 = mod_consts[552];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[553], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        tmp_assign_source_277 = mod_consts[554];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[555], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        tmp_assign_source_278 = mod_consts[556];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[557], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        tmp_assign_source_279 = mod_consts[558];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[559], tmp_assign_source_279);
    }
    {
        PyObject *tmp_assign_source_280;
        tmp_assign_source_280 = mod_consts[560];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[561], tmp_assign_source_280);
    }
    {
        PyObject *tmp_assign_source_281;
        tmp_assign_source_281 = mod_consts[562];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_281);
    }
    {
        PyObject *tmp_assign_source_282;
        tmp_assign_source_282 = mod_consts[564];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[565], tmp_assign_source_282);
    }
    {
        PyObject *tmp_assign_source_283;
        tmp_assign_source_283 = mod_consts[566];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[567], tmp_assign_source_283);
    }
    {
        PyObject *tmp_assign_source_284;
        tmp_assign_source_284 = mod_consts[568];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[569], tmp_assign_source_284);
    }
    {
        PyObject *tmp_assign_source_285;
        tmp_assign_source_285 = mod_consts[570];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[571], tmp_assign_source_285);
    }
    {
        PyObject *tmp_assign_source_286;
        tmp_assign_source_286 = mod_consts[572];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[573], tmp_assign_source_286);
    }
    {
        PyObject *tmp_assign_source_287;
        tmp_assign_source_287 = mod_consts[574];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[575], tmp_assign_source_287);
    }
    {
        PyObject *tmp_assign_source_288;
        tmp_assign_source_288 = mod_consts[576];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[577], tmp_assign_source_288);
    }
    {
        PyObject *tmp_assign_source_289;
        tmp_assign_source_289 = mod_consts[578];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[579], tmp_assign_source_289);
    }
    {
        PyObject *tmp_assign_source_290;
        tmp_assign_source_290 = mod_consts[580];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[581], tmp_assign_source_290);
    }
    {
        PyObject *tmp_assign_source_291;
        tmp_assign_source_291 = mod_consts[582];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[583], tmp_assign_source_291);
    }
    {
        PyObject *tmp_assign_source_292;
        tmp_assign_source_292 = mod_consts[584];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[585], tmp_assign_source_292);
    }
    {
        PyObject *tmp_assign_source_293;
        tmp_assign_source_293 = mod_consts[586];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[587], tmp_assign_source_293);
    }
    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[588];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[589], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[590];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[591], tmp_assign_source_295);
    }
    {
        PyObject *tmp_assign_source_296;
        tmp_assign_source_296 = mod_consts[592];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[593], tmp_assign_source_296);
    }
    {
        PyObject *tmp_assign_source_297;
        tmp_assign_source_297 = mod_consts[594];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[595], tmp_assign_source_297);
    }
    {
        PyObject *tmp_assign_source_298;
        tmp_assign_source_298 = mod_consts[596];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[597], tmp_assign_source_298);
    }
    {
        PyObject *tmp_assign_source_299;
        tmp_assign_source_299 = mod_consts[598];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[599], tmp_assign_source_299);
    }
    {
        PyObject *tmp_assign_source_300;
        tmp_assign_source_300 = mod_consts[600];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[601], tmp_assign_source_300);
    }
    {
        PyObject *tmp_assign_source_301;
        tmp_assign_source_301 = mod_consts[602];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[603], tmp_assign_source_301);
    }
    {
        PyObject *tmp_assign_source_302;
        tmp_assign_source_302 = mod_consts[604];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[605], tmp_assign_source_302);
    }
    {
        PyObject *tmp_assign_source_303;
        tmp_assign_source_303 = mod_consts[606];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[607], tmp_assign_source_303);
    }
    {
        PyObject *tmp_assign_source_304;
        tmp_assign_source_304 = mod_consts[608];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[609], tmp_assign_source_304);
    }
    {
        PyObject *tmp_assign_source_305;
        tmp_assign_source_305 = mod_consts[610];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[611], tmp_assign_source_305);
    }
    {
        PyObject *tmp_assign_source_306;
        tmp_assign_source_306 = mod_consts[612];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[613], tmp_assign_source_306);
    }
    {
        PyObject *tmp_assign_source_307;
        tmp_assign_source_307 = mod_consts[614];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[615], tmp_assign_source_307);
    }
    {
        PyObject *tmp_assign_source_308;
        tmp_assign_source_308 = mod_consts[616];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[617], tmp_assign_source_308);
    }
    {
        PyObject *tmp_assign_source_309;
        tmp_assign_source_309 = mod_consts[618];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[619], tmp_assign_source_309);
    }
    {
        PyObject *tmp_assign_source_310;
        tmp_assign_source_310 = mod_consts[620];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[621], tmp_assign_source_310);
    }
    {
        PyObject *tmp_assign_source_311;
        tmp_assign_source_311 = mod_consts[622];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[623], tmp_assign_source_311);
    }
    {
        PyObject *tmp_assign_source_312;
        tmp_assign_source_312 = mod_consts[624];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[625], tmp_assign_source_312);
    }
    {
        PyObject *tmp_assign_source_313;
        tmp_assign_source_313 = mod_consts[626];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[627], tmp_assign_source_313);
    }
    {
        PyObject *tmp_assign_source_314;
        tmp_assign_source_314 = mod_consts[628];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[629], tmp_assign_source_314);
    }
    {
        PyObject *tmp_assign_source_315;
        tmp_assign_source_315 = mod_consts[630];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[631], tmp_assign_source_315);
    }
    {
        PyObject *tmp_assign_source_316;
        tmp_assign_source_316 = mod_consts[632];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[633], tmp_assign_source_316);
    }
    {
        PyObject *tmp_assign_source_317;
        tmp_assign_source_317 = mod_consts[634];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[635], tmp_assign_source_317);
    }
    {
        PyObject *tmp_assign_source_318;
        tmp_assign_source_318 = mod_consts[636];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[637], tmp_assign_source_318);
    }
    {
        PyObject *tmp_assign_source_319;
        tmp_assign_source_319 = mod_consts[638];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[639], tmp_assign_source_319);
    }
    {
        PyObject *tmp_assign_source_320;
        tmp_assign_source_320 = mod_consts[640];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[641], tmp_assign_source_320);
    }
    {
        PyObject *tmp_assign_source_321;
        tmp_assign_source_321 = mod_consts[642];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[643], tmp_assign_source_321);
    }
    {
        PyObject *tmp_assign_source_322;
        tmp_assign_source_322 = mod_consts[644];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[645], tmp_assign_source_322);
    }
    {
        PyObject *tmp_assign_source_323;
        tmp_assign_source_323 = mod_consts[646];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[647], tmp_assign_source_323);
    }
    {
        PyObject *tmp_assign_source_324;
        tmp_assign_source_324 = mod_consts[648];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[649], tmp_assign_source_324);
    }
    {
        PyObject *tmp_assign_source_325;
        tmp_assign_source_325 = mod_consts[650];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[651], tmp_assign_source_325);
    }
    {
        PyObject *tmp_assign_source_326;
        tmp_assign_source_326 = mod_consts[652];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[653], tmp_assign_source_326);
    }
    {
        PyObject *tmp_assign_source_327;
        tmp_assign_source_327 = mod_consts[654];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[655], tmp_assign_source_327);
    }
    {
        PyObject *tmp_assign_source_328;
        tmp_assign_source_328 = mod_consts[656];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[657], tmp_assign_source_328);
    }
    {
        PyObject *tmp_assign_source_329;
        tmp_assign_source_329 = mod_consts[658];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[659], tmp_assign_source_329);
    }
    {
        PyObject *tmp_assign_source_330;
        tmp_assign_source_330 = mod_consts[660];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[661], tmp_assign_source_330);
    }
    {
        PyObject *tmp_assign_source_331;
        tmp_assign_source_331 = mod_consts[662];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[663], tmp_assign_source_331);
    }
    {
        PyObject *tmp_assign_source_332;
        tmp_assign_source_332 = mod_consts[664];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[665], tmp_assign_source_332);
    }
    {
        PyObject *tmp_assign_source_333;
        tmp_assign_source_333 = mod_consts[666];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[667], tmp_assign_source_333);
    }
    {
        PyObject *tmp_assign_source_334;
        tmp_assign_source_334 = mod_consts[668];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[669], tmp_assign_source_334);
    }
    {
        PyObject *tmp_assign_source_335;
        tmp_assign_source_335 = mod_consts[670];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[671], tmp_assign_source_335);
    }
    {
        PyObject *tmp_assign_source_336;
        tmp_assign_source_336 = mod_consts[672];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[673], tmp_assign_source_336);
    }
    {
        PyObject *tmp_assign_source_337;
        tmp_assign_source_337 = mod_consts[674];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[675], tmp_assign_source_337);
    }
    {
        PyObject *tmp_assign_source_338;
        tmp_assign_source_338 = mod_consts[676];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[677], tmp_assign_source_338);
    }
    {
        PyObject *tmp_assign_source_339;
        tmp_assign_source_339 = mod_consts[678];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[679], tmp_assign_source_339);
    }
    {
        PyObject *tmp_assign_source_340;
        tmp_assign_source_340 = mod_consts[680];
        UPDATE_STRING_DICT0(moduledict_flet_core$colors, (Nuitka_StringObject *)mod_consts[681], tmp_assign_source_340);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.colors", false);

    Py_INCREF(module_flet_core$colors);
    return module_flet_core$colors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$colors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$colors", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
