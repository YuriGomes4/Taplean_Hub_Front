/* Generated code for Python module 'pages.produtos.edit_tr'
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

/* The "module_pages$produtos$edit_tr" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pages$produtos$edit_tr;
PyDictObject *moduledict_pages$produtos$edit_tr;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[193];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[193];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pages.produtos.edit_tr"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 193; i++) {
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
void checkModuleConstants_pages$produtos$edit_tr(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 193; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6cf20c285785c8f6c0af2d56d74f952a;
static PyCodeObject *codeobj_4cb1d282c2d24ce66ae24ea3cf6d570a;
static PyCodeObject *codeobj_6b910bf456fec4123470be53a3d65464;
static PyCodeObject *codeobj_f48bbe0005f36a8632d8deabffe2f7a1;
static PyCodeObject *codeobj_731edd86e2a3500fdd4e393a816be71d;
static PyCodeObject *codeobj_d697629a552c05579e6992ec9dd1710b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[187]); CHECK_OBJECT(module_filename_obj);
    codeobj_6cf20c285785c8f6c0af2d56d74f952a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[188], mod_consts[188], NULL, NULL, 0, 0, 0);
    codeobj_4cb1d282c2d24ce66ae24ea3cf6d570a = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[189], NULL, 1, 0, 0);
    codeobj_6b910bf456fec4123470be53a3d65464 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[190], NULL, 0, 0, 0);
    codeobj_f48bbe0005f36a8632d8deabffe2f7a1 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[191], NULL, 1, 0, 0);
    codeobj_731edd86e2a3500fdd4e393a816be71d = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[191], NULL, 1, 0, 0);
    codeobj_d697629a552c05579e6992ec9dd1710b = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[192], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__1_salvar_extrato();


static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__2_onclick_regra();


static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__3_onclick_deleteregra();


static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__4_on_visible();


static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__4_on_visible$$$function__1_extrair_data();


// The module function definitions.
static PyObject *impl_pages$produtos$edit_tr$$$function__1_salvar_extrato(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *var_new_values = NULL;
    struct Nuitka_FrameObject *frame_d697629a552c05579e6992ec9dd1710b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d697629a552c05579e6992ec9dd1710b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d697629a552c05579e6992ec9dd1710b)) {
        Py_XDECREF(cache_frame_d697629a552c05579e6992ec9dd1710b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d697629a552c05579e6992ec9dd1710b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d697629a552c05579e6992ec9dd1710b = MAKE_FUNCTION_FRAME(tstate, codeobj_d697629a552c05579e6992ec9dd1710b, module_pages$produtos$edit_tr, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d697629a552c05579e6992ec9dd1710b->m_type_description == NULL);
    frame_d697629a552c05579e6992ec9dd1710b = cache_frame_d697629a552c05579e6992ec9dd1710b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d697629a552c05579e6992ec9dd1710b);
    assert(Py_REFCNT(frame_d697629a552c05579e6992ec9dd1710b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[0];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[2];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[4];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[5];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[6];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[7];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[8];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[1]);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_new_values == NULL);
        var_new_values = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[10]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[11]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[1]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_False;
        CHECK_OBJECT(var_new_values);
        tmp_args_element_value_3 = var_new_values;
        frame_d697629a552c05579e6992ec9dd1710b->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d697629a552c05579e6992ec9dd1710b->m_frame.f_lineno = 65;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[14],
            PyTuple_GET_ITEM(mod_consts[15], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d697629a552c05579e6992ec9dd1710b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d697629a552c05579e6992ec9dd1710b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d697629a552c05579e6992ec9dd1710b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d697629a552c05579e6992ec9dd1710b,
        type_description_1,
        par_e,
        var_new_values
    );


    // Release cached frame if used for exception.
    if (frame_d697629a552c05579e6992ec9dd1710b == cache_frame_d697629a552c05579e6992ec9dd1710b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d697629a552c05579e6992ec9dd1710b);
        cache_frame_d697629a552c05579e6992ec9dd1710b = NULL;
    }

    assertFrameObject(frame_d697629a552c05579e6992ec9dd1710b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_values);
    Py_DECREF(var_new_values);
    var_new_values = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_new_values);
    var_new_values = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pages$produtos$edit_tr$$$function__2_onclick_regra(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    struct Nuitka_FrameObject *frame_731edd86e2a3500fdd4e393a816be71d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_731edd86e2a3500fdd4e393a816be71d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_731edd86e2a3500fdd4e393a816be71d)) {
        Py_XDECREF(cache_frame_731edd86e2a3500fdd4e393a816be71d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_731edd86e2a3500fdd4e393a816be71d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_731edd86e2a3500fdd4e393a816be71d = MAKE_FUNCTION_FRAME(tstate, codeobj_731edd86e2a3500fdd4e393a816be71d, module_pages$produtos$edit_tr, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_731edd86e2a3500fdd4e393a816be71d->m_type_description == NULL);
    frame_731edd86e2a3500fdd4e393a816be71d = cache_frame_731edd86e2a3500fdd4e393a816be71d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_731edd86e2a3500fdd4e393a816be71d);
    assert(Py_REFCNT(frame_731edd86e2a3500fdd4e393a816be71d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[17];
        CHECK_OBJECT(par_e);
        tmp_args_element_value_2 = par_e;
        frame_731edd86e2a3500fdd4e393a816be71d->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[16],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_731edd86e2a3500fdd4e393a816be71d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_731edd86e2a3500fdd4e393a816be71d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_731edd86e2a3500fdd4e393a816be71d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_731edd86e2a3500fdd4e393a816be71d,
        type_description_1,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_731edd86e2a3500fdd4e393a816be71d == cache_frame_731edd86e2a3500fdd4e393a816be71d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_731edd86e2a3500fdd4e393a816be71d);
        cache_frame_731edd86e2a3500fdd4e393a816be71d = NULL;
    }

    assertFrameObject(frame_731edd86e2a3500fdd4e393a816be71d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pages$produtos$edit_tr$$$function__3_onclick_deleteregra(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    struct Nuitka_FrameObject *frame_f48bbe0005f36a8632d8deabffe2f7a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f48bbe0005f36a8632d8deabffe2f7a1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f48bbe0005f36a8632d8deabffe2f7a1)) {
        Py_XDECREF(cache_frame_f48bbe0005f36a8632d8deabffe2f7a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f48bbe0005f36a8632d8deabffe2f7a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f48bbe0005f36a8632d8deabffe2f7a1 = MAKE_FUNCTION_FRAME(tstate, codeobj_f48bbe0005f36a8632d8deabffe2f7a1, module_pages$produtos$edit_tr, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f48bbe0005f36a8632d8deabffe2f7a1->m_type_description == NULL);
    frame_f48bbe0005f36a8632d8deabffe2f7a1 = cache_frame_f48bbe0005f36a8632d8deabffe2f7a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f48bbe0005f36a8632d8deabffe2f7a1);
    assert(Py_REFCNT(frame_f48bbe0005f36a8632d8deabffe2f7a1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_expression_value_4 = par_e;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[19]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[20]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f48bbe0005f36a8632d8deabffe2f7a1->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f48bbe0005f36a8632d8deabffe2f7a1->m_frame.f_lineno = 72;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f48bbe0005f36a8632d8deabffe2f7a1->m_frame.f_lineno = 73;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[22]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f48bbe0005f36a8632d8deabffe2f7a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f48bbe0005f36a8632d8deabffe2f7a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f48bbe0005f36a8632d8deabffe2f7a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f48bbe0005f36a8632d8deabffe2f7a1,
        type_description_1,
        par_e
    );


    // Release cached frame if used for exception.
    if (frame_f48bbe0005f36a8632d8deabffe2f7a1 == cache_frame_f48bbe0005f36a8632d8deabffe2f7a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f48bbe0005f36a8632d8deabffe2f7a1);
        cache_frame_f48bbe0005f36a8632d8deabffe2f7a1 = NULL;
    }

    assertFrameObject(frame_f48bbe0005f36a8632d8deabffe2f7a1);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pages$produtos$edit_tr$$$function__4_on_visible(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_all = NULL;
    PyObject *var_transaction = NULL;
    PyObject *var_regras = NULL;
    PyObject *var_lista_regras = NULL;
    PyObject *var_colunas_dict = NULL;
    PyObject *var_operacoes_dict = NULL;
    PyObject *var_inverted_colunas = NULL;
    PyObject *var_inverted_operacoes = NULL;
    PyObject *var_regra = NULL;
    PyObject *var_mudancas = NULL;
    PyObject *var_extrair_data = NULL;
    PyObject *var_mudancas_ordenadas = NULL;
    PyObject *var_historico = NULL;
    PyObject *var_mudanca = NULL;
    PyObject *var_data = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *outline_1_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_6b910bf456fec4123470be53a3d65464;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_6b910bf456fec4123470be53a3d65464 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6b910bf456fec4123470be53a3d65464)) {
        Py_XDECREF(cache_frame_6b910bf456fec4123470be53a3d65464);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b910bf456fec4123470be53a3d65464 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b910bf456fec4123470be53a3d65464 = MAKE_FUNCTION_FRAME(tstate, codeobj_6b910bf456fec4123470be53a3d65464, module_pages$produtos$edit_tr, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b910bf456fec4123470be53a3d65464->m_type_description == NULL);
    frame_6b910bf456fec4123470be53a3d65464 = cache_frame_6b910bf456fec4123470be53a3d65464;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b910bf456fec4123470be53a3d65464);
    assert(Py_REFCNT(frame_6b910bf456fec4123470be53a3d65464) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_False;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[24]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 169;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[25]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_all == NULL);
        var_all = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_all);
        tmp_iter_arg_1 = var_all;
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 171;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_transaction;
            var_transaction = tmp_assign_source_5;
            Py_INCREF(var_transaction);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_3 = var_transaction;
        tmp_subscript_value_1 = mod_consts[12];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_4 = var_transaction;
        tmp_subscript_value_2 = mod_consts[12];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_5 = var_transaction;
        tmp_subscript_value_3 = mod_consts[0];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_assattr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_2);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_6 = var_transaction;
        tmp_subscript_value_4 = mod_consts[2];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[1], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_7 = var_transaction;
        tmp_subscript_value_5 = mod_consts[3];
        tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[1], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_8 = var_transaction;
        tmp_subscript_value_6 = mod_consts[4];
        tmp_assattr_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[1], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_9 = var_transaction;
        tmp_subscript_value_7 = mod_consts[5];
        tmp_assattr_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_7);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[1], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_10 = var_transaction;
        tmp_subscript_value_8 = mod_consts[6];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_6);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_int_arg_1;
        tmp_int_arg_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_int_arg_1 == NULL)) {
            tmp_int_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        assert(!(tmp_int_arg_1 == NULL));
        tmp_cmp_expr_left_3 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = mod_consts[26];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[27];
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[1], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = mod_consts[29];
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[1], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_3:;
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_11 = var_transaction;
        tmp_subscript_value_9 = mod_consts[7];
        tmp_assattr_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_9);
        if (tmp_assattr_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[1], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_12 = var_transaction;
        tmp_subscript_value_10 = mod_consts[8];
        tmp_assattr_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_10);
        if (tmp_assattr_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_assattr_target_10 == NULL)) {
            tmp_assattr_target_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_assattr_target_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[1], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_float_arg_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_float_arg_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[30]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_13 = var_transaction;
        tmp_subscript_value_11 = mod_consts[3];
        tmp_float_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
        if (tmp_float_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_3 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_14 = var_transaction;
        tmp_subscript_value_12 = mod_consts[7];
        tmp_float_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_12);
        if (tmp_float_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_right_3 = TO_FLOAT(tmp_float_arg_2);
        Py_DECREF(tmp_float_arg_2);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_15 = var_transaction;
        tmp_subscript_value_13 = mod_consts[8];
        tmp_float_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_13);
        if (tmp_float_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_right_2 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_16 = var_transaction;
        tmp_subscript_value_14 = mod_consts[2];
        tmp_float_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_14);
        if (tmp_float_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_sub_expr_right_1 = TO_FLOAT(tmp_float_arg_4);
        Py_DECREF(tmp_float_arg_4);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = mod_consts[31];
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assattr_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_assattr_target_11 == NULL)) {
            tmp_assattr_target_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_assattr_target_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[1], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(var_transaction);
        tmp_expression_value_17 = var_transaction;
        tmp_subscript_value_15 = mod_consts[33];
        tmp_assattr_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_15);
        if (tmp_assattr_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_12 == NULL)) {
            tmp_assattr_target_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_assattr_target_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[1], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_2:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 171;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[35]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 192;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_regras == NULL);
        var_regras = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[36]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(var_regras);
        tmp_args_element_value_4 = var_regras;
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 194;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
        assert(var_lista_regras == NULL);
        var_lista_regras = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = DICT_COPY(mod_consts[37]);
        assert(var_colunas_dict == NULL);
        var_colunas_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = DICT_COPY(mod_consts[38]);
        assert(var_operacoes_dict == NULL);
        var_operacoes_dict = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_dict_arg_1;
            CHECK_OBJECT(var_colunas_dict);
            tmp_dict_arg_1 = var_colunas_dict;
            tmp_iter_arg_2 = DICT_ITERITEMS(tmp_dict_arg_1);
            assert(!(tmp_iter_arg_2 == NULL));
            tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            tmp_assign_source_14 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_14;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_2 = tmp_dictcontraction_1__$0;
            tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_15 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 220;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_17 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 220;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_18 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 220;
                goto try_except_handler_6;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_18;
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
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                        type_description_1 = "ooooooooooooooo";
                        exception_lineno = 220;
                        goto try_except_handler_6;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[39];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "ooooooooooooooo";
                exception_lineno = 220;
                goto try_except_handler_6;
            }
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_19 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_19;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_20 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_20;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_v);
            tmp_dictset38_key_1 = outline_0_var_v;
            CHECK_OBJECT(outline_0_var_k);
            tmp_dictset38_value_1 = outline_0_var_k;
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_12 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_3;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 220;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_inverted_colunas == NULL);
        var_inverted_colunas = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_21;
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_dict_arg_2;
            CHECK_OBJECT(var_operacoes_dict);
            tmp_dict_arg_2 = var_operacoes_dict;
            tmp_iter_arg_4 = DICT_ITERITEMS(tmp_dict_arg_2);
            assert(!(tmp_iter_arg_4 == NULL));
            tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_7;
            }
            assert(tmp_dictcontraction_2__$0 == NULL);
            tmp_dictcontraction_2__$0 = tmp_assign_source_22;
        }
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_2__contraction == NULL);
            tmp_dictcontraction_2__contraction = tmp_assign_source_23;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_24;
            CHECK_OBJECT(tmp_dictcontraction_2__$0);
            tmp_next_source_3 = tmp_dictcontraction_2__$0;
            tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_24 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 221;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_2__iter_value_0;
                tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
            tmp_iter_arg_5 = tmp_dictcontraction_2__iter_value_0;
            tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__source_iter;
                tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_26 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_26 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 221;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_1;
                tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_27 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_27 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooooooo";
                exception_lineno = 221;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_2;
                tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                        type_description_1 = "ooooooooooooooo";
                        exception_lineno = 221;
                        goto try_except_handler_10;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[39];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "ooooooooooooooo";
                exception_lineno = 221;
                goto try_except_handler_10;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
        tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_9;
        // End of try:
        try_end_4:;
        goto try_end_5;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
        tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
        tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
        tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_1);
            tmp_assign_source_28 = tmp_dictcontraction$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_k;
                outline_1_var_k = tmp_assign_source_28;
                Py_INCREF(outline_1_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
        tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_29;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_2);
            tmp_assign_source_29 = tmp_dictcontraction$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_v;
                outline_1_var_v = tmp_assign_source_29;
                Py_INCREF(outline_1_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
        tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_2;
            PyObject *tmp_dictset38_value_2;
            PyObject *tmp_dictset38_dict_2;
            CHECK_OBJECT(outline_1_var_v);
            tmp_dictset38_key_2 = outline_1_var_v;
            CHECK_OBJECT(outline_1_var_k);
            tmp_dictset38_value_2 = outline_1_var_k;
            CHECK_OBJECT(tmp_dictcontraction_2__contraction);
            tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_2));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_assign_source_21 = tmp_dictcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        goto try_return_handler_7;
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

        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 221;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_inverted_operacoes == NULL);
        var_inverted_operacoes = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(var_regras);
        tmp_iter_arg_6 = var_regras;
        tmp_assign_source_30 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_30;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_31 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_31 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 225;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_32 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_regra;
            var_regra = tmp_assign_source_32;
            Py_INCREF(var_regra);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(var_regra);
        tmp_expression_value_19 = var_regra;
        tmp_subscript_value_16 = mod_consts[40];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_16);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_cmp_expr_right_4 = Py_False;
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_46;
        if (var_lista_regras == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_20 = var_lista_regras;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[42]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_regra);
        tmp_expression_value_21 = var_regra;
        tmp_subscript_value_17 = mod_consts[12];
        tmp_format_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_17);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_format_spec_1 = mod_consts[46];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[47];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_7 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 233;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_args_element_value_6 = MAKE_LIST_EMPTY(8);
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_kw_call_arg_value_0_2;
            PyObject *tmp_list_element_2;
            PyObject *tmp_called_value_9;
            PyObject *tmp_kw_call_value_0_1;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_called_value_11;
            PyObject *tmp_kw_call_arg_value_0_3;
            PyObject *tmp_list_element_3;
            PyObject *tmp_called_value_12;
            PyObject *tmp_kw_call_value_0_2;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_kw_call_dict_value_0_2;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_called_value_14;
            PyObject *tmp_kw_call_arg_value_0_4;
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_value_15;
            PyObject *tmp_kw_call_value_0_3;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_kw_call_dict_value_0_3;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_called_value_17;
            PyObject *tmp_kw_call_arg_value_0_5;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_18;
            PyObject *tmp_kw_call_value_0_4;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_kw_call_dict_value_0_4;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_called_value_20;
            PyObject *tmp_kw_call_arg_value_0_6;
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_value_21;
            PyObject *tmp_kw_call_value_0_5;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_kw_call_dict_value_0_5;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_called_value_23;
            PyObject *tmp_kw_call_arg_value_0_7;
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_24;
            PyObject *tmp_kw_call_value_0_6;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_kw_call_dict_value_0_6;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_value_27;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_1;
            PyObject *tmp_kw_call_value_2_1;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyList_SET_ITEM(tmp_args_element_value_6, 0, tmp_list_element_1);
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[50]);
            if (tmp_kw_call_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 236;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
                tmp_list_element_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_9, mod_consts[51], kw_values, mod_consts[52]);
            }

            Py_DECREF(tmp_kw_call_value_0_1);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_arg_value_0_2 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_10;
                PyObject *tmp_args_element_value_8;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_18;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_2, 0, tmp_list_element_2);
                tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_10 == NULL)) {
                    tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_2;
                }
                CHECK_OBJECT(var_regra);
                tmp_expression_value_23 = var_regra;
                tmp_subscript_value_18 = mod_consts[53];
                tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_18);
                if (tmp_args_element_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_2;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 237;
                tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
                Py_DECREF(tmp_args_element_value_8);
                if (tmp_list_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_2, 1, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_2);

                exception_lineno = 239;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[55]);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_2);

                exception_lineno = 239;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 234;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_2};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 1, tmp_list_element_1);
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[50]);
            if (tmp_kw_call_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 243;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
                tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_12, mod_consts[57], kw_values, mod_consts[52]);
            }

            Py_DECREF(tmp_kw_call_value_0_2);
            if (tmp_list_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_arg_value_0_3 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_13;
                PyObject *tmp_args_element_value_9;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_20;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_3, 0, tmp_list_element_3);
                tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_13 == NULL)) {
                    tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_3;
                }
                CHECK_OBJECT(var_inverted_colunas);
                tmp_expression_value_26 = var_inverted_colunas;
                CHECK_OBJECT(var_regra);
                tmp_expression_value_27 = var_regra;
                tmp_subscript_value_20 = mod_consts[58];
                tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_20);
                if (tmp_subscript_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_3;
                }
                tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_19);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_args_element_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_3;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 244;
                tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
                Py_DECREF(tmp_args_element_value_9);
                if (tmp_list_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 244;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_3, 1, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_3);

                exception_lineno = 246;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[55]);
            if (tmp_kw_call_dict_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_3);

                exception_lineno = 246;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 241;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_3};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_11, args, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 2, tmp_list_element_1);
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[50]);
            if (tmp_kw_call_value_0_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 250;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
                tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_15, mod_consts[59], kw_values, mod_consts[52]);
            }

            Py_DECREF(tmp_kw_call_value_0_3);
            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_arg_value_0_4 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_16;
                PyObject *tmp_args_element_value_10;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_22;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_4, 0, tmp_list_element_4);
                tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_16 == NULL)) {
                    tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_16 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_4;
                }
                CHECK_OBJECT(var_inverted_operacoes);
                tmp_expression_value_30 = var_inverted_operacoes;
                CHECK_OBJECT(var_regra);
                tmp_expression_value_31 = var_regra;
                tmp_subscript_value_22 = mod_consts[60];
                tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_22);
                if (tmp_subscript_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_4;
                }
                tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_21);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_args_element_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_4;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 251;
                tmp_list_element_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_10);
                Py_DECREF(tmp_args_element_value_10);
                if (tmp_list_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 251;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_4, 1, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_kw_call_arg_value_0_4);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_4);

                exception_lineno = 253;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[55]);
            if (tmp_kw_call_dict_value_0_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_4);

                exception_lineno = 253;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 248;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_4};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_14, args, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_4);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 3, tmp_list_element_1);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[50]);
            if (tmp_kw_call_value_0_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 257;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
                tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_18, mod_consts[61], kw_values, mod_consts[52]);
            }

            Py_DECREF(tmp_kw_call_value_0_4);
            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_arg_value_0_5 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_19;
                PyObject *tmp_args_element_value_11;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_23;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_5, 0, tmp_list_element_5);
                tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_19 == NULL)) {
                    tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_19 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_5;
                }
                CHECK_OBJECT(var_regra);
                tmp_expression_value_34 = var_regra;
                tmp_subscript_value_23 = mod_consts[62];
                tmp_args_element_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_23);
                if (tmp_args_element_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_5;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 258;
                tmp_list_element_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_11);
                Py_DECREF(tmp_args_element_value_11);
                if (tmp_list_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_5;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_5, 1, tmp_list_element_5);
            }
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_kw_call_arg_value_0_5);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_5);

                exception_lineno = 260;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[55]);
            if (tmp_kw_call_dict_value_0_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_5);

                exception_lineno = 260;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 255;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_5};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_5);
            Py_DECREF(tmp_kw_call_dict_value_0_4);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 4, tmp_list_element_1);
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[50]);
            if (tmp_kw_call_value_0_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 264;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
                tmp_list_element_6 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_21, mod_consts[63], kw_values, mod_consts[52]);
            }

            Py_DECREF(tmp_kw_call_value_0_5);
            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_arg_value_0_6 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_22;
                PyObject *tmp_args_element_value_12;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_25;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_6, 0, tmp_list_element_6);
                tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_22 == NULL)) {
                    tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_6;
                }
                CHECK_OBJECT(var_inverted_colunas);
                tmp_expression_value_37 = var_inverted_colunas;
                CHECK_OBJECT(var_regra);
                tmp_expression_value_38 = var_regra;
                tmp_subscript_value_25 = mod_consts[64];
                tmp_subscript_value_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_25);
                if (tmp_subscript_value_24 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_6;
                }
                tmp_args_element_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_24);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_args_element_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_6;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 265;
                tmp_list_element_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_12);
                Py_DECREF(tmp_args_element_value_12);
                if (tmp_list_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 265;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_6;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_6, 1, tmp_list_element_6);
            }
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_kw_call_arg_value_0_6);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_6);

                exception_lineno = 267;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[55]);
            if (tmp_kw_call_dict_value_0_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_6);

                exception_lineno = 267;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 262;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_6};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_6);
            Py_DECREF(tmp_kw_call_dict_value_0_5);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 5, tmp_list_element_1);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[50]);
            if (tmp_kw_call_value_0_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 271;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
                tmp_list_element_7 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_24, mod_consts[65], kw_values, mod_consts[52]);
            }

            Py_DECREF(tmp_kw_call_value_0_6);
            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_arg_value_0_7 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_25;
                PyObject *tmp_args_element_value_13;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_26;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_7, 0, tmp_list_element_7);
                tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_25 == NULL)) {
                    tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_25 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_7;
                }
                CHECK_OBJECT(var_regra);
                tmp_expression_value_41 = var_regra;
                tmp_subscript_value_26 = mod_consts[66];
                tmp_args_element_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_26);
                if (tmp_args_element_value_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_7;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 272;
                tmp_list_element_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_13);
                Py_DECREF(tmp_args_element_value_13);
                if (tmp_list_element_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 272;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_7;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_7, 1, tmp_list_element_7);
            }
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_kw_call_arg_value_0_7);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_7);

                exception_lineno = 274;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_dict_value_0_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[55]);
            if (tmp_kw_call_dict_value_0_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_7);

                exception_lineno = 274;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 269;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_7};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
                tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_23, args, kw_values, mod_consts[56]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_7);
            Py_DECREF(tmp_kw_call_dict_value_0_6);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 6, tmp_list_element_1);
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_kw_call_value_0_7 = mod_consts[68];
            tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
                tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
            }

            if (tmp_kw_call_value_1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_format_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_format_value_2 == NULL)) {
                tmp_format_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[46];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_3;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_format_spec_3;
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = mod_consts[70];
                PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
                CHECK_OBJECT(var_regra);
                tmp_expression_value_43 = var_regra;
                tmp_subscript_value_27 = mod_consts[12];
                tmp_format_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_27);
                if (tmp_format_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 278;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_spec_3 = mod_consts[46];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
                Py_DECREF(tmp_format_value_3);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 278;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_2);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_kw_call_value_2_1 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_kw_call_value_2_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 278;
            {
                PyObject *kw_values[3] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};
                tmp_list_element_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_27, mod_consts[71], kw_values, mod_consts[72]);
            }

            Py_DECREF(tmp_kw_call_value_2_1);
            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            tmp_args_element_value_14 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_28;
                PyObject *tmp_kw_call_value_0_8;
                PyObject *tmp_kw_call_value_1_2;
                PyObject *tmp_kw_call_value_2_2;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_28;
                PyList_SET_ITEM(tmp_args_element_value_14, 0, tmp_list_element_8);
                tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[67]);

                if (unlikely(tmp_called_value_28 == NULL)) {
                    tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
                }

                if (tmp_called_value_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_8;
                }
                tmp_kw_call_value_0_8 = mod_consts[73];
                tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[74]);

                if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
                    tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
                }

                if (tmp_kw_call_value_1_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_8;
                }
                CHECK_OBJECT(var_regra);
                tmp_expression_value_44 = var_regra;
                tmp_subscript_value_28 = mod_consts[12];
                tmp_kw_call_value_2_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_28);
                if (tmp_kw_call_value_2_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_8;
                }
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 279;
                {
                    PyObject *kw_values[3] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};
                    tmp_list_element_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_28, mod_consts[75], kw_values, mod_consts[72]);
                }

                Py_DECREF(tmp_kw_call_value_2_2);
                if (tmp_list_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_8;
                }
                PyList_SET_ITEM(tmp_args_element_value_14, 1, tmp_list_element_8);
            }
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_args_element_value_14);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 276;
            tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_list_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_6, 7, tmp_list_element_1);
        }
        goto list_build_noexception_8;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        goto try_except_handler_12;
        // Finished with no exception for list_build:
        list_build_noexception_8:;
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 231;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 231;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[77]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 284;
        tmp_kw_call_value_0_9 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[78],
            &PyTuple_GET_ITEM(mod_consts[79], 0)
        );

        if (tmp_kw_call_value_0_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 284;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

            tmp_kw_call_dict_value_0_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_29, kw_values, mod_consts[80]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_expression_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_7);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[82]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_7);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 285;
        tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[83], 0), mod_consts[84]);
        Py_DECREF(tmp_called_value_30);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_7);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 230;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_1};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[85]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_7);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 229;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 225;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_list_element_9;
        PyObject *tmp_called_value_34;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_format_value_4;
        PyObject *tmp_format_spec_4;
        if (var_lista_regras == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 290;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_47 = var_lista_regras;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[42]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 291;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_kw_call_value_0_10 = mod_consts[86];
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_format_value_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_format_value_4 == NULL)) {
            tmp_format_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_format_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_format_spec_4 = mod_consts[46];
        tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = mod_consts[87];
        PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        tmp_kw_call_value_2_3 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_kw_call_value_2_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 294;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_3, tmp_kw_call_value_2_3};
            tmp_list_element_9 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_34, mod_consts[88], kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_kw_call_value_2_3);
        if (tmp_list_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 294;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_args_element_value_17 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_17, 0, tmp_list_element_9);
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 292;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 291;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_31);

            exception_lineno = 291;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 290;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_7;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_6b910bf456fec4123470be53a3d65464, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_6b910bf456fec4123470be53a3d65464, exception_keeper_lineno_11);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    // Tried code:
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_4;
        tmp_called_value_35 = LOOKUP_BUILTIN(mod_consts[36]);
        assert(tmp_called_value_35 != NULL);
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 300;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[89]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_18;
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[90]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_18 == NULL)) {
            tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 303;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_36);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mudancas == NULL);
        var_mudancas = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_pages$produtos$edit_tr$$$function__4_on_visible$$$function__1_extrair_data();

        assert(var_extrair_data == NULL);
        var_extrair_data = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_37;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_called_value_37 = LOOKUP_BUILTIN(mod_consts[93]);
        assert(tmp_called_value_37 != NULL);
        CHECK_OBJECT(var_mudancas);
        tmp_kw_call_arg_value_0_8 = var_mudancas;
        CHECK_OBJECT(var_extrair_data);
        tmp_kw_call_dict_value_0_8 = var_extrair_data;
        tmp_kw_call_dict_value_1_2 = Py_True;
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 311;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_37, args, kw_values, mod_consts[94]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mudancas_ordenadas == NULL);
        var_mudancas_ordenadas = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
        assert(var_historico == NULL);
        var_historico = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(var_mudancas_ordenadas);
        tmp_iter_arg_7 = var_mudancas_ordenadas;
        tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_37;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_5 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_38 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_38 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 317;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_39 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_mudanca;
            var_mudanca = tmp_assign_source_39;
            Py_INCREF(var_mudanca);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[96]);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_mudanca);
        tmp_expression_value_50 = var_mudanca;
        tmp_subscript_value_29 = mod_consts[97];
        tmp_args_element_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_29);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 318;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_args_element_value_20 = mod_consts[98];
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_40;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_list_element_10;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_format_value_5;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_format_spec_5;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_kwargs_value_2;
        PyObject *tmp_kw_call_dict_value_0_12;
        PyObject *tmp_format_value_13;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_format_spec_13;
        if (var_historico == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 319;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_51 = var_historico;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[42]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 321;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_mudanca);
        tmp_expression_value_52 = var_mudanca;
        tmp_subscript_value_30 = mod_consts[100];
        tmp_format_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_30);
        if (tmp_format_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_format_spec_5 = mod_consts[46];
        tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
        Py_DECREF(tmp_format_value_5);
        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_5);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[101]);
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 323;
        tmp_list_element_10 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_2, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_list_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_tuple_element_4 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_kw_call_arg_value_0_10;
            PyObject *tmp_list_element_11;
            PyObject *tmp_called_value_44;
            PyObject *tmp_kw_call_arg_value_0_11;
            PyObject *tmp_string_concat_values_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_call_dict_value_0_9;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_kw_call_dict_value_1_3;
            PyObject *tmp_kw_call_dict_value_2_1;
            PyObject *tmp_kw_call_dict_value_0_11;
            PyObject *tmp_kw_call_dict_value_1_5;
            PyObject *tmp_kw_call_dict_value_2_3;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_string_concat_values_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_format_value_8;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_format_spec_8;
            PyList_SET_ITEM(tmp_tuple_element_4, 0, tmp_list_element_10);
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_tuple_element_6 = mod_consts[102];
            tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_format_value_6;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_format_spec_6;
                PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_6);
                CHECK_OBJECT(var_mudanca);
                tmp_expression_value_53 = var_mudanca;
                tmp_subscript_value_31 = mod_consts[103];
                tmp_format_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_31);
                if (tmp_format_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 326;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                tmp_format_spec_6 = mod_consts[46];
                tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
                Py_DECREF(tmp_format_value_6);
                if (tmp_tuple_element_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 326;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_string_concat_values_4);
            goto list_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_kw_call_arg_value_0_11 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_4);
            Py_DECREF(tmp_string_concat_values_4);
            if (tmp_kw_call_arg_value_0_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[104]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_11);

                exception_lineno = 326;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_kw_call_dict_value_0_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[105]);
            if (tmp_kw_call_dict_value_0_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_11);

                exception_lineno = 326;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_kw_call_dict_value_1_3 = mod_consts[26];
            tmp_kw_call_dict_value_2_1 = Py_True;
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 326;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_11};
                PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_9, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_1};
                tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_44, args, kw_values, mod_consts[106]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_11);
            Py_DECREF(tmp_kw_call_dict_value_0_9);
            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_kw_call_arg_value_0_10 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_45;
                PyObject *tmp_kw_call_arg_value_0_12;
                PyObject *tmp_string_concat_values_5;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_kw_call_dict_value_0_10;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_kw_call_dict_value_1_4;
                PyObject *tmp_kw_call_dict_value_2_2;
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_10, 0, tmp_list_element_11);
                tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_called_value_45 == NULL)) {
                    tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                }

                if (tmp_called_value_45 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_10;
                }
                tmp_tuple_element_7 = mod_consts[107];
                tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_format_value_7;
                    PyObject *tmp_expression_value_55;
                    PyObject *tmp_subscript_value_32;
                    PyObject *tmp_format_spec_7;
                    PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_7);
                    CHECK_OBJECT(var_mudanca);
                    tmp_expression_value_55 = var_mudanca;
                    tmp_subscript_value_32 = mod_consts[108];
                    tmp_format_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_32);
                    if (tmp_format_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 327;
                        type_description_1 = "ooooooooooooooo";
                        goto tuple_build_exception_3;
                    }
                    tmp_format_spec_7 = mod_consts[46];
                    tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
                    Py_DECREF(tmp_format_value_7);
                    if (tmp_tuple_element_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 327;
                        type_description_1 = "ooooooooooooooo";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_7);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_string_concat_values_5);
                goto list_build_exception_10;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_kw_call_arg_value_0_12 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_5);
                Py_DECREF(tmp_string_concat_values_5);
                if (tmp_kw_call_arg_value_0_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_10;
                }
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[104]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[104]);
                }

                if (tmp_expression_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_kw_call_arg_value_0_12);

                    exception_lineno = 327;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_10;
                }
                tmp_kw_call_dict_value_0_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[105]);
                if (tmp_kw_call_dict_value_0_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_kw_call_arg_value_0_12);

                    exception_lineno = 327;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_10;
                }
                tmp_kw_call_dict_value_1_4 = mod_consts[26];
                tmp_kw_call_dict_value_2_2 = Py_True;
                frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 327;
                {
                    PyObject *args[] = {tmp_kw_call_arg_value_0_12};
                    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_10, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_2};
                    tmp_list_element_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_45, args, kw_values, mod_consts[106]);
                }

                Py_DECREF(tmp_kw_call_arg_value_0_12);
                Py_DECREF(tmp_kw_call_dict_value_0_10);
                if (tmp_list_element_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 327;
                    type_description_1 = "ooooooooooooooo";
                    goto list_build_exception_10;
                }
                PyList_SET_ITEM(tmp_kw_call_arg_value_0_10, 1, tmp_list_element_11);
            }
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_kw_call_arg_value_0_10);
            goto list_build_exception_9;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            tmp_kw_call_dict_value_0_11 = Py_True;
            tmp_kw_call_dict_value_1_5 = mod_consts[109];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_10);

                exception_lineno = 331;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_kw_call_dict_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[55]);
            if (tmp_kw_call_dict_value_2_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_10);

                exception_lineno = 331;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 324;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_10};
                PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_11, tmp_kw_call_dict_value_1_5, tmp_kw_call_dict_value_2_3};
                tmp_list_element_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_43, args, kw_values, mod_consts[111]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_10);
            Py_DECREF(tmp_kw_call_dict_value_2_3);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_tuple_element_4, 1, tmp_list_element_10);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            CHECK_OBJECT(var_data);
            tmp_expression_value_58 = var_data;
            tmp_format_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[112]);
            if (tmp_format_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_format_spec_8 = mod_consts[46];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(9);
            {
                PyObject *tmp_format_value_9;
                PyObject *tmp_expression_value_59;
                PyObject *tmp_format_spec_9;
                PyObject *tmp_format_value_10;
                PyObject *tmp_expression_value_60;
                PyObject *tmp_format_spec_10;
                PyObject *tmp_format_value_11;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_format_spec_11;
                PyObject *tmp_format_value_12;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_format_spec_12;
                PyTuple_SET_ITEM(tmp_string_concat_values_6, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[113];
                PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_8);
                CHECK_OBJECT(var_data);
                tmp_expression_value_59 = var_data;
                tmp_format_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[114]);
                if (tmp_format_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                tmp_format_spec_9 = mod_consts[46];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
                Py_DECREF(tmp_format_value_9);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_6, 2, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[113];
                PyTuple_SET_ITEM0(tmp_string_concat_values_6, 3, tmp_tuple_element_8);
                CHECK_OBJECT(var_data);
                tmp_expression_value_60 = var_data;
                tmp_format_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[115]);
                if (tmp_format_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                tmp_format_spec_10 = mod_consts[46];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
                Py_DECREF(tmp_format_value_10);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_6, 4, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[116];
                PyTuple_SET_ITEM0(tmp_string_concat_values_6, 5, tmp_tuple_element_8);
                CHECK_OBJECT(var_data);
                tmp_expression_value_61 = var_data;
                tmp_format_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[117]);
                if (tmp_format_value_11 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                tmp_format_spec_11 = mod_consts[46];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
                Py_DECREF(tmp_format_value_11);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_6, 6, tmp_tuple_element_8);
                tmp_tuple_element_8 = mod_consts[118];
                PyTuple_SET_ITEM0(tmp_string_concat_values_6, 7, tmp_tuple_element_8);
                CHECK_OBJECT(var_data);
                tmp_expression_value_62 = var_data;
                tmp_format_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[119]);
                if (tmp_format_value_12 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                tmp_format_spec_12 = mod_consts[46];
                tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
                Py_DECREF(tmp_format_value_12);
                if (tmp_tuple_element_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_1 = "ooooooooooooooo";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_6, 8, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_string_concat_values_6);
            goto list_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_args_element_value_22 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_6);
            Py_DECREF(tmp_string_concat_values_6);
            if (tmp_args_element_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 333;
            tmp_list_element_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooooooooooooooo";
                goto list_build_exception_9;
            }
            PyList_SET_ITEM(tmp_tuple_element_4, 2, tmp_list_element_10);
        }
        goto list_build_noexception_10;
        // Exception handling pass through code for list_build:
        list_build_exception_9:;
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_tuple_element_4);
        goto try_except_handler_14;
        // Finished with no exception for list_build:
        list_build_noexception_10:;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_4);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[120]);
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 321;
        tmp_kw_call_arg_value_0_9 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_1, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_kw_call_arg_value_0_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 321;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(var_mudanca);
        tmp_expression_value_63 = var_mudanca;
        tmp_subscript_value_33 = mod_consts[121];
        tmp_format_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_33);
        if (tmp_format_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_arg_value_0_9);

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_format_spec_13 = mod_consts[46];
        tmp_kw_call_dict_value_0_12 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
        Py_DECREF(tmp_format_value_13);
        if (tmp_kw_call_dict_value_0_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_kw_call_arg_value_0_9);

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 320;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_40, args, kw_values, mod_consts[122]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_9);
        Py_DECREF(tmp_kw_call_dict_value_0_12);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 320;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 319;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 317;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        if (var_lista_regras == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_13 = var_lista_regras;
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[124], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        if (var_historico == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_14 = var_historico;
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[124], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_9;
        tmp_called_value_47 = LOOKUP_BUILTIN(mod_consts[36]);
        assert(tmp_called_value_47 != NULL);
        tmp_tuple_element_9 = mod_consts[126];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_14;
            PyObject *tmp_format_spec_14;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_9);
            tmp_format_value_14 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24]);

            if (unlikely(tmp_format_value_14 == NULL)) {
                tmp_format_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
            }

            if (tmp_format_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_14 = mod_consts[46];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_23 = PyUnicode_Join(mod_consts[46], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6b910bf456fec4123470be53a3d65464->m_frame.f_lineno = 346;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b910bf456fec4123470be53a3d65464, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b910bf456fec4123470be53a3d65464->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b910bf456fec4123470be53a3d65464, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b910bf456fec4123470be53a3d65464,
        type_description_1,
        var_all,
        var_transaction,
        var_regras,
        var_lista_regras,
        var_colunas_dict,
        var_operacoes_dict,
        var_inverted_colunas,
        var_inverted_operacoes,
        var_regra,
        var_mudancas,
        var_extrair_data,
        var_mudancas_ordenadas,
        var_historico,
        var_mudanca,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_6b910bf456fec4123470be53a3d65464 == cache_frame_6b910bf456fec4123470be53a3d65464) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b910bf456fec4123470be53a3d65464);
        cache_frame_6b910bf456fec4123470be53a3d65464 = NULL;
    }

    assertFrameObject(frame_6b910bf456fec4123470be53a3d65464);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_all);
    var_all = NULL;
    Py_XDECREF(var_transaction);
    var_transaction = NULL;
    CHECK_OBJECT(var_regras);
    Py_DECREF(var_regras);
    var_regras = NULL;
    Py_XDECREF(var_lista_regras);
    var_lista_regras = NULL;
    CHECK_OBJECT(var_colunas_dict);
    Py_DECREF(var_colunas_dict);
    var_colunas_dict = NULL;
    CHECK_OBJECT(var_operacoes_dict);
    Py_DECREF(var_operacoes_dict);
    var_operacoes_dict = NULL;
    CHECK_OBJECT(var_inverted_colunas);
    Py_DECREF(var_inverted_colunas);
    var_inverted_colunas = NULL;
    CHECK_OBJECT(var_inverted_operacoes);
    Py_DECREF(var_inverted_operacoes);
    var_inverted_operacoes = NULL;
    Py_XDECREF(var_regra);
    var_regra = NULL;
    CHECK_OBJECT(var_mudancas);
    Py_DECREF(var_mudancas);
    var_mudancas = NULL;
    CHECK_OBJECT(var_extrair_data);
    Py_DECREF(var_extrair_data);
    var_extrair_data = NULL;
    CHECK_OBJECT(var_mudancas_ordenadas);
    Py_DECREF(var_mudancas_ordenadas);
    var_mudancas_ordenadas = NULL;
    Py_XDECREF(var_historico);
    var_historico = NULL;
    Py_XDECREF(var_mudanca);
    var_mudanca = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_all);
    var_all = NULL;
    Py_XDECREF(var_transaction);
    var_transaction = NULL;
    Py_XDECREF(var_regras);
    var_regras = NULL;
    Py_XDECREF(var_lista_regras);
    var_lista_regras = NULL;
    Py_XDECREF(var_colunas_dict);
    var_colunas_dict = NULL;
    Py_XDECREF(var_operacoes_dict);
    var_operacoes_dict = NULL;
    Py_XDECREF(var_inverted_colunas);
    var_inverted_colunas = NULL;
    Py_XDECREF(var_inverted_operacoes);
    var_inverted_operacoes = NULL;
    Py_XDECREF(var_regra);
    var_regra = NULL;
    Py_XDECREF(var_mudancas);
    var_mudancas = NULL;
    Py_XDECREF(var_extrair_data);
    var_extrair_data = NULL;
    Py_XDECREF(var_mudancas_ordenadas);
    var_mudancas_ordenadas = NULL;
    Py_XDECREF(var_historico);
    var_historico = NULL;
    Py_XDECREF(var_mudanca);
    var_mudanca = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pages$produtos$edit_tr$$$function__4_on_visible$$$function__1_extrair_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_mudanca = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_4cb1d282c2d24ce66ae24ea3cf6d570a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a)) {
        Py_XDECREF(cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a = MAKE_FUNCTION_FRAME(tstate, codeobj_4cb1d282c2d24ce66ae24ea3cf6d570a, module_pages$produtos$edit_tr, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a->m_type_description == NULL);
    frame_4cb1d282c2d24ce66ae24ea3cf6d570a = cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4cb1d282c2d24ce66ae24ea3cf6d570a);
    assert(Py_REFCNT(frame_4cb1d282c2d24ce66ae24ea3cf6d570a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[96]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mudanca);
        tmp_expression_value_2 = par_mudanca;
        tmp_subscript_value_1 = mod_consts[97];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[98];
        frame_4cb1d282c2d24ce66ae24ea3cf6d570a->m_frame.f_lineno = 307;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cb1d282c2d24ce66ae24ea3cf6d570a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cb1d282c2d24ce66ae24ea3cf6d570a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cb1d282c2d24ce66ae24ea3cf6d570a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cb1d282c2d24ce66ae24ea3cf6d570a,
        type_description_1,
        par_mudanca,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_4cb1d282c2d24ce66ae24ea3cf6d570a == cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a);
        cache_frame_4cb1d282c2d24ce66ae24ea3cf6d570a = NULL;
    }

    assertFrameObject(frame_4cb1d282c2d24ce66ae24ea3cf6d570a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_data);
    tmp_return_value = var_data;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
    goto function_return_exit;
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_mudanca);
    Py_DECREF(par_mudanca);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mudanca);
    Py_DECREF(par_mudanca);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__1_salvar_extrato() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pages$produtos$edit_tr$$$function__1_salvar_extrato,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d697629a552c05579e6992ec9dd1710b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pages$produtos$edit_tr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__2_onclick_regra() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pages$produtos$edit_tr$$$function__2_onclick_regra,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_731edd86e2a3500fdd4e393a816be71d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pages$produtos$edit_tr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__3_onclick_deleteregra() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pages$produtos$edit_tr$$$function__3_onclick_deleteregra,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f48bbe0005f36a8632d8deabffe2f7a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pages$produtos$edit_tr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__4_on_visible() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pages$produtos$edit_tr$$$function__4_on_visible,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b910bf456fec4123470be53a3d65464,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pages$produtos$edit_tr,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pages$produtos$edit_tr$$$function__4_on_visible$$$function__1_extrair_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pages$produtos$edit_tr$$$function__4_on_visible$$$function__1_extrair_data,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_4cb1d282c2d24ce66ae24ea3cf6d570a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pages$produtos$edit_tr,
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

function_impl_code functable_pages$produtos$edit_tr[] = {
    impl_pages$produtos$edit_tr$$$function__4_on_visible$$$function__1_extrair_data,
    impl_pages$produtos$edit_tr$$$function__1_salvar_extrato,
    impl_pages$produtos$edit_tr$$$function__2_onclick_regra,
    impl_pages$produtos$edit_tr$$$function__3_onclick_deleteregra,
    impl_pages$produtos$edit_tr$$$function__4_on_visible,
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

    function_impl_code *current = functable_pages$produtos$edit_tr;
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

    if (offset > sizeof(functable_pages$produtos$edit_tr) || offset < 0) {
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
        functable_pages$produtos$edit_tr[offset],
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
        module_pages$produtos$edit_tr,
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
PyObject *modulecode_pages$produtos$edit_tr(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pages.produtos.edit_tr");

    // Store the module for future use.
    module_pages$produtos$edit_tr = module;

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
        PRINT_STRING("pages.produtos.edit_tr: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pages.produtos.edit_tr: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpages$produtos$edit_tr\n");

    moduledict_pages$produtos$edit_tr = MODULE_DICT(module_pages$produtos$edit_tr);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pages$produtos$edit_tr,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pages$produtos$edit_tr,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[46]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pages$produtos$edit_tr,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pages$produtos$edit_tr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pages$produtos$edit_tr,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pages$produtos$edit_tr);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pages$produtos$edit_tr);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_6cf20c285785c8f6c0af2d56d74f952a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_2);
    }
    frame_6cf20c285785c8f6c0af2d56d74f952a = MAKE_MODULE_FRAME(codeobj_6cf20c285785c8f6c0af2d56d74f952a, module_pages$produtos$edit_tr);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6cf20c285785c8f6c0af2d56d74f952a);
    assert(Py_REFCNT(frame_6cf20c285785c8f6c0af2d56d74f952a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[130], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[131], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[95];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pages$produtos$edit_tr;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[133];
        tmp_level_value_1 = mod_consts[109];
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[95],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[134];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pages$produtos$edit_tr;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[135];
        tmp_level_value_2 = mod_consts[109];
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[48],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[48]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[45],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[45]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[43],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[43]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[44],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[44]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[136],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[136]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[137],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[137]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[138],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[138]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[139],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[139]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[140],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[140]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[141],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[141]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[142],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[142]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[143],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[143]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_14 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[104],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[104]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_15 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[110],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[110]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_16 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[49],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[49]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_17 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[54],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[54]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_18 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[67],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[67]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_19 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[76],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[76]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_20 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[144],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[144]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_21 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[81],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[81]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_25);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[13];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pages$produtos$edit_tr;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[109];
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 25;
        tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[9];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pages$produtos$edit_tr;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[109];
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 26;
        tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[145];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pages$produtos$edit_tr;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[146];
        tmp_level_value_5 = mod_consts[26];
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 27;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[147],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[9];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pages$produtos$edit_tr;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[148];
        tmp_level_value_6 = mod_consts[109];
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 29;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_pages$produtos$edit_tr,
                mod_consts[10],
                mod_consts[109]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[10]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[46];
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 35;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 36;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[136]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[140]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[151]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 37;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[152]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 38;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 39;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 40;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 42;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[15]);

        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 43;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 44;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 45;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 46;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[150]);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_pages$produtos$edit_tr$$$function__1_salvar_extrato();

        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_pages$produtos$edit_tr$$$function__2_onclick_regra();

        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_pages$produtos$edit_tr$$$function__3_onclick_deleteregra();

        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_16;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 80;
        tmp_list_element_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[154]);

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_3);
        tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_list_element_3 == NULL)) {
            tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_list_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_3);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 80;
        tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(12);
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_list_element_4;
            PyObject *tmp_called_value_18;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_list_element_5;
            PyObject *tmp_called_value_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_list_element_6;
            PyObject *tmp_called_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_list_element_7;
            PyObject *tmp_called_value_24;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_list_element_8;
            PyObject *tmp_called_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_list_element_9;
            PyObject *tmp_called_value_28;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_list_element_10;
            PyObject *tmp_called_value_30;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_list_element_11;
            PyObject *tmp_called_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_list_element_12;
            PyObject *tmp_called_value_34;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_list_element_13;
            PyObject *tmp_called_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_list_element_14;
            PyObject *tmp_called_value_38;
            PyObject *tmp_kw_call_value_0_2;
            PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_2);
            tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_17 == NULL)) {
                tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_2;
            }
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 81;
            tmp_list_element_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[155]);

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_2;
            }
            tmp_args_element_value_4 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_4, 0, tmp_list_element_4);
            tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_list_element_4 == NULL)) {
                tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            if (tmp_list_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_3;
            }
            PyList_SET_ITEM0(tmp_args_element_value_4, 1, tmp_list_element_4);
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_args_element_value_4);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 81;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 1, tmp_list_element_2);
            tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_19 == NULL)) {
                tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 82;
            tmp_list_element_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[156]);

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            tmp_args_element_value_5 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_5, 0, tmp_list_element_5);
            tmp_list_element_5 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_list_element_5 == NULL)) {
                tmp_list_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
            }

            if (tmp_list_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_4;
            }
            PyList_SET_ITEM0(tmp_args_element_value_5, 1, tmp_list_element_5);
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_args_element_value_5);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 82;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 2, tmp_list_element_2);
            tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_21 == NULL)) {
                tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_2;
            }
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 83;
            tmp_list_element_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[157]);

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_2;
            }
            tmp_args_element_value_6 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_6, 0, tmp_list_element_6);
            tmp_list_element_6 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[3]);

            if (unlikely(tmp_list_element_6 == NULL)) {
                tmp_list_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
            }

            if (tmp_list_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_5;
            }
            PyList_SET_ITEM0(tmp_args_element_value_6, 1, tmp_list_element_6);
            goto list_build_noexception_4;
            // Exception handling pass through code for list_build:
            list_build_exception_5:;
            Py_DECREF(tmp_args_element_value_6);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_4:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 83;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 3, tmp_list_element_2);
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_2;
            }
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 84;
            tmp_list_element_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[158]);

            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_2;
            }
            tmp_args_element_value_7 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_7, 0, tmp_list_element_7);
            tmp_list_element_7 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_list_element_7 == NULL)) {
                tmp_list_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
            }

            if (tmp_list_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_6;
            }
            PyList_SET_ITEM0(tmp_args_element_value_7, 1, tmp_list_element_7);
            goto list_build_noexception_5;
            // Exception handling pass through code for list_build:
            list_build_exception_6:;
            Py_DECREF(tmp_args_element_value_7);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_5:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 84;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 4, tmp_list_element_2);
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_2;
            }
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 85;
            tmp_list_element_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[159]);

            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_2;
            }
            tmp_args_element_value_8 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_8, 0, tmp_list_element_8);
            tmp_list_element_8 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[5]);

            if (unlikely(tmp_list_element_8 == NULL)) {
                tmp_list_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
            }

            if (tmp_list_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_7;
            }
            PyList_SET_ITEM0(tmp_args_element_value_8, 1, tmp_list_element_8);
            goto list_build_noexception_6;
            // Exception handling pass through code for list_build:
            list_build_exception_7:;
            Py_DECREF(tmp_args_element_value_8);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_6:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 85;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 5, tmp_list_element_2);
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 86;
            tmp_list_element_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[160]);

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            tmp_args_element_value_9 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_9, 0, tmp_list_element_9);
            tmp_list_element_9 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_list_element_9 == NULL)) {
                tmp_list_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
            }

            if (tmp_list_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_8;
            }
            PyList_SET_ITEM0(tmp_args_element_value_9, 1, tmp_list_element_9);
            goto list_build_noexception_7;
            // Exception handling pass through code for list_build:
            list_build_exception_8:;
            Py_DECREF(tmp_args_element_value_9);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_7:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 86;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 6, tmp_list_element_2);
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_2;
            }
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 87;
            tmp_list_element_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[161]);

            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_2;
            }
            tmp_args_element_value_10 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_10, 0, tmp_list_element_10);
            tmp_list_element_10 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[7]);

            if (unlikely(tmp_list_element_10 == NULL)) {
                tmp_list_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
            }

            if (tmp_list_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_9;
            }
            PyList_SET_ITEM0(tmp_args_element_value_10, 1, tmp_list_element_10);
            goto list_build_noexception_8;
            // Exception handling pass through code for list_build:
            list_build_exception_9:;
            Py_DECREF(tmp_args_element_value_10);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_8:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 87;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 7, tmp_list_element_2);
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_2;
            }
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 88;
            tmp_list_element_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[162]);

            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_2;
            }
            tmp_args_element_value_11 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_11, 0, tmp_list_element_11);
            tmp_list_element_11 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[8]);

            if (unlikely(tmp_list_element_11 == NULL)) {
                tmp_list_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
            }

            if (tmp_list_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_10;
            }
            PyList_SET_ITEM0(tmp_args_element_value_11, 1, tmp_list_element_11);
            goto list_build_noexception_9;
            // Exception handling pass through code for list_build:
            list_build_exception_10:;
            Py_DECREF(tmp_args_element_value_11);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_9:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 88;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 8, tmp_list_element_2);
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 89;
            tmp_list_element_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[163]);

            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            tmp_args_element_value_12 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_12, 0, tmp_list_element_12);
            tmp_list_element_12 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_list_element_12 == NULL)) {
                tmp_list_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
            }

            if (tmp_list_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_11;
            }
            PyList_SET_ITEM0(tmp_args_element_value_12, 1, tmp_list_element_12);
            goto list_build_noexception_10;
            // Exception handling pass through code for list_build:
            list_build_exception_11:;
            Py_DECREF(tmp_args_element_value_12);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_10:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 89;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 9, tmp_list_element_2);
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_2;
            }
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 90;
            tmp_list_element_13 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[164]);

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_2;
            }
            tmp_args_element_value_13 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM(tmp_args_element_value_13, 0, tmp_list_element_13);
            tmp_list_element_13 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_list_element_13 == NULL)) {
                tmp_list_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
            }

            if (tmp_list_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_12;
            }
            PyList_SET_ITEM0(tmp_args_element_value_13, 1, tmp_list_element_13);
            goto list_build_noexception_11;
            // Exception handling pass through code for list_build:
            list_build_exception_12:;
            Py_DECREF(tmp_args_element_value_13);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_11:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 90;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 10, tmp_list_element_2);
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_2;
            }
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_2;
            }
            tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[153]);

            if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
                tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[153]);
            }

            if (tmp_kw_call_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_2;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 92;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
                tmp_list_element_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_38, mod_consts[165], kw_values, mod_consts[166]);
            }

            if (tmp_list_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto list_build_exception_2;
            }
            tmp_args_element_value_14 = MAKE_LIST_EMPTY(2);
            {
                PyObject *tmp_called_value_39;
                PyObject *tmp_kw_call_value_0_3;
                PyObject *tmp_expression_value_2;
                PyList_SET_ITEM(tmp_args_element_value_14, 0, tmp_list_element_14);
                tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_called_value_39 == NULL)) {
                    tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
                }

                if (tmp_called_value_39 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;

                    goto list_build_exception_13;
                }
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;

                    goto list_build_exception_13;
                }
                tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
                if (tmp_kw_call_value_0_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;

                    goto list_build_exception_13;
                }
                frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 93;
                {
                    PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
                    tmp_list_element_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_39, mod_consts[167], kw_values, mod_consts[166]);
                }

                Py_DECREF(tmp_kw_call_value_0_3);
                if (tmp_list_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 93;

                    goto list_build_exception_13;
                }
                PyList_SET_ITEM(tmp_args_element_value_14, 1, tmp_list_element_14);
            }
            goto list_build_noexception_12;
            // Exception handling pass through code for list_build:
            list_build_exception_13:;
            Py_DECREF(tmp_args_element_value_14);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_12:;
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 91;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_args_element_value_2, 11, tmp_list_element_2);
        }
        goto list_build_noexception_13;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_args_element_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_13:;
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 78;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 77;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_tuple_element_1, 0, tmp_list_element_1);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[168]);
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 75;
        tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 103;
        tmp_assign_source_48 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[171]);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 111;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_41, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[171]);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_42;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_list_element_15;
        PyObject *tmp_called_value_43;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_list_element_16;
        PyObject *tmp_called_value_44;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_2;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = mod_consts[109];
        tmp_kw_call_value_1_1 = mod_consts[172];
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[142]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = mod_consts[173];
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[169]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 126;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_2};

            tmp_list_element_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_44, kw_values, mod_consts[174]);
        }

        if (tmp_list_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_kw_call_value_0_7;
            PyObject *tmp_kw_call_value_1_3;
            PyObject *tmp_called_value_46;
            PyObject *tmp_kw_call_value_0_8;
            PyObject *tmp_kw_call_value_1_4;
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 0, tmp_list_element_16);
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_14;
            }
            tmp_kw_call_value_0_7 = mod_consts[175];
            tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
                tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_kw_call_value_1_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto list_build_exception_14;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 130;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_3};

                tmp_list_element_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_45, kw_values, mod_consts[174]);
            }

            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 1, tmp_list_element_16);
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto list_build_exception_14;
            }
            tmp_kw_call_value_0_8 = mod_consts[176];
            tmp_kw_call_value_1_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_kw_call_value_1_4 == NULL)) {
                tmp_kw_call_value_1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[125]);
            }

            if (tmp_kw_call_value_1_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto list_build_exception_14;
            }
            frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 134;
            {
                PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_4};

                tmp_list_element_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_46, kw_values, mod_consts[174]);
            }

            if (tmp_list_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto list_build_exception_14;
            }
            PyList_SET_ITEM(tmp_kw_call_value_2_1, 2, tmp_list_element_16);
        }
        goto list_build_noexception_14;
        // Exception handling pass through code for list_build:
        list_build_exception_14:;
        Py_DECREF(tmp_kw_call_value_2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_14:;
        tmp_kw_call_value_3_1 = Py_True;
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 122;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_list_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_43, kw_values, mod_consts[177]);
        }

        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_list_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_0_4, 0, tmp_list_element_15);
        tmp_kw_call_value_1_5 = Py_True;
        tmp_kw_call_value_2_2 = Py_False;
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 120;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_5, tmp_kw_call_value_2_2};

            tmp_assign_source_50 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_42, kw_values, mod_consts[178]);
        }

        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_pages$produtos$edit_tr$$$function__4_on_visible();

        UPDATE_STRING_DICT1(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_51);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[180]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[42]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[181];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 352;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[182];
        tmp_dict_value_1 = mod_consts[183];
        tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[184];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[185];
        tmp_dict_value_1 = mod_consts[186];
        tmp_res = PyDict_SetItem(tmp_args_element_value_15, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame.f_lineno = 350;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6cf20c285785c8f6c0af2d56d74f952a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cf20c285785c8f6c0af2d56d74f952a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cf20c285785c8f6c0af2d56d74f952a, exception_lineno);
    }



    assertFrameObject(frame_6cf20c285785c8f6c0af2d56d74f952a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pages.produtos.edit_tr", false);

    Py_INCREF(module_pages$produtos$edit_tr);
    return module_pages$produtos$edit_tr;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pages$produtos$edit_tr, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pages$produtos$edit_tr", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
