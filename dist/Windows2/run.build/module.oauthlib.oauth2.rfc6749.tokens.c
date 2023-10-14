/* Generated code for Python module 'oauthlib.oauth2.rfc6749.tokens'
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

/* The "module_oauthlib$oauth2$rfc6749$tokens" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_oauthlib$oauth2$rfc6749$tokens;
PyDictObject *moduledict_oauthlib$oauth2$rfc6749$tokens;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[190];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[190];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("oauthlib.oauth2.rfc6749.tokens"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 190; i++) {
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
void checkModuleConstants_oauthlib$oauth2$rfc6749$tokens(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 190; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2ae111ed832c0b892e66e4fd56075d54;
static PyCodeObject *codeobj_456e7366229490933a4ace51d721eb05;
static PyCodeObject *codeobj_1dee9ffa4f7895a4804d2c6bb6b81d3c;
static PyCodeObject *codeobj_000b5b662e8d8aea69a8900c76dce6aa;
static PyCodeObject *codeobj_79c983f420d287486db765c424f7818f;
static PyCodeObject *codeobj_2d71410af516053ddc40226d7508f96a;
static PyCodeObject *codeobj_cd22c790b75133cbb38bf989656a86cc;
static PyCodeObject *codeobj_14f9e5d0e3d59c67f5d6fee73abdf8df;
static PyCodeObject *codeobj_bde18b9e263de8c400c83a7b37f62838;
static PyCodeObject *codeobj_c4ed11e5fc2022b43684e8d73552f181;
static PyCodeObject *codeobj_f292b9f5bfd193d941e019f2c43fef46;
static PyCodeObject *codeobj_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560;
static PyCodeObject *codeobj_1bf1bae9b12e24cf4df4680d1d07eebb;
static PyCodeObject *codeobj_eb8a76ba559aa9af8b2088724458c121;
static PyCodeObject *codeobj_22fd672e36fa469ade61bb4f24c3782c;
static PyCodeObject *codeobj_c3928836a3a5ab1862b7334914a12e60;
static PyCodeObject *codeobj_83cb5fc997b58bcbd2796d1a085ef387;
static PyCodeObject *codeobj_2676d6ea9af23acf784d05cf2737457f;
static PyCodeObject *codeobj_10146949a8adc87ac0e77fbdf5309ca9;
static PyCodeObject *codeobj_63494842a4cbc4ac6a475e7eb0369e25;
static PyCodeObject *codeobj_0aacb41d8bf89cfe3baac5ae53987cd3;
static PyCodeObject *codeobj_94ae44ecd69be91fbd0b1a972ab90731;
static PyCodeObject *codeobj_4b4e725ca6f7572eea289518c9940af7;
static PyCodeObject *codeobj_84d0433882c36e76cc3ff2ad3dc9c50b;
static PyCodeObject *codeobj_f781706b2babeda3379a023091251b6b;
static PyCodeObject *codeobj_6b4eda2e0906ac8e597e4978241b3ca6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[171]); CHECK_OBJECT(module_filename_obj);
    codeobj_2ae111ed832c0b892e66e4fd56075d54 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[172], mod_consts[172], NULL, NULL, 0, 0, 0);
    codeobj_456e7366229490933a4ace51d721eb05 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[173], NULL, 0, 0, 0);
    codeobj_1dee9ffa4f7895a4804d2c6bb6b81d3c = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[173], NULL, 0, 0, 0);
    codeobj_000b5b662e8d8aea69a8900c76dce6aa = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[174], NULL, 3, 0, 0);
    codeobj_79c983f420d287486db765c424f7818f = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[175], mod_consts[173], 3, 0, 0);
    codeobj_2d71410af516053ddc40226d7508f96a = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[176], NULL, 5, 0, 0);
    codeobj_cd22c790b75133cbb38bf989656a86cc = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[177], NULL, 1, 0, 0);
    codeobj_14f9e5d0e3d59c67f5d6fee73abdf8df = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[178], NULL, 3, 0, 0);
    codeobj_bde18b9e263de8c400c83a7b37f62838 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[179], NULL, 2, 0, 0);
    codeobj_c4ed11e5fc2022b43684e8d73552f181 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[179], NULL, 2, 0, 0);
    codeobj_f292b9f5bfd193d941e019f2c43fef46 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[180], NULL, 1, 0, 0);
    codeobj_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[177], NULL, 1, 0, 0);
    codeobj_1bf1bae9b12e24cf4df4680d1d07eebb = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[177], NULL, 1, 0, 0);
    codeobj_eb8a76ba559aa9af8b2088724458c121 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[177], NULL, 1, 0, 0);
    codeobj_22fd672e36fa469ade61bb4f24c3782c = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], mod_consts[181], NULL, 2, 0, 0);
    codeobj_c3928836a3a5ab1862b7334914a12e60 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[182], NULL, 2, 0, 0);
    codeobj_83cb5fc997b58bcbd2796d1a085ef387 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[183], NULL, 2, 0, 0);
    codeobj_2676d6ea9af23acf784d05cf2737457f = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[148], mod_consts[148], mod_consts[184], NULL, 11, 0, 0);
    codeobj_10146949a8adc87ac0e77fbdf5309ca9 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[185], NULL, 2, 0, 0);
    codeobj_63494842a4cbc4ac6a475e7eb0369e25 = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[177], NULL, 1, 0, 0);
    codeobj_0aacb41d8bf89cfe3baac5ae53987cd3 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[177], NULL, 1, 0, 0);
    codeobj_94ae44ecd69be91fbd0b1a972ab90731 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[177], NULL, 1, 0, 0);
    codeobj_4b4e725ca6f7572eea289518c9940af7 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[186], NULL, 1, 0, 0);
    codeobj_84d0433882c36e76cc3ff2ad3dc9c50b = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[61], mod_consts[61], mod_consts[187], mod_consts[188], 1, 0, 0);
    codeobj_f781706b2babeda3379a023091251b6b = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[179], NULL, 2, 0, 0);
    codeobj_6b4eda2e0906ac8e597e4978241b3ca6 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[189], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__10_prepare_bearer_uri();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__11_prepare_bearer_headers(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__12_prepare_bearer_body(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__13_random_token_generator(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator$$$function__1_signed_token_generator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__15_get_token_from_header();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__16___call__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__17_validate_request();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__18_estimate_type();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__19___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__1___init__(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__20_create_token(PyObject *defaults);


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__21_validate_request();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__22_estimate_type();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes();


static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__9_prepare_mac_header(PyObject *defaults);


// The module function definitions.
static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *par_old_scope = python_pars[2];
    struct Nuitka_FrameObject *frame_79c983f420d287486db765c424f7818f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_79c983f420d287486db765c424f7818f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79c983f420d287486db765c424f7818f)) {
        Py_XDECREF(cache_frame_79c983f420d287486db765c424f7818f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79c983f420d287486db765c424f7818f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79c983f420d287486db765c424f7818f = MAKE_FUNCTION_FRAME(tstate, codeobj_79c983f420d287486db765c424f7818f, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79c983f420d287486db765c424f7818f->m_type_description == NULL);
    frame_79c983f420d287486db765c424f7818f = cache_frame_79c983f420d287486db765c424f7818f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_79c983f420d287486db765c424f7818f);
    assert(Py_REFCNT(frame_79c983f420d287486db765c424f7818f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 25;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_oauthlib$oauth2$rfc6749$tokens, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_79c983f420d287486db765c424f7818f->m_frame.f_lineno = 25;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        tmp_cmp_expr_left_1 = mod_consts[3];
        CHECK_OBJECT(par_params);
        tmp_cmp_expr_right_1 = par_params;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_params);
        tmp_expression_value_1 = par_params;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_subscript_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 27;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_expression_value_3 = par_params;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_79c983f420d287486db765c424f7818f->m_frame.f_lineno = 28;
        tmp_set_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_set_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_old_scope);
        tmp_cmp_expr_left_2 = par_old_scope;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_old_scope);
        tmp_args_element_value_3 = par_old_scope;
        frame_79c983f420d287486db765c424f7818f->m_frame.f_lineno = 30;
        tmp_set_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[5], tmp_args_element_value_3);
        if (tmp_set_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[6], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[2]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[6]);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[2], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[2]);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[6], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79c983f420d287486db765c424f7818f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79c983f420d287486db765c424f7818f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79c983f420d287486db765c424f7818f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79c983f420d287486db765c424f7818f,
        type_description_1,
        par_self,
        par_params,
        par_old_scope,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_79c983f420d287486db765c424f7818f == cache_frame_79c983f420d287486db765c424f7818f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79c983f420d287486db765c424f7818f);
        cache_frame_79c983f420d287486db765c424f7818f = NULL;
    }

    assertFrameObject(frame_79c983f420d287486db765c424f7818f);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_old_scope);
    Py_DECREF(par_old_scope);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_old_scope);
    Py_DECREF(par_old_scope);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0aacb41d8bf89cfe3baac5ae53987cd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3)) {
        Py_XDECREF(cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3 = MAKE_FUNCTION_FRAME(tstate, codeobj_0aacb41d8bf89cfe3baac5ae53987cd3, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3->m_type_description == NULL);
    frame_0aacb41d8bf89cfe3baac5ae53987cd3 = cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0aacb41d8bf89cfe3baac5ae53987cd3);
    assert(Py_REFCNT(frame_0aacb41d8bf89cfe3baac5ae53987cd3) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 40;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_0aacb41d8bf89cfe3baac5ae53987cd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0aacb41d8bf89cfe3baac5ae53987cd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0aacb41d8bf89cfe3baac5ae53987cd3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0aacb41d8bf89cfe3baac5ae53987cd3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0aacb41d8bf89cfe3baac5ae53987cd3 == cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3);
        cache_frame_0aacb41d8bf89cfe3baac5ae53987cd3 = NULL;
    }

    assertFrameObject(frame_0aacb41d8bf89cfe3baac5ae53987cd3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1bf1bae9b12e24cf4df4680d1d07eebb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb)) {
        Py_XDECREF(cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb = MAKE_FUNCTION_FRAME(tstate, codeobj_1bf1bae9b12e24cf4df4680d1d07eebb, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb->m_type_description == NULL);
    frame_1bf1bae9b12e24cf4df4680d1d07eebb = cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1bf1bae9b12e24cf4df4680d1d07eebb);
    assert(Py_REFCNT(frame_1bf1bae9b12e24cf4df4680d1d07eebb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1bf1bae9b12e24cf4df4680d1d07eebb->m_frame.f_lineno = 44;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_1bf1bae9b12e24cf4df4680d1d07eebb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bf1bae9b12e24cf4df4680d1d07eebb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bf1bae9b12e24cf4df4680d1d07eebb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bf1bae9b12e24cf4df4680d1d07eebb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1bf1bae9b12e24cf4df4680d1d07eebb == cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb);
        cache_frame_1bf1bae9b12e24cf4df4680d1d07eebb = NULL;
    }

    assertFrameObject(frame_1bf1bae9b12e24cf4df4680d1d07eebb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eb8a76ba559aa9af8b2088724458c121;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb8a76ba559aa9af8b2088724458c121 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb8a76ba559aa9af8b2088724458c121)) {
        Py_XDECREF(cache_frame_eb8a76ba559aa9af8b2088724458c121);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb8a76ba559aa9af8b2088724458c121 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb8a76ba559aa9af8b2088724458c121 = MAKE_FUNCTION_FRAME(tstate, codeobj_eb8a76ba559aa9af8b2088724458c121, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb8a76ba559aa9af8b2088724458c121->m_type_description == NULL);
    frame_eb8a76ba559aa9af8b2088724458c121 = cache_frame_eb8a76ba559aa9af8b2088724458c121;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_eb8a76ba559aa9af8b2088724458c121);
    assert(Py_REFCNT(frame_eb8a76ba559aa9af8b2088724458c121) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_eb8a76ba559aa9af8b2088724458c121, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb8a76ba559aa9af8b2088724458c121->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb8a76ba559aa9af8b2088724458c121, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb8a76ba559aa9af8b2088724458c121,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eb8a76ba559aa9af8b2088724458c121 == cache_frame_eb8a76ba559aa9af8b2088724458c121) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb8a76ba559aa9af8b2088724458c121);
        cache_frame_eb8a76ba559aa9af8b2088724458c121 = NULL;
    }

    assertFrameObject(frame_eb8a76ba559aa9af8b2088724458c121);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_63494842a4cbc4ac6a475e7eb0369e25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_63494842a4cbc4ac6a475e7eb0369e25 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_63494842a4cbc4ac6a475e7eb0369e25)) {
        Py_XDECREF(cache_frame_63494842a4cbc4ac6a475e7eb0369e25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63494842a4cbc4ac6a475e7eb0369e25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63494842a4cbc4ac6a475e7eb0369e25 = MAKE_FUNCTION_FRAME(tstate, codeobj_63494842a4cbc4ac6a475e7eb0369e25, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63494842a4cbc4ac6a475e7eb0369e25->m_type_description == NULL);
    frame_63494842a4cbc4ac6a475e7eb0369e25 = cache_frame_63494842a4cbc4ac6a475e7eb0369e25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_63494842a4cbc4ac6a475e7eb0369e25);
    assert(Py_REFCNT(frame_63494842a4cbc4ac6a475e7eb0369e25) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_63494842a4cbc4ac6a475e7eb0369e25->m_frame.f_lineno = 52;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_63494842a4cbc4ac6a475e7eb0369e25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63494842a4cbc4ac6a475e7eb0369e25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63494842a4cbc4ac6a475e7eb0369e25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63494842a4cbc4ac6a475e7eb0369e25,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_63494842a4cbc4ac6a475e7eb0369e25 == cache_frame_63494842a4cbc4ac6a475e7eb0369e25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63494842a4cbc4ac6a475e7eb0369e25);
        cache_frame_63494842a4cbc4ac6a475e7eb0369e25 = NULL;
    }

    assertFrameObject(frame_63494842a4cbc4ac6a475e7eb0369e25);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_94ae44ecd69be91fbd0b1a972ab90731;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94ae44ecd69be91fbd0b1a972ab90731 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94ae44ecd69be91fbd0b1a972ab90731)) {
        Py_XDECREF(cache_frame_94ae44ecd69be91fbd0b1a972ab90731);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94ae44ecd69be91fbd0b1a972ab90731 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94ae44ecd69be91fbd0b1a972ab90731 = MAKE_FUNCTION_FRAME(tstate, codeobj_94ae44ecd69be91fbd0b1a972ab90731, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94ae44ecd69be91fbd0b1a972ab90731->m_type_description == NULL);
    frame_94ae44ecd69be91fbd0b1a972ab90731 = cache_frame_94ae44ecd69be91fbd0b1a972ab90731;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94ae44ecd69be91fbd0b1a972ab90731);
    assert(Py_REFCNT(frame_94ae44ecd69be91fbd0b1a972ab90731) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_list_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_94ae44ecd69be91fbd0b1a972ab90731, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94ae44ecd69be91fbd0b1a972ab90731->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94ae44ecd69be91fbd0b1a972ab90731, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94ae44ecd69be91fbd0b1a972ab90731,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_94ae44ecd69be91fbd0b1a972ab90731 == cache_frame_94ae44ecd69be91fbd0b1a972ab90731) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94ae44ecd69be91fbd0b1a972ab90731);
        cache_frame_94ae44ecd69be91fbd0b1a972ab90731 = NULL;
    }

    assertFrameObject(frame_94ae44ecd69be91fbd0b1a972ab90731);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560)) {
        Py_XDECREF(cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 = MAKE_FUNCTION_FRAME(tstate, codeobj_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560->m_type_description == NULL);
    frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 = cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560);
    assert(Py_REFCNT(frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 == cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560);
        cache_frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560 = NULL;
    }

    assertFrameObject(frame_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cd22c790b75133cbb38bf989656a86cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cd22c790b75133cbb38bf989656a86cc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd22c790b75133cbb38bf989656a86cc)) {
        Py_XDECREF(cache_frame_cd22c790b75133cbb38bf989656a86cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd22c790b75133cbb38bf989656a86cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd22c790b75133cbb38bf989656a86cc = MAKE_FUNCTION_FRAME(tstate, codeobj_cd22c790b75133cbb38bf989656a86cc, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd22c790b75133cbb38bf989656a86cc->m_type_description == NULL);
    frame_cd22c790b75133cbb38bf989656a86cc = cache_frame_cd22c790b75133cbb38bf989656a86cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cd22c790b75133cbb38bf989656a86cc);
    assert(Py_REFCNT(frame_cd22c790b75133cbb38bf989656a86cc) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_cd22c790b75133cbb38bf989656a86cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd22c790b75133cbb38bf989656a86cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd22c790b75133cbb38bf989656a86cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd22c790b75133cbb38bf989656a86cc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cd22c790b75133cbb38bf989656a86cc == cache_frame_cd22c790b75133cbb38bf989656a86cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd22c790b75133cbb38bf989656a86cc);
        cache_frame_cd22c790b75133cbb38bf989656a86cc = NULL;
    }

    assertFrameObject(frame_cd22c790b75133cbb38bf989656a86cc);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__9_prepare_mac_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_token = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_http_method = python_pars[3];
    PyObject *par_nonce = python_pars[4];
    PyObject *par_headers = python_pars[5];
    PyObject *par_body = python_pars[6];
    PyObject *par_ext = python_pars[7];
    PyObject *par_hash_algorithm = python_pars[8];
    PyObject *par_issue_time = python_pars[9];
    PyObject *par_draft = python_pars[10];
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_h = NULL;
    PyObject *var_ts = NULL;
    PyObject *var_sch = NULL;
    PyObject *var_net = NULL;
    PyObject *var_path = NULL;
    PyObject *var_par = NULL;
    PyObject *var_query = NULL;
    PyObject *var_fra = NULL;
    PyObject *var_request_uri = NULL;
    PyObject *var_bodyhash = NULL;
    PyObject *var_base = NULL;
    PyObject *var_base_string = NULL;
    PyObject *var_sign = NULL;
    PyObject *var_header = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__element_6 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2676d6ea9af23acf784d05cf2737457f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2676d6ea9af23acf784d05cf2737457f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2676d6ea9af23acf784d05cf2737457f)) {
        Py_XDECREF(cache_frame_2676d6ea9af23acf784d05cf2737457f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2676d6ea9af23acf784d05cf2737457f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2676d6ea9af23acf784d05cf2737457f = MAKE_FUNCTION_FRAME(tstate, codeobj_2676d6ea9af23acf784d05cf2737457f, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2676d6ea9af23acf784d05cf2737457f->m_type_description == NULL);
    frame_2676d6ea9af23acf784d05cf2737457f = cache_frame_2676d6ea9af23acf784d05cf2737457f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2676d6ea9af23acf784d05cf2737457f);
    assert(Py_REFCNT(frame_2676d6ea9af23acf784d05cf2737457f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_http_method);
        tmp_expression_value_1 = par_http_method;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 107;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_http_method;
            assert(old != NULL);
            par_http_method = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 108;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[9], tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 108;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 108;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 108;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[10];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 108;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_host == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_host = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_port == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_port = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_hash_algorithm);
        tmp_expression_value_2 = par_hash_algorithm;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 110;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[12];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_7;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_hash_algorithm);
        tmp_expression_value_4 = par_hash_algorithm;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 112;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[15];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[16]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_h == NULL);
        var_h = tmp_assign_source_8;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[17];
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 115;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_draft);
        tmp_cmp_expr_left_3 = par_draft;
        tmp_cmp_expr_right_3 = mod_consts[18];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_9;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_nonce);
        tmp_or_left_value_1 = par_nonce;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_kw_call_arg_value_0_1 = mod_consts[19];
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_issue_time);
        tmp_args_element_value_2 = par_issue_time;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 118;
        tmp_kw_call_arg_value_1_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[20], tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 119;
        tmp_kw_call_arg_value_2_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[22]);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_or_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_9 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_nonce;
            assert(old != NULL);
            par_nonce = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 121;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[23]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ts == NULL);
        var_ts = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 122;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[22]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_nonce;
            assert(old != NULL);
            par_nonce = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_end_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_3 = par_uri;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 124;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 6);
        if (tmp_assign_source_13 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 6);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_5, 2, 6);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_6, 3, 6);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_4 == NULL);
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_7, 4, 6);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_5 == NULL);
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_8, 5, 6);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_6 == NULL);
        tmp_tuple_unpack_2__element_6 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 124;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[25];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 124;
            goto try_except_handler_5;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_6);
    tmp_tuple_unpack_2__element_6 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        assert(var_sch == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_sch = tmp_assign_source_19;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        assert(var_net == NULL);
        Py_INCREF(tmp_assign_source_20);
        var_net = tmp_assign_source_20;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_path = tmp_assign_source_21;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_4;
        assert(var_par == NULL);
        Py_INCREF(tmp_assign_source_22);
        var_par = tmp_assign_source_22;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_5);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_5;
        assert(var_query == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_query = tmp_assign_source_23;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_5);
    tmp_tuple_unpack_2__element_5 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_6);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_6;
        assert(var_fra == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_fra = tmp_assign_source_24;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_6);
    tmp_tuple_unpack_2__element_6 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_query);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_query);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_path);
        tmp_add_expr_left_2 = var_path;
        tmp_add_expr_right_2 = mod_consts[26];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_query);
        tmp_add_expr_right_1 = var_query;
        tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_request_uri == NULL);
        var_request_uri = tmp_assign_source_25;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(var_path);
        tmp_assign_source_26 = var_path;
        assert(var_request_uri == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_request_uri = tmp_assign_source_26;
    }
    branch_end_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_body);
        tmp_cmp_expr_left_4 = par_body;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_draft);
        tmp_cmp_expr_left_5 = par_draft;
        tmp_cmp_expr_right_5 = mod_consts[18];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_body);
        tmp_expression_value_6 = par_body;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 133;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[28]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_body;
            assert(old != NULL);
            par_body = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_h);
        tmp_called_value_8 = var_h;
        CHECK_OBJECT(par_body);
        tmp_args_element_value_5 = par_body;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 134;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 134;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[30]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 134;
        tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[31];
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[32]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 134;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[28]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bodyhash == NULL);
        var_bodyhash = tmp_assign_source_28;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[33];
        assert(var_bodyhash == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_bodyhash = tmp_assign_source_29;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_LIST_EMPTY(0);
        assert(var_base == NULL);
        var_base = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_draft);
        tmp_cmp_expr_left_6 = par_draft;
        tmp_cmp_expr_right_6 = mod_consts[18];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_base);
        tmp_list_arg_value_1 = var_base;
        CHECK_OBJECT(par_nonce);
        tmp_item_value_1 = par_nonce;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        CHECK_OBJECT(var_base);
        tmp_list_arg_value_2 = var_base;
        if (var_ts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_item_value_2 = var_ts;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        CHECK_OBJECT(var_base);
        tmp_list_arg_value_3 = var_base;
        CHECK_OBJECT(par_nonce);
        tmp_item_value_3 = par_nonce;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    branch_end_6:;
    {
        PyObject *tmp_list_arg_value_4;
        PyObject *tmp_item_value_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_4 = var_base;
        CHECK_OBJECT(par_http_method);
        tmp_expression_value_9 = par_http_method;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[8]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 145;
        tmp_item_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_item_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_base;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[36]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_request_uri);
        tmp_args_element_value_6 = var_request_uri;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 146;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = var_base;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[36]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_args_element_value_7 = var_host;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 147;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_base;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[36]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_port);
        tmp_args_element_value_8 = var_port;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 148;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_draft);
        tmp_cmp_expr_left_7 = par_draft;
        tmp_cmp_expr_right_7 = mod_consts[18];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_base;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[36]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_bodyhash);
        tmp_args_element_value_9 = var_bodyhash;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 150;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = var_base;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[36]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ext);
        tmp_or_left_value_2 = par_ext;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_or_right_value_2 = mod_consts[33];
        tmp_args_element_value_10 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_value_10 = tmp_or_left_value_2;
        or_end_2:;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 151;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[37];
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_base;
        tmp_add_expr_left_3 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[37];
        tmp_assign_source_31 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        assert(!(tmp_assign_source_31 == NULL));
        assert(var_base_string == NULL);
        var_base_string = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_key);
        tmp_isinstance_inst_1 = par_key;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_key);
        tmp_expression_value_15 = par_key;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 156;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[28]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_key;
            assert(old != NULL);
            par_key = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_encoding_value_1;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[39]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_11 = par_key;
        CHECK_OBJECT(var_base_string);
        tmp_str_arg_value_2 = var_base_string;
        tmp_encoding_value_1 = mod_consts[40];
        tmp_args_element_value_12 = UNICODE_ENCODE2(tstate, tmp_str_arg_value_2, tmp_encoding_value_1);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_h);
        tmp_args_element_value_13 = var_h;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sign == NULL);
        var_sign = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_sign);
        tmp_called_instance_7 = var_sign;
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 158;
        tmp_args_element_value_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[30]);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 158;
        tmp_expression_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[31];
        tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[32]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_2676d6ea9af23acf784d05cf2737457f->m_frame.f_lineno = 158;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[28]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sign;
            assert(old != NULL);
            var_sign = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_LIST_EMPTY(0);
        assert(var_header == NULL);
        var_header = tmp_assign_source_35;
    }
    {
        PyObject *tmp_list_arg_value_5;
        PyObject *tmp_item_value_5;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_5 = var_header;
        tmp_mod_expr_left_1 = mod_consts[41];
        CHECK_OBJECT(par_token);
        tmp_mod_expr_right_1 = par_token;
        tmp_item_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_item_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_draft);
        tmp_cmp_expr_left_8 = par_draft;
        tmp_cmp_expr_right_8 = mod_consts[18];
        tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_list_arg_value_6;
        PyObject *tmp_item_value_6;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_6 = var_header;
        tmp_mod_expr_left_2 = mod_consts[42];
        if (var_ts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_2 = var_ts;
        tmp_item_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_item_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_6, tmp_item_value_6);
        assert(!(tmp_result == false));
    }
    branch_no_9:;
    {
        PyObject *tmp_list_arg_value_7;
        PyObject *tmp_item_value_7;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_7 = var_header;
        tmp_mod_expr_left_3 = mod_consts[43];
        if (par_nonce == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_3 = par_nonce;
        tmp_item_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_item_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_7, tmp_item_value_7);
        assert(!(tmp_result == false));
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        if (var_bodyhash == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(var_bodyhash);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_list_arg_value_8;
        PyObject *tmp_item_value_8;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_8 = var_header;
        tmp_mod_expr_left_4 = mod_consts[46];
        if (var_bodyhash == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_4 = var_bodyhash;
        tmp_item_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_item_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_8, tmp_item_value_8);
        assert(!(tmp_result == false));
    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_ext);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_ext);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_list_arg_value_9;
        PyObject *tmp_item_value_9;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_9 = var_header;
        tmp_mod_expr_left_5 = mod_consts[47];
        CHECK_OBJECT(par_ext);
        tmp_mod_expr_right_5 = par_ext;
        tmp_item_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_item_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_9, tmp_item_value_9);
        assert(!(tmp_result == false));
    }
    branch_no_11:;
    {
        PyObject *tmp_list_arg_value_10;
        PyObject *tmp_item_value_10;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_10 = var_header;
        tmp_mod_expr_left_6 = mod_consts[48];
        CHECK_OBJECT(var_sign);
        tmp_mod_expr_right_6 = var_sign;
        tmp_item_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        if (tmp_item_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_10, tmp_item_value_10);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_36;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        CHECK_OBJECT(par_headers);
        tmp_or_left_value_3 = par_headers;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = MAKE_DICT_EMPTY();
        tmp_assign_source_36 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        Py_INCREF(tmp_or_left_value_3);
        tmp_assign_source_36 = tmp_or_left_value_3;
        or_end_3:;
        {
            PyObject *old = par_headers;
            assert(old != NULL);
            par_headers = tmp_assign_source_36;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_str_arg_value_3 = mod_consts[49];
        CHECK_OBJECT(var_header);
        tmp_iterable_value_2 = var_header;
        tmp_ass_subvalue_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_3, tmp_iterable_value_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_ass_subscribed_1 = par_headers;
        tmp_ass_subscript_1 = mod_consts[50];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2676d6ea9af23acf784d05cf2737457f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2676d6ea9af23acf784d05cf2737457f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2676d6ea9af23acf784d05cf2737457f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2676d6ea9af23acf784d05cf2737457f,
        type_description_1,
        par_token,
        par_uri,
        par_key,
        par_http_method,
        par_nonce,
        par_headers,
        par_body,
        par_ext,
        par_hash_algorithm,
        par_issue_time,
        par_draft,
        var_host,
        var_port,
        var_h,
        var_ts,
        var_sch,
        var_net,
        var_path,
        var_par,
        var_query,
        var_fra,
        var_request_uri,
        var_bodyhash,
        var_base,
        var_base_string,
        var_sign,
        var_header
    );


    // Release cached frame if used for exception.
    if (frame_2676d6ea9af23acf784d05cf2737457f == cache_frame_2676d6ea9af23acf784d05cf2737457f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2676d6ea9af23acf784d05cf2737457f);
        cache_frame_2676d6ea9af23acf784d05cf2737457f = NULL;
    }

    assertFrameObject(frame_2676d6ea9af23acf784d05cf2737457f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_headers);
    tmp_return_value = par_headers;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    par_key = NULL;
    CHECK_OBJECT(par_http_method);
    Py_DECREF(par_http_method);
    par_http_method = NULL;
    Py_XDECREF(par_nonce);
    par_nonce = NULL;
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    par_headers = NULL;
    Py_XDECREF(par_body);
    par_body = NULL;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
    CHECK_OBJECT(var_h);
    Py_DECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_ts);
    var_ts = NULL;
    CHECK_OBJECT(var_sch);
    Py_DECREF(var_sch);
    var_sch = NULL;
    CHECK_OBJECT(var_net);
    Py_DECREF(var_net);
    var_net = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    CHECK_OBJECT(var_par);
    Py_DECREF(var_par);
    var_par = NULL;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
    CHECK_OBJECT(var_fra);
    Py_DECREF(var_fra);
    var_fra = NULL;
    CHECK_OBJECT(var_request_uri);
    Py_DECREF(var_request_uri);
    var_request_uri = NULL;
    Py_XDECREF(var_bodyhash);
    var_bodyhash = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    CHECK_OBJECT(var_base_string);
    Py_DECREF(var_base_string);
    var_base_string = NULL;
    CHECK_OBJECT(var_sign);
    Py_DECREF(var_sign);
    var_sign = NULL;
    CHECK_OBJECT(var_header);
    Py_DECREF(var_header);
    var_header = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_key);
    par_key = NULL;
    Py_XDECREF(par_http_method);
    par_http_method = NULL;
    Py_XDECREF(par_nonce);
    par_nonce = NULL;
    Py_XDECREF(par_headers);
    par_headers = NULL;
    Py_XDECREF(par_body);
    par_body = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_ts);
    var_ts = NULL;
    Py_XDECREF(var_sch);
    var_sch = NULL;
    Py_XDECREF(var_net);
    var_net = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_par);
    var_par = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_fra);
    var_fra = NULL;
    Py_XDECREF(var_request_uri);
    var_request_uri = NULL;
    Py_XDECREF(var_bodyhash);
    var_bodyhash = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    Py_XDECREF(var_base_string);
    var_base_string = NULL;
    Py_XDECREF(var_sign);
    var_sign = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_ext);
    Py_DECREF(par_ext);
    CHECK_OBJECT(par_hash_algorithm);
    Py_DECREF(par_hash_algorithm);
    CHECK_OBJECT(par_issue_time);
    Py_DECREF(par_issue_time);
    CHECK_OBJECT(par_draft);
    Py_DECREF(par_draft);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_ext);
    Py_DECREF(par_ext);
    CHECK_OBJECT(par_hash_algorithm);
    Py_DECREF(par_hash_algorithm);
    CHECK_OBJECT(par_issue_time);
    Py_DECREF(par_issue_time);
    CHECK_OBJECT(par_draft);
    Py_DECREF(par_draft);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__10_prepare_bearer_uri(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_token = python_pars[0];
    PyObject *par_uri = python_pars[1];
    struct Nuitka_FrameObject *frame_83cb5fc997b58bcbd2796d1a085ef387;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83cb5fc997b58bcbd2796d1a085ef387 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83cb5fc997b58bcbd2796d1a085ef387)) {
        Py_XDECREF(cache_frame_83cb5fc997b58bcbd2796d1a085ef387);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83cb5fc997b58bcbd2796d1a085ef387 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83cb5fc997b58bcbd2796d1a085ef387 = MAKE_FUNCTION_FRAME(tstate, codeobj_83cb5fc997b58bcbd2796d1a085ef387, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83cb5fc997b58bcbd2796d1a085ef387->m_type_description == NULL);
    frame_83cb5fc997b58bcbd2796d1a085ef387 = cache_frame_83cb5fc997b58bcbd2796d1a085ef387;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_83cb5fc997b58bcbd2796d1a085ef387);
    assert(Py_REFCNT(frame_83cb5fc997b58bcbd2796d1a085ef387) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_uri);
        tmp_args_element_value_1 = par_uri;
        tmp_tuple_element_1 = mod_consts[53];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_token);
        tmp_tuple_element_1 = par_token;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
        frame_83cb5fc997b58bcbd2796d1a085ef387->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
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
        exception_tb = MAKE_TRACEBACK(frame_83cb5fc997b58bcbd2796d1a085ef387, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83cb5fc997b58bcbd2796d1a085ef387->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83cb5fc997b58bcbd2796d1a085ef387, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83cb5fc997b58bcbd2796d1a085ef387,
        type_description_1,
        par_token,
        par_uri
    );


    // Release cached frame if used for exception.
    if (frame_83cb5fc997b58bcbd2796d1a085ef387 == cache_frame_83cb5fc997b58bcbd2796d1a085ef387) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83cb5fc997b58bcbd2796d1a085ef387);
        cache_frame_83cb5fc997b58bcbd2796d1a085ef387 = NULL;
    }

    assertFrameObject(frame_83cb5fc997b58bcbd2796d1a085ef387);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__11_prepare_bearer_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_token = python_pars[0];
    PyObject *par_headers = python_pars[1];
    struct Nuitka_FrameObject *frame_c3928836a3a5ab1862b7334914a12e60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c3928836a3a5ab1862b7334914a12e60 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c3928836a3a5ab1862b7334914a12e60)) {
        Py_XDECREF(cache_frame_c3928836a3a5ab1862b7334914a12e60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3928836a3a5ab1862b7334914a12e60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3928836a3a5ab1862b7334914a12e60 = MAKE_FUNCTION_FRAME(tstate, codeobj_c3928836a3a5ab1862b7334914a12e60, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3928836a3a5ab1862b7334914a12e60->m_type_description == NULL);
    frame_c3928836a3a5ab1862b7334914a12e60 = cache_frame_c3928836a3a5ab1862b7334914a12e60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c3928836a3a5ab1862b7334914a12e60);
    assert(Py_REFCNT(frame_c3928836a3a5ab1862b7334914a12e60) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(par_headers);
        tmp_or_left_value_1 = par_headers;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = par_headers;
            assert(old != NULL);
            par_headers = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(par_token);
        tmp_mod_expr_right_1 = par_token;
        tmp_ass_subvalue_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_ass_subscribed_1 = par_headers;
        tmp_ass_subscript_1 = mod_consts[50];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c3928836a3a5ab1862b7334914a12e60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3928836a3a5ab1862b7334914a12e60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3928836a3a5ab1862b7334914a12e60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3928836a3a5ab1862b7334914a12e60,
        type_description_1,
        par_token,
        par_headers
    );


    // Release cached frame if used for exception.
    if (frame_c3928836a3a5ab1862b7334914a12e60 == cache_frame_c3928836a3a5ab1862b7334914a12e60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3928836a3a5ab1862b7334914a12e60);
        cache_frame_c3928836a3a5ab1862b7334914a12e60 = NULL;
    }

    assertFrameObject(frame_c3928836a3a5ab1862b7334914a12e60);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_headers);
    tmp_return_value = par_headers;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    par_headers = NULL;
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

    Py_XDECREF(par_headers);
    par_headers = NULL;
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
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__12_prepare_bearer_body(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_token = python_pars[0];
    PyObject *par_body = python_pars[1];
    struct Nuitka_FrameObject *frame_22fd672e36fa469ade61bb4f24c3782c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_22fd672e36fa469ade61bb4f24c3782c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22fd672e36fa469ade61bb4f24c3782c)) {
        Py_XDECREF(cache_frame_22fd672e36fa469ade61bb4f24c3782c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22fd672e36fa469ade61bb4f24c3782c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22fd672e36fa469ade61bb4f24c3782c = MAKE_FUNCTION_FRAME(tstate, codeobj_22fd672e36fa469ade61bb4f24c3782c, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22fd672e36fa469ade61bb4f24c3782c->m_type_description == NULL);
    frame_22fd672e36fa469ade61bb4f24c3782c = cache_frame_22fd672e36fa469ade61bb4f24c3782c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_22fd672e36fa469ade61bb4f24c3782c);
    assert(Py_REFCNT(frame_22fd672e36fa469ade61bb4f24c3782c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_body);
        tmp_args_element_value_1 = par_body;
        tmp_tuple_element_1 = mod_consts[53];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_token);
        tmp_tuple_element_1 = par_token;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
        frame_22fd672e36fa469ade61bb4f24c3782c->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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
        exception_tb = MAKE_TRACEBACK(frame_22fd672e36fa469ade61bb4f24c3782c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22fd672e36fa469ade61bb4f24c3782c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22fd672e36fa469ade61bb4f24c3782c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22fd672e36fa469ade61bb4f24c3782c,
        type_description_1,
        par_token,
        par_body
    );


    // Release cached frame if used for exception.
    if (frame_22fd672e36fa469ade61bb4f24c3782c == cache_frame_22fd672e36fa469ade61bb4f24c3782c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22fd672e36fa469ade61bb4f24c3782c);
        cache_frame_22fd672e36fa469ade61bb4f24c3782c = NULL;
    }

    assertFrameObject(frame_22fd672e36fa469ade61bb4f24c3782c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_token);
    Py_DECREF(par_token);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__13_random_token_generator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[0];
    PyObject *par_refresh_token = python_pars[1];
    struct Nuitka_FrameObject *frame_10146949a8adc87ac0e77fbdf5309ca9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10146949a8adc87ac0e77fbdf5309ca9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10146949a8adc87ac0e77fbdf5309ca9)) {
        Py_XDECREF(cache_frame_10146949a8adc87ac0e77fbdf5309ca9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10146949a8adc87ac0e77fbdf5309ca9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10146949a8adc87ac0e77fbdf5309ca9 = MAKE_FUNCTION_FRAME(tstate, codeobj_10146949a8adc87ac0e77fbdf5309ca9, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10146949a8adc87ac0e77fbdf5309ca9->m_type_description == NULL);
    frame_10146949a8adc87ac0e77fbdf5309ca9 = cache_frame_10146949a8adc87ac0e77fbdf5309ca9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_10146949a8adc87ac0e77fbdf5309ca9);
    assert(Py_REFCNT(frame_10146949a8adc87ac0e77fbdf5309ca9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_10146949a8adc87ac0e77fbdf5309ca9->m_frame.f_lineno = 225;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[59]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_10146949a8adc87ac0e77fbdf5309ca9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10146949a8adc87ac0e77fbdf5309ca9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10146949a8adc87ac0e77fbdf5309ca9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10146949a8adc87ac0e77fbdf5309ca9,
        type_description_1,
        par_request,
        par_refresh_token
    );


    // Release cached frame if used for exception.
    if (frame_10146949a8adc87ac0e77fbdf5309ca9 == cache_frame_10146949a8adc87ac0e77fbdf5309ca9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10146949a8adc87ac0e77fbdf5309ca9);
        cache_frame_10146949a8adc87ac0e77fbdf5309ca9 = NULL;
    }

    assertFrameObject(frame_10146949a8adc87ac0e77fbdf5309ca9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_private_pem = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[1]);
    PyObject *var_signed_token_generator = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_kwargs;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_private_pem;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator$$$function__1_signed_token_generator(tmp_closure_1);

        assert(var_signed_token_generator == NULL);
        var_signed_token_generator = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_signed_token_generator);
    tmp_return_value = var_signed_token_generator;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_signed_token_generator);
    Py_DECREF(var_signed_token_generator);
    var_signed_token_generator = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_private_pem);
    Py_DECREF(par_private_pem);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator$$$function__1_signed_token_generator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[0];
    struct Nuitka_FrameObject *frame_84d0433882c36e76cc3ff2ad3dc9c50b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b)) {
        Py_XDECREF(cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b = MAKE_FUNCTION_FRAME(tstate, codeobj_84d0433882c36e76cc3ff2ad3dc9c50b, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b->m_type_description == NULL);
    frame_84d0433882c36e76cc3ff2ad3dc9c50b = cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_84d0433882c36e76cc3ff2ad3dc9c50b);
    assert(Py_REFCNT(frame_84d0433882c36e76cc3ff2ad3dc9c50b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 233;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_request);
        tmp_assattr_target_1 = par_request;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[65], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[66]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 234;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_request);
        tmp_args_element_value_2 = par_request;
        frame_84d0433882c36e76cc3ff2ad3dc9c50b->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_84d0433882c36e76cc3ff2ad3dc9c50b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84d0433882c36e76cc3ff2ad3dc9c50b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84d0433882c36e76cc3ff2ad3dc9c50b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84d0433882c36e76cc3ff2ad3dc9c50b,
        type_description_1,
        par_request,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_84d0433882c36e76cc3ff2ad3dc9c50b == cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b);
        cache_frame_84d0433882c36e76cc3ff2ad3dc9c50b = NULL;
    }

    assertFrameObject(frame_84d0433882c36e76cc3ff2ad3dc9c50b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__15_get_token_from_header(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[0];
    PyObject *var_token = NULL;
    PyObject *var_split_header = NULL;
    struct Nuitka_FrameObject *frame_f292b9f5bfd193d941e019f2c43fef46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f292b9f5bfd193d941e019f2c43fef46 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_token == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_token = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f292b9f5bfd193d941e019f2c43fef46)) {
        Py_XDECREF(cache_frame_f292b9f5bfd193d941e019f2c43fef46);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f292b9f5bfd193d941e019f2c43fef46 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f292b9f5bfd193d941e019f2c43fef46 = MAKE_FUNCTION_FRAME(tstate, codeobj_f292b9f5bfd193d941e019f2c43fef46, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f292b9f5bfd193d941e019f2c43fef46->m_type_description == NULL);
    frame_f292b9f5bfd193d941e019f2c43fef46 = cache_frame_f292b9f5bfd193d941e019f2c43fef46;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f292b9f5bfd193d941e019f2c43fef46);
    assert(Py_REFCNT(frame_f292b9f5bfd193d941e019f2c43fef46) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = mod_consts[50];
        CHECK_OBJECT(par_request);
        tmp_expression_value_1 = par_request;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_request);
        tmp_expression_value_4 = par_request;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[68]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[69]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f292b9f5bfd193d941e019f2c43fef46->m_frame.f_lineno = 250;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[70]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[71]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f292b9f5bfd193d941e019f2c43fef46->m_frame.f_lineno = 250;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_split_header == NULL);
        var_split_header = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_and_left_value_1_cbool_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_split_header);
        tmp_len_arg_1 = var_split_header;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 2;
        tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_and_left_value_1 = tmp_tmp_and_left_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_split_header);
        tmp_expression_value_6 = var_split_header;
        tmp_subscript_value_1 = mod_consts[18];
        tmp_expression_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_1, 0);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[11]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f292b9f5bfd193d941e019f2c43fef46->m_frame.f_lineno = 251;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[72];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_split_header);
        tmp_expression_value_7 = var_split_header;
        tmp_subscript_value_2 = mod_consts[73];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_token;
            assert(old != NULL);
            var_token = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_request);
        tmp_expression_value_8 = par_request;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[53]);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_token;
            assert(old != NULL);
            var_token = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f292b9f5bfd193d941e019f2c43fef46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f292b9f5bfd193d941e019f2c43fef46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f292b9f5bfd193d941e019f2c43fef46, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f292b9f5bfd193d941e019f2c43fef46,
        type_description_1,
        par_request,
        var_token,
        var_split_header
    );


    // Release cached frame if used for exception.
    if (frame_f292b9f5bfd193d941e019f2c43fef46 == cache_frame_f292b9f5bfd193d941e019f2c43fef46) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f292b9f5bfd193d941e019f2c43fef46);
        cache_frame_f292b9f5bfd193d941e019f2c43fef46 = NULL;
    }

    assertFrameObject(frame_f292b9f5bfd193d941e019f2c43fef46);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_token);
    tmp_return_value = var_token;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_token);
    Py_DECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_split_header);
    var_split_header = NULL;
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

    CHECK_OBJECT(var_token);
    Py_DECREF(var_token);
    var_token = NULL;
    Py_XDECREF(var_split_header);
    var_split_header = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__16___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_refresh_token = python_pars[2];
    struct Nuitka_FrameObject *frame_000b5b662e8d8aea69a8900c76dce6aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_000b5b662e8d8aea69a8900c76dce6aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_000b5b662e8d8aea69a8900c76dce6aa)) {
        Py_XDECREF(cache_frame_000b5b662e8d8aea69a8900c76dce6aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_000b5b662e8d8aea69a8900c76dce6aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_000b5b662e8d8aea69a8900c76dce6aa = MAKE_FUNCTION_FRAME(tstate, codeobj_000b5b662e8d8aea69a8900c76dce6aa, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_000b5b662e8d8aea69a8900c76dce6aa->m_type_description == NULL);
    frame_000b5b662e8d8aea69a8900c76dce6aa = cache_frame_000b5b662e8d8aea69a8900c76dce6aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_000b5b662e8d8aea69a8900c76dce6aa);
    assert(Py_REFCNT(frame_000b5b662e8d8aea69a8900c76dce6aa) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[75];
        frame_000b5b662e8d8aea69a8900c76dce6aa->m_frame.f_lineno = 263;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 263;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_000b5b662e8d8aea69a8900c76dce6aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_000b5b662e8d8aea69a8900c76dce6aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_000b5b662e8d8aea69a8900c76dce6aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_000b5b662e8d8aea69a8900c76dce6aa,
        type_description_1,
        par_self,
        par_request,
        par_refresh_token
    );


    // Release cached frame if used for exception.
    if (frame_000b5b662e8d8aea69a8900c76dce6aa == cache_frame_000b5b662e8d8aea69a8900c76dce6aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_000b5b662e8d8aea69a8900c76dce6aa);
        cache_frame_000b5b662e8d8aea69a8900c76dce6aa = NULL;
    }

    assertFrameObject(frame_000b5b662e8d8aea69a8900c76dce6aa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__17_validate_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_f781706b2babeda3379a023091251b6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f781706b2babeda3379a023091251b6b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f781706b2babeda3379a023091251b6b)) {
        Py_XDECREF(cache_frame_f781706b2babeda3379a023091251b6b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f781706b2babeda3379a023091251b6b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f781706b2babeda3379a023091251b6b = MAKE_FUNCTION_FRAME(tstate, codeobj_f781706b2babeda3379a023091251b6b, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f781706b2babeda3379a023091251b6b->m_type_description == NULL);
    frame_f781706b2babeda3379a023091251b6b = cache_frame_f781706b2babeda3379a023091251b6b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f781706b2babeda3379a023091251b6b);
    assert(Py_REFCNT(frame_f781706b2babeda3379a023091251b6b) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[75];
        frame_f781706b2babeda3379a023091251b6b->m_frame.f_lineno = 270;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 270;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f781706b2babeda3379a023091251b6b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f781706b2babeda3379a023091251b6b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f781706b2babeda3379a023091251b6b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f781706b2babeda3379a023091251b6b,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_f781706b2babeda3379a023091251b6b == cache_frame_f781706b2babeda3379a023091251b6b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f781706b2babeda3379a023091251b6b);
        cache_frame_f781706b2babeda3379a023091251b6b = NULL;
    }

    assertFrameObject(frame_f781706b2babeda3379a023091251b6b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__18_estimate_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_bde18b9e263de8c400c83a7b37f62838;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bde18b9e263de8c400c83a7b37f62838 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bde18b9e263de8c400c83a7b37f62838)) {
        Py_XDECREF(cache_frame_bde18b9e263de8c400c83a7b37f62838);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bde18b9e263de8c400c83a7b37f62838 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bde18b9e263de8c400c83a7b37f62838 = MAKE_FUNCTION_FRAME(tstate, codeobj_bde18b9e263de8c400c83a7b37f62838, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bde18b9e263de8c400c83a7b37f62838->m_type_description == NULL);
    frame_bde18b9e263de8c400c83a7b37f62838 = cache_frame_bde18b9e263de8c400c83a7b37f62838;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bde18b9e263de8c400c83a7b37f62838);
    assert(Py_REFCNT(frame_bde18b9e263de8c400c83a7b37f62838) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[75];
        frame_bde18b9e263de8c400c83a7b37f62838->m_frame.f_lineno = 277;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 277;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bde18b9e263de8c400c83a7b37f62838, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bde18b9e263de8c400c83a7b37f62838->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bde18b9e263de8c400c83a7b37f62838, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bde18b9e263de8c400c83a7b37f62838,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_bde18b9e263de8c400c83a7b37f62838 == cache_frame_bde18b9e263de8c400c83a7b37f62838) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bde18b9e263de8c400c83a7b37f62838);
        cache_frame_bde18b9e263de8c400c83a7b37f62838 = NULL;
    }

    assertFrameObject(frame_bde18b9e263de8c400c83a7b37f62838);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request_validator = python_pars[1];
    PyObject *par_token_generator = python_pars[2];
    PyObject *par_expires_in = python_pars[3];
    PyObject *par_refresh_token_generator = python_pars[4];
    struct Nuitka_FrameObject *frame_2d71410af516053ddc40226d7508f96a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d71410af516053ddc40226d7508f96a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d71410af516053ddc40226d7508f96a)) {
        Py_XDECREF(cache_frame_2d71410af516053ddc40226d7508f96a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d71410af516053ddc40226d7508f96a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d71410af516053ddc40226d7508f96a = MAKE_FUNCTION_FRAME(tstate, codeobj_2d71410af516053ddc40226d7508f96a, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d71410af516053ddc40226d7508f96a->m_type_description == NULL);
    frame_2d71410af516053ddc40226d7508f96a = cache_frame_2d71410af516053ddc40226d7508f96a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2d71410af516053ddc40226d7508f96a);
    assert(Py_REFCNT(frame_2d71410af516053ddc40226d7508f96a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_request_validator);
        tmp_assattr_value_1 = par_request_validator;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[77], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_token_generator);
        tmp_or_left_value_1 = par_token_generator;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_or_right_value_1 == NULL)) {
            tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_or_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assattr_value_2 = tmp_or_left_value_1;
        or_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[79], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_refresh_token_generator);
        tmp_or_left_value_2 = par_refresh_token_generator;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[79]);
        if (tmp_or_right_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        Py_INCREF(tmp_or_left_value_2);
        tmp_assattr_value_3 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[80], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_expires_in);
        tmp_or_left_value_3 = par_expires_in;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_or_right_value_3 = mod_consts[81];
        tmp_assattr_value_4 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assattr_value_4 = tmp_or_left_value_3;
        or_end_3:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[82], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d71410af516053ddc40226d7508f96a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d71410af516053ddc40226d7508f96a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d71410af516053ddc40226d7508f96a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d71410af516053ddc40226d7508f96a,
        type_description_1,
        par_self,
        par_request_validator,
        par_token_generator,
        par_expires_in,
        par_refresh_token_generator
    );


    // Release cached frame if used for exception.
    if (frame_2d71410af516053ddc40226d7508f96a == cache_frame_2d71410af516053ddc40226d7508f96a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d71410af516053ddc40226d7508f96a);
        cache_frame_2d71410af516053ddc40226d7508f96a = NULL;
    }

    assertFrameObject(frame_2d71410af516053ddc40226d7508f96a);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request_validator);
    Py_DECREF(par_request_validator);
    CHECK_OBJECT(par_token_generator);
    Py_DECREF(par_token_generator);
    CHECK_OBJECT(par_expires_in);
    Py_DECREF(par_expires_in);
    CHECK_OBJECT(par_refresh_token_generator);
    Py_DECREF(par_refresh_token_generator);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request_validator);
    Py_DECREF(par_request_validator);
    CHECK_OBJECT(par_token_generator);
    Py_DECREF(par_token_generator);
    CHECK_OBJECT(par_expires_in);
    Py_DECREF(par_expires_in);
    CHECK_OBJECT(par_refresh_token_generator);
    Py_DECREF(par_refresh_token_generator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__20_create_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_refresh_token = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *var_expires_in = NULL;
    PyObject *var_token = NULL;
    struct Nuitka_FrameObject *frame_14f9e5d0e3d59c67f5d6fee73abdf8df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df)) {
        Py_XDECREF(cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df = MAKE_FUNCTION_FRAME(tstate, codeobj_14f9e5d0e3d59c67f5d6fee73abdf8df, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_type_description == NULL);
    frame_14f9e5d0e3d59c67f5d6fee73abdf8df = cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_14f9e5d0e3d59c67f5d6fee73abdf8df);
    assert(Py_REFCNT(frame_14f9e5d0e3d59c67f5d6fee73abdf8df) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[83];
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[84]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[85]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[86];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 306;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        int tmp_truth_name_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[88]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[82]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 308;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 308;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_4 = par_request;
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 309;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[82], tmp_args_element_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_expires_in == NULL);
        var_expires_in = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[82]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_expires_in == NULL);
        var_expires_in = tmp_assign_source_2;
    }
    branch_end_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_expires_in);
        tmp_assattr_value_1 = var_expires_in;
        CHECK_OBJECT(par_request);
        tmp_assattr_target_1 = par_request;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[82], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        tmp_dict_key_1 = mod_consts[53];
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_5 = par_request;
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 316;
        tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[79], tmp_args_element_value_5);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[82];
        CHECK_OBJECT(var_expires_in);
        tmp_dict_value_1 = var_expires_in;
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[89];
        tmp_dict_value_1 = mod_consts[90];
        tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_token == NULL);
        var_token = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_request);
        tmp_expression_value_4 = par_request;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[91]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_5;
        tmp_str_arg_value_1 = mod_consts[92];
        CHECK_OBJECT(par_request);
        tmp_expression_value_5 = par_request;
        tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[91]);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_dictset_value = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_token);
        tmp_dictset_dict = var_token;
        tmp_dictset_key = mod_consts[3];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_refresh_token);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_refresh_token);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_request);
        tmp_expression_value_6 = par_request;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[93]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[77]);
        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_6 = par_request;
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 329;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[94], tmp_args_element_value_6);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_request);
        tmp_expression_value_8 = par_request;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[93]);
        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_token == NULL) {
            Py_DECREF(tmp_dictset_value);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var_token;
        tmp_dictset_key = mod_consts[93];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_7 = par_request;
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 332;
        tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[80], tmp_args_element_value_7);
        if (tmp_dictset_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_token == NULL) {
            Py_DECREF(tmp_dictset_value);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_dictset_dict = var_token;
        tmp_dictset_key = mod_consts[93];
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    branch_end_5:;
    branch_no_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_10;
        if (var_token == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 334;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_token;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[96]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_10 = par_request;
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[97]);
        if (tmp_or_left_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 334;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 334;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = MAKE_DICT_EMPTY();
        tmp_args_element_value_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_8 = tmp_or_left_value_1;
        or_end_1:;
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 334;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_token == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 335;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_token;
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame.f_lineno = 335;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_9);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14f9e5d0e3d59c67f5d6fee73abdf8df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14f9e5d0e3d59c67f5d6fee73abdf8df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14f9e5d0e3d59c67f5d6fee73abdf8df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14f9e5d0e3d59c67f5d6fee73abdf8df,
        type_description_1,
        par_self,
        par_request,
        par_refresh_token,
        par_kwargs,
        var_expires_in,
        var_token
    );


    // Release cached frame if used for exception.
    if (frame_14f9e5d0e3d59c67f5d6fee73abdf8df == cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df);
        cache_frame_14f9e5d0e3d59c67f5d6fee73abdf8df = NULL;
    }

    assertFrameObject(frame_14f9e5d0e3d59c67f5d6fee73abdf8df);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_expires_in);
    Py_DECREF(var_expires_in);
    var_expires_in = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
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

    Py_XDECREF(var_expires_in);
    var_expires_in = NULL;
    Py_XDECREF(var_token);
    var_token = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_refresh_token);
    Py_DECREF(par_refresh_token);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__21_validate_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_token = NULL;
    struct Nuitka_FrameObject *frame_6b4eda2e0906ac8e597e4978241b3ca6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b4eda2e0906ac8e597e4978241b3ca6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6b4eda2e0906ac8e597e4978241b3ca6)) {
        Py_XDECREF(cache_frame_6b4eda2e0906ac8e597e4978241b3ca6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b4eda2e0906ac8e597e4978241b3ca6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b4eda2e0906ac8e597e4978241b3ca6 = MAKE_FUNCTION_FRAME(tstate, codeobj_6b4eda2e0906ac8e597e4978241b3ca6, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b4eda2e0906ac8e597e4978241b3ca6->m_type_description == NULL);
    frame_6b4eda2e0906ac8e597e4978241b3ca6 = cache_frame_6b4eda2e0906ac8e597e4978241b3ca6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b4eda2e0906ac8e597e4978241b3ca6);
    assert(Py_REFCNT(frame_6b4eda2e0906ac8e597e4978241b3ca6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_6b4eda2e0906ac8e597e4978241b3ca6->m_frame.f_lineno = 342;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_token == NULL);
        var_token = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[77]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[101]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_token);
        tmp_args_element_value_2 = var_token;
        CHECK_OBJECT(par_request);
        tmp_expression_value_3 = par_request;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[91]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 344;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_4 = par_request;
        frame_6b4eda2e0906ac8e597e4978241b3ca6->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b4eda2e0906ac8e597e4978241b3ca6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b4eda2e0906ac8e597e4978241b3ca6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b4eda2e0906ac8e597e4978241b3ca6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b4eda2e0906ac8e597e4978241b3ca6,
        type_description_1,
        par_self,
        par_request,
        var_token
    );


    // Release cached frame if used for exception.
    if (frame_6b4eda2e0906ac8e597e4978241b3ca6 == cache_frame_6b4eda2e0906ac8e597e4978241b3ca6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b4eda2e0906ac8e597e4978241b3ca6);
        cache_frame_6b4eda2e0906ac8e597e4978241b3ca6 = NULL;
    }

    assertFrameObject(frame_6b4eda2e0906ac8e597e4978241b3ca6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_token);
    Py_DECREF(var_token);
    var_token = NULL;
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

    Py_XDECREF(var_token);
    var_token = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_oauthlib$oauth2$rfc6749$tokens$$$function__22_estimate_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_c4ed11e5fc2022b43684e8d73552f181;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c4ed11e5fc2022b43684e8d73552f181 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c4ed11e5fc2022b43684e8d73552f181)) {
        Py_XDECREF(cache_frame_c4ed11e5fc2022b43684e8d73552f181);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4ed11e5fc2022b43684e8d73552f181 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4ed11e5fc2022b43684e8d73552f181 = MAKE_FUNCTION_FRAME(tstate, codeobj_c4ed11e5fc2022b43684e8d73552f181, module_oauthlib$oauth2$rfc6749$tokens, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c4ed11e5fc2022b43684e8d73552f181->m_type_description == NULL);
    frame_c4ed11e5fc2022b43684e8d73552f181 = cache_frame_c4ed11e5fc2022b43684e8d73552f181;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c4ed11e5fc2022b43684e8d73552f181);
    assert(Py_REFCNT(frame_c4ed11e5fc2022b43684e8d73552f181) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_request);
        tmp_expression_value_5 = par_request;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[68]);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[69]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c4ed11e5fc2022b43684e8d73552f181->m_frame.f_lineno = 351;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_3, mod_consts[102]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[71]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c4ed11e5fc2022b43684e8d73552f181->m_frame.f_lineno = 351;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[103]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[18];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c4ed11e5fc2022b43684e8d73552f181->m_frame.f_lineno = 351;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[72];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[104];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_request);
        tmp_expression_value_6 = par_request;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[53]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[105];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = mod_consts[18];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c4ed11e5fc2022b43684e8d73552f181, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4ed11e5fc2022b43684e8d73552f181->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4ed11e5fc2022b43684e8d73552f181, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4ed11e5fc2022b43684e8d73552f181,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_c4ed11e5fc2022b43684e8d73552f181 == cache_frame_c4ed11e5fc2022b43684e8d73552f181) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c4ed11e5fc2022b43684e8d73552f181);
        cache_frame_c4ed11e5fc2022b43684e8d73552f181 = NULL;
    }

    assertFrameObject(frame_c4ed11e5fc2022b43684e8d73552f181);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__10_prepare_bearer_uri() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__10_prepare_bearer_uri,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_83cb5fc997b58bcbd2796d1a085ef387,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__11_prepare_bearer_headers(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__11_prepare_bearer_headers,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c3928836a3a5ab1862b7334914a12e60,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[56],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__12_prepare_bearer_body(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__12_prepare_bearer_body,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_22fd672e36fa469ade61bb4f24c3782c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[58],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__13_random_token_generator(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__13_random_token_generator,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_10146949a8adc87ac0e77fbdf5309ca9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b4e725ca6f7572eea289518c9940af7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator$$$function__1_signed_token_generator(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator$$$function__1_signed_token_generator,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_84d0433882c36e76cc3ff2ad3dc9c50b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__15_get_token_from_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__15_get_token_from_header,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f292b9f5bfd193d941e019f2c43fef46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__16___call__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__16___call__,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_000b5b662e8d8aea69a8900c76dce6aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__17_validate_request() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__17_validate_request,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_f781706b2babeda3379a023091251b6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__18_estimate_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__18_estimate_type,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_bde18b9e263de8c400c83a7b37f62838,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__19___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__19___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_2d71410af516053ddc40226d7508f96a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__1___init__(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_79c983f420d287486db765c424f7818f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__20_create_token(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__20_create_token,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_14f9e5d0e3d59c67f5d6fee73abdf8df,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__21_validate_request() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__21_validate_request,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_6b4eda2e0906ac8e597e4978241b3ca6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__22_estimate_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__22_estimate_type,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_c4ed11e5fc2022b43684e8d73552f181,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_0aacb41d8bf89cfe3baac5ae53987cd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_1bf1bae9b12e24cf4df4680d1d07eebb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_eb8a76ba559aa9af8b2088724458c121,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_63494842a4cbc4ac6a475e7eb0369e25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_94ae44ecd69be91fbd0b1a972ab90731,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_7d07c9a3cb0f9f8cbe9c8bb1a4dbc560,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_cd22c790b75133cbb38bf989656a86cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__9_prepare_mac_header(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_oauthlib$oauth2$rfc6749$tokens$$$function__9_prepare_mac_header,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2676d6ea9af23acf784d05cf2737457f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_oauthlib$oauth2$rfc6749$tokens,
        mod_consts[51],
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

function_impl_code functable_oauthlib$oauth2$rfc6749$tokens[] = {
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator$$$function__1_signed_token_generator,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__1___init__,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__9_prepare_mac_header,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__10_prepare_bearer_uri,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__11_prepare_bearer_headers,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__12_prepare_bearer_body,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__13_random_token_generator,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__15_get_token_from_header,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__16___call__,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__17_validate_request,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__18_estimate_type,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__19___init__,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__20_create_token,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__21_validate_request,
    impl_oauthlib$oauth2$rfc6749$tokens$$$function__22_estimate_type,
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

    function_impl_code *current = functable_oauthlib$oauth2$rfc6749$tokens;
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

    if (offset > sizeof(functable_oauthlib$oauth2$rfc6749$tokens) || offset < 0) {
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
        functable_oauthlib$oauth2$rfc6749$tokens[offset],
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
        module_oauthlib$oauth2$rfc6749$tokens,
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
PyObject *modulecode_oauthlib$oauth2$rfc6749$tokens(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("oauthlib.oauth2.rfc6749.tokens");

    // Store the module for future use.
    module_oauthlib$oauth2$rfc6749$tokens = module;

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
        PRINT_STRING("oauthlib.oauth2.rfc6749.tokens: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("oauthlib.oauth2.rfc6749.tokens: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initoauthlib$oauth2$rfc6749$tokens\n");

    moduledict_oauthlib$oauth2$rfc6749$tokens = MODULE_DICT(module_oauthlib$oauth2$rfc6749$tokens);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_oauthlib$oauth2$rfc6749$tokens,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$tokens,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[33]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_oauthlib$oauth2$rfc6749$tokens,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$tokens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_oauthlib$oauth2$rfc6749$tokens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_oauthlib$oauth2$rfc6749$tokens);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_oauthlib$oauth2$rfc6749$tokens);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_2ae111ed832c0b892e66e4fd56075d54;
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
    int tmp_res;
    PyObject *locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259 = NULL;
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
    PyObject *locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280 = NULL;
    struct Nuitka_FrameObject *frame_456e7366229490933a4ace51d721eb05_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_2);
    }
    frame_2ae111ed832c0b892e66e4fd56075d54 = MAKE_MODULE_FRAME(codeobj_2ae111ed832c0b892e66e4fd56075d54, module_oauthlib$oauth2$rfc6749$tokens);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2ae111ed832c0b892e66e4fd56075d54);
    assert(Py_REFCNT(frame_2ae111ed832c0b892e66e4fd56075d54) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[110], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[111], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[38];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[84];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[113];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[114];
        tmp_level_value_4 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens,
                mod_consts[29],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[115];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[116];
        tmp_level_value_5 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 14;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens,
                mod_consts[24],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[117];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[118];
        tmp_level_value_6 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 16;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens,
                mod_consts[21],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[119];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[120];
        tmp_level_value_7 = mod_consts[18];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 17;
        tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens,
                mod_consts[57],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[57]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens,
                mod_consts[52],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[52]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[33];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[121];
        tmp_level_value_8 = mod_consts[73];
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 19;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_oauthlib$oauth2$rfc6749$tokens,
                mod_consts[4],
                mod_consts[18]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_13);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[122];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_14 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[18];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[123]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[123]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[98];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 22;
        tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[124]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[125];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_9 = mod_consts[126];
        tmp_default_value_1 = mod_consts[127];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_9, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[126]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_18;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_19;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2 = MAKE_CLASS_FRAME(tstate, codeobj_1dee9ffa4f7895a4804d2c6bb6b81d3c, module_oauthlib$oauth2$rfc6749$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2);
        assert(Py_REFCNT(frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[131];
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__1___init__(tmp_defaults_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 38;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__2_scope_changed();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 38;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 42;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__3_old_scope();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 42;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__4_old_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[138], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_8 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 50;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__5_scope();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 50;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_10 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 54;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_10 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__6_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 54;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[91], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_12;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_12 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_11 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 58;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__7_missing_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 58;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_14 = PyObject_GetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[133]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__8_additional_scopes();

            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame.f_lineno = 62;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_1dee9ffa4f7895a4804d2c6bb6b81d3c_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[122];
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_16 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[98];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 22;
            tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_4;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_20);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_19 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22);
        locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22);
        locals_oauthlib$oauth2$rfc6749$tokens$$$class__1_OAuth2Token_22 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_19);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[147];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_21 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__9_prepare_mac_header(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__10_prepare_bearer_uri();

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[131];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_23 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__11_prepare_bearer_headers(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[151];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_24 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__12_prepare_bearer_body(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[153];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_25 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__13_random_token_generator(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__14_signed_token_generator();

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__15_get_token_from_header();

        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259, mod_consts[129], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[154];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259, mod_consts[130], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259, mod_consts[156], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[153];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__16___call__(tmp_defaults_6);

            tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__17_validate_request();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__18_estimate_type();

        tmp_res = PyDict_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_17 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[154];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[155];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 259;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_30 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259);
        locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259);
        locals_oauthlib$oauth2$rfc6749$tokens$$$class__2_TokenBase_259 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 259;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_30);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        assert(!(tmp_tuple_element_5 == NULL));
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_33 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_7 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[18];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_8 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[123]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_9 = tmp_class_creation_3__metaclass;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[123]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        tmp_tuple_element_6 = mod_consts[163];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_6 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 280;
        tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_10 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[124]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[125];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_11 = tmp_class_creation_3__metaclass;
        tmp_name_value_10 = mod_consts[126];
        tmp_default_value_2 = mod_consts[127];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_10, tmp_default_value_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[126]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 280;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_37;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[129], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[130], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_10;
        }
        frame_456e7366229490933a4ace51d721eb05_3 = MAKE_CLASS_FRAME(tstate, codeobj_456e7366229490933a4ace51d721eb05, module_oauthlib$oauth2$rfc6749$tokens, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_456e7366229490933a4ace51d721eb05_3);
        assert(Py_REFCNT(frame_456e7366229490933a4ace51d721eb05_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[156], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[165];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__19___init__(tmp_defaults_7);

            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_8;
            tmp_defaults_8 = mod_consts[153];
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__20_create_token(tmp_defaults_8);

            tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__21_validate_request();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[159], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_oauthlib$oauth2$rfc6749$tokens$$$function__22_estimate_type();

        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[161], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_456e7366229490933a4ace51d721eb05_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_456e7366229490933a4ace51d721eb05_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_456e7366229490933a4ace51d721eb05_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_456e7366229490933a4ace51d721eb05_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_456e7366229490933a4ace51d721eb05_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto try_except_handler_10;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_19 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_8 = mod_consts[163];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_8 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_2ae111ed832c0b892e66e4fd56075d54->m_frame.f_lineno = 280;
            tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_38 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280);
        locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280);
        locals_oauthlib$oauth2$rfc6749$tokens$$$class__3_BearerToken_280 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 280;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_38);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ae111ed832c0b892e66e4fd56075d54, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ae111ed832c0b892e66e4fd56075d54->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ae111ed832c0b892e66e4fd56075d54, exception_lineno);
    }



    assertFrameObject(frame_2ae111ed832c0b892e66e4fd56075d54);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("oauthlib.oauth2.rfc6749.tokens", false);

    Py_INCREF(module_oauthlib$oauth2$rfc6749$tokens);
    return module_oauthlib$oauth2$rfc6749$tokens;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_oauthlib$oauth2$rfc6749$tokens, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("oauthlib$oauth2$rfc6749$tokens", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
