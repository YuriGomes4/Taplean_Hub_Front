/* Generated code for Python module 'websockets.exceptions'
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

/* The "module_websockets$exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websockets$exceptions;
PyDictObject *moduledict_websockets$exceptions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[179];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[179];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("websockets.exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 179; i++) {
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
void checkModuleConstants_websockets$exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 179; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1fd1b41cc23071a639ed47cc01109b9d;
static PyCodeObject *codeobj_4c69125b17763851f1894c1c7de11696;
static PyCodeObject *codeobj_663b08b599f41ab51048994f5bebe5f6;
static PyCodeObject *codeobj_bb426f3b5a26f89b3866997874817d4b;
static PyCodeObject *codeobj_faf6558c05e708671f571bf7e7642ebd;
static PyCodeObject *codeobj_adaab074f2b261f392d721c9d7a689dc;
static PyCodeObject *codeobj_ab374dc2ff56012ce8225575c3b2404d;
static PyCodeObject *codeobj_3d33c699e0b070d8fbb6f645c8b13629;
static PyCodeObject *codeobj_04fd14767be0acc3ce30a6c93b78bac7;
static PyCodeObject *codeobj_666c10a4a3a6305a6d12d9583b30f709;
static PyCodeObject *codeobj_3eb37a0ca8891631f26a7970748de6db;
static PyCodeObject *codeobj_8b1f43936b1addad073b8abe79beeb18;
static PyCodeObject *codeobj_971aaacffb48ba1f2bfe6da9d8fd63e0;
static PyCodeObject *codeobj_0f4181cf3cc6c32ec0335c682beef91e;
static PyCodeObject *codeobj_fd605f7e9a555dabe96d319398104c27;
static PyCodeObject *codeobj_e887378b319ef33a7ff666f4554b4892;
static PyCodeObject *codeobj_82755e8fee58a2a4e0e3cbbd4082b452;
static PyCodeObject *codeobj_e878a6f9b759c9bbe6a434df0d7b18c2;
static PyCodeObject *codeobj_5e10557caf7ed4b5acafbc6e9d068ccb;
static PyCodeObject *codeobj_1137559a7ecebd616768089fbfbcf6f2;
static PyCodeObject *codeobj_f069a3150588359bfaa70c1f537cc163;
static PyCodeObject *codeobj_34eae7cac16609be55d6220b0c123b7c;
static PyCodeObject *codeobj_0384754ba5ebb74b2fff21a42fbb9321;
static PyCodeObject *codeobj_f9d15d83c1de5d039b3b3428a3c69e8d;
static PyCodeObject *codeobj_043edc95897a7385f3b1564e941e3857;
static PyCodeObject *codeobj_2b76bc4df2118b0d9842086c9b9b968e;
static PyCodeObject *codeobj_810d0e427fd3928d04750fc5b8cbdefb;
static PyCodeObject *codeobj_e494233ee80ab3ede0f805b1cff42b78;
static PyCodeObject *codeobj_702026805d07ed06ac4922cb9e626962;
static PyCodeObject *codeobj_6e6a76d683fcdacaa87d35240fbb262c;
static PyCodeObject *codeobj_8ba1bb050505405ac91f9d2e6045fa2c;
static PyCodeObject *codeobj_9a10b46c19433c7a807f188f3b15af7a;
static PyCodeObject *codeobj_400c8f78b0501a25d2b4467a2448c8aa;
static PyCodeObject *codeobj_1a288dc22a00aae8e452c98b5b991696;
static PyCodeObject *codeobj_c33e4a14419c7758132c31f35b39e98e;
static PyCodeObject *codeobj_94a7502455a4e942d99e34bcef4ea048;
static PyCodeObject *codeobj_6b524a052a1c9ab46bfdacef5d0cba76;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[165]); CHECK_OBJECT(module_filename_obj);
    codeobj_1fd1b41cc23071a639ed47cc01109b9d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[166], mod_consts[166], NULL, NULL, 0, 0, 0);
    codeobj_4c69125b17763851f1894c1c7de11696 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[167], NULL, 0, 0, 0);
    codeobj_663b08b599f41ab51048994f5bebe5f6 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[78], mod_consts[78], mod_consts[167], NULL, 0, 0, 0);
    codeobj_bb426f3b5a26f89b3866997874817d4b = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[129], mod_consts[129], mod_consts[167], NULL, 0, 0, 0);
    codeobj_faf6558c05e708671f571bf7e7642ebd = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[100], mod_consts[100], mod_consts[167], NULL, 0, 0, 0);
    codeobj_adaab074f2b261f392d721c9d7a689dc = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[105], mod_consts[105], mod_consts[167], NULL, 0, 0, 0);
    codeobj_ab374dc2ff56012ce8225575c3b2404d = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[111], mod_consts[111], mod_consts[167], NULL, 0, 0, 0);
    codeobj_3d33c699e0b070d8fbb6f645c8b13629 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[167], NULL, 0, 0, 0);
    codeobj_04fd14767be0acc3ce30a6c93b78bac7 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[138], mod_consts[138], mod_consts[167], NULL, 0, 0, 0);
    codeobj_666c10a4a3a6305a6d12d9583b30f709 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[117], mod_consts[117], mod_consts[167], NULL, 0, 0, 0);
    codeobj_3eb37a0ca8891631f26a7970748de6db = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[122], mod_consts[122], mod_consts[167], NULL, 0, 0, 0);
    codeobj_8b1f43936b1addad073b8abe79beeb18 = MAKE_CODE_OBJECT(module_filename_obj, 375, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[155], mod_consts[155], mod_consts[167], NULL, 0, 0, 0);
    codeobj_971aaacffb48ba1f2bfe6da9d8fd63e0 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[148], mod_consts[148], mod_consts[167], NULL, 0, 0, 0);
    codeobj_0f4181cf3cc6c32ec0335c682beef91e = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[168], NULL, 2, 0, 0);
    codeobj_fd605f7e9a555dabe96d319398104c27 = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[168], NULL, 2, 0, 0);
    codeobj_e887378b319ef33a7ff666f4554b4892 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[169], mod_consts[167], 5, 0, 0);
    codeobj_82755e8fee58a2a4e0e3cbbd4082b452 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[170], NULL, 3, 0, 0);
    codeobj_e878a6f9b759c9bbe6a434df0d7b18c2 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[170], NULL, 3, 0, 0);
    codeobj_5e10557caf7ed4b5acafbc6e9d068ccb = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[171], mod_consts[167], 2, 0, 0);
    codeobj_1137559a7ecebd616768089fbfbcf6f2 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[172], NULL, 4, 0, 0);
    codeobj_f069a3150588359bfaa70c1f537cc163 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[173], NULL, 2, 0, 0);
    codeobj_34eae7cac16609be55d6220b0c123b7c = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[174], NULL, 4, 0, 0);
    codeobj_0384754ba5ebb74b2fff21a42fbb9321 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[175], NULL, 3, 0, 0);
    codeobj_f9d15d83c1de5d039b3b3428a3c69e8d = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[176], NULL, 2, 0, 0);
    codeobj_043edc95897a7385f3b1564e941e3857 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[177], NULL, 3, 0, 0);
    codeobj_2b76bc4df2118b0d9842086c9b9b968e = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_810d0e427fd3928d04750fc5b8cbdefb = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_e494233ee80ab3ede0f805b1cff42b78 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_702026805d07ed06ac4922cb9e626962 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_6e6a76d683fcdacaa87d35240fbb262c = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_8ba1bb050505405ac91f9d2e6045fa2c = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_9a10b46c19433c7a807f188f3b15af7a = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_400c8f78b0501a25d2b4467a2448c8aa = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_1a288dc22a00aae8e452c98b5b991696 = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_c33e4a14419c7758132c31f35b39e98e = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[84], mod_consts[84], mod_consts[178], NULL, 1, 0, 0);
    codeobj_94a7502455a4e942d99e34bcef4ea048 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[12], mod_consts[12], mod_consts[178], NULL, 1, 0, 0);
    codeobj_6b524a052a1c9ab46bfdacef5d0cba76 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[13], mod_consts[13], mod_consts[178], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__10___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__11___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__12___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__13___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__14___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__15___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__16___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__17___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__18___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__19___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__20___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__21___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__22___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__23___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__24___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__2___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__3_code(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__5___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__6___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__7___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__8___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__9___init__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websockets$exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rcvd = python_pars[1];
    PyObject *par_sent = python_pars[2];
    PyObject *par_rcvd_then_sent = python_pars[3];
    struct Nuitka_FrameObject *frame_1137559a7ecebd616768089fbfbcf6f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1137559a7ecebd616768089fbfbcf6f2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1137559a7ecebd616768089fbfbcf6f2)) {
        Py_XDECREF(cache_frame_1137559a7ecebd616768089fbfbcf6f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1137559a7ecebd616768089fbfbcf6f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1137559a7ecebd616768089fbfbcf6f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_1137559a7ecebd616768089fbfbcf6f2, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1137559a7ecebd616768089fbfbcf6f2->m_type_description == NULL);
    frame_1137559a7ecebd616768089fbfbcf6f2 = cache_frame_1137559a7ecebd616768089fbfbcf6f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1137559a7ecebd616768089fbfbcf6f2);
    assert(Py_REFCNT(frame_1137559a7ecebd616768089fbfbcf6f2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_rcvd);
        tmp_assattr_value_1 = par_rcvd;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_sent);
        tmp_assattr_value_2 = par_sent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_rcvd_then_sent);
        tmp_assattr_value_3 = par_rcvd_then_sent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1137559a7ecebd616768089fbfbcf6f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1137559a7ecebd616768089fbfbcf6f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1137559a7ecebd616768089fbfbcf6f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1137559a7ecebd616768089fbfbcf6f2,
        type_description_1,
        par_self,
        par_rcvd,
        par_sent,
        par_rcvd_then_sent
    );


    // Release cached frame if used for exception.
    if (frame_1137559a7ecebd616768089fbfbcf6f2 == cache_frame_1137559a7ecebd616768089fbfbcf6f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1137559a7ecebd616768089fbfbcf6f2);
        cache_frame_1137559a7ecebd616768089fbfbcf6f2 = NULL;
    }

    assertFrameObject(frame_1137559a7ecebd616768089fbfbcf6f2);

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
    CHECK_OBJECT(par_rcvd);
    Py_DECREF(par_rcvd);
    CHECK_OBJECT(par_sent);
    Py_DECREF(par_sent);
    CHECK_OBJECT(par_rcvd_then_sent);
    Py_DECREF(par_rcvd_then_sent);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rcvd);
    Py_DECREF(par_rcvd);
    CHECK_OBJECT(par_sent);
    Py_DECREF(par_sent);
    CHECK_OBJECT(par_rcvd_then_sent);
    Py_DECREF(par_rcvd_then_sent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b76bc4df2118b0d9842086c9b9b968e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b76bc4df2118b0d9842086c9b9b968e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b76bc4df2118b0d9842086c9b9b968e)) {
        Py_XDECREF(cache_frame_2b76bc4df2118b0d9842086c9b9b968e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b76bc4df2118b0d9842086c9b9b968e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b76bc4df2118b0d9842086c9b9b968e = MAKE_FUNCTION_FRAME(tstate, codeobj_2b76bc4df2118b0d9842086c9b9b968e, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b76bc4df2118b0d9842086c9b9b968e->m_type_description == NULL);
    frame_2b76bc4df2118b0d9842086c9b9b968e = cache_frame_2b76bc4df2118b0d9842086c9b9b968e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2b76bc4df2118b0d9842086c9b9b968e);
    assert(Py_REFCNT(frame_2b76bc4df2118b0d9842086c9b9b968e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 103;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_return_value = mod_consts[3];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[2]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 106;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[4];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[1]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[6];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[1]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[2]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 110;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[7];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[0]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[8];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[2]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_lineno = 113;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[7];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_11 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[0]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[5];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[1]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[5];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[4];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_self);
            tmp_expression_value_13 = par_self;
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[1]);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_5 = mod_consts[5];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[10];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(par_self);
            tmp_expression_value_14 = par_self;
            tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[0]);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_6 = mod_consts[5];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "o";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_8:;
    branch_end_5:;
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
        exception_tb = MAKE_TRACEBACK(frame_2b76bc4df2118b0d9842086c9b9b968e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b76bc4df2118b0d9842086c9b9b968e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b76bc4df2118b0d9842086c9b9b968e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b76bc4df2118b0d9842086c9b9b968e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b76bc4df2118b0d9842086c9b9b968e == cache_frame_2b76bc4df2118b0d9842086c9b9b968e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b76bc4df2118b0d9842086c9b9b968e);
        cache_frame_2b76bc4df2118b0d9842086c9b9b968e = NULL;
    }

    assertFrameObject(frame_2b76bc4df2118b0d9842086c9b9b968e);

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


static PyObject *impl_websockets$exceptions$$$function__3_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_94a7502455a4e942d99e34bcef4ea048;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_94a7502455a4e942d99e34bcef4ea048 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94a7502455a4e942d99e34bcef4ea048)) {
        Py_XDECREF(cache_frame_94a7502455a4e942d99e34bcef4ea048);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94a7502455a4e942d99e34bcef4ea048 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94a7502455a4e942d99e34bcef4ea048 = MAKE_FUNCTION_FRAME(tstate, codeobj_94a7502455a4e942d99e34bcef4ea048, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94a7502455a4e942d99e34bcef4ea048->m_type_description == NULL);
    frame_94a7502455a4e942d99e34bcef4ea048 = cache_frame_94a7502455a4e942d99e34bcef4ea048;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94a7502455a4e942d99e34bcef4ea048);
    assert(Py_REFCNT(frame_94a7502455a4e942d99e34bcef4ea048) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[11];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_94a7502455a4e942d99e34bcef4ea048, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94a7502455a4e942d99e34bcef4ea048->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94a7502455a4e942d99e34bcef4ea048, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94a7502455a4e942d99e34bcef4ea048,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_94a7502455a4e942d99e34bcef4ea048 == cache_frame_94a7502455a4e942d99e34bcef4ea048) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94a7502455a4e942d99e34bcef4ea048);
        cache_frame_94a7502455a4e942d99e34bcef4ea048 = NULL;
    }

    assertFrameObject(frame_94a7502455a4e942d99e34bcef4ea048);

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


static PyObject *impl_websockets$exceptions$$$function__4_reason(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6b524a052a1c9ab46bfdacef5d0cba76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6b524a052a1c9ab46bfdacef5d0cba76 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b524a052a1c9ab46bfdacef5d0cba76)) {
        Py_XDECREF(cache_frame_6b524a052a1c9ab46bfdacef5d0cba76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b524a052a1c9ab46bfdacef5d0cba76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b524a052a1c9ab46bfdacef5d0cba76 = MAKE_FUNCTION_FRAME(tstate, codeobj_6b524a052a1c9ab46bfdacef5d0cba76, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b524a052a1c9ab46bfdacef5d0cba76->m_type_description == NULL);
    frame_6b524a052a1c9ab46bfdacef5d0cba76 = cache_frame_6b524a052a1c9ab46bfdacef5d0cba76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b524a052a1c9ab46bfdacef5d0cba76);
    assert(Py_REFCNT(frame_6b524a052a1c9ab46bfdacef5d0cba76) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[5];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[13]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_6b524a052a1c9ab46bfdacef5d0cba76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b524a052a1c9ab46bfdacef5d0cba76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b524a052a1c9ab46bfdacef5d0cba76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b524a052a1c9ab46bfdacef5d0cba76,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6b524a052a1c9ab46bfdacef5d0cba76 == cache_frame_6b524a052a1c9ab46bfdacef5d0cba76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b524a052a1c9ab46bfdacef5d0cba76);
        cache_frame_6b524a052a1c9ab46bfdacef5d0cba76 = NULL;
    }

    assertFrameObject(frame_6b524a052a1c9ab46bfdacef5d0cba76);

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


static PyObject *impl_websockets$exceptions$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_82755e8fee58a2a4e0e3cbbd4082b452;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_82755e8fee58a2a4e0e3cbbd4082b452 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_82755e8fee58a2a4e0e3cbbd4082b452)) {
        Py_XDECREF(cache_frame_82755e8fee58a2a4e0e3cbbd4082b452);

#if _DEBUG_REFCOUNTS
        if (cache_frame_82755e8fee58a2a4e0e3cbbd4082b452 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_82755e8fee58a2a4e0e3cbbd4082b452 = MAKE_FUNCTION_FRAME(tstate, codeobj_82755e8fee58a2a4e0e3cbbd4082b452, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_82755e8fee58a2a4e0e3cbbd4082b452->m_type_description == NULL);
    frame_82755e8fee58a2a4e0e3cbbd4082b452 = cache_frame_82755e8fee58a2a4e0e3cbbd4082b452;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_82755e8fee58a2a4e0e3cbbd4082b452);
    assert(Py_REFCNT(frame_82755e8fee58a2a4e0e3cbbd4082b452) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_2 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_82755e8fee58a2a4e0e3cbbd4082b452, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_82755e8fee58a2a4e0e3cbbd4082b452->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_82755e8fee58a2a4e0e3cbbd4082b452, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_82755e8fee58a2a4e0e3cbbd4082b452,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_82755e8fee58a2a4e0e3cbbd4082b452 == cache_frame_82755e8fee58a2a4e0e3cbbd4082b452) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_82755e8fee58a2a4e0e3cbbd4082b452);
        cache_frame_82755e8fee58a2a4e0e3cbbd4082b452 = NULL;
    }

    assertFrameObject(frame_82755e8fee58a2a4e0e3cbbd4082b452);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__6___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_810d0e427fd3928d04750fc5b8cbdefb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_810d0e427fd3928d04750fc5b8cbdefb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_810d0e427fd3928d04750fc5b8cbdefb)) {
        Py_XDECREF(cache_frame_810d0e427fd3928d04750fc5b8cbdefb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_810d0e427fd3928d04750fc5b8cbdefb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_810d0e427fd3928d04750fc5b8cbdefb = MAKE_FUNCTION_FRAME(tstate, codeobj_810d0e427fd3928d04750fc5b8cbdefb, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_810d0e427fd3928d04750fc5b8cbdefb->m_type_description == NULL);
    frame_810d0e427fd3928d04750fc5b8cbdefb = cache_frame_810d0e427fd3928d04750fc5b8cbdefb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_810d0e427fd3928d04750fc5b8cbdefb);
    assert(Py_REFCNT(frame_810d0e427fd3928d04750fc5b8cbdefb) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[16];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[17];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[15]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "o";
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
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[18];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[14]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[17];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[19];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[14]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[5];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[15]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[5];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_810d0e427fd3928d04750fc5b8cbdefb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_810d0e427fd3928d04750fc5b8cbdefb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_810d0e427fd3928d04750fc5b8cbdefb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_810d0e427fd3928d04750fc5b8cbdefb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_810d0e427fd3928d04750fc5b8cbdefb == cache_frame_810d0e427fd3928d04750fc5b8cbdefb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_810d0e427fd3928d04750fc5b8cbdefb);
        cache_frame_810d0e427fd3928d04750fc5b8cbdefb = NULL;
    }

    assertFrameObject(frame_810d0e427fd3928d04750fc5b8cbdefb);

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


static PyObject *impl_websockets$exceptions$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_error = python_pars[2];
    PyObject *par_header = python_pars[3];
    PyObject *par_pos = python_pars[4];
    struct Nuitka_FrameObject *frame_e887378b319ef33a7ff666f4554b4892;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e887378b319ef33a7ff666f4554b4892 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e887378b319ef33a7ff666f4554b4892)) {
        Py_XDECREF(cache_frame_e887378b319ef33a7ff666f4554b4892);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e887378b319ef33a7ff666f4554b4892 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e887378b319ef33a7ff666f4554b4892 = MAKE_FUNCTION_FRAME(tstate, codeobj_e887378b319ef33a7ff666f4554b4892, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e887378b319ef33a7ff666f4554b4892->m_type_description == NULL);
    frame_e887378b319ef33a7ff666f4554b4892 = cache_frame_e887378b319ef33a7ff666f4554b4892;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e887378b319ef33a7ff666f4554b4892);
    assert(Py_REFCNT(frame_e887378b319ef33a7ff666f4554b4892) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 205;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_websockets$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        CHECK_OBJECT(par_error);
        tmp_format_value_1 = par_error;
        tmp_format_spec_1 = mod_consts[5];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 205;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_pos);
            tmp_format_value_2 = par_pos;
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "oooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_header);
            tmp_format_value_3 = par_header;
            tmp_format_spec_3 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "oooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_2 = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 205;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_e887378b319ef33a7ff666f4554b4892->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e887378b319ef33a7ff666f4554b4892, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e887378b319ef33a7ff666f4554b4892->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e887378b319ef33a7ff666f4554b4892, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e887378b319ef33a7ff666f4554b4892,
        type_description_1,
        par_self,
        par_name,
        par_error,
        par_header,
        par_pos,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e887378b319ef33a7ff666f4554b4892 == cache_frame_e887378b319ef33a7ff666f4554b4892) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e887378b319ef33a7ff666f4554b4892);
        cache_frame_e887378b319ef33a7ff666f4554b4892 = NULL;
    }

    assertFrameObject(frame_e887378b319ef33a7ff666f4554b4892);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_error);
    Py_DECREF(par_error);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    CHECK_OBJECT(par_pos);
    Py_DECREF(par_pos);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_5e10557caf7ed4b5acafbc6e9d068ccb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb)) {
        Py_XDECREF(cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb = MAKE_FUNCTION_FRAME(tstate, codeobj_5e10557caf7ed4b5acafbc6e9d068ccb, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb->m_type_description == NULL);
    frame_5e10557caf7ed4b5acafbc6e9d068ccb = cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5e10557caf7ed4b5acafbc6e9d068ccb);
    assert(Py_REFCNT(frame_5e10557caf7ed4b5acafbc6e9d068ccb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 224;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_websockets$exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[25];
        CHECK_OBJECT(par_origin);
        tmp_args_element_value_2 = par_origin;
        frame_5e10557caf7ed4b5acafbc6e9d068ccb->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e10557caf7ed4b5acafbc6e9d068ccb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e10557caf7ed4b5acafbc6e9d068ccb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e10557caf7ed4b5acafbc6e9d068ccb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e10557caf7ed4b5acafbc6e9d068ccb,
        type_description_1,
        par_self,
        par_origin,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_5e10557caf7ed4b5acafbc6e9d068ccb == cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb);
        cache_frame_5e10557caf7ed4b5acafbc6e9d068ccb = NULL;
    }

    assertFrameObject(frame_5e10557caf7ed4b5acafbc6e9d068ccb);

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
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_response = python_pars[1];
    struct Nuitka_FrameObject *frame_f069a3150588359bfaa70c1f537cc163;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f069a3150588359bfaa70c1f537cc163 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f069a3150588359bfaa70c1f537cc163)) {
        Py_XDECREF(cache_frame_f069a3150588359bfaa70c1f537cc163);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f069a3150588359bfaa70c1f537cc163 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f069a3150588359bfaa70c1f537cc163 = MAKE_FUNCTION_FRAME(tstate, codeobj_f069a3150588359bfaa70c1f537cc163, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f069a3150588359bfaa70c1f537cc163->m_type_description == NULL);
    frame_f069a3150588359bfaa70c1f537cc163 = cache_frame_f069a3150588359bfaa70c1f537cc163;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f069a3150588359bfaa70c1f537cc163);
    assert(Py_REFCNT(frame_f069a3150588359bfaa70c1f537cc163) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_response);
        tmp_assattr_value_1 = par_response;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f069a3150588359bfaa70c1f537cc163, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f069a3150588359bfaa70c1f537cc163->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f069a3150588359bfaa70c1f537cc163, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f069a3150588359bfaa70c1f537cc163,
        type_description_1,
        par_self,
        par_response
    );


    // Release cached frame if used for exception.
    if (frame_f069a3150588359bfaa70c1f537cc163 == cache_frame_f069a3150588359bfaa70c1f537cc163) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f069a3150588359bfaa70c1f537cc163);
        cache_frame_f069a3150588359bfaa70c1f537cc163 = NULL;
    }

    assertFrameObject(frame_f069a3150588359bfaa70c1f537cc163);

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
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_response);
    Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__10___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e494233ee80ab3ede0f805b1cff42b78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e494233ee80ab3ede0f805b1cff42b78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e494233ee80ab3ede0f805b1cff42b78)) {
        Py_XDECREF(cache_frame_e494233ee80ab3ede0f805b1cff42b78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e494233ee80ab3ede0f805b1cff42b78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e494233ee80ab3ede0f805b1cff42b78 = MAKE_FUNCTION_FRAME(tstate, codeobj_e494233ee80ab3ede0f805b1cff42b78, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e494233ee80ab3ede0f805b1cff42b78->m_type_description == NULL);
    frame_e494233ee80ab3ede0f805b1cff42b78 = cache_frame_e494233ee80ab3ede0f805b1cff42b78;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e494233ee80ab3ede0f805b1cff42b78);
    assert(Py_REFCNT(frame_e494233ee80ab3ede0f805b1cff42b78) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[27];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[26]);
            if (tmp_expression_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[29];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
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
        exception_tb = MAKE_TRACEBACK(frame_e494233ee80ab3ede0f805b1cff42b78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e494233ee80ab3ede0f805b1cff42b78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e494233ee80ab3ede0f805b1cff42b78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e494233ee80ab3ede0f805b1cff42b78,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e494233ee80ab3ede0f805b1cff42b78 == cache_frame_e494233ee80ab3ede0f805b1cff42b78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e494233ee80ab3ede0f805b1cff42b78);
        cache_frame_e494233ee80ab3ede0f805b1cff42b78 = NULL;
    }

    assertFrameObject(frame_e494233ee80ab3ede0f805b1cff42b78);

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


static PyObject *impl_websockets$exceptions$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status_code = python_pars[1];
    PyObject *par_headers = python_pars[2];
    struct Nuitka_FrameObject *frame_0384754ba5ebb74b2fff21a42fbb9321;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0384754ba5ebb74b2fff21a42fbb9321 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0384754ba5ebb74b2fff21a42fbb9321)) {
        Py_XDECREF(cache_frame_0384754ba5ebb74b2fff21a42fbb9321);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0384754ba5ebb74b2fff21a42fbb9321 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0384754ba5ebb74b2fff21a42fbb9321 = MAKE_FUNCTION_FRAME(tstate, codeobj_0384754ba5ebb74b2fff21a42fbb9321, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0384754ba5ebb74b2fff21a42fbb9321->m_type_description == NULL);
    frame_0384754ba5ebb74b2fff21a42fbb9321 = cache_frame_0384754ba5ebb74b2fff21a42fbb9321;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0384754ba5ebb74b2fff21a42fbb9321);
    assert(Py_REFCNT(frame_0384754ba5ebb74b2fff21a42fbb9321) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_status_code);
        tmp_assattr_value_1 = par_status_code;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_headers);
        tmp_assattr_value_2 = par_headers;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0384754ba5ebb74b2fff21a42fbb9321, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0384754ba5ebb74b2fff21a42fbb9321->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0384754ba5ebb74b2fff21a42fbb9321, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0384754ba5ebb74b2fff21a42fbb9321,
        type_description_1,
        par_self,
        par_status_code,
        par_headers
    );


    // Release cached frame if used for exception.
    if (frame_0384754ba5ebb74b2fff21a42fbb9321 == cache_frame_0384754ba5ebb74b2fff21a42fbb9321) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0384754ba5ebb74b2fff21a42fbb9321);
        cache_frame_0384754ba5ebb74b2fff21a42fbb9321 = NULL;
    }

    assertFrameObject(frame_0384754ba5ebb74b2fff21a42fbb9321);

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
    CHECK_OBJECT(par_status_code);
    Py_DECREF(par_status_code);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status_code);
    Py_DECREF(par_status_code);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__12___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_702026805d07ed06ac4922cb9e626962;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_702026805d07ed06ac4922cb9e626962 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_702026805d07ed06ac4922cb9e626962)) {
        Py_XDECREF(cache_frame_702026805d07ed06ac4922cb9e626962);

#if _DEBUG_REFCOUNTS
        if (cache_frame_702026805d07ed06ac4922cb9e626962 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_702026805d07ed06ac4922cb9e626962 = MAKE_FUNCTION_FRAME(tstate, codeobj_702026805d07ed06ac4922cb9e626962, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_702026805d07ed06ac4922cb9e626962->m_type_description == NULL);
    frame_702026805d07ed06ac4922cb9e626962 = cache_frame_702026805d07ed06ac4922cb9e626962;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_702026805d07ed06ac4922cb9e626962);
    assert(Py_REFCNT(frame_702026805d07ed06ac4922cb9e626962) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[27];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[28]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
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
        exception_tb = MAKE_TRACEBACK(frame_702026805d07ed06ac4922cb9e626962, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_702026805d07ed06ac4922cb9e626962->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_702026805d07ed06ac4922cb9e626962, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_702026805d07ed06ac4922cb9e626962,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_702026805d07ed06ac4922cb9e626962 == cache_frame_702026805d07ed06ac4922cb9e626962) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_702026805d07ed06ac4922cb9e626962);
        cache_frame_702026805d07ed06ac4922cb9e626962 = NULL;
    }

    assertFrameObject(frame_702026805d07ed06ac4922cb9e626962);

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


static PyObject *impl_websockets$exceptions$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_0f4181cf3cc6c32ec0335c682beef91e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f4181cf3cc6c32ec0335c682beef91e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f4181cf3cc6c32ec0335c682beef91e)) {
        Py_XDECREF(cache_frame_0f4181cf3cc6c32ec0335c682beef91e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f4181cf3cc6c32ec0335c682beef91e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f4181cf3cc6c32ec0335c682beef91e = MAKE_FUNCTION_FRAME(tstate, codeobj_0f4181cf3cc6c32ec0335c682beef91e, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f4181cf3cc6c32ec0335c682beef91e->m_type_description == NULL);
    frame_0f4181cf3cc6c32ec0335c682beef91e = cache_frame_0f4181cf3cc6c32ec0335c682beef91e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0f4181cf3cc6c32ec0335c682beef91e);
    assert(Py_REFCNT(frame_0f4181cf3cc6c32ec0335c682beef91e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f4181cf3cc6c32ec0335c682beef91e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f4181cf3cc6c32ec0335c682beef91e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f4181cf3cc6c32ec0335c682beef91e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f4181cf3cc6c32ec0335c682beef91e,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_0f4181cf3cc6c32ec0335c682beef91e == cache_frame_0f4181cf3cc6c32ec0335c682beef91e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f4181cf3cc6c32ec0335c682beef91e);
        cache_frame_0f4181cf3cc6c32ec0335c682beef91e = NULL;
    }

    assertFrameObject(frame_0f4181cf3cc6c32ec0335c682beef91e);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__14___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6e6a76d683fcdacaa87d35240fbb262c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e6a76d683fcdacaa87d35240fbb262c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e6a76d683fcdacaa87d35240fbb262c)) {
        Py_XDECREF(cache_frame_6e6a76d683fcdacaa87d35240fbb262c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e6a76d683fcdacaa87d35240fbb262c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e6a76d683fcdacaa87d35240fbb262c = MAKE_FUNCTION_FRAME(tstate, codeobj_6e6a76d683fcdacaa87d35240fbb262c, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e6a76d683fcdacaa87d35240fbb262c->m_type_description == NULL);
    frame_6e6a76d683fcdacaa87d35240fbb262c = cache_frame_6e6a76d683fcdacaa87d35240fbb262c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6e6a76d683fcdacaa87d35240fbb262c);
    assert(Py_REFCNT(frame_6e6a76d683fcdacaa87d35240fbb262c) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[31];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_6e6a76d683fcdacaa87d35240fbb262c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e6a76d683fcdacaa87d35240fbb262c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e6a76d683fcdacaa87d35240fbb262c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e6a76d683fcdacaa87d35240fbb262c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6e6a76d683fcdacaa87d35240fbb262c == cache_frame_6e6a76d683fcdacaa87d35240fbb262c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e6a76d683fcdacaa87d35240fbb262c);
        cache_frame_6e6a76d683fcdacaa87d35240fbb262c = NULL;
    }

    assertFrameObject(frame_6e6a76d683fcdacaa87d35240fbb262c);

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


static PyObject *impl_websockets$exceptions$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    struct Nuitka_FrameObject *frame_fd605f7e9a555dabe96d319398104c27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd605f7e9a555dabe96d319398104c27 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd605f7e9a555dabe96d319398104c27)) {
        Py_XDECREF(cache_frame_fd605f7e9a555dabe96d319398104c27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd605f7e9a555dabe96d319398104c27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd605f7e9a555dabe96d319398104c27 = MAKE_FUNCTION_FRAME(tstate, codeobj_fd605f7e9a555dabe96d319398104c27, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd605f7e9a555dabe96d319398104c27->m_type_description == NULL);
    frame_fd605f7e9a555dabe96d319398104c27 = cache_frame_fd605f7e9a555dabe96d319398104c27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fd605f7e9a555dabe96d319398104c27);
    assert(Py_REFCNT(frame_fd605f7e9a555dabe96d319398104c27) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd605f7e9a555dabe96d319398104c27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd605f7e9a555dabe96d319398104c27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd605f7e9a555dabe96d319398104c27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd605f7e9a555dabe96d319398104c27,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame if used for exception.
    if (frame_fd605f7e9a555dabe96d319398104c27 == cache_frame_fd605f7e9a555dabe96d319398104c27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd605f7e9a555dabe96d319398104c27);
        cache_frame_fd605f7e9a555dabe96d319398104c27 = NULL;
    }

    assertFrameObject(frame_fd605f7e9a555dabe96d319398104c27);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__16___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8ba1bb050505405ac91f9d2e6045fa2c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ba1bb050505405ac91f9d2e6045fa2c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ba1bb050505405ac91f9d2e6045fa2c)) {
        Py_XDECREF(cache_frame_8ba1bb050505405ac91f9d2e6045fa2c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ba1bb050505405ac91f9d2e6045fa2c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ba1bb050505405ac91f9d2e6045fa2c = MAKE_FUNCTION_FRAME(tstate, codeobj_8ba1bb050505405ac91f9d2e6045fa2c, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ba1bb050505405ac91f9d2e6045fa2c->m_type_description == NULL);
    frame_8ba1bb050505405ac91f9d2e6045fa2c = cache_frame_8ba1bb050505405ac91f9d2e6045fa2c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8ba1bb050505405ac91f9d2e6045fa2c);
    assert(Py_REFCNT(frame_8ba1bb050505405ac91f9d2e6045fa2c) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[32];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_8ba1bb050505405ac91f9d2e6045fa2c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ba1bb050505405ac91f9d2e6045fa2c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ba1bb050505405ac91f9d2e6045fa2c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ba1bb050505405ac91f9d2e6045fa2c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8ba1bb050505405ac91f9d2e6045fa2c == cache_frame_8ba1bb050505405ac91f9d2e6045fa2c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ba1bb050505405ac91f9d2e6045fa2c);
        cache_frame_8ba1bb050505405ac91f9d2e6045fa2c = NULL;
    }

    assertFrameObject(frame_8ba1bb050505405ac91f9d2e6045fa2c);

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


static PyObject *impl_websockets$exceptions$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_e878a6f9b759c9bbe6a434df0d7b18c2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2)) {
        Py_XDECREF(cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2 = MAKE_FUNCTION_FRAME(tstate, codeobj_e878a6f9b759c9bbe6a434df0d7b18c2, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2->m_type_description == NULL);
    frame_e878a6f9b759c9bbe6a434df0d7b18c2 = cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e878a6f9b759c9bbe6a434df0d7b18c2);
    assert(Py_REFCNT(frame_e878a6f9b759c9bbe6a434df0d7b18c2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_name);
        tmp_assattr_value_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_2 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e878a6f9b759c9bbe6a434df0d7b18c2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e878a6f9b759c9bbe6a434df0d7b18c2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e878a6f9b759c9bbe6a434df0d7b18c2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e878a6f9b759c9bbe6a434df0d7b18c2,
        type_description_1,
        par_self,
        par_name,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e878a6f9b759c9bbe6a434df0d7b18c2 == cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2);
        cache_frame_e878a6f9b759c9bbe6a434df0d7b18c2 = NULL;
    }

    assertFrameObject(frame_e878a6f9b759c9bbe6a434df0d7b18c2);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__18___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9a10b46c19433c7a807f188f3b15af7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9a10b46c19433c7a807f188f3b15af7a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a10b46c19433c7a807f188f3b15af7a)) {
        Py_XDECREF(cache_frame_9a10b46c19433c7a807f188f3b15af7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a10b46c19433c7a807f188f3b15af7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a10b46c19433c7a807f188f3b15af7a = MAKE_FUNCTION_FRAME(tstate, codeobj_9a10b46c19433c7a807f188f3b15af7a, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a10b46c19433c7a807f188f3b15af7a->m_type_description == NULL);
    frame_9a10b46c19433c7a807f188f3b15af7a = cache_frame_9a10b46c19433c7a807f188f3b15af7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9a10b46c19433c7a807f188f3b15af7a);
    assert(Py_REFCNT(frame_9a10b46c19433c7a807f188f3b15af7a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[15]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[33];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[15]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
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
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[34];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[14]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_1 = "o";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[35];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[14]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_3 = mod_consts[5];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[15]);
            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[5];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "o";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_9a10b46c19433c7a807f188f3b15af7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a10b46c19433c7a807f188f3b15af7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a10b46c19433c7a807f188f3b15af7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a10b46c19433c7a807f188f3b15af7a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9a10b46c19433c7a807f188f3b15af7a == cache_frame_9a10b46c19433c7a807f188f3b15af7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a10b46c19433c7a807f188f3b15af7a);
        cache_frame_9a10b46c19433c7a807f188f3b15af7a = NULL;
    }

    assertFrameObject(frame_9a10b46c19433c7a807f188f3b15af7a);

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


static PyObject *impl_websockets$exceptions$$$function__19___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status = python_pars[1];
    PyObject *par_headers = python_pars[2];
    PyObject *par_body = python_pars[3];
    struct Nuitka_FrameObject *frame_34eae7cac16609be55d6220b0c123b7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34eae7cac16609be55d6220b0c123b7c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_34eae7cac16609be55d6220b0c123b7c)) {
        Py_XDECREF(cache_frame_34eae7cac16609be55d6220b0c123b7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34eae7cac16609be55d6220b0c123b7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34eae7cac16609be55d6220b0c123b7c = MAKE_FUNCTION_FRAME(tstate, codeobj_34eae7cac16609be55d6220b0c123b7c, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34eae7cac16609be55d6220b0c123b7c->m_type_description == NULL);
    frame_34eae7cac16609be55d6220b0c123b7c = cache_frame_34eae7cac16609be55d6220b0c123b7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_34eae7cac16609be55d6220b0c123b7c);
    assert(Py_REFCNT(frame_34eae7cac16609be55d6220b0c123b7c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_status);
        tmp_assattr_value_1 = par_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_headers);
        tmp_args_element_value_1 = par_headers;
        frame_34eae7cac16609be55d6220b0c123b7c->m_frame.f_lineno = 338;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[39], tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_body);
        tmp_assattr_value_3 = par_body;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[40], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_34eae7cac16609be55d6220b0c123b7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34eae7cac16609be55d6220b0c123b7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34eae7cac16609be55d6220b0c123b7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34eae7cac16609be55d6220b0c123b7c,
        type_description_1,
        par_self,
        par_status,
        par_headers,
        par_body
    );


    // Release cached frame if used for exception.
    if (frame_34eae7cac16609be55d6220b0c123b7c == cache_frame_34eae7cac16609be55d6220b0c123b7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34eae7cac16609be55d6220b0c123b7c);
        cache_frame_34eae7cac16609be55d6220b0c123b7c = NULL;
    }

    assertFrameObject(frame_34eae7cac16609be55d6220b0c123b7c);

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
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    CHECK_OBJECT(par_headers);
    Py_DECREF(par_headers);
    CHECK_OBJECT(par_body);
    Py_DECREF(par_body);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__20___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_400c8f78b0501a25d2b4467a2448c8aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_400c8f78b0501a25d2b4467a2448c8aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_400c8f78b0501a25d2b4467a2448c8aa)) {
        Py_XDECREF(cache_frame_400c8f78b0501a25d2b4467a2448c8aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_400c8f78b0501a25d2b4467a2448c8aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_400c8f78b0501a25d2b4467a2448c8aa = MAKE_FUNCTION_FRAME(tstate, codeobj_400c8f78b0501a25d2b4467a2448c8aa, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_400c8f78b0501a25d2b4467a2448c8aa->m_type_description == NULL);
    frame_400c8f78b0501a25d2b4467a2448c8aa = cache_frame_400c8f78b0501a25d2b4467a2448c8aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_400c8f78b0501a25d2b4467a2448c8aa);
    assert(Py_REFCNT(frame_400c8f78b0501a25d2b4467a2448c8aa) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[41];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[37]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[29];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[42];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[30]);
            if (tmp_len_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
            Py_DECREF(tmp_len_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
            if (tmp_len_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
            Py_DECREF(tmp_len_arg_2);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
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
        exception_tb = MAKE_TRACEBACK(frame_400c8f78b0501a25d2b4467a2448c8aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_400c8f78b0501a25d2b4467a2448c8aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_400c8f78b0501a25d2b4467a2448c8aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_400c8f78b0501a25d2b4467a2448c8aa,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_400c8f78b0501a25d2b4467a2448c8aa == cache_frame_400c8f78b0501a25d2b4467a2448c8aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_400c8f78b0501a25d2b4467a2448c8aa);
        cache_frame_400c8f78b0501a25d2b4467a2448c8aa = NULL;
    }

    assertFrameObject(frame_400c8f78b0501a25d2b4467a2448c8aa);

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


static PyObject *impl_websockets$exceptions$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_uri = python_pars[1];
    struct Nuitka_FrameObject *frame_f9d15d83c1de5d039b3b3428a3c69e8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d)) {
        Py_XDECREF(cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d = MAKE_FUNCTION_FRAME(tstate, codeobj_f9d15d83c1de5d039b3b3428a3c69e8d, module_websockets$exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d->m_type_description == NULL);
    frame_f9d15d83c1de5d039b3b3428a3c69e8d = cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f9d15d83c1de5d039b3b3428a3c69e8d);
    assert(Py_REFCNT(frame_f9d15d83c1de5d039b3b3428a3c69e8d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_uri);
        tmp_assattr_value_1 = par_uri;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9d15d83c1de5d039b3b3428a3c69e8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9d15d83c1de5d039b3b3428a3c69e8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9d15d83c1de5d039b3b3428a3c69e8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9d15d83c1de5d039b3b3428a3c69e8d,
        type_description_1,
        par_self,
        par_uri
    );


    // Release cached frame if used for exception.
    if (frame_f9d15d83c1de5d039b3b3428a3c69e8d == cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d);
        cache_frame_f9d15d83c1de5d039b3b3428a3c69e8d = NULL;
    }

    assertFrameObject(frame_f9d15d83c1de5d039b3b3428a3c69e8d);

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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__22___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1a288dc22a00aae8e452c98b5b991696;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a288dc22a00aae8e452c98b5b991696 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a288dc22a00aae8e452c98b5b991696)) {
        Py_XDECREF(cache_frame_1a288dc22a00aae8e452c98b5b991696);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a288dc22a00aae8e452c98b5b991696 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a288dc22a00aae8e452c98b5b991696 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a288dc22a00aae8e452c98b5b991696, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a288dc22a00aae8e452c98b5b991696->m_type_description == NULL);
    frame_1a288dc22a00aae8e452c98b5b991696 = cache_frame_1a288dc22a00aae8e452c98b5b991696;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a288dc22a00aae8e452c98b5b991696);
    assert(Py_REFCNT(frame_1a288dc22a00aae8e452c98b5b991696) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[46];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_1 = par_self;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
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
        exception_tb = MAKE_TRACEBACK(frame_1a288dc22a00aae8e452c98b5b991696, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a288dc22a00aae8e452c98b5b991696->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a288dc22a00aae8e452c98b5b991696, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a288dc22a00aae8e452c98b5b991696,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1a288dc22a00aae8e452c98b5b991696 == cache_frame_1a288dc22a00aae8e452c98b5b991696) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a288dc22a00aae8e452c98b5b991696);
        cache_frame_1a288dc22a00aae8e452c98b5b991696 = NULL;
    }

    assertFrameObject(frame_1a288dc22a00aae8e452c98b5b991696);

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


static PyObject *impl_websockets$exceptions$$$function__23___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_uri = python_pars[1];
    PyObject *par_msg = python_pars[2];
    struct Nuitka_FrameObject *frame_043edc95897a7385f3b1564e941e3857;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_043edc95897a7385f3b1564e941e3857 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_043edc95897a7385f3b1564e941e3857)) {
        Py_XDECREF(cache_frame_043edc95897a7385f3b1564e941e3857);

#if _DEBUG_REFCOUNTS
        if (cache_frame_043edc95897a7385f3b1564e941e3857 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_043edc95897a7385f3b1564e941e3857 = MAKE_FUNCTION_FRAME(tstate, codeobj_043edc95897a7385f3b1564e941e3857, module_websockets$exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_043edc95897a7385f3b1564e941e3857->m_type_description == NULL);
    frame_043edc95897a7385f3b1564e941e3857 = cache_frame_043edc95897a7385f3b1564e941e3857;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_043edc95897a7385f3b1564e941e3857);
    assert(Py_REFCNT(frame_043edc95897a7385f3b1564e941e3857) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_uri);
        tmp_assattr_value_1 = par_uri;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[45], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_msg);
        tmp_assattr_value_2 = par_msg;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_043edc95897a7385f3b1564e941e3857, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_043edc95897a7385f3b1564e941e3857->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_043edc95897a7385f3b1564e941e3857, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_043edc95897a7385f3b1564e941e3857,
        type_description_1,
        par_self,
        par_uri,
        par_msg
    );


    // Release cached frame if used for exception.
    if (frame_043edc95897a7385f3b1564e941e3857 == cache_frame_043edc95897a7385f3b1564e941e3857) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_043edc95897a7385f3b1564e941e3857);
        cache_frame_043edc95897a7385f3b1564e941e3857 = NULL;
    }

    assertFrameObject(frame_043edc95897a7385f3b1564e941e3857);

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
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_uri);
    Py_DECREF(par_uri);
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_websockets$exceptions$$$function__24___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c33e4a14419c7758132c31f35b39e98e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c33e4a14419c7758132c31f35b39e98e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c33e4a14419c7758132c31f35b39e98e)) {
        Py_XDECREF(cache_frame_c33e4a14419c7758132c31f35b39e98e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c33e4a14419c7758132c31f35b39e98e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c33e4a14419c7758132c31f35b39e98e = MAKE_FUNCTION_FRAME(tstate, codeobj_c33e4a14419c7758132c31f35b39e98e, module_websockets$exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c33e4a14419c7758132c31f35b39e98e->m_type_description == NULL);
    frame_c33e4a14419c7758132c31f35b39e98e = cache_frame_c33e4a14419c7758132c31f35b39e98e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c33e4a14419c7758132c31f35b39e98e);
    assert(Py_REFCNT(frame_c33e4a14419c7758132c31f35b39e98e) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[5];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[48];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[47]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[5];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "o";
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
        tmp_return_value = PyUnicode_Join(mod_consts[5], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
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
        exception_tb = MAKE_TRACEBACK(frame_c33e4a14419c7758132c31f35b39e98e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c33e4a14419c7758132c31f35b39e98e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c33e4a14419c7758132c31f35b39e98e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c33e4a14419c7758132c31f35b39e98e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c33e4a14419c7758132c31f35b39e98e == cache_frame_c33e4a14419c7758132c31f35b39e98e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c33e4a14419c7758132c31f35b39e98e);
        cache_frame_c33e4a14419c7758132c31f35b39e98e = NULL;
    }

    assertFrameObject(frame_c33e4a14419c7758132c31f35b39e98e);

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



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__10___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__10___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_e494233ee80ab3ede0f805b1cff42b78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__11___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__11___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_0384754ba5ebb74b2fff21a42fbb9321,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__12___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__12___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_702026805d07ed06ac4922cb9e626962,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__13___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__13___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_0f4181cf3cc6c32ec0335c682beef91e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__14___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__14___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_6e6a76d683fcdacaa87d35240fbb262c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__15___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__15___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_fd605f7e9a555dabe96d319398104c27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__16___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__16___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_8ba1bb050505405ac91f9d2e6045fa2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__17___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__17___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_e878a6f9b759c9bbe6a434df0d7b18c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__18___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__18___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_9a10b46c19433c7a807f188f3b15af7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__19___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__19___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_34eae7cac16609be55d6220b0c123b7c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__1___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_1137559a7ecebd616768089fbfbcf6f2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__20___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__20___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_400c8f78b0501a25d2b4467a2448c8aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__21___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__21___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_f9d15d83c1de5d039b3b3428a3c69e8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__22___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__22___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_1a288dc22a00aae8e452c98b5b991696,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__23___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__23___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_043edc95897a7385f3b1564e941e3857,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__24___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__24___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_c33e4a14419c7758132c31f35b39e98e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__2___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__2___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_2b76bc4df2118b0d9842086c9b9b968e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__3_code(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__3_code,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_94a7502455a4e942d99e34bcef4ea048,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__4_reason,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_6b524a052a1c9ab46bfdacef5d0cba76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__5___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__5___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_82755e8fee58a2a4e0e3cbbd4082b452,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__6___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__6___str__,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_810d0e427fd3928d04750fc5b8cbdefb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__7___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__7___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_e887378b319ef33a7ff666f4554b4892,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__8___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__8___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_5e10557caf7ed4b5acafbc6e9d068ccb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websockets$exceptions$$$function__9___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websockets$exceptions$$$function__9___init__,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_f069a3150588359bfaa70c1f537cc163,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websockets$exceptions,
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

function_impl_code functable_websockets$exceptions[] = {
    impl_websockets$exceptions$$$function__1___init__,
    impl_websockets$exceptions$$$function__2___str__,
    impl_websockets$exceptions$$$function__3_code,
    impl_websockets$exceptions$$$function__4_reason,
    impl_websockets$exceptions$$$function__5___init__,
    impl_websockets$exceptions$$$function__6___str__,
    impl_websockets$exceptions$$$function__7___init__,
    impl_websockets$exceptions$$$function__8___init__,
    impl_websockets$exceptions$$$function__9___init__,
    impl_websockets$exceptions$$$function__10___str__,
    impl_websockets$exceptions$$$function__11___init__,
    impl_websockets$exceptions$$$function__12___str__,
    impl_websockets$exceptions$$$function__13___init__,
    impl_websockets$exceptions$$$function__14___str__,
    impl_websockets$exceptions$$$function__15___init__,
    impl_websockets$exceptions$$$function__16___str__,
    impl_websockets$exceptions$$$function__17___init__,
    impl_websockets$exceptions$$$function__18___str__,
    impl_websockets$exceptions$$$function__19___init__,
    impl_websockets$exceptions$$$function__20___str__,
    impl_websockets$exceptions$$$function__21___init__,
    impl_websockets$exceptions$$$function__22___str__,
    impl_websockets$exceptions$$$function__23___init__,
    impl_websockets$exceptions$$$function__24___str__,
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

    function_impl_code *current = functable_websockets$exceptions;
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

    if (offset > sizeof(functable_websockets$exceptions) || offset < 0) {
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
        functable_websockets$exceptions[offset],
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
        module_websockets$exceptions,
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
PyObject *modulecode_websockets$exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websockets.exceptions");

    // Store the module for future use.
    module_websockets$exceptions = module;

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
        PRINT_STRING("websockets.exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("websockets.exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsockets$exceptions\n");

    moduledict_websockets$exceptions = MODULE_DICT(module_websockets$exceptions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websockets$exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websockets$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[5]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websockets$exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websockets$exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websockets$exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_websockets$exceptions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    struct Nuitka_CellObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    struct Nuitka_CellObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *outline_19_var___class__ = NULL;
    PyObject *outline_20_var___class__ = NULL;
    PyObject *outline_21_var___class__ = NULL;
    PyObject *outline_22_var___class__ = NULL;
    PyObject *outline_23_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__bases_orig = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__bases_orig = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__bases_orig = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__bases_orig = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__bases_orig = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_15__bases = NULL;
    PyObject *tmp_class_creation_15__bases_orig = NULL;
    PyObject *tmp_class_creation_15__class_decl_dict = NULL;
    PyObject *tmp_class_creation_15__metaclass = NULL;
    PyObject *tmp_class_creation_15__prepared = NULL;
    PyObject *tmp_class_creation_16__bases = NULL;
    PyObject *tmp_class_creation_16__bases_orig = NULL;
    PyObject *tmp_class_creation_16__class_decl_dict = NULL;
    PyObject *tmp_class_creation_16__metaclass = NULL;
    PyObject *tmp_class_creation_16__prepared = NULL;
    PyObject *tmp_class_creation_17__bases = NULL;
    PyObject *tmp_class_creation_17__bases_orig = NULL;
    PyObject *tmp_class_creation_17__class_decl_dict = NULL;
    PyObject *tmp_class_creation_17__metaclass = NULL;
    PyObject *tmp_class_creation_17__prepared = NULL;
    PyObject *tmp_class_creation_18__bases = NULL;
    PyObject *tmp_class_creation_18__bases_orig = NULL;
    PyObject *tmp_class_creation_18__class_decl_dict = NULL;
    PyObject *tmp_class_creation_18__metaclass = NULL;
    PyObject *tmp_class_creation_18__prepared = NULL;
    PyObject *tmp_class_creation_19__bases = NULL;
    PyObject *tmp_class_creation_19__bases_orig = NULL;
    PyObject *tmp_class_creation_19__class_decl_dict = NULL;
    PyObject *tmp_class_creation_19__metaclass = NULL;
    PyObject *tmp_class_creation_19__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_20__bases = NULL;
    PyObject *tmp_class_creation_20__bases_orig = NULL;
    PyObject *tmp_class_creation_20__class_decl_dict = NULL;
    PyObject *tmp_class_creation_20__metaclass = NULL;
    PyObject *tmp_class_creation_20__prepared = NULL;
    PyObject *tmp_class_creation_21__bases = NULL;
    PyObject *tmp_class_creation_21__bases_orig = NULL;
    PyObject *tmp_class_creation_21__class_decl_dict = NULL;
    PyObject *tmp_class_creation_21__metaclass = NULL;
    PyObject *tmp_class_creation_21__prepared = NULL;
    PyObject *tmp_class_creation_22__bases = NULL;
    PyObject *tmp_class_creation_22__bases_orig = NULL;
    PyObject *tmp_class_creation_22__class_decl_dict = NULL;
    PyObject *tmp_class_creation_22__metaclass = NULL;
    PyObject *tmp_class_creation_22__prepared = NULL;
    PyObject *tmp_class_creation_23__bases = NULL;
    PyObject *tmp_class_creation_23__bases_orig = NULL;
    PyObject *tmp_class_creation_23__class_decl_dict = NULL;
    PyObject *tmp_class_creation_23__metaclass = NULL;
    PyObject *tmp_class_creation_23__prepared = NULL;
    PyObject *tmp_class_creation_24__bases = NULL;
    PyObject *tmp_class_creation_24__bases_orig = NULL;
    PyObject *tmp_class_creation_24__class_decl_dict = NULL;
    PyObject *tmp_class_creation_24__metaclass = NULL;
    PyObject *tmp_class_creation_24__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__bases_orig = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__bases_orig = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__bases_orig = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__bases_orig = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1fd1b41cc23071a639ed47cc01109b9d;
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
    PyObject *locals_websockets$exceptions$$$class__1_WebSocketException_68 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_websockets$exceptions$$$class__2_ConnectionClosed_75 = NULL;
    struct Nuitka_FrameObject *frame_663b08b599f41ab51048994f5bebe5f6_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__3_ConnectionClosedError_134 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__5_InvalidHandshake_154 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__6_SecurityError_161 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__7_InvalidMessage_170 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__8_InvalidHeader_177 = NULL;
    struct Nuitka_FrameObject *frame_faf6558c05e708671f571bf7e7642ebd_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196 = NULL;
    struct Nuitka_FrameObject *frame_adaab074f2b261f392d721c9d7a689dc_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208 = NULL;
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
    PyObject *locals_websockets$exceptions$$$class__11_InvalidOrigin_217 = NULL;
    struct Nuitka_FrameObject *frame_ab374dc2ff56012ce8225575c3b2404d_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *locals_websockets$exceptions$$$class__12_InvalidUpgrade_227 = NULL;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_websockets$exceptions$$$class__13_InvalidStatus_234 = NULL;
    struct Nuitka_FrameObject *frame_666c10a4a3a6305a6d12d9583b30f709_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_websockets$exceptions$$$class__14_InvalidStatusCode_250 = NULL;
    struct Nuitka_FrameObject *frame_3eb37a0ca8891631f26a7970748de6db_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_websockets$exceptions$$$class__15_NegotiationError_264 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *locals_websockets$exceptions$$$class__16_DuplicateParameter_271 = NULL;
    struct Nuitka_FrameObject *frame_bb426f3b5a26f89b3866997874817d4b_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *locals_websockets$exceptions$$$class__17_InvalidParameterName_284 = NULL;
    struct Nuitka_FrameObject *frame_3d33c699e0b070d8fbb6f645c8b13629_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *locals_websockets$exceptions$$$class__18_InvalidParameterValue_297 = NULL;
    struct Nuitka_FrameObject *frame_04fd14767be0acc3ce30a6c93b78bac7_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *locals_websockets$exceptions$$$class__19_AbortHandshake_316 = NULL;
    struct Nuitka_FrameObject *frame_4c69125b17763851f1894c1c7de11696_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *locals_websockets$exceptions$$$class__20_RedirectHandshake_349 = NULL;
    struct Nuitka_FrameObject *frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *locals_websockets$exceptions$$$class__21_InvalidState_364 = NULL;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *locals_websockets$exceptions$$$class__22_InvalidURI_375 = NULL;
    struct Nuitka_FrameObject *frame_8b1f43936b1addad073b8abe79beeb18_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *locals_websockets$exceptions$$$class__23_PayloadTooBig_389 = NULL;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *locals_websockets$exceptions$$$class__24_ProtocolError_396 = NULL;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_1fd1b41cc23071a639ed47cc01109b9d = MAKE_MODULE_FRAME(codeobj_1fd1b41cc23071a639ed47cc01109b9d, module_websockets$exceptions);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1fd1b41cc23071a639ed47cc01109b9d);
    assert(Py_REFCNT(frame_1fd1b41cc23071a639ed47cc01109b9d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[56]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[57];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websockets$exceptions;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[58];
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 33;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_websockets$exceptions,
                mod_consts[59],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[59]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[5];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websockets$exceptions;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[60];
        tmp_level_value_2 = mod_consts[61];
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 36;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_websockets$exceptions,
                mod_consts[38],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[38]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_websockets$exceptions,
                mod_consts[62],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[62]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_websockets$exceptions,
                mod_consts[63],
                mod_consts[58]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[63]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_10);
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
        tmp_assign_source_11 = LIST_COPY(mod_consts[64]);
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[66];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 68;

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
        tmp_subscript_value_1 = mod_consts[58];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[67]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[68];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 68;
        tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        PyObject *tmp_name_value_3;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_3 = mod_consts[71];
        tmp_default_value_1 = mod_consts[72];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_3, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[71]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

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


            exception_lineno = 68;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 68;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websockets$exceptions$$$class__1_WebSocketException_68 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_68, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_68, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_68, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[66];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__1_WebSocketException_68, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[68];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_websockets$exceptions$$$class__1_WebSocketException_68;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 68;
            tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_websockets$exceptions$$$class__1_WebSocketException_68);
        locals_websockets$exceptions$$$class__1_WebSocketException_68 = NULL;
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

        Py_DECREF(locals_websockets$exceptions$$$class__1_WebSocketException_68);
        locals_websockets$exceptions$$$class__1_WebSocketException_68 = NULL;
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
        exception_lineno = 68;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_17);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_20 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[58];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[67]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = mod_consts[78];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 75;
        tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_default_value_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_name_value_4 = mod_consts[71];
        tmp_default_value_2 = mod_consts[72];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_4, tmp_default_value_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[71]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 75;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_websockets$exceptions$$$class__2_ConnectionClosed_75 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_7;
        }
        frame_663b08b599f41ab51048994f5bebe5f6_2 = MAKE_CLASS_FRAME(tstate, codeobj_663b08b599f41ab51048994f5bebe5f6, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_663b08b599f41ab51048994f5bebe5f6_2);
        assert(Py_REFCNT(frame_663b08b599f41ab51048994f5bebe5f6_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            tmp_defaults_1 = mod_consts[80];
            tmp_annotations_1 = DICT_COPY(mod_consts[81]);
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__2___str__(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_3;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_4;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[86]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[86]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = DICT_COPY(mod_consts[87]);


            tmp_args_element_value_1 = MAKE_FUNCTION_websockets$exceptions$$$function__3_code(tmp_annotations_3);

            frame_663b08b599f41ab51048994f5bebe5f6_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_annotations_4 = DICT_COPY(mod_consts[87]);


            tmp_args_element_value_2 = MAKE_FUNCTION_websockets$exceptions$$$function__3_code(tmp_annotations_4);

            frame_663b08b599f41ab51048994f5bebe5f6_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_5;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_6;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[86]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[86]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[86]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = DICT_COPY(mod_consts[83]);


            tmp_args_element_value_3 = MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(tmp_annotations_5);

            frame_663b08b599f41ab51048994f5bebe5f6_2->m_frame.f_lineno = 127;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_annotations_6 = DICT_COPY(mod_consts[83]);


            tmp_args_element_value_4 = MAKE_FUNCTION_websockets$exceptions$$$function__4_reason(tmp_annotations_6);

            frame_663b08b599f41ab51048994f5bebe5f6_2->m_frame.f_lineno = 127;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_663b08b599f41ab51048994f5bebe5f6_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_663b08b599f41ab51048994f5bebe5f6_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_663b08b599f41ab51048994f5bebe5f6_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_663b08b599f41ab51048994f5bebe5f6_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_663b08b599f41ab51048994f5bebe5f6_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__2_ConnectionClosed_75, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_8 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[78];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_websockets$exceptions$$$class__2_ConnectionClosed_75;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 75;
            tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_25 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_websockets$exceptions$$$class__2_ConnectionClosed_75);
        locals_websockets$exceptions$$$class__2_ConnectionClosed_75 = NULL;
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

        Py_DECREF(locals_websockets$exceptions$$$class__2_ConnectionClosed_75);
        locals_websockets$exceptions$$$class__2_ConnectionClosed_75 = NULL;
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
        exception_lineno = 75;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_25);
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

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_13 = tmp_class_creation_3__bases;
        tmp_subscript_value_3 = mod_consts[58];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[67]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_tuple_element_9 = mod_consts[90];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 134;
        tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_name_value_5;
        PyObject *tmp_default_value_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_17 = tmp_class_creation_3__metaclass;
        tmp_name_value_5 = mod_consts[71];
        tmp_default_value_3 = mod_consts[72];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_5, tmp_default_value_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[71]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 134;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_32;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_websockets$exceptions$$$class__3_ConnectionClosedError_134 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedError_134, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[91];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedError_134, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedError_134, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_10;
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__3_ConnectionClosedError_134, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto try_except_handler_10;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_10 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = mod_consts[90];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_websockets$exceptions$$$class__3_ConnectionClosedError_134;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 134;
            tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_33 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_websockets$exceptions$$$class__3_ConnectionClosedError_134);
        locals_websockets$exceptions$$$class__3_ConnectionClosedError_134 = NULL;
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

        Py_DECREF(locals_websockets$exceptions$$$class__3_ConnectionClosedError_134);
        locals_websockets$exceptions$$$class__3_ConnectionClosedError_134 = NULL;
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
        exception_lineno = 134;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_33);
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

    Py_XDECREF(tmp_class_creation_3__bases_orig);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_36 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_15;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_19 = tmp_class_creation_4__bases;
        tmp_subscript_value_4 = mod_consts[58];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_20 = tmp_class_creation_4__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_21 = tmp_class_creation_4__metaclass;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[67]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_tuple_element_13 = mod_consts[92];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_13 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 144;
        tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_22 = tmp_class_creation_4__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_23 = tmp_class_creation_4__metaclass;
        tmp_name_value_6 = mod_consts[71];
        tmp_default_value_4 = mod_consts[72];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_6, tmp_default_value_4);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[71]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 144;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_40;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto try_except_handler_13;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_12 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = mod_consts[92];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 144;
            tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_41 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144);
        locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144);
        locals_websockets$exceptions$$$class__4_ConnectionClosedOK_144 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 144;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_41);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_16;
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_44 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_19;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_condition_result_19 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_25 = tmp_class_creation_5__bases;
        tmp_subscript_value_5 = mod_consts[58];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_20;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_26 = tmp_class_creation_5__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_27 = tmp_class_creation_5__metaclass;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[67]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_tuple_element_17 = mod_consts[94];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_17 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 154;
        tmp_assign_source_47 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_28 = tmp_class_creation_5__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_name_value_7;
        PyObject *tmp_default_value_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_name_value_7 = mod_consts[71];
        tmp_default_value_5 = mod_consts[72];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_7, tmp_default_value_5);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_30 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[71]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_14;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 154;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_14;
    }
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    branch_end_13:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_websockets$exceptions$$$class__5_InvalidHandshake_154 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidHandshake_154, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[95];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidHandshake_154, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidHandshake_154, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_16;
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto try_except_handler_16;
            }
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__5_InvalidHandshake_154, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_16;
        }
        branch_no_15:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_14 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_19 = mod_consts[94];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_19 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_websockets$exceptions$$$class__5_InvalidHandshake_154;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 154;
            tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_49 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_websockets$exceptions$$$class__5_InvalidHandshake_154);
        locals_websockets$exceptions$$$class__5_InvalidHandshake_154 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__5_InvalidHandshake_154);
        locals_websockets$exceptions$$$class__5_InvalidHandshake_154 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 154;
        goto try_except_handler_14;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_49);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_20;
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_51, 0, tmp_tuple_element_20);
        assert(tmp_class_creation_6__bases_orig == NULL);
        tmp_class_creation_6__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_6;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
        Py_INCREF(tmp_dircall_arg1_6);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
            tmp_assign_source_52 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__bases == NULL);
        tmp_class_creation_6__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__class_decl_dict == NULL);
        tmp_class_creation_6__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_6;
        nuitka_bool tmp_condition_result_23;
        int tmp_truth_name_6;
        PyObject *tmp_type_arg_11;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_6;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
        if (tmp_truth_name_6 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_condition_result_23 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_expression_value_31 = tmp_class_creation_6__bases;
        tmp_subscript_value_6 = mod_consts[58];
        tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
        if (tmp_type_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
        Py_DECREF(tmp_type_arg_11);
        if (tmp_metaclass_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_6);
        condexpr_end_8:;
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_bases_value_6 = tmp_class_creation_6__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
        Py_DECREF(tmp_metaclass_value_6);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__metaclass == NULL);
        tmp_class_creation_6__metaclass = tmp_assign_source_54;
    }
    {
        bool tmp_condition_result_24;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_32 = tmp_class_creation_6__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_condition_result_24 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_kwargs_value_11;
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_33 = tmp_class_creation_6__metaclass;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[67]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_tuple_element_21 = mod_consts[96];
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_6__bases);
        tmp_tuple_element_21 = tmp_class_creation_6__bases;
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_21);
        CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
        tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 161;
        tmp_assign_source_55 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_value_11);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_25;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_class_creation_6__prepared);
        tmp_expression_value_34 = tmp_class_creation_6__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_raise_value_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_6;
        tmp_raise_type_6 = PyExc_TypeError;
        tmp_mod_expr_left_6 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_6__metaclass);
        tmp_expression_value_35 = tmp_class_creation_6__metaclass;
        tmp_name_value_8 = mod_consts[71];
        tmp_default_value_6 = mod_consts[72];
        tmp_tuple_element_22 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_8, tmp_default_value_6);
        if (tmp_tuple_element_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_12;
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_type_arg_12 = tmp_class_creation_6__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[71]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_6);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_raise_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_17;
        }
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_value = tmp_raise_value_6;
        exception_lineno = 161;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_17;
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_6__prepared == NULL);
        tmp_class_creation_6__prepared = tmp_assign_source_56;
    }
    branch_end_16:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_class_creation_6__prepared);
            tmp_set_locals_6 = tmp_class_creation_6__prepared;
            locals_websockets$exceptions$$$class__6_SecurityError_161 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_SecurityError_161, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_SecurityError_161, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_SecurityError_161, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_19;
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
            CHECK_OBJECT(tmp_class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
            tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto try_except_handler_19;
            }
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        CHECK_OBJECT(tmp_class_creation_6__bases_orig);
        tmp_dictset_value = tmp_class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__6_SecurityError_161, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto try_except_handler_19;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_6__metaclass);
            tmp_called_value_16 = tmp_class_creation_6__metaclass;
            tmp_tuple_element_23 = mod_consts[96];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__bases);
            tmp_tuple_element_23 = tmp_class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_websockets$exceptions$$$class__6_SecurityError_161;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 161;
            tmp_assign_source_58 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;

                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_57 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_websockets$exceptions$$$class__6_SecurityError_161);
        locals_websockets$exceptions$$$class__6_SecurityError_161 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__6_SecurityError_161);
        locals_websockets$exceptions$$$class__6_SecurityError_161 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
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

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 161;
        goto try_except_handler_17;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_57);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    Py_XDECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_6__bases_orig);
    Py_DECREF(tmp_class_creation_6__bases_orig);
    tmp_class_creation_6__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_6__bases);
    Py_DECREF(tmp_class_creation_6__bases);
    tmp_class_creation_6__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
    Py_DECREF(tmp_class_creation_6__class_decl_dict);
    tmp_class_creation_6__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_6__metaclass);
    Py_DECREF(tmp_class_creation_6__metaclass);
    tmp_class_creation_6__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_6__prepared);
    Py_DECREF(tmp_class_creation_6__prepared);
    tmp_class_creation_6__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_24;
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_59, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_7__bases_orig == NULL);
        tmp_class_creation_7__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_7;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
        Py_INCREF(tmp_dircall_arg1_7);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
            tmp_assign_source_60 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__bases == NULL);
        tmp_class_creation_7__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__class_decl_dict == NULL);
        tmp_class_creation_7__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_7;
        nuitka_bool tmp_condition_result_27;
        int tmp_truth_name_7;
        PyObject *tmp_type_arg_13;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_7;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
        if (tmp_truth_name_7 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_condition_result_27 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_expression_value_37 = tmp_class_creation_7__bases;
        tmp_subscript_value_7 = mod_consts[58];
        tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_7, 0);
        if (tmp_type_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
        Py_DECREF(tmp_type_arg_13);
        if (tmp_metaclass_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_7);
        condexpr_end_9:;
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_bases_value_7 = tmp_class_creation_7__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
        Py_DECREF(tmp_metaclass_value_7);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__metaclass == NULL);
        tmp_class_creation_7__metaclass = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_28;
        PyObject *tmp_expression_value_38;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_38 = tmp_class_creation_7__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_condition_result_28 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_args_value_13;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_13;
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_39 = tmp_class_creation_7__metaclass;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[67]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_tuple_element_25 = mod_consts[98];
        tmp_args_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_7__bases);
        tmp_tuple_element_25 = tmp_class_creation_7__bases;
        PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
        tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 170;
        tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_13, tmp_kwargs_value_13);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_value_13);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_29;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_class_creation_7__prepared);
        tmp_expression_value_40 = tmp_class_creation_7__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_raise_value_7;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_7;
        tmp_raise_type_7 = PyExc_TypeError;
        tmp_mod_expr_left_7 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_7__metaclass);
        tmp_expression_value_41 = tmp_class_creation_7__metaclass;
        tmp_name_value_9 = mod_consts[71];
        tmp_default_value_7 = mod_consts[72];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_9, tmp_default_value_7);
        if (tmp_tuple_element_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_42;
            PyObject *tmp_type_arg_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_type_arg_14 = tmp_class_creation_7__prepared;
            tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_14);
            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[71]);
            Py_DECREF(tmp_expression_value_42);
            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        Py_DECREF(tmp_mod_expr_right_7);
        if (tmp_raise_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_20;
        }
        exception_type = tmp_raise_type_7;
        Py_INCREF(tmp_raise_type_7);
        exception_value = tmp_raise_value_7;
        exception_lineno = 170;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_20;
    }
    branch_no_20:;
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_7__prepared == NULL);
        tmp_class_creation_7__prepared = tmp_assign_source_64;
    }
    branch_end_19:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_class_creation_7__prepared);
            tmp_set_locals_7 = tmp_class_creation_7__prepared;
            locals_websockets$exceptions$$$class__7_InvalidMessage_170 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidMessage_170, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidMessage_170, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[98];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidMessage_170, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_22;
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
            CHECK_OBJECT(tmp_class_creation_7__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
            tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_22;
            }
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        CHECK_OBJECT(tmp_class_creation_7__bases_orig);
        tmp_dictset_value = tmp_class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__7_InvalidMessage_170, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto try_except_handler_22;
        }
        branch_no_21:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_class_creation_7__metaclass);
            tmp_called_value_18 = tmp_class_creation_7__metaclass;
            tmp_tuple_element_27 = mod_consts[98];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__bases);
            tmp_tuple_element_27 = tmp_class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_websockets$exceptions$$$class__7_InvalidMessage_170;
            PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
            tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 170;
            tmp_assign_source_66 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;

                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_assign_source_65 = outline_6_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_websockets$exceptions$$$class__7_InvalidMessage_170);
        locals_websockets$exceptions$$$class__7_InvalidMessage_170 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__7_InvalidMessage_170);
        locals_websockets$exceptions$$$class__7_InvalidMessage_170 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
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

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 170;
        goto try_except_handler_20;
        outline_result_7:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_65);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    Py_XDECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_7__bases_orig);
    Py_DECREF(tmp_class_creation_7__bases_orig);
    tmp_class_creation_7__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_7__bases);
    Py_DECREF(tmp_class_creation_7__bases);
    tmp_class_creation_7__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
    Py_DECREF(tmp_class_creation_7__class_decl_dict);
    tmp_class_creation_7__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_7__metaclass);
    Py_DECREF(tmp_class_creation_7__metaclass);
    tmp_class_creation_7__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_7__prepared);
    Py_DECREF(tmp_class_creation_7__prepared);
    tmp_class_creation_7__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_tuple_element_28;
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_assign_source_67 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_28);
        assert(tmp_class_creation_8__bases_orig == NULL);
        tmp_class_creation_8__bases_orig = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dircall_arg1_8;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
        Py_INCREF(tmp_dircall_arg1_8);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
            tmp_assign_source_68 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__bases == NULL);
        tmp_class_creation_8__bases = tmp_assign_source_68;
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__class_decl_dict == NULL);
        tmp_class_creation_8__class_decl_dict = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_metaclass_value_8;
        nuitka_bool tmp_condition_result_31;
        int tmp_truth_name_8;
        PyObject *tmp_type_arg_15;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_8;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
        if (tmp_truth_name_8 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_condition_result_31 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_expression_value_43 = tmp_class_creation_8__bases;
        tmp_subscript_value_8 = mod_consts[58];
        tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_8, 0);
        if (tmp_type_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
        Py_DECREF(tmp_type_arg_15);
        if (tmp_metaclass_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_8);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_bases_value_8 = tmp_class_creation_8__bases;
        tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
        Py_DECREF(tmp_metaclass_value_8);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__metaclass == NULL);
        tmp_class_creation_8__metaclass = tmp_assign_source_70;
    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_44 = tmp_class_creation_8__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_condition_result_32 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_args_value_15;
        PyObject *tmp_tuple_element_29;
        PyObject *tmp_kwargs_value_15;
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_45 = tmp_class_creation_8__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[67]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_tuple_element_29 = mod_consts[100];
        tmp_args_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_8__bases);
        tmp_tuple_element_29 = tmp_class_creation_8__bases;
        PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_29);
        CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
        tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 177;
        tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_15, tmp_kwargs_value_15);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_15);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_71;
    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_8__prepared);
        tmp_expression_value_46 = tmp_class_creation_8__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_33 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_raise_value_8;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        PyObject *tmp_tuple_element_30;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_name_value_10;
        PyObject *tmp_default_value_8;
        tmp_raise_type_8 = PyExc_TypeError;
        tmp_mod_expr_left_8 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_8__metaclass);
        tmp_expression_value_47 = tmp_class_creation_8__metaclass;
        tmp_name_value_10 = mod_consts[71];
        tmp_default_value_8 = mod_consts[72];
        tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_10, tmp_default_value_8);
        if (tmp_tuple_element_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_48;
            PyObject *tmp_type_arg_16;
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_type_arg_16 = tmp_class_creation_8__prepared;
            tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_16);
            assert(!(tmp_expression_value_48 == NULL));
            tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[71]);
            Py_DECREF(tmp_expression_value_48);
            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_mod_expr_right_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        Py_DECREF(tmp_mod_expr_right_8);
        if (tmp_raise_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_23;
        }
        exception_type = tmp_raise_type_8;
        Py_INCREF(tmp_raise_type_8);
        exception_value = tmp_raise_value_8;
        exception_lineno = 177;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_23;
    }
    branch_no_23:;
    goto branch_end_22;
    branch_no_22:;
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_8__prepared == NULL);
        tmp_class_creation_8__prepared = tmp_assign_source_72;
    }
    branch_end_22:;
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_class_creation_8__prepared);
            tmp_set_locals_8 = tmp_class_creation_8__prepared;
            locals_websockets$exceptions$$$class__8_InvalidHeader_177 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_InvalidHeader_177, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_InvalidHeader_177, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_InvalidHeader_177, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_25;
        }
        frame_faf6558c05e708671f571bf7e7642ebd_3 = MAKE_CLASS_FRAME(tstate, codeobj_faf6558c05e708671f571bf7e7642ebd, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_faf6558c05e708671f571bf7e7642ebd_3);
        assert(Py_REFCNT(frame_faf6558c05e708671f571bf7e7642ebd_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_7;
            tmp_defaults_2 = mod_consts[80];
            tmp_annotations_7 = DICT_COPY(mod_consts[102]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__5___init__(tmp_defaults_2, tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_InvalidHeader_177, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__6___str__(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_InvalidHeader_177, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_faf6558c05e708671f571bf7e7642ebd_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_faf6558c05e708671f571bf7e7642ebd_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_faf6558c05e708671f571bf7e7642ebd_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_faf6558c05e708671f571bf7e7642ebd_3,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_faf6558c05e708671f571bf7e7642ebd_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_25;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_8__bases;
            CHECK_OBJECT(tmp_class_creation_8__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_8__bases_orig;
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto try_except_handler_25;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        CHECK_OBJECT(tmp_class_creation_8__bases_orig);
        tmp_dictset_value = tmp_class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__8_InvalidHeader_177, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto try_except_handler_25;
        }
        branch_no_24:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_class_creation_8__metaclass);
            tmp_called_value_20 = tmp_class_creation_8__metaclass;
            tmp_tuple_element_31 = mod_consts[100];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__bases);
            tmp_tuple_element_31 = tmp_class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_websockets$exceptions$$$class__8_InvalidHeader_177;
            PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
            tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 177;
            tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_73 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_websockets$exceptions$$$class__8_InvalidHeader_177);
        locals_websockets$exceptions$$$class__8_InvalidHeader_177 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__8_InvalidHeader_177);
        locals_websockets$exceptions$$$class__8_InvalidHeader_177 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
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

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 177;
        goto try_except_handler_23;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_73);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    Py_XDECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_class_creation_8__bases_orig);
    Py_DECREF(tmp_class_creation_8__bases_orig);
    tmp_class_creation_8__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_8__bases);
    Py_DECREF(tmp_class_creation_8__bases);
    tmp_class_creation_8__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
    Py_DECREF(tmp_class_creation_8__class_decl_dict);
    tmp_class_creation_8__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_8__metaclass);
    Py_DECREF(tmp_class_creation_8__metaclass);
    tmp_class_creation_8__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_8__prepared);
    Py_DECREF(tmp_class_creation_8__prepared);
    tmp_class_creation_8__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_tuple_element_32;
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_assign_source_75 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_32);
        assert(tmp_class_creation_9__bases_orig == NULL);
        tmp_class_creation_9__bases_orig = tmp_assign_source_75;
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_9;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
        Py_INCREF(tmp_dircall_arg1_9);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
            tmp_assign_source_76 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__bases == NULL);
        tmp_class_creation_9__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__class_decl_dict == NULL);
        tmp_class_creation_9__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_metaclass_value_9;
        nuitka_bool tmp_condition_result_35;
        int tmp_truth_name_9;
        PyObject *tmp_type_arg_17;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_9;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
        if (tmp_truth_name_9 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_condition_result_35 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_11;
        } else {
            goto condexpr_false_11;
        }
        condexpr_true_11:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_expression_value_49 = tmp_class_creation_9__bases;
        tmp_subscript_value_9 = mod_consts[58];
        tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_9, 0);
        if (tmp_type_arg_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
        Py_DECREF(tmp_type_arg_17);
        if (tmp_metaclass_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        goto condexpr_end_11;
        condexpr_false_11:;
        tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_9);
        condexpr_end_11:;
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_bases_value_9 = tmp_class_creation_9__bases;
        tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
        Py_DECREF(tmp_metaclass_value_9);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__metaclass == NULL);
        tmp_class_creation_9__metaclass = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_36;
        PyObject *tmp_expression_value_50;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_50 = tmp_class_creation_9__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_condition_result_36 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_args_value_17;
        PyObject *tmp_tuple_element_33;
        PyObject *tmp_kwargs_value_17;
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_51 = tmp_class_creation_9__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[67]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_tuple_element_33 = mod_consts[105];
        tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_9__bases);
        tmp_tuple_element_33 = tmp_class_creation_9__bases;
        PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_33);
        CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
        tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 196;
        tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_17, tmp_kwargs_value_17);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_17);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_37;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(tmp_class_creation_9__prepared);
        tmp_expression_value_52 = tmp_class_creation_9__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_raise_value_9;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_name_value_11;
        PyObject *tmp_default_value_9;
        tmp_raise_type_9 = PyExc_TypeError;
        tmp_mod_expr_left_9 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_9__metaclass);
        tmp_expression_value_53 = tmp_class_creation_9__metaclass;
        tmp_name_value_11 = mod_consts[71];
        tmp_default_value_9 = mod_consts[72];
        tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_11, tmp_default_value_9);
        if (tmp_tuple_element_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_54;
            PyObject *tmp_type_arg_18;
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_34);
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_type_arg_18 = tmp_class_creation_9__prepared;
            tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_18);
            assert(!(tmp_expression_value_54 == NULL));
            tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[71]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        Py_DECREF(tmp_mod_expr_right_9);
        if (tmp_raise_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_26;
        }
        exception_type = tmp_raise_type_9;
        Py_INCREF(tmp_raise_type_9);
        exception_value = tmp_raise_value_9;
        exception_lineno = 196;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_26;
    }
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_9__prepared == NULL);
        tmp_class_creation_9__prepared = tmp_assign_source_80;
    }
    branch_end_25:;
    {
        PyObject *tmp_assign_source_81;
        outline_8_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_class_creation_9__prepared);
            tmp_set_locals_9 = tmp_class_creation_9__prepared;
            locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_28;
        }
        frame_adaab074f2b261f392d721c9d7a689dc_4 = MAKE_CLASS_FRAME(tstate, codeobj_adaab074f2b261f392d721c9d7a689dc, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_adaab074f2b261f392d721c9d7a689dc_4);
        assert(Py_REFCNT(frame_adaab074f2b261f392d721c9d7a689dc_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_9;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_annotations_9 = DICT_COPY(mod_consts[107]);

            tmp_closure_1[0] = outline_8_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__7___init__(tmp_annotations_9, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_adaab074f2b261f392d721c9d7a689dc_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_adaab074f2b261f392d721c9d7a689dc_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_adaab074f2b261f392d721c9d7a689dc_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_adaab074f2b261f392d721c9d7a689dc_4,
            type_description_2,
            outline_8_var___class__
        );



        assertFrameObject(frame_adaab074f2b261f392d721c9d7a689dc_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_28;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_cmp_expr_left_9 = tmp_class_creation_9__bases;
            CHECK_OBJECT(tmp_class_creation_9__bases_orig);
            tmp_cmp_expr_right_9 = tmp_class_creation_9__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto try_except_handler_28;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        CHECK_OBJECT(tmp_class_creation_9__bases_orig);
        tmp_dictset_value = tmp_class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto try_except_handler_28;
        }
        branch_no_27:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_9__metaclass);
            tmp_called_value_22 = tmp_class_creation_9__metaclass;
            tmp_tuple_element_35 = mod_consts[105];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__bases);
            tmp_tuple_element_35 = tmp_class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_35);
            CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 196;
            tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto try_except_handler_28;
            }
            assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
            PyCell_SET(outline_8_var___class__, tmp_assign_source_82);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
        tmp_assign_source_81 = Nuitka_Cell_GET(outline_8_var___class__);
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196);
        locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196);
        locals_websockets$exceptions$$$class__9_InvalidHeaderFormat_196 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
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

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 196;
        goto try_except_handler_26;
        outline_result_9:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_81);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    Py_XDECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_class_creation_9__bases_orig);
    Py_DECREF(tmp_class_creation_9__bases_orig);
    tmp_class_creation_9__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_9__bases);
    Py_DECREF(tmp_class_creation_9__bases);
    tmp_class_creation_9__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
    Py_DECREF(tmp_class_creation_9__class_decl_dict);
    tmp_class_creation_9__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_9__metaclass);
    Py_DECREF(tmp_class_creation_9__metaclass);
    tmp_class_creation_9__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_9__prepared);
    Py_DECREF(tmp_class_creation_9__prepared);
    tmp_class_creation_9__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_tuple_element_36;
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_36 == NULL)) {
            tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_assign_source_83 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_36);
        assert(tmp_class_creation_10__bases_orig == NULL);
        tmp_class_creation_10__bases_orig = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_dircall_arg1_10;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
        Py_INCREF(tmp_dircall_arg1_10);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
            tmp_assign_source_84 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__bases == NULL);
        tmp_class_creation_10__bases = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__class_decl_dict == NULL);
        tmp_class_creation_10__class_decl_dict = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_metaclass_value_10;
        nuitka_bool tmp_condition_result_39;
        int tmp_truth_name_10;
        PyObject *tmp_type_arg_19;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_10;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
        if (tmp_truth_name_10 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_condition_result_39 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_12;
        } else {
            goto condexpr_false_12;
        }
        condexpr_true_12:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_expression_value_55 = tmp_class_creation_10__bases;
        tmp_subscript_value_10 = mod_consts[58];
        tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_10, 0);
        if (tmp_type_arg_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
        Py_DECREF(tmp_type_arg_19);
        if (tmp_metaclass_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        goto condexpr_end_12;
        condexpr_false_12:;
        tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_10);
        condexpr_end_12:;
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_bases_value_10 = tmp_class_creation_10__bases;
        tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
        Py_DECREF(tmp_metaclass_value_10);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__metaclass == NULL);
        tmp_class_creation_10__metaclass = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_40;
        PyObject *tmp_expression_value_56;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_56 = tmp_class_creation_10__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_condition_result_40 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_40 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_37;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_57 = tmp_class_creation_10__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[67]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_tuple_element_37 = mod_consts[109];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_10__bases);
        tmp_tuple_element_37 = tmp_class_creation_10__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_37);
        CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 208;
        tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_87;
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_operand_value_10;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_10__prepared);
        tmp_expression_value_58 = tmp_class_creation_10__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_raise_value_10;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        PyObject *tmp_tuple_element_38;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_name_value_12;
        PyObject *tmp_default_value_10;
        tmp_raise_type_10 = PyExc_TypeError;
        tmp_mod_expr_left_10 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_10__metaclass);
        tmp_expression_value_59 = tmp_class_creation_10__metaclass;
        tmp_name_value_12 = mod_consts[71];
        tmp_default_value_10 = mod_consts[72];
        tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_12, tmp_default_value_10);
        if (tmp_tuple_element_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_60;
            PyObject *tmp_type_arg_20;
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_type_arg_20 = tmp_class_creation_10__prepared;
            tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_20);
            assert(!(tmp_expression_value_60 == NULL));
            tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[71]);
            Py_DECREF(tmp_expression_value_60);
            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_38);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        Py_DECREF(tmp_mod_expr_right_10);
        if (tmp_raise_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_29;
        }
        exception_type = tmp_raise_type_10;
        Py_INCREF(tmp_raise_type_10);
        exception_value = tmp_raise_value_10;
        exception_lineno = 208;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_29;
    }
    branch_no_29:;
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_10__prepared == NULL);
        tmp_class_creation_10__prepared = tmp_assign_source_88;
    }
    branch_end_28:;
    {
        PyObject *tmp_assign_source_89;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_class_creation_10__prepared);
            tmp_set_locals_10 = tmp_class_creation_10__prepared;
            locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_31;
        }
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_cmp_expr_left_10 = tmp_class_creation_10__bases;
            CHECK_OBJECT(tmp_class_creation_10__bases_orig);
            tmp_cmp_expr_right_10 = tmp_class_creation_10__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_31;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        CHECK_OBJECT(tmp_class_creation_10__bases_orig);
        tmp_dictset_value = tmp_class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto try_except_handler_31;
        }
        branch_no_30:;
        {
            PyObject *tmp_assign_source_90;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_10__metaclass);
            tmp_called_value_24 = tmp_class_creation_10__metaclass;
            tmp_tuple_element_39 = mod_consts[109];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_10__bases);
            tmp_tuple_element_39 = tmp_class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 208;
            tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;

                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_90;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_assign_source_89 = outline_9_var___class__;
        Py_INCREF(tmp_assign_source_89);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208);
        locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208);
        locals_websockets$exceptions$$$class__10_InvalidHeaderValue_208 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
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

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 208;
        goto try_except_handler_29;
        outline_result_10:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_89);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    Py_XDECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_10__bases_orig);
    Py_DECREF(tmp_class_creation_10__bases_orig);
    tmp_class_creation_10__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_10__bases);
    Py_DECREF(tmp_class_creation_10__bases);
    tmp_class_creation_10__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
    Py_DECREF(tmp_class_creation_10__class_decl_dict);
    tmp_class_creation_10__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_10__metaclass);
    Py_DECREF(tmp_class_creation_10__metaclass);
    tmp_class_creation_10__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_10__prepared);
    Py_DECREF(tmp_class_creation_10__prepared);
    tmp_class_creation_10__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_tuple_element_40;
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_40 == NULL)) {
            tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_assign_source_91 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_91, 0, tmp_tuple_element_40);
        assert(tmp_class_creation_11__bases_orig == NULL);
        tmp_class_creation_11__bases_orig = tmp_assign_source_91;
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_dircall_arg1_11;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
        Py_INCREF(tmp_dircall_arg1_11);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
            tmp_assign_source_92 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__bases == NULL);
        tmp_class_creation_11__bases = tmp_assign_source_92;
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__class_decl_dict == NULL);
        tmp_class_creation_11__class_decl_dict = tmp_assign_source_93;
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_metaclass_value_11;
        nuitka_bool tmp_condition_result_43;
        int tmp_truth_name_11;
        PyObject *tmp_type_arg_21;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_bases_value_11;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
        if (tmp_truth_name_11 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_condition_result_43 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_13;
        } else {
            goto condexpr_false_13;
        }
        condexpr_true_13:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_expression_value_61 = tmp_class_creation_11__bases;
        tmp_subscript_value_11 = mod_consts[58];
        tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_11, 0);
        if (tmp_type_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
        Py_DECREF(tmp_type_arg_21);
        if (tmp_metaclass_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        goto condexpr_end_13;
        condexpr_false_13:;
        tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_11);
        condexpr_end_13:;
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_bases_value_11 = tmp_class_creation_11__bases;
        tmp_assign_source_94 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
        Py_DECREF(tmp_metaclass_value_11);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__metaclass == NULL);
        tmp_class_creation_11__metaclass = tmp_assign_source_94;
    }
    {
        bool tmp_condition_result_44;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_62 = tmp_class_creation_11__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_condition_result_44 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_args_value_21;
        PyObject *tmp_tuple_element_41;
        PyObject *tmp_kwargs_value_21;
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_63 = tmp_class_creation_11__metaclass;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[67]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_tuple_element_41 = mod_consts[111];
        tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_11__bases);
        tmp_tuple_element_41 = tmp_class_creation_11__bases;
        PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_41);
        CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
        tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 217;
        tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_21, tmp_kwargs_value_21);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_21);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_95;
    }
    {
        bool tmp_condition_result_45;
        PyObject *tmp_operand_value_11;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(tmp_class_creation_11__prepared);
        tmp_expression_value_64 = tmp_class_creation_11__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_raise_value_11;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        PyObject *tmp_tuple_element_42;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_name_value_13;
        PyObject *tmp_default_value_11;
        tmp_raise_type_11 = PyExc_TypeError;
        tmp_mod_expr_left_11 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_11__metaclass);
        tmp_expression_value_65 = tmp_class_creation_11__metaclass;
        tmp_name_value_13 = mod_consts[71];
        tmp_default_value_11 = mod_consts[72];
        tmp_tuple_element_42 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_13, tmp_default_value_11);
        if (tmp_tuple_element_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_type_arg_22;
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_type_arg_22 = tmp_class_creation_11__prepared;
            tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_22);
            assert(!(tmp_expression_value_66 == NULL));
            tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[71]);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_mod_expr_right_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        Py_DECREF(tmp_mod_expr_right_11);
        if (tmp_raise_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_32;
        }
        exception_type = tmp_raise_type_11;
        Py_INCREF(tmp_raise_type_11);
        exception_value = tmp_raise_value_11;
        exception_lineno = 217;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_32;
    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_11__prepared == NULL);
        tmp_class_creation_11__prepared = tmp_assign_source_96;
    }
    branch_end_31:;
    {
        PyObject *tmp_assign_source_97;
        outline_10_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_class_creation_11__prepared);
            tmp_set_locals_11 = tmp_class_creation_11__prepared;
            locals_websockets$exceptions$$$class__11_InvalidOrigin_217 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidOrigin_217, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidOrigin_217, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidOrigin_217, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_34;
        }
        frame_ab374dc2ff56012ce8225575c3b2404d_5 = MAKE_CLASS_FRAME(tstate, codeobj_ab374dc2ff56012ce8225575c3b2404d, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_ab374dc2ff56012ce8225575c3b2404d_5);
        assert(Py_REFCNT(frame_ab374dc2ff56012ce8225575c3b2404d_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_annotations_10 = DICT_COPY(mod_consts[113]);

            tmp_closure_2[0] = outline_10_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__8___init__(tmp_annotations_10, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidOrigin_217, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ab374dc2ff56012ce8225575c3b2404d_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ab374dc2ff56012ce8225575c3b2404d_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ab374dc2ff56012ce8225575c3b2404d_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ab374dc2ff56012ce8225575c3b2404d_5,
            type_description_2,
            outline_10_var___class__
        );



        assertFrameObject(frame_ab374dc2ff56012ce8225575c3b2404d_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_34;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_46;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_cmp_expr_left_11 = tmp_class_creation_11__bases;
            CHECK_OBJECT(tmp_class_creation_11__bases_orig);
            tmp_cmp_expr_right_11 = tmp_class_creation_11__bases_orig;
            tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto try_except_handler_34;
            }
            if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        CHECK_OBJECT(tmp_class_creation_11__bases_orig);
        tmp_dictset_value = tmp_class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__11_InvalidOrigin_217, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto try_except_handler_34;
        }
        branch_no_33:;
        {
            PyObject *tmp_assign_source_98;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_class_creation_11__metaclass);
            tmp_called_value_26 = tmp_class_creation_11__metaclass;
            tmp_tuple_element_43 = mod_consts[111];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_11__bases);
            tmp_tuple_element_43 = tmp_class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = locals_websockets$exceptions$$$class__11_InvalidOrigin_217;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_43);
            CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
            tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 217;
            tmp_assign_source_98 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto try_except_handler_34;
            }
            assert(Nuitka_Cell_GET(outline_10_var___class__) == NULL);
            PyCell_SET(outline_10_var___class__, tmp_assign_source_98);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_10_var___class__));
        tmp_assign_source_97 = Nuitka_Cell_GET(outline_10_var___class__);
        Py_INCREF(tmp_assign_source_97);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_websockets$exceptions$$$class__11_InvalidOrigin_217);
        locals_websockets$exceptions$$$class__11_InvalidOrigin_217 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__11_InvalidOrigin_217);
        locals_websockets$exceptions$$$class__11_InvalidOrigin_217 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 217;
        goto try_except_handler_32;
        outline_result_11:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_97);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    Py_XDECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(tmp_class_creation_11__bases_orig);
    Py_DECREF(tmp_class_creation_11__bases_orig);
    tmp_class_creation_11__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_11__bases);
    Py_DECREF(tmp_class_creation_11__bases);
    tmp_class_creation_11__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
    Py_DECREF(tmp_class_creation_11__class_decl_dict);
    tmp_class_creation_11__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_11__metaclass);
    Py_DECREF(tmp_class_creation_11__metaclass);
    tmp_class_creation_11__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_11__prepared);
    Py_DECREF(tmp_class_creation_11__prepared);
    tmp_class_creation_11__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_tuple_element_44;
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_44 == NULL)) {
            tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        if (tmp_tuple_element_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_assign_source_99 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_99, 0, tmp_tuple_element_44);
        assert(tmp_class_creation_12__bases_orig == NULL);
        tmp_class_creation_12__bases_orig = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_dircall_arg1_12;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
        Py_INCREF(tmp_dircall_arg1_12);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
            tmp_assign_source_100 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__bases == NULL);
        tmp_class_creation_12__bases = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__class_decl_dict == NULL);
        tmp_class_creation_12__class_decl_dict = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_metaclass_value_12;
        nuitka_bool tmp_condition_result_47;
        int tmp_truth_name_12;
        PyObject *tmp_type_arg_23;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_12;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
        if (tmp_truth_name_12 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_condition_result_47 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_14;
        } else {
            goto condexpr_false_14;
        }
        condexpr_true_14:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_expression_value_67 = tmp_class_creation_12__bases;
        tmp_subscript_value_12 = mod_consts[58];
        tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_67, tmp_subscript_value_12, 0);
        if (tmp_type_arg_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
        Py_DECREF(tmp_type_arg_23);
        if (tmp_metaclass_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        goto condexpr_end_14;
        condexpr_false_14:;
        tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_12);
        condexpr_end_14:;
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_bases_value_12 = tmp_class_creation_12__bases;
        tmp_assign_source_102 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
        Py_DECREF(tmp_metaclass_value_12);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__metaclass == NULL);
        tmp_class_creation_12__metaclass = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_48;
        PyObject *tmp_expression_value_68;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_68 = tmp_class_creation_12__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_condition_result_48 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_value_23;
        PyObject *tmp_tuple_element_45;
        PyObject *tmp_kwargs_value_23;
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_69 = tmp_class_creation_12__metaclass;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[67]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_tuple_element_45 = mod_consts[115];
        tmp_args_value_23 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_12__bases);
        tmp_tuple_element_45 = tmp_class_creation_12__bases;
        PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_45);
        CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
        tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 227;
        tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_23, tmp_kwargs_value_23);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_23);
        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_103;
    }
    {
        bool tmp_condition_result_49;
        PyObject *tmp_operand_value_12;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_12__prepared);
        tmp_expression_value_70 = tmp_class_creation_12__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_70, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_12;
        PyObject *tmp_raise_value_12;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        PyObject *tmp_tuple_element_46;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_name_value_14;
        PyObject *tmp_default_value_12;
        tmp_raise_type_12 = PyExc_TypeError;
        tmp_mod_expr_left_12 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_12__metaclass);
        tmp_expression_value_71 = tmp_class_creation_12__metaclass;
        tmp_name_value_14 = mod_consts[71];
        tmp_default_value_12 = mod_consts[72];
        tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_71, tmp_name_value_14, tmp_default_value_12);
        if (tmp_tuple_element_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_72;
            PyObject *tmp_type_arg_24;
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_type_arg_24 = tmp_class_creation_12__prepared;
            tmp_expression_value_72 = BUILTIN_TYPE1(tmp_type_arg_24);
            assert(!(tmp_expression_value_72 == NULL));
            tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[71]);
            Py_DECREF(tmp_expression_value_72);
            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_46);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_mod_expr_right_12);
        goto try_except_handler_35;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        Py_DECREF(tmp_mod_expr_right_12);
        if (tmp_raise_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_35;
        }
        exception_type = tmp_raise_type_12;
        Py_INCREF(tmp_raise_type_12);
        exception_value = tmp_raise_value_12;
        exception_lineno = 227;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_35;
    }
    branch_no_35:;
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_12__prepared == NULL);
        tmp_class_creation_12__prepared = tmp_assign_source_104;
    }
    branch_end_34:;
    {
        PyObject *tmp_assign_source_105;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_class_creation_12__prepared);
            tmp_set_locals_12 = tmp_class_creation_12__prepared;
            locals_websockets$exceptions$$$class__12_InvalidUpgrade_227 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidUpgrade_227, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidUpgrade_227, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidUpgrade_227, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_37;
        }
        {
            nuitka_bool tmp_condition_result_50;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_cmp_expr_left_12 = tmp_class_creation_12__bases;
            CHECK_OBJECT(tmp_class_creation_12__bases_orig);
            tmp_cmp_expr_right_12 = tmp_class_creation_12__bases_orig;
            tmp_condition_result_50 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_50 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto try_except_handler_37;
            }
            if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        CHECK_OBJECT(tmp_class_creation_12__bases_orig);
        tmp_dictset_value = tmp_class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__12_InvalidUpgrade_227, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_37;
        }
        branch_no_36:;
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_class_creation_12__metaclass);
            tmp_called_value_28 = tmp_class_creation_12__metaclass;
            tmp_tuple_element_47 = mod_consts[115];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_12__bases);
            tmp_tuple_element_47 = tmp_class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_websockets$exceptions$$$class__12_InvalidUpgrade_227;
            PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
            tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 227;
            tmp_assign_source_106 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;

                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_106;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_assign_source_105 = outline_11_var___class__;
        Py_INCREF(tmp_assign_source_105);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_websockets$exceptions$$$class__12_InvalidUpgrade_227);
        locals_websockets$exceptions$$$class__12_InvalidUpgrade_227 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__12_InvalidUpgrade_227);
        locals_websockets$exceptions$$$class__12_InvalidUpgrade_227 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 227;
        goto try_except_handler_35;
        outline_result_12:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_105);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    Py_XDECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_12__bases_orig);
    Py_DECREF(tmp_class_creation_12__bases_orig);
    tmp_class_creation_12__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_12__bases);
    Py_DECREF(tmp_class_creation_12__bases);
    tmp_class_creation_12__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
    Py_DECREF(tmp_class_creation_12__class_decl_dict);
    tmp_class_creation_12__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_12__metaclass);
    Py_DECREF(tmp_class_creation_12__metaclass);
    tmp_class_creation_12__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_12__prepared);
    Py_DECREF(tmp_class_creation_12__prepared);
    tmp_class_creation_12__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_tuple_element_48;
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_48 == NULL)) {
            tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_assign_source_107 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_107, 0, tmp_tuple_element_48);
        assert(tmp_class_creation_13__bases_orig == NULL);
        tmp_class_creation_13__bases_orig = tmp_assign_source_107;
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_dircall_arg1_13;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
        Py_INCREF(tmp_dircall_arg1_13);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
            tmp_assign_source_108 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__bases == NULL);
        tmp_class_creation_13__bases = tmp_assign_source_108;
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__class_decl_dict == NULL);
        tmp_class_creation_13__class_decl_dict = tmp_assign_source_109;
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_metaclass_value_13;
        nuitka_bool tmp_condition_result_51;
        int tmp_truth_name_13;
        PyObject *tmp_type_arg_25;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_13;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
        if (tmp_truth_name_13 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_condition_result_51 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_15;
        } else {
            goto condexpr_false_15;
        }
        condexpr_true_15:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_expression_value_73 = tmp_class_creation_13__bases;
        tmp_subscript_value_13 = mod_consts[58];
        tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_73, tmp_subscript_value_13, 0);
        if (tmp_type_arg_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
        Py_DECREF(tmp_type_arg_25);
        if (tmp_metaclass_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        goto condexpr_end_15;
        condexpr_false_15:;
        tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_13);
        condexpr_end_15:;
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_bases_value_13 = tmp_class_creation_13__bases;
        tmp_assign_source_110 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
        Py_DECREF(tmp_metaclass_value_13);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__metaclass == NULL);
        tmp_class_creation_13__metaclass = tmp_assign_source_110;
    }
    {
        bool tmp_condition_result_52;
        PyObject *tmp_expression_value_74;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_74 = tmp_class_creation_13__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_74, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_condition_result_52 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_52 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_args_value_25;
        PyObject *tmp_tuple_element_49;
        PyObject *tmp_kwargs_value_25;
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_75 = tmp_class_creation_13__metaclass;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[67]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_tuple_element_49 = mod_consts[117];
        tmp_args_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_13__bases);
        tmp_tuple_element_49 = tmp_class_creation_13__bases;
        PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_49);
        CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
        tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 234;
        tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_25, tmp_kwargs_value_25);
        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_args_value_25);
        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_111;
    }
    {
        bool tmp_condition_result_53;
        PyObject *tmp_operand_value_13;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_13__prepared);
        tmp_expression_value_76 = tmp_class_creation_13__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_53 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_raise_type_13;
        PyObject *tmp_raise_value_13;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        PyObject *tmp_tuple_element_50;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_name_value_15;
        PyObject *tmp_default_value_13;
        tmp_raise_type_13 = PyExc_TypeError;
        tmp_mod_expr_left_13 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_13__metaclass);
        tmp_expression_value_77 = tmp_class_creation_13__metaclass;
        tmp_name_value_15 = mod_consts[71];
        tmp_default_value_13 = mod_consts[72];
        tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_77, tmp_name_value_15, tmp_default_value_13);
        if (tmp_tuple_element_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_78;
            PyObject *tmp_type_arg_26;
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_50);
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_type_arg_26 = tmp_class_creation_13__prepared;
            tmp_expression_value_78 = BUILTIN_TYPE1(tmp_type_arg_26);
            assert(!(tmp_expression_value_78 == NULL));
            tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[71]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_50);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_13);
        goto try_except_handler_38;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        Py_DECREF(tmp_mod_expr_right_13);
        if (tmp_raise_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_38;
        }
        exception_type = tmp_raise_type_13;
        Py_INCREF(tmp_raise_type_13);
        exception_value = tmp_raise_value_13;
        exception_lineno = 234;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_38;
    }
    branch_no_38:;
    goto branch_end_37;
    branch_no_37:;
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_13__prepared == NULL);
        tmp_class_creation_13__prepared = tmp_assign_source_112;
    }
    branch_end_37:;
    {
        PyObject *tmp_assign_source_113;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_class_creation_13__prepared);
            tmp_set_locals_13 = tmp_class_creation_13__prepared;
            locals_websockets$exceptions$$$class__13_InvalidStatus_234 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_234, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_234, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_234, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_40;
        }
        frame_666c10a4a3a6305a6d12d9583b30f709_6 = MAKE_CLASS_FRAME(tstate, codeobj_666c10a4a3a6305a6d12d9583b30f709, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_666c10a4a3a6305a6d12d9583b30f709_6);
        assert(Py_REFCNT(frame_666c10a4a3a6305a6d12d9583b30f709_6) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[119]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__9___init__(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_234, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__10___str__(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_234, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_666c10a4a3a6305a6d12d9583b30f709_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_666c10a4a3a6305a6d12d9583b30f709_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_666c10a4a3a6305a6d12d9583b30f709_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_666c10a4a3a6305a6d12d9583b30f709_6,
            type_description_2,
            outline_12_var___class__
        );



        assertFrameObject(frame_666c10a4a3a6305a6d12d9583b30f709_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_40;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_54;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_cmp_expr_left_13 = tmp_class_creation_13__bases;
            CHECK_OBJECT(tmp_class_creation_13__bases_orig);
            tmp_cmp_expr_right_13 = tmp_class_creation_13__bases_orig;
            tmp_condition_result_54 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_54 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto try_except_handler_40;
            }
            if (tmp_condition_result_54 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        CHECK_OBJECT(tmp_class_creation_13__bases_orig);
        tmp_dictset_value = tmp_class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__13_InvalidStatus_234, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_40;
        }
        branch_no_39:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_class_creation_13__metaclass);
            tmp_called_value_30 = tmp_class_creation_13__metaclass;
            tmp_tuple_element_51 = mod_consts[117];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_13__bases);
            tmp_tuple_element_51 = tmp_class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_websockets$exceptions$$$class__13_InvalidStatus_234;
            PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
            tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 234;
            tmp_assign_source_114 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_114 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;

                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_114;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_assign_source_113 = outline_12_var___class__;
        Py_INCREF(tmp_assign_source_113);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_websockets$exceptions$$$class__13_InvalidStatus_234);
        locals_websockets$exceptions$$$class__13_InvalidStatus_234 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__13_InvalidStatus_234);
        locals_websockets$exceptions$$$class__13_InvalidStatus_234 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 234;
        goto try_except_handler_38;
        outline_result_13:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_113);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    Py_XDECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_13__bases_orig);
    Py_DECREF(tmp_class_creation_13__bases_orig);
    tmp_class_creation_13__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_13__bases);
    Py_DECREF(tmp_class_creation_13__bases);
    tmp_class_creation_13__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
    Py_DECREF(tmp_class_creation_13__class_decl_dict);
    tmp_class_creation_13__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_13__metaclass);
    Py_DECREF(tmp_class_creation_13__metaclass);
    tmp_class_creation_13__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_13__prepared);
    Py_DECREF(tmp_class_creation_13__prepared);
    tmp_class_creation_13__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_tuple_element_52;
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_52 == NULL)) {
            tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_assign_source_115 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_115, 0, tmp_tuple_element_52);
        assert(tmp_class_creation_14__bases_orig == NULL);
        tmp_class_creation_14__bases_orig = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_dircall_arg1_14;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;
        Py_INCREF(tmp_dircall_arg1_14);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
            tmp_assign_source_116 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__bases == NULL);
        tmp_class_creation_14__bases = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__class_decl_dict == NULL);
        tmp_class_creation_14__class_decl_dict = tmp_assign_source_117;
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_metaclass_value_14;
        nuitka_bool tmp_condition_result_55;
        int tmp_truth_name_14;
        PyObject *tmp_type_arg_27;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_bases_value_14;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
        if (tmp_truth_name_14 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_condition_result_55 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_16;
        } else {
            goto condexpr_false_16;
        }
        condexpr_true_16:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_expression_value_79 = tmp_class_creation_14__bases;
        tmp_subscript_value_14 = mod_consts[58];
        tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_79, tmp_subscript_value_14, 0);
        if (tmp_type_arg_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
        Py_DECREF(tmp_type_arg_27);
        if (tmp_metaclass_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        goto condexpr_end_16;
        condexpr_false_16:;
        tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_14);
        condexpr_end_16:;
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_bases_value_14 = tmp_class_creation_14__bases;
        tmp_assign_source_118 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
        Py_DECREF(tmp_metaclass_value_14);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__metaclass == NULL);
        tmp_class_creation_14__metaclass = tmp_assign_source_118;
    }
    {
        bool tmp_condition_result_56;
        PyObject *tmp_expression_value_80;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_80 = tmp_class_creation_14__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_80, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_condition_result_56 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_56 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_args_value_27;
        PyObject *tmp_tuple_element_53;
        PyObject *tmp_kwargs_value_27;
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_81 = tmp_class_creation_14__metaclass;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[67]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_tuple_element_53 = mod_consts[122];
        tmp_args_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_14__bases);
        tmp_tuple_element_53 = tmp_class_creation_14__bases;
        PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_53);
        CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
        tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 250;
        tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_27, tmp_kwargs_value_27);
        Py_DECREF(tmp_called_value_31);
        Py_DECREF(tmp_args_value_27);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_119;
    }
    {
        bool tmp_condition_result_57;
        PyObject *tmp_operand_value_14;
        PyObject *tmp_expression_value_82;
        CHECK_OBJECT(tmp_class_creation_14__prepared);
        tmp_expression_value_82 = tmp_class_creation_14__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_57 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_57 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_raise_type_14;
        PyObject *tmp_raise_value_14;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        PyObject *tmp_tuple_element_54;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_name_value_16;
        PyObject *tmp_default_value_14;
        tmp_raise_type_14 = PyExc_TypeError;
        tmp_mod_expr_left_14 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_14__metaclass);
        tmp_expression_value_83 = tmp_class_creation_14__metaclass;
        tmp_name_value_16 = mod_consts[71];
        tmp_default_value_14 = mod_consts[72];
        tmp_tuple_element_54 = BUILTIN_GETATTR(tstate, tmp_expression_value_83, tmp_name_value_16, tmp_default_value_14);
        if (tmp_tuple_element_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_type_arg_28;
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_54);
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_type_arg_28 = tmp_class_creation_14__prepared;
            tmp_expression_value_84 = BUILTIN_TYPE1(tmp_type_arg_28);
            assert(!(tmp_expression_value_84 == NULL));
            tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[71]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_54);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_mod_expr_right_14);
        goto try_except_handler_41;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        Py_DECREF(tmp_mod_expr_right_14);
        if (tmp_raise_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_41;
        }
        exception_type = tmp_raise_type_14;
        Py_INCREF(tmp_raise_type_14);
        exception_value = tmp_raise_value_14;
        exception_lineno = 250;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_41;
    }
    branch_no_41:;
    goto branch_end_40;
    branch_no_40:;
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_14__prepared == NULL);
        tmp_class_creation_14__prepared = tmp_assign_source_120;
    }
    branch_end_40:;
    {
        PyObject *tmp_assign_source_121;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_class_creation_14__prepared);
            tmp_set_locals_14 = tmp_class_creation_14__prepared;
            locals_websockets$exceptions$$$class__14_InvalidStatusCode_250 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[123];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_43;
        }
        frame_3eb37a0ca8891631f26a7970748de6db_7 = MAKE_CLASS_FRAME(tstate, codeobj_3eb37a0ca8891631f26a7970748de6db, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3eb37a0ca8891631f26a7970748de6db_7);
        assert(Py_REFCNT(frame_3eb37a0ca8891631f26a7970748de6db_7) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(mod_consts[124]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__11___init__(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__12___str__(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3eb37a0ca8891631f26a7970748de6db_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3eb37a0ca8891631f26a7970748de6db_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3eb37a0ca8891631f26a7970748de6db_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3eb37a0ca8891631f26a7970748de6db_7,
            type_description_2,
            outline_13_var___class__
        );



        assertFrameObject(frame_3eb37a0ca8891631f26a7970748de6db_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_6:;

        goto try_except_handler_43;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_58;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_cmp_expr_left_14 = tmp_class_creation_14__bases;
            CHECK_OBJECT(tmp_class_creation_14__bases_orig);
            tmp_cmp_expr_right_14 = tmp_class_creation_14__bases_orig;
            tmp_condition_result_58 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_58 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_43;
            }
            if (tmp_condition_result_58 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        CHECK_OBJECT(tmp_class_creation_14__bases_orig);
        tmp_dictset_value = tmp_class_creation_14__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto try_except_handler_43;
        }
        branch_no_42:;
        {
            PyObject *tmp_assign_source_122;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_class_creation_14__metaclass);
            tmp_called_value_32 = tmp_class_creation_14__metaclass;
            tmp_tuple_element_55 = mod_consts[122];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_14__bases);
            tmp_tuple_element_55 = tmp_class_creation_14__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_websockets$exceptions$$$class__14_InvalidStatusCode_250;
            PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
            tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 250;
            tmp_assign_source_122 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_122 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_122;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_assign_source_121 = outline_13_var___class__;
        Py_INCREF(tmp_assign_source_121);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250);
        locals_websockets$exceptions$$$class__14_InvalidStatusCode_250 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__14_InvalidStatusCode_250);
        locals_websockets$exceptions$$$class__14_InvalidStatusCode_250 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 250;
        goto try_except_handler_41;
        outline_result_14:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_121);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    Py_XDECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_14__bases_orig);
    Py_DECREF(tmp_class_creation_14__bases_orig);
    tmp_class_creation_14__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_14__bases);
    Py_DECREF(tmp_class_creation_14__bases);
    tmp_class_creation_14__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
    Py_DECREF(tmp_class_creation_14__class_decl_dict);
    tmp_class_creation_14__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_14__metaclass);
    Py_DECREF(tmp_class_creation_14__metaclass);
    tmp_class_creation_14__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_14__prepared);
    Py_DECREF(tmp_class_creation_14__prepared);
    tmp_class_creation_14__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_tuple_element_56;
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_56 == NULL)) {
            tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_assign_source_123 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_123, 0, tmp_tuple_element_56);
        assert(tmp_class_creation_15__bases_orig == NULL);
        tmp_class_creation_15__bases_orig = tmp_assign_source_123;
    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_dircall_arg1_15;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
        Py_INCREF(tmp_dircall_arg1_15);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
            tmp_assign_source_124 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__bases == NULL);
        tmp_class_creation_15__bases = tmp_assign_source_124;
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__class_decl_dict == NULL);
        tmp_class_creation_15__class_decl_dict = tmp_assign_source_125;
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_metaclass_value_15;
        nuitka_bool tmp_condition_result_59;
        int tmp_truth_name_15;
        PyObject *tmp_type_arg_29;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_bases_value_15;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
        if (tmp_truth_name_15 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_condition_result_59 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_17;
        } else {
            goto condexpr_false_17;
        }
        condexpr_true_17:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_expression_value_85 = tmp_class_creation_15__bases;
        tmp_subscript_value_15 = mod_consts[58];
        tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_85, tmp_subscript_value_15, 0);
        if (tmp_type_arg_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
        Py_DECREF(tmp_type_arg_29);
        if (tmp_metaclass_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        goto condexpr_end_17;
        condexpr_false_17:;
        tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_15);
        condexpr_end_17:;
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_bases_value_15 = tmp_class_creation_15__bases;
        tmp_assign_source_126 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
        Py_DECREF(tmp_metaclass_value_15);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__metaclass == NULL);
        tmp_class_creation_15__metaclass = tmp_assign_source_126;
    }
    {
        bool tmp_condition_result_60;
        PyObject *tmp_expression_value_86;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_86 = tmp_class_creation_15__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_86, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_condition_result_60 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_60 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_args_value_29;
        PyObject *tmp_tuple_element_57;
        PyObject *tmp_kwargs_value_29;
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_87 = tmp_class_creation_15__metaclass;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[67]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_tuple_element_57 = mod_consts[127];
        tmp_args_value_29 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_15__bases);
        tmp_tuple_element_57 = tmp_class_creation_15__bases;
        PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_57);
        CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
        tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 264;
        tmp_assign_source_127 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_29, tmp_kwargs_value_29);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_value_29);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_127;
    }
    {
        bool tmp_condition_result_61;
        PyObject *tmp_operand_value_15;
        PyObject *tmp_expression_value_88;
        CHECK_OBJECT(tmp_class_creation_15__prepared);
        tmp_expression_value_88 = tmp_class_creation_15__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_61 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_61 != false) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_raise_type_15;
        PyObject *tmp_raise_value_15;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        PyObject *tmp_tuple_element_58;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_name_value_17;
        PyObject *tmp_default_value_15;
        tmp_raise_type_15 = PyExc_TypeError;
        tmp_mod_expr_left_15 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_15__metaclass);
        tmp_expression_value_89 = tmp_class_creation_15__metaclass;
        tmp_name_value_17 = mod_consts[71];
        tmp_default_value_15 = mod_consts[72];
        tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_89, tmp_name_value_17, tmp_default_value_15);
        if (tmp_tuple_element_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_type_arg_30;
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_58);
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_type_arg_30 = tmp_class_creation_15__prepared;
            tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_30);
            assert(!(tmp_expression_value_90 == NULL));
            tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[71]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_58);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_mod_expr_right_15);
        goto try_except_handler_44;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        Py_DECREF(tmp_mod_expr_right_15);
        if (tmp_raise_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_44;
        }
        exception_type = tmp_raise_type_15;
        Py_INCREF(tmp_raise_type_15);
        exception_value = tmp_raise_value_15;
        exception_lineno = 264;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_44;
    }
    branch_no_44:;
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_15__prepared == NULL);
        tmp_class_creation_15__prepared = tmp_assign_source_128;
    }
    branch_end_43:;
    {
        PyObject *tmp_assign_source_129;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_class_creation_15__prepared);
            tmp_set_locals_15 = tmp_class_creation_15__prepared;
            locals_websockets$exceptions$$$class__15_NegotiationError_264 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_NegotiationError_264, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[128];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_NegotiationError_264, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[127];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_NegotiationError_264, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_46;
        }
        {
            nuitka_bool tmp_condition_result_62;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_cmp_expr_left_15 = tmp_class_creation_15__bases;
            CHECK_OBJECT(tmp_class_creation_15__bases_orig);
            tmp_cmp_expr_right_15 = tmp_class_creation_15__bases_orig;
            tmp_condition_result_62 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_62 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto try_except_handler_46;
            }
            if (tmp_condition_result_62 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        CHECK_OBJECT(tmp_class_creation_15__bases_orig);
        tmp_dictset_value = tmp_class_creation_15__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__15_NegotiationError_264, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto try_except_handler_46;
        }
        branch_no_45:;
        {
            PyObject *tmp_assign_source_130;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_class_creation_15__metaclass);
            tmp_called_value_34 = tmp_class_creation_15__metaclass;
            tmp_tuple_element_59 = mod_consts[127];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_15__bases);
            tmp_tuple_element_59 = tmp_class_creation_15__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_websockets$exceptions$$$class__15_NegotiationError_264;
            PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
            tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 264;
            tmp_assign_source_130 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_130 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;

                goto try_except_handler_46;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_130;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_assign_source_129 = outline_14_var___class__;
        Py_INCREF(tmp_assign_source_129);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_DECREF(locals_websockets$exceptions$$$class__15_NegotiationError_264);
        locals_websockets$exceptions$$$class__15_NegotiationError_264 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__15_NegotiationError_264);
        locals_websockets$exceptions$$$class__15_NegotiationError_264 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 264;
        goto try_except_handler_44;
        outline_result_15:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_129);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    Py_XDECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_15__bases_orig);
    Py_DECREF(tmp_class_creation_15__bases_orig);
    tmp_class_creation_15__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_15__bases);
    Py_DECREF(tmp_class_creation_15__bases);
    tmp_class_creation_15__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
    Py_DECREF(tmp_class_creation_15__class_decl_dict);
    tmp_class_creation_15__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_15__metaclass);
    Py_DECREF(tmp_class_creation_15__metaclass);
    tmp_class_creation_15__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_15__prepared);
    Py_DECREF(tmp_class_creation_15__prepared);
    tmp_class_creation_15__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_tuple_element_60;
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_60 == NULL)) {
            tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_tuple_element_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_131, 0, tmp_tuple_element_60);
        assert(tmp_class_creation_16__bases_orig == NULL);
        tmp_class_creation_16__bases_orig = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_dircall_arg1_16;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
        Py_INCREF(tmp_dircall_arg1_16);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
            tmp_assign_source_132 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__bases == NULL);
        tmp_class_creation_16__bases = tmp_assign_source_132;
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__class_decl_dict == NULL);
        tmp_class_creation_16__class_decl_dict = tmp_assign_source_133;
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_metaclass_value_16;
        nuitka_bool tmp_condition_result_63;
        int tmp_truth_name_16;
        PyObject *tmp_type_arg_31;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_bases_value_16;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
        if (tmp_truth_name_16 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_condition_result_63 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_18;
        } else {
            goto condexpr_false_18;
        }
        condexpr_true_18:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_expression_value_91 = tmp_class_creation_16__bases;
        tmp_subscript_value_16 = mod_consts[58];
        tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_91, tmp_subscript_value_16, 0);
        if (tmp_type_arg_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
        Py_DECREF(tmp_type_arg_31);
        if (tmp_metaclass_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        goto condexpr_end_18;
        condexpr_false_18:;
        tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_16);
        condexpr_end_18:;
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_bases_value_16 = tmp_class_creation_16__bases;
        tmp_assign_source_134 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
        Py_DECREF(tmp_metaclass_value_16);
        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__metaclass == NULL);
        tmp_class_creation_16__metaclass = tmp_assign_source_134;
    }
    {
        bool tmp_condition_result_64;
        PyObject *tmp_expression_value_92;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_92 = tmp_class_creation_16__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_92, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_condition_result_64 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_64 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_args_value_31;
        PyObject *tmp_tuple_element_61;
        PyObject *tmp_kwargs_value_31;
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_93 = tmp_class_creation_16__metaclass;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[67]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_tuple_element_61 = mod_consts[129];
        tmp_args_value_31 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_16__bases);
        tmp_tuple_element_61 = tmp_class_creation_16__bases;
        PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_61);
        CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
        tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 271;
        tmp_assign_source_135 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_31, tmp_kwargs_value_31);
        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_args_value_31);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_135;
    }
    {
        bool tmp_condition_result_65;
        PyObject *tmp_operand_value_16;
        PyObject *tmp_expression_value_94;
        CHECK_OBJECT(tmp_class_creation_16__prepared);
        tmp_expression_value_94 = tmp_class_creation_16__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_94, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_65 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_65 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_raise_type_16;
        PyObject *tmp_raise_value_16;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        PyObject *tmp_tuple_element_62;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_name_value_18;
        PyObject *tmp_default_value_16;
        tmp_raise_type_16 = PyExc_TypeError;
        tmp_mod_expr_left_16 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_16__metaclass);
        tmp_expression_value_95 = tmp_class_creation_16__metaclass;
        tmp_name_value_18 = mod_consts[71];
        tmp_default_value_16 = mod_consts[72];
        tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_95, tmp_name_value_18, tmp_default_value_16);
        if (tmp_tuple_element_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_type_arg_32;
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_62);
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_type_arg_32 = tmp_class_creation_16__prepared;
            tmp_expression_value_96 = BUILTIN_TYPE1(tmp_type_arg_32);
            assert(!(tmp_expression_value_96 == NULL));
            tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[71]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_62);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_mod_expr_right_16);
        goto try_except_handler_47;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        Py_DECREF(tmp_mod_expr_right_16);
        if (tmp_raise_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_47;
        }
        exception_type = tmp_raise_type_16;
        Py_INCREF(tmp_raise_type_16);
        exception_value = tmp_raise_value_16;
        exception_lineno = 271;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_47;
    }
    branch_no_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_16__prepared == NULL);
        tmp_class_creation_16__prepared = tmp_assign_source_136;
    }
    branch_end_46:;
    {
        PyObject *tmp_assign_source_137;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_class_creation_16__prepared);
            tmp_set_locals_16 = tmp_class_creation_16__prepared;
            locals_websockets$exceptions$$$class__16_DuplicateParameter_271 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_DuplicateParameter_271, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_DuplicateParameter_271, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_DuplicateParameter_271, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_49;
        }
        frame_bb426f3b5a26f89b3866997874817d4b_8 = MAKE_CLASS_FRAME(tstate, codeobj_bb426f3b5a26f89b3866997874817d4b, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_bb426f3b5a26f89b3866997874817d4b_8);
        assert(Py_REFCNT(frame_bb426f3b5a26f89b3866997874817d4b_8) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[131]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__13___init__(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_DuplicateParameter_271, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__14___str__(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_DuplicateParameter_271, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_7;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb426f3b5a26f89b3866997874817d4b_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb426f3b5a26f89b3866997874817d4b_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb426f3b5a26f89b3866997874817d4b_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb426f3b5a26f89b3866997874817d4b_8,
            type_description_2,
            outline_15_var___class__
        );



        assertFrameObject(frame_bb426f3b5a26f89b3866997874817d4b_8);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;

        goto try_except_handler_49;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_66;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_cmp_expr_left_16 = tmp_class_creation_16__bases;
            CHECK_OBJECT(tmp_class_creation_16__bases_orig);
            tmp_cmp_expr_right_16 = tmp_class_creation_16__bases_orig;
            tmp_condition_result_66 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_66 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto try_except_handler_49;
            }
            if (tmp_condition_result_66 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        CHECK_OBJECT(tmp_class_creation_16__bases_orig);
        tmp_dictset_value = tmp_class_creation_16__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__16_DuplicateParameter_271, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto try_except_handler_49;
        }
        branch_no_48:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_class_creation_16__metaclass);
            tmp_called_value_36 = tmp_class_creation_16__metaclass;
            tmp_tuple_element_63 = mod_consts[129];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_16__bases);
            tmp_tuple_element_63 = tmp_class_creation_16__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_websockets$exceptions$$$class__16_DuplicateParameter_271;
            PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
            tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 271;
            tmp_assign_source_138 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_138 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto try_except_handler_49;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_138;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_assign_source_137 = outline_15_var___class__;
        Py_INCREF(tmp_assign_source_137);
        goto try_return_handler_49;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_DECREF(locals_websockets$exceptions$$$class__16_DuplicateParameter_271);
        locals_websockets$exceptions$$$class__16_DuplicateParameter_271 = NULL;
        goto try_return_handler_48;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__16_DuplicateParameter_271);
        locals_websockets$exceptions$$$class__16_DuplicateParameter_271 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto try_except_handler_48;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 271;
        goto try_except_handler_47;
        outline_result_16:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_137);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    Py_XDECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_16__bases_orig);
    Py_DECREF(tmp_class_creation_16__bases_orig);
    tmp_class_creation_16__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_16__bases);
    Py_DECREF(tmp_class_creation_16__bases);
    tmp_class_creation_16__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
    Py_DECREF(tmp_class_creation_16__class_decl_dict);
    tmp_class_creation_16__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_16__metaclass);
    Py_DECREF(tmp_class_creation_16__metaclass);
    tmp_class_creation_16__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_16__prepared);
    Py_DECREF(tmp_class_creation_16__prepared);
    tmp_class_creation_16__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_tuple_element_64;
        tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_64 == NULL)) {
            tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_tuple_element_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_assign_source_139 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_139, 0, tmp_tuple_element_64);
        assert(tmp_class_creation_17__bases_orig == NULL);
        tmp_class_creation_17__bases_orig = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_dircall_arg1_17;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;
        Py_INCREF(tmp_dircall_arg1_17);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
            tmp_assign_source_140 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__bases == NULL);
        tmp_class_creation_17__bases = tmp_assign_source_140;
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__class_decl_dict == NULL);
        tmp_class_creation_17__class_decl_dict = tmp_assign_source_141;
    }
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_metaclass_value_17;
        nuitka_bool tmp_condition_result_67;
        int tmp_truth_name_17;
        PyObject *tmp_type_arg_33;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_bases_value_17;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
        if (tmp_truth_name_17 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_condition_result_67 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_19;
        } else {
            goto condexpr_false_19;
        }
        condexpr_true_19:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_expression_value_97 = tmp_class_creation_17__bases;
        tmp_subscript_value_17 = mod_consts[58];
        tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_97, tmp_subscript_value_17, 0);
        if (tmp_type_arg_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
        Py_DECREF(tmp_type_arg_33);
        if (tmp_metaclass_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        goto condexpr_end_19;
        condexpr_false_19:;
        tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_17);
        condexpr_end_19:;
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_bases_value_17 = tmp_class_creation_17__bases;
        tmp_assign_source_142 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
        Py_DECREF(tmp_metaclass_value_17);
        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__metaclass == NULL);
        tmp_class_creation_17__metaclass = tmp_assign_source_142;
    }
    {
        bool tmp_condition_result_68;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_98 = tmp_class_creation_17__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_98, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_condition_result_68 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_68 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_value_33;
        PyObject *tmp_tuple_element_65;
        PyObject *tmp_kwargs_value_33;
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_99 = tmp_class_creation_17__metaclass;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[67]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_tuple_element_65 = mod_consts[134];
        tmp_args_value_33 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_17__bases);
        tmp_tuple_element_65 = tmp_class_creation_17__bases;
        PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_65);
        CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
        tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 284;
        tmp_assign_source_143 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_33, tmp_kwargs_value_33);
        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_value_33);
        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_143;
    }
    {
        bool tmp_condition_result_69;
        PyObject *tmp_operand_value_17;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(tmp_class_creation_17__prepared);
        tmp_expression_value_100 = tmp_class_creation_17__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_100, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_69 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_69 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_raise_type_17;
        PyObject *tmp_raise_value_17;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        PyObject *tmp_tuple_element_66;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_name_value_19;
        PyObject *tmp_default_value_17;
        tmp_raise_type_17 = PyExc_TypeError;
        tmp_mod_expr_left_17 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_17__metaclass);
        tmp_expression_value_101 = tmp_class_creation_17__metaclass;
        tmp_name_value_19 = mod_consts[71];
        tmp_default_value_17 = mod_consts[72];
        tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_101, tmp_name_value_19, tmp_default_value_17);
        if (tmp_tuple_element_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_type_arg_34;
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_66);
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_type_arg_34 = tmp_class_creation_17__prepared;
            tmp_expression_value_102 = BUILTIN_TYPE1(tmp_type_arg_34);
            assert(!(tmp_expression_value_102 == NULL));
            tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[71]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_66);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_mod_expr_right_17);
        goto try_except_handler_50;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        Py_DECREF(tmp_mod_expr_right_17);
        if (tmp_raise_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_50;
        }
        exception_type = tmp_raise_type_17;
        Py_INCREF(tmp_raise_type_17);
        exception_value = tmp_raise_value_17;
        exception_lineno = 284;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_50;
    }
    branch_no_50:;
    goto branch_end_49;
    branch_no_49:;
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_17__prepared == NULL);
        tmp_class_creation_17__prepared = tmp_assign_source_144;
    }
    branch_end_49:;
    {
        PyObject *tmp_assign_source_145;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_class_creation_17__prepared);
            tmp_set_locals_17 = tmp_class_creation_17__prepared;
            locals_websockets$exceptions$$$class__17_InvalidParameterName_284 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidParameterName_284, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidParameterName_284, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[134];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidParameterName_284, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_52;
        }
        frame_3d33c699e0b070d8fbb6f645c8b13629_9 = MAKE_CLASS_FRAME(tstate, codeobj_3d33c699e0b070d8fbb6f645c8b13629, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_3d33c699e0b070d8fbb6f645c8b13629_9);
        assert(Py_REFCNT(frame_3d33c699e0b070d8fbb6f645c8b13629_9) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[131]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__15___init__(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidParameterName_284, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }
        {
            PyObject *tmp_annotations_18;
            tmp_annotations_18 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__16___str__(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidParameterName_284, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_2 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_8;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3d33c699e0b070d8fbb6f645c8b13629_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3d33c699e0b070d8fbb6f645c8b13629_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3d33c699e0b070d8fbb6f645c8b13629_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3d33c699e0b070d8fbb6f645c8b13629_9,
            type_description_2,
            outline_16_var___class__
        );



        assertFrameObject(frame_3d33c699e0b070d8fbb6f645c8b13629_9);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_8:;

        goto try_except_handler_52;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_70;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_17__bases;
            CHECK_OBJECT(tmp_class_creation_17__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_17__bases_orig;
            tmp_condition_result_70 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_70 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto try_except_handler_52;
            }
            if (tmp_condition_result_70 == NUITKA_BOOL_TRUE) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        CHECK_OBJECT(tmp_class_creation_17__bases_orig);
        tmp_dictset_value = tmp_class_creation_17__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__17_InvalidParameterName_284, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_52;
        }
        branch_no_51:;
        {
            PyObject *tmp_assign_source_146;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_class_creation_17__metaclass);
            tmp_called_value_38 = tmp_class_creation_17__metaclass;
            tmp_tuple_element_67 = mod_consts[134];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_17__bases);
            tmp_tuple_element_67 = tmp_class_creation_17__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = locals_websockets$exceptions$$$class__17_InvalidParameterName_284;
            PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
            tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 284;
            tmp_assign_source_146 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_146 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto try_except_handler_52;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_146;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_assign_source_145 = outline_16_var___class__;
        Py_INCREF(tmp_assign_source_145);
        goto try_return_handler_52;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF(locals_websockets$exceptions$$$class__17_InvalidParameterName_284);
        locals_websockets$exceptions$$$class__17_InvalidParameterName_284 = NULL;
        goto try_return_handler_51;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__17_InvalidParameterName_284);
        locals_websockets$exceptions$$$class__17_InvalidParameterName_284 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto try_except_handler_51;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 284;
        goto try_except_handler_50;
        outline_result_17:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_145);
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    Py_XDECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_class_creation_17__bases_orig);
    Py_DECREF(tmp_class_creation_17__bases_orig);
    tmp_class_creation_17__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_17__bases);
    Py_DECREF(tmp_class_creation_17__bases);
    tmp_class_creation_17__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
    Py_DECREF(tmp_class_creation_17__class_decl_dict);
    tmp_class_creation_17__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_17__metaclass);
    Py_DECREF(tmp_class_creation_17__metaclass);
    tmp_class_creation_17__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_17__prepared);
    Py_DECREF(tmp_class_creation_17__prepared);
    tmp_class_creation_17__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_tuple_element_68;
        tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_tuple_element_68 == NULL)) {
            tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_tuple_element_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_assign_source_147 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_147, 0, tmp_tuple_element_68);
        assert(tmp_class_creation_18__bases_orig == NULL);
        tmp_class_creation_18__bases_orig = tmp_assign_source_147;
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_dircall_arg1_18;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
        Py_INCREF(tmp_dircall_arg1_18);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
            tmp_assign_source_148 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__bases == NULL);
        tmp_class_creation_18__bases = tmp_assign_source_148;
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__class_decl_dict == NULL);
        tmp_class_creation_18__class_decl_dict = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_metaclass_value_18;
        nuitka_bool tmp_condition_result_71;
        int tmp_truth_name_18;
        PyObject *tmp_type_arg_35;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_18;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
        if (tmp_truth_name_18 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_condition_result_71 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_20;
        } else {
            goto condexpr_false_20;
        }
        condexpr_true_20:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_expression_value_103 = tmp_class_creation_18__bases;
        tmp_subscript_value_18 = mod_consts[58];
        tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_103, tmp_subscript_value_18, 0);
        if (tmp_type_arg_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
        Py_DECREF(tmp_type_arg_35);
        if (tmp_metaclass_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        goto condexpr_end_20;
        condexpr_false_20:;
        tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_18);
        condexpr_end_20:;
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_bases_value_18 = tmp_class_creation_18__bases;
        tmp_assign_source_150 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
        Py_DECREF(tmp_metaclass_value_18);
        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__metaclass == NULL);
        tmp_class_creation_18__metaclass = tmp_assign_source_150;
    }
    {
        bool tmp_condition_result_72;
        PyObject *tmp_expression_value_104;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_104 = tmp_class_creation_18__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_104, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_condition_result_72 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_72 != false) {
            goto branch_yes_52;
        } else {
            goto branch_no_52;
        }
    }
    branch_yes_52:;
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_value_35;
        PyObject *tmp_tuple_element_69;
        PyObject *tmp_kwargs_value_35;
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_105 = tmp_class_creation_18__metaclass;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[67]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_tuple_element_69 = mod_consts[138];
        tmp_args_value_35 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_18__bases);
        tmp_tuple_element_69 = tmp_class_creation_18__bases;
        PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_69);
        CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
        tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 297;
        tmp_assign_source_151 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_35, tmp_kwargs_value_35);
        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_value_35);
        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_151;
    }
    {
        bool tmp_condition_result_73;
        PyObject *tmp_operand_value_18;
        PyObject *tmp_expression_value_106;
        CHECK_OBJECT(tmp_class_creation_18__prepared);
        tmp_expression_value_106 = tmp_class_creation_18__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_106, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_73 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_73 != false) {
            goto branch_yes_53;
        } else {
            goto branch_no_53;
        }
    }
    branch_yes_53:;
    {
        PyObject *tmp_raise_type_18;
        PyObject *tmp_raise_value_18;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        PyObject *tmp_tuple_element_70;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_name_value_20;
        PyObject *tmp_default_value_18;
        tmp_raise_type_18 = PyExc_TypeError;
        tmp_mod_expr_left_18 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_18__metaclass);
        tmp_expression_value_107 = tmp_class_creation_18__metaclass;
        tmp_name_value_20 = mod_consts[71];
        tmp_default_value_18 = mod_consts[72];
        tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_107, tmp_name_value_20, tmp_default_value_18);
        if (tmp_tuple_element_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_type_arg_36;
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_70);
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_type_arg_36 = tmp_class_creation_18__prepared;
            tmp_expression_value_108 = BUILTIN_TYPE1(tmp_type_arg_36);
            assert(!(tmp_expression_value_108 == NULL));
            tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[71]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_70);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_mod_expr_right_18);
        goto try_except_handler_53;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        Py_DECREF(tmp_mod_expr_right_18);
        if (tmp_raise_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_53;
        }
        exception_type = tmp_raise_type_18;
        Py_INCREF(tmp_raise_type_18);
        exception_value = tmp_raise_value_18;
        exception_lineno = 297;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_53;
    }
    branch_no_53:;
    goto branch_end_52;
    branch_no_52:;
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_18__prepared == NULL);
        tmp_class_creation_18__prepared = tmp_assign_source_152;
    }
    branch_end_52:;
    {
        PyObject *tmp_assign_source_153;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_class_creation_18__prepared);
            tmp_set_locals_18 = tmp_class_creation_18__prepared;
            locals_websockets$exceptions$$$class__18_InvalidParameterValue_297 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_55;
        }
        frame_04fd14767be0acc3ce30a6c93b78bac7_10 = MAKE_CLASS_FRAME(tstate, codeobj_04fd14767be0acc3ce30a6c93b78bac7, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_04fd14767be0acc3ce30a6c93b78bac7_10);
        assert(Py_REFCNT(frame_04fd14767be0acc3ce30a6c93b78bac7_10) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[102]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__17___init__(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }
        {
            PyObject *tmp_annotations_20;
            tmp_annotations_20 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__18___str__(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_10;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_9;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_04fd14767be0acc3ce30a6c93b78bac7_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_04fd14767be0acc3ce30a6c93b78bac7_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_04fd14767be0acc3ce30a6c93b78bac7_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_04fd14767be0acc3ce30a6c93b78bac7_10,
            type_description_2,
            outline_17_var___class__
        );



        assertFrameObject(frame_04fd14767be0acc3ce30a6c93b78bac7_10);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_9:;

        goto try_except_handler_55;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_74;
            PyObject *tmp_cmp_expr_left_18;
            PyObject *tmp_cmp_expr_right_18;
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_cmp_expr_left_18 = tmp_class_creation_18__bases;
            CHECK_OBJECT(tmp_class_creation_18__bases_orig);
            tmp_cmp_expr_right_18 = tmp_class_creation_18__bases_orig;
            tmp_condition_result_74 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
            if (tmp_condition_result_74 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_55;
            }
            if (tmp_condition_result_74 == NUITKA_BOOL_TRUE) {
                goto branch_yes_54;
            } else {
                goto branch_no_54;
            }
        }
        branch_yes_54:;
        CHECK_OBJECT(tmp_class_creation_18__bases_orig);
        tmp_dictset_value = tmp_class_creation_18__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto try_except_handler_55;
        }
        branch_no_54:;
        {
            PyObject *tmp_assign_source_154;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_18__metaclass);
            tmp_called_value_40 = tmp_class_creation_18__metaclass;
            tmp_tuple_element_71 = mod_consts[138];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_18__bases);
            tmp_tuple_element_71 = tmp_class_creation_18__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_websockets$exceptions$$$class__18_InvalidParameterValue_297;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 297;
            tmp_assign_source_154 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_154 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_55;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_154;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_assign_source_153 = outline_17_var___class__;
        Py_INCREF(tmp_assign_source_153);
        goto try_return_handler_55;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        Py_DECREF(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297);
        locals_websockets$exceptions$$$class__18_InvalidParameterValue_297 = NULL;
        goto try_return_handler_54;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__18_InvalidParameterValue_297);
        locals_websockets$exceptions$$$class__18_InvalidParameterValue_297 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto try_except_handler_54;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 297;
        goto try_except_handler_53;
        outline_result_18:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_153);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    Py_XDECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT(tmp_class_creation_18__bases_orig);
    Py_DECREF(tmp_class_creation_18__bases_orig);
    tmp_class_creation_18__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_18__bases);
    Py_DECREF(tmp_class_creation_18__bases);
    tmp_class_creation_18__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
    Py_DECREF(tmp_class_creation_18__class_decl_dict);
    tmp_class_creation_18__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_18__metaclass);
    Py_DECREF(tmp_class_creation_18__metaclass);
    tmp_class_creation_18__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_18__prepared);
    Py_DECREF(tmp_class_creation_18__prepared);
    tmp_class_creation_18__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_tuple_element_72;
        tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_72 == NULL)) {
            tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_assign_source_155 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_155, 0, tmp_tuple_element_72);
        assert(tmp_class_creation_19__bases_orig == NULL);
        tmp_class_creation_19__bases_orig = tmp_assign_source_155;
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_dircall_arg1_19;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dircall_arg1_19 = tmp_class_creation_19__bases_orig;
        Py_INCREF(tmp_dircall_arg1_19);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
            tmp_assign_source_156 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__bases == NULL);
        tmp_class_creation_19__bases = tmp_assign_source_156;
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__class_decl_dict == NULL);
        tmp_class_creation_19__class_decl_dict = tmp_assign_source_157;
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_metaclass_value_19;
        nuitka_bool tmp_condition_result_75;
        int tmp_truth_name_19;
        PyObject *tmp_type_arg_37;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_19;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
        if (tmp_truth_name_19 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_condition_result_75 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_21;
        } else {
            goto condexpr_false_21;
        }
        condexpr_true_21:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_expression_value_109 = tmp_class_creation_19__bases;
        tmp_subscript_value_19 = mod_consts[58];
        tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_109, tmp_subscript_value_19, 0);
        if (tmp_type_arg_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
        Py_DECREF(tmp_type_arg_37);
        if (tmp_metaclass_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        goto condexpr_end_21;
        condexpr_false_21:;
        tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_19);
        condexpr_end_21:;
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_bases_value_19 = tmp_class_creation_19__bases;
        tmp_assign_source_158 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
        Py_DECREF(tmp_metaclass_value_19);
        if (tmp_assign_source_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__metaclass == NULL);
        tmp_class_creation_19__metaclass = tmp_assign_source_158;
    }
    {
        bool tmp_condition_result_76;
        PyObject *tmp_expression_value_110;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_110 = tmp_class_creation_19__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_110, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_condition_result_76 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_76 != false) {
            goto branch_yes_55;
        } else {
            goto branch_no_55;
        }
    }
    branch_yes_55:;
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_value_37;
        PyObject *tmp_tuple_element_73;
        PyObject *tmp_kwargs_value_37;
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_111 = tmp_class_creation_19__metaclass;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[67]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_tuple_element_73 = mod_consts[142];
        tmp_args_value_37 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_19__bases);
        tmp_tuple_element_73 = tmp_class_creation_19__bases;
        PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_73);
        CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
        tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 316;
        tmp_assign_source_159 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_37, tmp_kwargs_value_37);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_value_37);
        if (tmp_assign_source_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_159;
    }
    {
        bool tmp_condition_result_77;
        PyObject *tmp_operand_value_19;
        PyObject *tmp_expression_value_112;
        CHECK_OBJECT(tmp_class_creation_19__prepared);
        tmp_expression_value_112 = tmp_class_creation_19__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_112, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_77 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_77 != false) {
            goto branch_yes_56;
        } else {
            goto branch_no_56;
        }
    }
    branch_yes_56:;
    {
        PyObject *tmp_raise_type_19;
        PyObject *tmp_raise_value_19;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        PyObject *tmp_tuple_element_74;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_name_value_21;
        PyObject *tmp_default_value_19;
        tmp_raise_type_19 = PyExc_TypeError;
        tmp_mod_expr_left_19 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_19__metaclass);
        tmp_expression_value_113 = tmp_class_creation_19__metaclass;
        tmp_name_value_21 = mod_consts[71];
        tmp_default_value_19 = mod_consts[72];
        tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_113, tmp_name_value_21, tmp_default_value_19);
        if (tmp_tuple_element_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_114;
            PyObject *tmp_type_arg_38;
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_74);
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_type_arg_38 = tmp_class_creation_19__prepared;
            tmp_expression_value_114 = BUILTIN_TYPE1(tmp_type_arg_38);
            assert(!(tmp_expression_value_114 == NULL));
            tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[71]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_74);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_19);
        goto try_except_handler_56;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        Py_DECREF(tmp_mod_expr_right_19);
        if (tmp_raise_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_56;
        }
        exception_type = tmp_raise_type_19;
        Py_INCREF(tmp_raise_type_19);
        exception_value = tmp_raise_value_19;
        exception_lineno = 316;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_56;
    }
    branch_no_56:;
    goto branch_end_55;
    branch_no_55:;
    {
        PyObject *tmp_assign_source_160;
        tmp_assign_source_160 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_19__prepared == NULL);
        tmp_class_creation_19__prepared = tmp_assign_source_160;
    }
    branch_end_55:;
    {
        PyObject *tmp_assign_source_161;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_class_creation_19__prepared);
            tmp_set_locals_19 = tmp_class_creation_19__prepared;
            locals_websockets$exceptions$$$class__19_AbortHandshake_316 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_AbortHandshake_316, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_AbortHandshake_316, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_AbortHandshake_316, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_58;
        }
        frame_4c69125b17763851f1894c1c7de11696_11 = MAKE_CLASS_FRAME(tstate, codeobj_4c69125b17763851f1894c1c7de11696, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_4c69125b17763851f1894c1c7de11696_11);
        assert(Py_REFCNT(frame_4c69125b17763851f1894c1c7de11696_11) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_21;
            tmp_defaults_3 = mod_consts[144];
            tmp_annotations_21 = DICT_COPY(mod_consts[145]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__19___init__(tmp_defaults_3, tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_AbortHandshake_316, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__20___str__(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_AbortHandshake_316, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_10;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4c69125b17763851f1894c1c7de11696_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4c69125b17763851f1894c1c7de11696_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4c69125b17763851f1894c1c7de11696_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4c69125b17763851f1894c1c7de11696_11,
            type_description_2,
            outline_18_var___class__
        );



        assertFrameObject(frame_4c69125b17763851f1894c1c7de11696_11);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_10:;

        goto try_except_handler_58;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_78;
            PyObject *tmp_cmp_expr_left_19;
            PyObject *tmp_cmp_expr_right_19;
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_cmp_expr_left_19 = tmp_class_creation_19__bases;
            CHECK_OBJECT(tmp_class_creation_19__bases_orig);
            tmp_cmp_expr_right_19 = tmp_class_creation_19__bases_orig;
            tmp_condition_result_78 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
            if (tmp_condition_result_78 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto try_except_handler_58;
            }
            if (tmp_condition_result_78 == NUITKA_BOOL_TRUE) {
                goto branch_yes_57;
            } else {
                goto branch_no_57;
            }
        }
        branch_yes_57:;
        CHECK_OBJECT(tmp_class_creation_19__bases_orig);
        tmp_dictset_value = tmp_class_creation_19__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__19_AbortHandshake_316, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto try_except_handler_58;
        }
        branch_no_57:;
        {
            PyObject *tmp_assign_source_162;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_38;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_kwargs_value_38;
            CHECK_OBJECT(tmp_class_creation_19__metaclass);
            tmp_called_value_42 = tmp_class_creation_19__metaclass;
            tmp_tuple_element_75 = mod_consts[142];
            tmp_args_value_38 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_19__bases);
            tmp_tuple_element_75 = tmp_class_creation_19__bases;
            PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = locals_websockets$exceptions$$$class__19_AbortHandshake_316;
            PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_75);
            CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
            tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 316;
            tmp_assign_source_162 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_38, tmp_kwargs_value_38);
            Py_DECREF(tmp_args_value_38);
            if (tmp_assign_source_162 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;

                goto try_except_handler_58;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_162;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_assign_source_161 = outline_18_var___class__;
        Py_INCREF(tmp_assign_source_161);
        goto try_return_handler_58;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        Py_DECREF(locals_websockets$exceptions$$$class__19_AbortHandshake_316);
        locals_websockets$exceptions$$$class__19_AbortHandshake_316 = NULL;
        goto try_return_handler_57;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__19_AbortHandshake_316);
        locals_websockets$exceptions$$$class__19_AbortHandshake_316 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto try_except_handler_57;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 316;
        goto try_except_handler_56;
        outline_result_19:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_161);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    Py_XDECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_19__bases_orig);
    Py_DECREF(tmp_class_creation_19__bases_orig);
    tmp_class_creation_19__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_19__bases);
    Py_DECREF(tmp_class_creation_19__bases);
    tmp_class_creation_19__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
    Py_DECREF(tmp_class_creation_19__class_decl_dict);
    tmp_class_creation_19__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_19__metaclass);
    Py_DECREF(tmp_class_creation_19__metaclass);
    tmp_class_creation_19__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_19__prepared);
    Py_DECREF(tmp_class_creation_19__prepared);
    tmp_class_creation_19__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_tuple_element_76;
        tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_tuple_element_76 == NULL)) {
            tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_tuple_element_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_assign_source_163 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_163, 0, tmp_tuple_element_76);
        assert(tmp_class_creation_20__bases_orig == NULL);
        tmp_class_creation_20__bases_orig = tmp_assign_source_163;
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_dircall_arg1_20;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dircall_arg1_20 = tmp_class_creation_20__bases_orig;
        Py_INCREF(tmp_dircall_arg1_20);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
            tmp_assign_source_164 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__bases == NULL);
        tmp_class_creation_20__bases = tmp_assign_source_164;
    }
    {
        PyObject *tmp_assign_source_165;
        tmp_assign_source_165 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__class_decl_dict == NULL);
        tmp_class_creation_20__class_decl_dict = tmp_assign_source_165;
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_metaclass_value_20;
        nuitka_bool tmp_condition_result_79;
        int tmp_truth_name_20;
        PyObject *tmp_type_arg_39;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_20;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
        if (tmp_truth_name_20 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_condition_result_79 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_79 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_22;
        } else {
            goto condexpr_false_22;
        }
        condexpr_true_22:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_expression_value_115 = tmp_class_creation_20__bases;
        tmp_subscript_value_20 = mod_consts[58];
        tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_115, tmp_subscript_value_20, 0);
        if (tmp_type_arg_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
        Py_DECREF(tmp_type_arg_39);
        if (tmp_metaclass_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        goto condexpr_end_22;
        condexpr_false_22:;
        tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_20);
        condexpr_end_22:;
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_bases_value_20 = tmp_class_creation_20__bases;
        tmp_assign_source_166 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
        Py_DECREF(tmp_metaclass_value_20);
        if (tmp_assign_source_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__metaclass == NULL);
        tmp_class_creation_20__metaclass = tmp_assign_source_166;
    }
    {
        bool tmp_condition_result_80;
        PyObject *tmp_expression_value_116;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_116 = tmp_class_creation_20__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_116, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_condition_result_80 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_80 != false) {
            goto branch_yes_58;
        } else {
            goto branch_no_58;
        }
    }
    branch_yes_58:;
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_args_value_39;
        PyObject *tmp_tuple_element_77;
        PyObject *tmp_kwargs_value_39;
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_117 = tmp_class_creation_20__metaclass;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[67]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_tuple_element_77 = mod_consts[148];
        tmp_args_value_39 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_20__bases);
        tmp_tuple_element_77 = tmp_class_creation_20__bases;
        PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_77);
        CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
        tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 349;
        tmp_assign_source_167 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_39, tmp_kwargs_value_39);
        Py_DECREF(tmp_called_value_43);
        Py_DECREF(tmp_args_value_39);
        if (tmp_assign_source_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_167;
    }
    {
        bool tmp_condition_result_81;
        PyObject *tmp_operand_value_20;
        PyObject *tmp_expression_value_118;
        CHECK_OBJECT(tmp_class_creation_20__prepared);
        tmp_expression_value_118 = tmp_class_creation_20__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_118, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_81 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_81 != false) {
            goto branch_yes_59;
        } else {
            goto branch_no_59;
        }
    }
    branch_yes_59:;
    {
        PyObject *tmp_raise_type_20;
        PyObject *tmp_raise_value_20;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        PyObject *tmp_tuple_element_78;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_name_value_22;
        PyObject *tmp_default_value_20;
        tmp_raise_type_20 = PyExc_TypeError;
        tmp_mod_expr_left_20 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_20__metaclass);
        tmp_expression_value_119 = tmp_class_creation_20__metaclass;
        tmp_name_value_22 = mod_consts[71];
        tmp_default_value_20 = mod_consts[72];
        tmp_tuple_element_78 = BUILTIN_GETATTR(tstate, tmp_expression_value_119, tmp_name_value_22, tmp_default_value_20);
        if (tmp_tuple_element_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_type_arg_40;
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_78);
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_type_arg_40 = tmp_class_creation_20__prepared;
            tmp_expression_value_120 = BUILTIN_TYPE1(tmp_type_arg_40);
            assert(!(tmp_expression_value_120 == NULL));
            tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[71]);
            Py_DECREF(tmp_expression_value_120);
            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_78);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_mod_expr_right_20);
        goto try_except_handler_59;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        Py_DECREF(tmp_mod_expr_right_20);
        if (tmp_raise_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_59;
        }
        exception_type = tmp_raise_type_20;
        Py_INCREF(tmp_raise_type_20);
        exception_value = tmp_raise_value_20;
        exception_lineno = 349;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_59;
    }
    branch_no_59:;
    goto branch_end_58;
    branch_no_58:;
    {
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_20__prepared == NULL);
        tmp_class_creation_20__prepared = tmp_assign_source_168;
    }
    branch_end_58:;
    {
        PyObject *tmp_assign_source_169;
        {
            PyObject *tmp_set_locals_20;
            CHECK_OBJECT(tmp_class_creation_20__prepared);
            tmp_set_locals_20 = tmp_class_creation_20__prepared;
            locals_websockets$exceptions$$$class__20_RedirectHandshake_349 = tmp_set_locals_20;
            Py_INCREF(tmp_set_locals_20);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_RedirectHandshake_349, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_RedirectHandshake_349, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_61;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_RedirectHandshake_349, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_61;
        }
        frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12 = MAKE_CLASS_FRAME(tstate, codeobj_971aaacffb48ba1f2bfe6da9d8fd63e0, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12);
        assert(Py_REFCNT(frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_23;
            tmp_annotations_23 = DICT_COPY(mod_consts[150]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__21___init__(tmp_annotations_23);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_RedirectHandshake_349, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 357;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }
        {
            PyObject *tmp_annotations_24;
            tmp_annotations_24 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__22___str__(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_RedirectHandshake_349, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_11;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12,
            type_description_2,
            outline_19_var___class__
        );



        assertFrameObject(frame_971aaacffb48ba1f2bfe6da9d8fd63e0_12);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_11:;

        goto try_except_handler_61;
        skip_nested_handling_11:;
        {
            nuitka_bool tmp_condition_result_82;
            PyObject *tmp_cmp_expr_left_20;
            PyObject *tmp_cmp_expr_right_20;
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_cmp_expr_left_20 = tmp_class_creation_20__bases;
            CHECK_OBJECT(tmp_class_creation_20__bases_orig);
            tmp_cmp_expr_right_20 = tmp_class_creation_20__bases_orig;
            tmp_condition_result_82 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
            if (tmp_condition_result_82 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto try_except_handler_61;
            }
            if (tmp_condition_result_82 == NUITKA_BOOL_TRUE) {
                goto branch_yes_60;
            } else {
                goto branch_no_60;
            }
        }
        branch_yes_60:;
        CHECK_OBJECT(tmp_class_creation_20__bases_orig);
        tmp_dictset_value = tmp_class_creation_20__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__20_RedirectHandshake_349, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto try_except_handler_61;
        }
        branch_no_60:;
        {
            PyObject *tmp_assign_source_170;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_40;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_kwargs_value_40;
            CHECK_OBJECT(tmp_class_creation_20__metaclass);
            tmp_called_value_44 = tmp_class_creation_20__metaclass;
            tmp_tuple_element_79 = mod_consts[148];
            tmp_args_value_40 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_20__bases);
            tmp_tuple_element_79 = tmp_class_creation_20__bases;
            PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = locals_websockets$exceptions$$$class__20_RedirectHandshake_349;
            PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_79);
            CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
            tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 349;
            tmp_assign_source_170 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_40, tmp_kwargs_value_40);
            Py_DECREF(tmp_args_value_40);
            if (tmp_assign_source_170 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;

                goto try_except_handler_61;
            }
            assert(outline_19_var___class__ == NULL);
            outline_19_var___class__ = tmp_assign_source_170;
        }
        CHECK_OBJECT(outline_19_var___class__);
        tmp_assign_source_169 = outline_19_var___class__;
        Py_INCREF(tmp_assign_source_169);
        goto try_return_handler_61;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_61:;
        Py_DECREF(locals_websockets$exceptions$$$class__20_RedirectHandshake_349);
        locals_websockets$exceptions$$$class__20_RedirectHandshake_349 = NULL;
        goto try_return_handler_60;
        // Exception handler code:
        try_except_handler_61:;
        exception_keeper_type_59 = exception_type;
        exception_keeper_value_59 = exception_value;
        exception_keeper_tb_59 = exception_tb;
        exception_keeper_lineno_59 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__20_RedirectHandshake_349);
        locals_websockets$exceptions$$$class__20_RedirectHandshake_349 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_59;
        exception_value = exception_keeper_value_59;
        exception_tb = exception_keeper_tb_59;
        exception_lineno = exception_keeper_lineno_59;

        goto try_except_handler_60;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_60:;
        CHECK_OBJECT(outline_19_var___class__);
        Py_DECREF(outline_19_var___class__);
        outline_19_var___class__ = NULL;
        goto outline_result_20;
        // Exception handler code:
        try_except_handler_60:;
        exception_keeper_type_60 = exception_type;
        exception_keeper_value_60 = exception_value;
        exception_keeper_tb_60 = exception_tb;
        exception_keeper_lineno_60 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_60;
        exception_value = exception_keeper_value_60;
        exception_tb = exception_keeper_tb_60;
        exception_lineno = exception_keeper_lineno_60;

        goto outline_exception_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_20:;
        exception_lineno = 349;
        goto try_except_handler_59;
        outline_result_20:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_169);
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    Py_XDECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT(tmp_class_creation_20__bases_orig);
    Py_DECREF(tmp_class_creation_20__bases_orig);
    tmp_class_creation_20__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_20__bases);
    Py_DECREF(tmp_class_creation_20__bases);
    tmp_class_creation_20__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
    Py_DECREF(tmp_class_creation_20__class_decl_dict);
    tmp_class_creation_20__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_20__metaclass);
    Py_DECREF(tmp_class_creation_20__metaclass);
    tmp_class_creation_20__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_20__prepared);
    Py_DECREF(tmp_class_creation_20__prepared);
    tmp_class_creation_20__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_tuple_element_80;
        tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_80 == NULL)) {
            tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_tuple_element_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_assign_source_171 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_171, 0, tmp_tuple_element_80);
        tmp_tuple_element_80 = PyExc_AssertionError;
        PyTuple_SET_ITEM0(tmp_assign_source_171, 1, tmp_tuple_element_80);
        assert(tmp_class_creation_21__bases_orig == NULL);
        tmp_class_creation_21__bases_orig = tmp_assign_source_171;
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_dircall_arg1_21;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dircall_arg1_21 = tmp_class_creation_21__bases_orig;
        Py_INCREF(tmp_dircall_arg1_21);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
            tmp_assign_source_172 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__bases == NULL);
        tmp_class_creation_21__bases = tmp_assign_source_172;
    }
    {
        PyObject *tmp_assign_source_173;
        tmp_assign_source_173 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__class_decl_dict == NULL);
        tmp_class_creation_21__class_decl_dict = tmp_assign_source_173;
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_metaclass_value_21;
        nuitka_bool tmp_condition_result_83;
        int tmp_truth_name_21;
        PyObject *tmp_type_arg_41;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_bases_value_21;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_class_creation_21__bases);
        if (tmp_truth_name_21 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_condition_result_83 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_83 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_23;
        } else {
            goto condexpr_false_23;
        }
        condexpr_true_23:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_expression_value_121 = tmp_class_creation_21__bases;
        tmp_subscript_value_21 = mod_consts[58];
        tmp_type_arg_41 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_121, tmp_subscript_value_21, 0);
        if (tmp_type_arg_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_metaclass_value_21 = BUILTIN_TYPE1(tmp_type_arg_41);
        Py_DECREF(tmp_type_arg_41);
        if (tmp_metaclass_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        goto condexpr_end_23;
        condexpr_false_23:;
        tmp_metaclass_value_21 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_21);
        condexpr_end_23:;
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_bases_value_21 = tmp_class_creation_21__bases;
        tmp_assign_source_174 = SELECT_METACLASS(tstate, tmp_metaclass_value_21, tmp_bases_value_21);
        Py_DECREF(tmp_metaclass_value_21);
        if (tmp_assign_source_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__metaclass == NULL);
        tmp_class_creation_21__metaclass = tmp_assign_source_174;
    }
    {
        bool tmp_condition_result_84;
        PyObject *tmp_expression_value_122;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_122 = tmp_class_creation_21__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_122, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_condition_result_84 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_84 != false) {
            goto branch_yes_61;
        } else {
            goto branch_no_61;
        }
    }
    branch_yes_61:;
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_args_value_41;
        PyObject *tmp_tuple_element_81;
        PyObject *tmp_kwargs_value_41;
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_123 = tmp_class_creation_21__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[67]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_tuple_element_81 = mod_consts[153];
        tmp_args_value_41 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_41, 0, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_21__bases);
        tmp_tuple_element_81 = tmp_class_creation_21__bases;
        PyTuple_SET_ITEM0(tmp_args_value_41, 1, tmp_tuple_element_81);
        CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
        tmp_kwargs_value_41 = tmp_class_creation_21__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 364;
        tmp_assign_source_175 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_41, tmp_kwargs_value_41);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_value_41);
        if (tmp_assign_source_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_175;
    }
    {
        bool tmp_condition_result_85;
        PyObject *tmp_operand_value_21;
        PyObject *tmp_expression_value_124;
        CHECK_OBJECT(tmp_class_creation_21__prepared);
        tmp_expression_value_124 = tmp_class_creation_21__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_124, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_operand_value_21 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_85 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_85 != false) {
            goto branch_yes_62;
        } else {
            goto branch_no_62;
        }
    }
    branch_yes_62:;
    {
        PyObject *tmp_raise_type_21;
        PyObject *tmp_raise_value_21;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        PyObject *tmp_tuple_element_82;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_name_value_23;
        PyObject *tmp_default_value_21;
        tmp_raise_type_21 = PyExc_TypeError;
        tmp_mod_expr_left_21 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_21__metaclass);
        tmp_expression_value_125 = tmp_class_creation_21__metaclass;
        tmp_name_value_23 = mod_consts[71];
        tmp_default_value_21 = mod_consts[72];
        tmp_tuple_element_82 = BUILTIN_GETATTR(tstate, tmp_expression_value_125, tmp_name_value_23, tmp_default_value_21);
        if (tmp_tuple_element_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        tmp_mod_expr_right_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_126;
            PyObject *tmp_type_arg_42;
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 0, tmp_tuple_element_82);
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_type_arg_42 = tmp_class_creation_21__prepared;
            tmp_expression_value_126 = BUILTIN_TYPE1(tmp_type_arg_42);
            assert(!(tmp_expression_value_126 == NULL));
            tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[71]);
            Py_DECREF(tmp_expression_value_126);
            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_21, 1, tmp_tuple_element_82);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_mod_expr_right_21);
        goto try_except_handler_62;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_raise_value_21 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        Py_DECREF(tmp_mod_expr_right_21);
        if (tmp_raise_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_62;
        }
        exception_type = tmp_raise_type_21;
        Py_INCREF(tmp_raise_type_21);
        exception_value = tmp_raise_value_21;
        exception_lineno = 364;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_62;
    }
    branch_no_62:;
    goto branch_end_61;
    branch_no_61:;
    {
        PyObject *tmp_assign_source_176;
        tmp_assign_source_176 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_21__prepared == NULL);
        tmp_class_creation_21__prepared = tmp_assign_source_176;
    }
    branch_end_61:;
    {
        PyObject *tmp_assign_source_177;
        {
            PyObject *tmp_set_locals_21;
            CHECK_OBJECT(tmp_class_creation_21__prepared);
            tmp_set_locals_21 = tmp_class_creation_21__prepared;
            locals_websockets$exceptions$$$class__21_InvalidState_364 = tmp_set_locals_21;
            Py_INCREF(tmp_set_locals_21);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidState_364, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_64;
        }
        tmp_dictset_value = mod_consts[154];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidState_364, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_64;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidState_364, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_64;
        }
        {
            nuitka_bool tmp_condition_result_86;
            PyObject *tmp_cmp_expr_left_21;
            PyObject *tmp_cmp_expr_right_21;
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_cmp_expr_left_21 = tmp_class_creation_21__bases;
            CHECK_OBJECT(tmp_class_creation_21__bases_orig);
            tmp_cmp_expr_right_21 = tmp_class_creation_21__bases_orig;
            tmp_condition_result_86 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
            if (tmp_condition_result_86 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto try_except_handler_64;
            }
            if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
                goto branch_yes_63;
            } else {
                goto branch_no_63;
            }
        }
        branch_yes_63:;
        CHECK_OBJECT(tmp_class_creation_21__bases_orig);
        tmp_dictset_value = tmp_class_creation_21__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__21_InvalidState_364, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;

            goto try_except_handler_64;
        }
        branch_no_63:;
        {
            PyObject *tmp_assign_source_178;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_42;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_kwargs_value_42;
            CHECK_OBJECT(tmp_class_creation_21__metaclass);
            tmp_called_value_46 = tmp_class_creation_21__metaclass;
            tmp_tuple_element_83 = mod_consts[153];
            tmp_args_value_42 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_42, 0, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_21__bases);
            tmp_tuple_element_83 = tmp_class_creation_21__bases;
            PyTuple_SET_ITEM0(tmp_args_value_42, 1, tmp_tuple_element_83);
            tmp_tuple_element_83 = locals_websockets$exceptions$$$class__21_InvalidState_364;
            PyTuple_SET_ITEM0(tmp_args_value_42, 2, tmp_tuple_element_83);
            CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
            tmp_kwargs_value_42 = tmp_class_creation_21__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 364;
            tmp_assign_source_178 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_42, tmp_kwargs_value_42);
            Py_DECREF(tmp_args_value_42);
            if (tmp_assign_source_178 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;

                goto try_except_handler_64;
            }
            assert(outline_20_var___class__ == NULL);
            outline_20_var___class__ = tmp_assign_source_178;
        }
        CHECK_OBJECT(outline_20_var___class__);
        tmp_assign_source_177 = outline_20_var___class__;
        Py_INCREF(tmp_assign_source_177);
        goto try_return_handler_64;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_64:;
        Py_DECREF(locals_websockets$exceptions$$$class__21_InvalidState_364);
        locals_websockets$exceptions$$$class__21_InvalidState_364 = NULL;
        goto try_return_handler_63;
        // Exception handler code:
        try_except_handler_64:;
        exception_keeper_type_62 = exception_type;
        exception_keeper_value_62 = exception_value;
        exception_keeper_tb_62 = exception_tb;
        exception_keeper_lineno_62 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__21_InvalidState_364);
        locals_websockets$exceptions$$$class__21_InvalidState_364 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_62;
        exception_value = exception_keeper_value_62;
        exception_tb = exception_keeper_tb_62;
        exception_lineno = exception_keeper_lineno_62;

        goto try_except_handler_63;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_63:;
        CHECK_OBJECT(outline_20_var___class__);
        Py_DECREF(outline_20_var___class__);
        outline_20_var___class__ = NULL;
        goto outline_result_21;
        // Exception handler code:
        try_except_handler_63:;
        exception_keeper_type_63 = exception_type;
        exception_keeper_value_63 = exception_value;
        exception_keeper_tb_63 = exception_tb;
        exception_keeper_lineno_63 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_63;
        exception_value = exception_keeper_value_63;
        exception_tb = exception_keeper_tb_63;
        exception_lineno = exception_keeper_lineno_63;

        goto outline_exception_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_21:;
        exception_lineno = 364;
        goto try_except_handler_62;
        outline_result_21:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_177);
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    Py_XDECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_class_creation_21__bases_orig);
    Py_DECREF(tmp_class_creation_21__bases_orig);
    tmp_class_creation_21__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_21__bases);
    Py_DECREF(tmp_class_creation_21__bases);
    tmp_class_creation_21__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_21__class_decl_dict);
    Py_DECREF(tmp_class_creation_21__class_decl_dict);
    tmp_class_creation_21__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_21__metaclass);
    Py_DECREF(tmp_class_creation_21__metaclass);
    tmp_class_creation_21__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_21__prepared);
    Py_DECREF(tmp_class_creation_21__prepared);
    tmp_class_creation_21__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_tuple_element_84;
        tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_84 == NULL)) {
            tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_tuple_element_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_assign_source_179 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_179, 0, tmp_tuple_element_84);
        assert(tmp_class_creation_22__bases_orig == NULL);
        tmp_class_creation_22__bases_orig = tmp_assign_source_179;
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_dircall_arg1_22;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dircall_arg1_22 = tmp_class_creation_22__bases_orig;
        Py_INCREF(tmp_dircall_arg1_22);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
            tmp_assign_source_180 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__bases == NULL);
        tmp_class_creation_22__bases = tmp_assign_source_180;
    }
    {
        PyObject *tmp_assign_source_181;
        tmp_assign_source_181 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__class_decl_dict == NULL);
        tmp_class_creation_22__class_decl_dict = tmp_assign_source_181;
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_metaclass_value_22;
        nuitka_bool tmp_condition_result_87;
        int tmp_truth_name_22;
        PyObject *tmp_type_arg_43;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_bases_value_22;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_class_creation_22__bases);
        if (tmp_truth_name_22 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_condition_result_87 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_87 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_24;
        } else {
            goto condexpr_false_24;
        }
        condexpr_true_24:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_expression_value_127 = tmp_class_creation_22__bases;
        tmp_subscript_value_22 = mod_consts[58];
        tmp_type_arg_43 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_127, tmp_subscript_value_22, 0);
        if (tmp_type_arg_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_metaclass_value_22 = BUILTIN_TYPE1(tmp_type_arg_43);
        Py_DECREF(tmp_type_arg_43);
        if (tmp_metaclass_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        goto condexpr_end_24;
        condexpr_false_24:;
        tmp_metaclass_value_22 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_22);
        condexpr_end_24:;
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_bases_value_22 = tmp_class_creation_22__bases;
        tmp_assign_source_182 = SELECT_METACLASS(tstate, tmp_metaclass_value_22, tmp_bases_value_22);
        Py_DECREF(tmp_metaclass_value_22);
        if (tmp_assign_source_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__metaclass == NULL);
        tmp_class_creation_22__metaclass = tmp_assign_source_182;
    }
    {
        bool tmp_condition_result_88;
        PyObject *tmp_expression_value_128;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_128 = tmp_class_creation_22__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_128, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_condition_result_88 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_88 != false) {
            goto branch_yes_64;
        } else {
            goto branch_no_64;
        }
    }
    branch_yes_64:;
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_args_value_43;
        PyObject *tmp_tuple_element_85;
        PyObject *tmp_kwargs_value_43;
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_129 = tmp_class_creation_22__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[67]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_tuple_element_85 = mod_consts[155];
        tmp_args_value_43 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_43, 0, tmp_tuple_element_85);
        CHECK_OBJECT(tmp_class_creation_22__bases);
        tmp_tuple_element_85 = tmp_class_creation_22__bases;
        PyTuple_SET_ITEM0(tmp_args_value_43, 1, tmp_tuple_element_85);
        CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
        tmp_kwargs_value_43 = tmp_class_creation_22__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 375;
        tmp_assign_source_183 = CALL_FUNCTION(tstate, tmp_called_value_47, tmp_args_value_43, tmp_kwargs_value_43);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_43);
        if (tmp_assign_source_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_183;
    }
    {
        bool tmp_condition_result_89;
        PyObject *tmp_operand_value_22;
        PyObject *tmp_expression_value_130;
        CHECK_OBJECT(tmp_class_creation_22__prepared);
        tmp_expression_value_130 = tmp_class_creation_22__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_130, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_operand_value_22 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_89 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_89 != false) {
            goto branch_yes_65;
        } else {
            goto branch_no_65;
        }
    }
    branch_yes_65:;
    {
        PyObject *tmp_raise_type_22;
        PyObject *tmp_raise_value_22;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        PyObject *tmp_tuple_element_86;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_name_value_24;
        PyObject *tmp_default_value_22;
        tmp_raise_type_22 = PyExc_TypeError;
        tmp_mod_expr_left_22 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_22__metaclass);
        tmp_expression_value_131 = tmp_class_creation_22__metaclass;
        tmp_name_value_24 = mod_consts[71];
        tmp_default_value_22 = mod_consts[72];
        tmp_tuple_element_86 = BUILTIN_GETATTR(tstate, tmp_expression_value_131, tmp_name_value_24, tmp_default_value_22);
        if (tmp_tuple_element_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        tmp_mod_expr_right_22 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_type_arg_44;
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 0, tmp_tuple_element_86);
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_type_arg_44 = tmp_class_creation_22__prepared;
            tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_44);
            assert(!(tmp_expression_value_132 == NULL));
            tmp_tuple_element_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[71]);
            Py_DECREF(tmp_expression_value_132);
            if (tmp_tuple_element_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_22, 1, tmp_tuple_element_86);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_mod_expr_right_22);
        goto try_except_handler_65;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_raise_value_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        Py_DECREF(tmp_mod_expr_right_22);
        if (tmp_raise_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_65;
        }
        exception_type = tmp_raise_type_22;
        Py_INCREF(tmp_raise_type_22);
        exception_value = tmp_raise_value_22;
        exception_lineno = 375;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_65;
    }
    branch_no_65:;
    goto branch_end_64;
    branch_no_64:;
    {
        PyObject *tmp_assign_source_184;
        tmp_assign_source_184 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_22__prepared == NULL);
        tmp_class_creation_22__prepared = tmp_assign_source_184;
    }
    branch_end_64:;
    {
        PyObject *tmp_assign_source_185;
        {
            PyObject *tmp_set_locals_22;
            CHECK_OBJECT(tmp_class_creation_22__prepared);
            tmp_set_locals_22 = tmp_class_creation_22__prepared;
            locals_websockets$exceptions$$$class__22_InvalidURI_375 = tmp_set_locals_22;
            Py_INCREF(tmp_set_locals_22);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidURI_375, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_67;
        }
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidURI_375, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_67;
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidURI_375, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_67;
        }
        frame_8b1f43936b1addad073b8abe79beeb18_13 = MAKE_CLASS_FRAME(tstate, codeobj_8b1f43936b1addad073b8abe79beeb18, module_websockets$exceptions, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_8b1f43936b1addad073b8abe79beeb18_13);
        assert(Py_REFCNT(frame_8b1f43936b1addad073b8abe79beeb18_13) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(mod_consts[157]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__23___init__(tmp_annotations_25);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidURI_375, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }
        {
            PyObject *tmp_annotations_26;
            tmp_annotations_26 = DICT_COPY(mod_consts[83]);


            tmp_dictset_value = MAKE_FUNCTION_websockets$exceptions$$$function__24___str__(tmp_annotations_26);

            tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidURI_375, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_12;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8b1f43936b1addad073b8abe79beeb18_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8b1f43936b1addad073b8abe79beeb18_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8b1f43936b1addad073b8abe79beeb18_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8b1f43936b1addad073b8abe79beeb18_13,
            type_description_2,
            outline_21_var___class__
        );



        assertFrameObject(frame_8b1f43936b1addad073b8abe79beeb18_13);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_12:;

        goto try_except_handler_67;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_90;
            PyObject *tmp_cmp_expr_left_22;
            PyObject *tmp_cmp_expr_right_22;
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_cmp_expr_left_22 = tmp_class_creation_22__bases;
            CHECK_OBJECT(tmp_class_creation_22__bases_orig);
            tmp_cmp_expr_right_22 = tmp_class_creation_22__bases_orig;
            tmp_condition_result_90 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
            if (tmp_condition_result_90 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto try_except_handler_67;
            }
            if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
                goto branch_yes_66;
            } else {
                goto branch_no_66;
            }
        }
        branch_yes_66:;
        CHECK_OBJECT(tmp_class_creation_22__bases_orig);
        tmp_dictset_value = tmp_class_creation_22__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__22_InvalidURI_375, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;

            goto try_except_handler_67;
        }
        branch_no_66:;
        {
            PyObject *tmp_assign_source_186;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_value_44;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_kwargs_value_44;
            CHECK_OBJECT(tmp_class_creation_22__metaclass);
            tmp_called_value_48 = tmp_class_creation_22__metaclass;
            tmp_tuple_element_87 = mod_consts[155];
            tmp_args_value_44 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_44, 0, tmp_tuple_element_87);
            CHECK_OBJECT(tmp_class_creation_22__bases);
            tmp_tuple_element_87 = tmp_class_creation_22__bases;
            PyTuple_SET_ITEM0(tmp_args_value_44, 1, tmp_tuple_element_87);
            tmp_tuple_element_87 = locals_websockets$exceptions$$$class__22_InvalidURI_375;
            PyTuple_SET_ITEM0(tmp_args_value_44, 2, tmp_tuple_element_87);
            CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
            tmp_kwargs_value_44 = tmp_class_creation_22__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 375;
            tmp_assign_source_186 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_44, tmp_kwargs_value_44);
            Py_DECREF(tmp_args_value_44);
            if (tmp_assign_source_186 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;

                goto try_except_handler_67;
            }
            assert(outline_21_var___class__ == NULL);
            outline_21_var___class__ = tmp_assign_source_186;
        }
        CHECK_OBJECT(outline_21_var___class__);
        tmp_assign_source_185 = outline_21_var___class__;
        Py_INCREF(tmp_assign_source_185);
        goto try_return_handler_67;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_67:;
        Py_DECREF(locals_websockets$exceptions$$$class__22_InvalidURI_375);
        locals_websockets$exceptions$$$class__22_InvalidURI_375 = NULL;
        goto try_return_handler_66;
        // Exception handler code:
        try_except_handler_67:;
        exception_keeper_type_65 = exception_type;
        exception_keeper_value_65 = exception_value;
        exception_keeper_tb_65 = exception_tb;
        exception_keeper_lineno_65 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__22_InvalidURI_375);
        locals_websockets$exceptions$$$class__22_InvalidURI_375 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_65;
        exception_value = exception_keeper_value_65;
        exception_tb = exception_keeper_tb_65;
        exception_lineno = exception_keeper_lineno_65;

        goto try_except_handler_66;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_66:;
        CHECK_OBJECT(outline_21_var___class__);
        Py_DECREF(outline_21_var___class__);
        outline_21_var___class__ = NULL;
        goto outline_result_22;
        // Exception handler code:
        try_except_handler_66:;
        exception_keeper_type_66 = exception_type;
        exception_keeper_value_66 = exception_value;
        exception_keeper_tb_66 = exception_tb;
        exception_keeper_lineno_66 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_66;
        exception_value = exception_keeper_value_66;
        exception_tb = exception_keeper_tb_66;
        exception_lineno = exception_keeper_lineno_66;

        goto outline_exception_22;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_22:;
        exception_lineno = 375;
        goto try_except_handler_65;
        outline_result_22:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_185);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    Py_XDECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT(tmp_class_creation_22__bases_orig);
    Py_DECREF(tmp_class_creation_22__bases_orig);
    tmp_class_creation_22__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_22__bases);
    Py_DECREF(tmp_class_creation_22__bases);
    tmp_class_creation_22__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_22__class_decl_dict);
    Py_DECREF(tmp_class_creation_22__class_decl_dict);
    tmp_class_creation_22__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_22__metaclass);
    Py_DECREF(tmp_class_creation_22__metaclass);
    tmp_class_creation_22__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_22__prepared);
    Py_DECREF(tmp_class_creation_22__prepared);
    tmp_class_creation_22__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_187;
        PyObject *tmp_tuple_element_88;
        tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_88 == NULL)) {
            tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_tuple_element_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_assign_source_187 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_187, 0, tmp_tuple_element_88);
        assert(tmp_class_creation_23__bases_orig == NULL);
        tmp_class_creation_23__bases_orig = tmp_assign_source_187;
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_dircall_arg1_23;
        CHECK_OBJECT(tmp_class_creation_23__bases_orig);
        tmp_dircall_arg1_23 = tmp_class_creation_23__bases_orig;
        Py_INCREF(tmp_dircall_arg1_23);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_23};
            tmp_assign_source_188 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__bases == NULL);
        tmp_class_creation_23__bases = tmp_assign_source_188;
    }
    {
        PyObject *tmp_assign_source_189;
        tmp_assign_source_189 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__class_decl_dict == NULL);
        tmp_class_creation_23__class_decl_dict = tmp_assign_source_189;
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_metaclass_value_23;
        nuitka_bool tmp_condition_result_91;
        int tmp_truth_name_23;
        PyObject *tmp_type_arg_45;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_bases_value_23;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_class_creation_23__bases);
        if (tmp_truth_name_23 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_condition_result_91 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_91 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_25;
        } else {
            goto condexpr_false_25;
        }
        condexpr_true_25:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_expression_value_133 = tmp_class_creation_23__bases;
        tmp_subscript_value_23 = mod_consts[58];
        tmp_type_arg_45 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_133, tmp_subscript_value_23, 0);
        if (tmp_type_arg_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_metaclass_value_23 = BUILTIN_TYPE1(tmp_type_arg_45);
        Py_DECREF(tmp_type_arg_45);
        if (tmp_metaclass_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        goto condexpr_end_25;
        condexpr_false_25:;
        tmp_metaclass_value_23 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_23);
        condexpr_end_25:;
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_bases_value_23 = tmp_class_creation_23__bases;
        tmp_assign_source_190 = SELECT_METACLASS(tstate, tmp_metaclass_value_23, tmp_bases_value_23);
        Py_DECREF(tmp_metaclass_value_23);
        if (tmp_assign_source_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__metaclass == NULL);
        tmp_class_creation_23__metaclass = tmp_assign_source_190;
    }
    {
        bool tmp_condition_result_92;
        PyObject *tmp_expression_value_134;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_134 = tmp_class_creation_23__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_134, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_condition_result_92 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_92 != false) {
            goto branch_yes_67;
        } else {
            goto branch_no_67;
        }
    }
    branch_yes_67:;
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_args_value_45;
        PyObject *tmp_tuple_element_89;
        PyObject *tmp_kwargs_value_45;
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_135 = tmp_class_creation_23__metaclass;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[67]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_tuple_element_89 = mod_consts[160];
        tmp_args_value_45 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_45, 0, tmp_tuple_element_89);
        CHECK_OBJECT(tmp_class_creation_23__bases);
        tmp_tuple_element_89 = tmp_class_creation_23__bases;
        PyTuple_SET_ITEM0(tmp_args_value_45, 1, tmp_tuple_element_89);
        CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
        tmp_kwargs_value_45 = tmp_class_creation_23__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 389;
        tmp_assign_source_191 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_45, tmp_kwargs_value_45);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_value_45);
        if (tmp_assign_source_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_191;
    }
    {
        bool tmp_condition_result_93;
        PyObject *tmp_operand_value_23;
        PyObject *tmp_expression_value_136;
        CHECK_OBJECT(tmp_class_creation_23__prepared);
        tmp_expression_value_136 = tmp_class_creation_23__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_136, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_operand_value_23 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_93 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_93 != false) {
            goto branch_yes_68;
        } else {
            goto branch_no_68;
        }
    }
    branch_yes_68:;
    {
        PyObject *tmp_raise_type_23;
        PyObject *tmp_raise_value_23;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        PyObject *tmp_tuple_element_90;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_name_value_25;
        PyObject *tmp_default_value_23;
        tmp_raise_type_23 = PyExc_TypeError;
        tmp_mod_expr_left_23 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_23__metaclass);
        tmp_expression_value_137 = tmp_class_creation_23__metaclass;
        tmp_name_value_25 = mod_consts[71];
        tmp_default_value_23 = mod_consts[72];
        tmp_tuple_element_90 = BUILTIN_GETATTR(tstate, tmp_expression_value_137, tmp_name_value_25, tmp_default_value_23);
        if (tmp_tuple_element_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        tmp_mod_expr_right_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_138;
            PyObject *tmp_type_arg_46;
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 0, tmp_tuple_element_90);
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_type_arg_46 = tmp_class_creation_23__prepared;
            tmp_expression_value_138 = BUILTIN_TYPE1(tmp_type_arg_46);
            assert(!(tmp_expression_value_138 == NULL));
            tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[71]);
            Py_DECREF(tmp_expression_value_138);
            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_23, 1, tmp_tuple_element_90);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_mod_expr_right_23);
        goto try_except_handler_68;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_raise_value_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        Py_DECREF(tmp_mod_expr_right_23);
        if (tmp_raise_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_68;
        }
        exception_type = tmp_raise_type_23;
        Py_INCREF(tmp_raise_type_23);
        exception_value = tmp_raise_value_23;
        exception_lineno = 389;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_68;
    }
    branch_no_68:;
    goto branch_end_67;
    branch_no_67:;
    {
        PyObject *tmp_assign_source_192;
        tmp_assign_source_192 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_23__prepared == NULL);
        tmp_class_creation_23__prepared = tmp_assign_source_192;
    }
    branch_end_67:;
    {
        PyObject *tmp_assign_source_193;
        {
            PyObject *tmp_set_locals_23;
            CHECK_OBJECT(tmp_class_creation_23__prepared);
            tmp_set_locals_23 = tmp_class_creation_23__prepared;
            locals_websockets$exceptions$$$class__23_PayloadTooBig_389 = tmp_set_locals_23;
            Py_INCREF(tmp_set_locals_23);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_PayloadTooBig_389, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_70;
        }
        tmp_dictset_value = mod_consts[161];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_PayloadTooBig_389, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_70;
        }
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_PayloadTooBig_389, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_70;
        }
        {
            nuitka_bool tmp_condition_result_94;
            PyObject *tmp_cmp_expr_left_23;
            PyObject *tmp_cmp_expr_right_23;
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_cmp_expr_left_23 = tmp_class_creation_23__bases;
            CHECK_OBJECT(tmp_class_creation_23__bases_orig);
            tmp_cmp_expr_right_23 = tmp_class_creation_23__bases_orig;
            tmp_condition_result_94 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
            if (tmp_condition_result_94 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto try_except_handler_70;
            }
            if (tmp_condition_result_94 == NUITKA_BOOL_TRUE) {
                goto branch_yes_69;
            } else {
                goto branch_no_69;
            }
        }
        branch_yes_69:;
        CHECK_OBJECT(tmp_class_creation_23__bases_orig);
        tmp_dictset_value = tmp_class_creation_23__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__23_PayloadTooBig_389, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_70;
        }
        branch_no_69:;
        {
            PyObject *tmp_assign_source_194;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_value_46;
            PyObject *tmp_tuple_element_91;
            PyObject *tmp_kwargs_value_46;
            CHECK_OBJECT(tmp_class_creation_23__metaclass);
            tmp_called_value_50 = tmp_class_creation_23__metaclass;
            tmp_tuple_element_91 = mod_consts[160];
            tmp_args_value_46 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_46, 0, tmp_tuple_element_91);
            CHECK_OBJECT(tmp_class_creation_23__bases);
            tmp_tuple_element_91 = tmp_class_creation_23__bases;
            PyTuple_SET_ITEM0(tmp_args_value_46, 1, tmp_tuple_element_91);
            tmp_tuple_element_91 = locals_websockets$exceptions$$$class__23_PayloadTooBig_389;
            PyTuple_SET_ITEM0(tmp_args_value_46, 2, tmp_tuple_element_91);
            CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
            tmp_kwargs_value_46 = tmp_class_creation_23__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 389;
            tmp_assign_source_194 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_46, tmp_kwargs_value_46);
            Py_DECREF(tmp_args_value_46);
            if (tmp_assign_source_194 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 389;

                goto try_except_handler_70;
            }
            assert(outline_22_var___class__ == NULL);
            outline_22_var___class__ = tmp_assign_source_194;
        }
        CHECK_OBJECT(outline_22_var___class__);
        tmp_assign_source_193 = outline_22_var___class__;
        Py_INCREF(tmp_assign_source_193);
        goto try_return_handler_70;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_70:;
        Py_DECREF(locals_websockets$exceptions$$$class__23_PayloadTooBig_389);
        locals_websockets$exceptions$$$class__23_PayloadTooBig_389 = NULL;
        goto try_return_handler_69;
        // Exception handler code:
        try_except_handler_70:;
        exception_keeper_type_68 = exception_type;
        exception_keeper_value_68 = exception_value;
        exception_keeper_tb_68 = exception_tb;
        exception_keeper_lineno_68 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__23_PayloadTooBig_389);
        locals_websockets$exceptions$$$class__23_PayloadTooBig_389 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_68;
        exception_value = exception_keeper_value_68;
        exception_tb = exception_keeper_tb_68;
        exception_lineno = exception_keeper_lineno_68;

        goto try_except_handler_69;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_69:;
        CHECK_OBJECT(outline_22_var___class__);
        Py_DECREF(outline_22_var___class__);
        outline_22_var___class__ = NULL;
        goto outline_result_23;
        // Exception handler code:
        try_except_handler_69:;
        exception_keeper_type_69 = exception_type;
        exception_keeper_value_69 = exception_value;
        exception_keeper_tb_69 = exception_tb;
        exception_keeper_lineno_69 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_69;
        exception_value = exception_keeper_value_69;
        exception_tb = exception_keeper_tb_69;
        exception_lineno = exception_keeper_lineno_69;

        goto outline_exception_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_23:;
        exception_lineno = 389;
        goto try_except_handler_68;
        outline_result_23:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_193);
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_23__bases_orig);
    tmp_class_creation_23__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    Py_XDECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_70;
    exception_value = exception_keeper_value_70;
    exception_tb = exception_keeper_tb_70;
    exception_lineno = exception_keeper_lineno_70;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_class_creation_23__bases_orig);
    Py_DECREF(tmp_class_creation_23__bases_orig);
    tmp_class_creation_23__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_23__bases);
    Py_DECREF(tmp_class_creation_23__bases);
    tmp_class_creation_23__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_23__class_decl_dict);
    Py_DECREF(tmp_class_creation_23__class_decl_dict);
    tmp_class_creation_23__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_23__metaclass);
    Py_DECREF(tmp_class_creation_23__metaclass);
    tmp_class_creation_23__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_23__prepared);
    Py_DECREF(tmp_class_creation_23__prepared);
    tmp_class_creation_23__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_tuple_element_92;
        tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_tuple_element_92 == NULL)) {
            tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
        }

        if (tmp_tuple_element_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_assign_source_195 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_195, 0, tmp_tuple_element_92);
        assert(tmp_class_creation_24__bases_orig == NULL);
        tmp_class_creation_24__bases_orig = tmp_assign_source_195;
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_dircall_arg1_24;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dircall_arg1_24 = tmp_class_creation_24__bases_orig;
        Py_INCREF(tmp_dircall_arg1_24);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_24};
            tmp_assign_source_196 = impl___main__$$$function__3__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__bases == NULL);
        tmp_class_creation_24__bases = tmp_assign_source_196;
    }
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__class_decl_dict == NULL);
        tmp_class_creation_24__class_decl_dict = tmp_assign_source_197;
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_metaclass_value_24;
        nuitka_bool tmp_condition_result_95;
        int tmp_truth_name_24;
        PyObject *tmp_type_arg_47;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_24;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_class_creation_24__bases);
        if (tmp_truth_name_24 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_condition_result_95 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_95 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_26;
        } else {
            goto condexpr_false_26;
        }
        condexpr_true_26:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_expression_value_139 = tmp_class_creation_24__bases;
        tmp_subscript_value_24 = mod_consts[58];
        tmp_type_arg_47 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_139, tmp_subscript_value_24, 0);
        if (tmp_type_arg_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_metaclass_value_24 = BUILTIN_TYPE1(tmp_type_arg_47);
        Py_DECREF(tmp_type_arg_47);
        if (tmp_metaclass_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        goto condexpr_end_26;
        condexpr_false_26:;
        tmp_metaclass_value_24 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_24);
        condexpr_end_26:;
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_bases_value_24 = tmp_class_creation_24__bases;
        tmp_assign_source_198 = SELECT_METACLASS(tstate, tmp_metaclass_value_24, tmp_bases_value_24);
        Py_DECREF(tmp_metaclass_value_24);
        if (tmp_assign_source_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__metaclass == NULL);
        tmp_class_creation_24__metaclass = tmp_assign_source_198;
    }
    {
        bool tmp_condition_result_96;
        PyObject *tmp_expression_value_140;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_140 = tmp_class_creation_24__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_140, mod_consts[67]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_condition_result_96 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_96 != false) {
            goto branch_yes_70;
        } else {
            goto branch_no_70;
        }
    }
    branch_yes_70:;
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_args_value_47;
        PyObject *tmp_tuple_element_93;
        PyObject *tmp_kwargs_value_47;
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_141 = tmp_class_creation_24__metaclass;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[67]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_tuple_element_93 = mod_consts[162];
        tmp_args_value_47 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_47, 0, tmp_tuple_element_93);
        CHECK_OBJECT(tmp_class_creation_24__bases);
        tmp_tuple_element_93 = tmp_class_creation_24__bases;
        PyTuple_SET_ITEM0(tmp_args_value_47, 1, tmp_tuple_element_93);
        CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
        tmp_kwargs_value_47 = tmp_class_creation_24__class_decl_dict;
        frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 396;
        tmp_assign_source_199 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_47, tmp_kwargs_value_47);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_value_47);
        if (tmp_assign_source_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_199;
    }
    {
        bool tmp_condition_result_97;
        PyObject *tmp_operand_value_24;
        PyObject *tmp_expression_value_142;
        CHECK_OBJECT(tmp_class_creation_24__prepared);
        tmp_expression_value_142 = tmp_class_creation_24__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_142, mod_consts[69]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_operand_value_24 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_97 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_97 != false) {
            goto branch_yes_71;
        } else {
            goto branch_no_71;
        }
    }
    branch_yes_71:;
    {
        PyObject *tmp_raise_type_24;
        PyObject *tmp_raise_value_24;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        PyObject *tmp_tuple_element_94;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_name_value_26;
        PyObject *tmp_default_value_24;
        tmp_raise_type_24 = PyExc_TypeError;
        tmp_mod_expr_left_24 = mod_consts[70];
        CHECK_OBJECT(tmp_class_creation_24__metaclass);
        tmp_expression_value_143 = tmp_class_creation_24__metaclass;
        tmp_name_value_26 = mod_consts[71];
        tmp_default_value_24 = mod_consts[72];
        tmp_tuple_element_94 = BUILTIN_GETATTR(tstate, tmp_expression_value_143, tmp_name_value_26, tmp_default_value_24);
        if (tmp_tuple_element_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        tmp_mod_expr_right_24 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_144;
            PyObject *tmp_type_arg_48;
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 0, tmp_tuple_element_94);
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_type_arg_48 = tmp_class_creation_24__prepared;
            tmp_expression_value_144 = BUILTIN_TYPE1(tmp_type_arg_48);
            assert(!(tmp_expression_value_144 == NULL));
            tmp_tuple_element_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[71]);
            Py_DECREF(tmp_expression_value_144);
            if (tmp_tuple_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_24, 1, tmp_tuple_element_94);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_mod_expr_right_24);
        goto try_except_handler_71;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_raise_value_24 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        Py_DECREF(tmp_mod_expr_right_24);
        if (tmp_raise_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_71;
        }
        exception_type = tmp_raise_type_24;
        Py_INCREF(tmp_raise_type_24);
        exception_value = tmp_raise_value_24;
        exception_lineno = 396;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_71;
    }
    branch_no_71:;
    goto branch_end_70;
    branch_no_70:;
    {
        PyObject *tmp_assign_source_200;
        tmp_assign_source_200 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_24__prepared == NULL);
        tmp_class_creation_24__prepared = tmp_assign_source_200;
    }
    branch_end_70:;
    {
        PyObject *tmp_assign_source_201;
        {
            PyObject *tmp_set_locals_24;
            CHECK_OBJECT(tmp_class_creation_24__prepared);
            tmp_set_locals_24 = tmp_class_creation_24__prepared;
            locals_websockets$exceptions$$$class__24_ProtocolError_396 = tmp_set_locals_24;
            Py_INCREF(tmp_set_locals_24);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[73];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_ProtocolError_396, mod_consts[74], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_73;
        }
        tmp_dictset_value = mod_consts[163];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_ProtocolError_396, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_73;
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_ProtocolError_396, mod_consts[76], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_73;
        }
        {
            nuitka_bool tmp_condition_result_98;
            PyObject *tmp_cmp_expr_left_24;
            PyObject *tmp_cmp_expr_right_24;
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_cmp_expr_left_24 = tmp_class_creation_24__bases;
            CHECK_OBJECT(tmp_class_creation_24__bases_orig);
            tmp_cmp_expr_right_24 = tmp_class_creation_24__bases_orig;
            tmp_condition_result_98 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
            if (tmp_condition_result_98 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto try_except_handler_73;
            }
            if (tmp_condition_result_98 == NUITKA_BOOL_TRUE) {
                goto branch_yes_72;
            } else {
                goto branch_no_72;
            }
        }
        branch_yes_72:;
        CHECK_OBJECT(tmp_class_creation_24__bases_orig);
        tmp_dictset_value = tmp_class_creation_24__bases_orig;
        tmp_res = PyObject_SetItem(locals_websockets$exceptions$$$class__24_ProtocolError_396, mod_consts[77], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;

            goto try_except_handler_73;
        }
        branch_no_72:;
        {
            PyObject *tmp_assign_source_202;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_value_48;
            PyObject *tmp_tuple_element_95;
            PyObject *tmp_kwargs_value_48;
            CHECK_OBJECT(tmp_class_creation_24__metaclass);
            tmp_called_value_52 = tmp_class_creation_24__metaclass;
            tmp_tuple_element_95 = mod_consts[162];
            tmp_args_value_48 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_48, 0, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_24__bases);
            tmp_tuple_element_95 = tmp_class_creation_24__bases;
            PyTuple_SET_ITEM0(tmp_args_value_48, 1, tmp_tuple_element_95);
            tmp_tuple_element_95 = locals_websockets$exceptions$$$class__24_ProtocolError_396;
            PyTuple_SET_ITEM0(tmp_args_value_48, 2, tmp_tuple_element_95);
            CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
            tmp_kwargs_value_48 = tmp_class_creation_24__class_decl_dict;
            frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame.f_lineno = 396;
            tmp_assign_source_202 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_48, tmp_kwargs_value_48);
            Py_DECREF(tmp_args_value_48);
            if (tmp_assign_source_202 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;

                goto try_except_handler_73;
            }
            assert(outline_23_var___class__ == NULL);
            outline_23_var___class__ = tmp_assign_source_202;
        }
        CHECK_OBJECT(outline_23_var___class__);
        tmp_assign_source_201 = outline_23_var___class__;
        Py_INCREF(tmp_assign_source_201);
        goto try_return_handler_73;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_73:;
        Py_DECREF(locals_websockets$exceptions$$$class__24_ProtocolError_396);
        locals_websockets$exceptions$$$class__24_ProtocolError_396 = NULL;
        goto try_return_handler_72;
        // Exception handler code:
        try_except_handler_73:;
        exception_keeper_type_71 = exception_type;
        exception_keeper_value_71 = exception_value;
        exception_keeper_tb_71 = exception_tb;
        exception_keeper_lineno_71 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websockets$exceptions$$$class__24_ProtocolError_396);
        locals_websockets$exceptions$$$class__24_ProtocolError_396 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_71;
        exception_value = exception_keeper_value_71;
        exception_tb = exception_keeper_tb_71;
        exception_lineno = exception_keeper_lineno_71;

        goto try_except_handler_72;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_72:;
        CHECK_OBJECT(outline_23_var___class__);
        Py_DECREF(outline_23_var___class__);
        outline_23_var___class__ = NULL;
        goto outline_result_24;
        // Exception handler code:
        try_except_handler_72:;
        exception_keeper_type_72 = exception_type;
        exception_keeper_value_72 = exception_value;
        exception_keeper_tb_72 = exception_tb;
        exception_keeper_lineno_72 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_72;
        exception_value = exception_keeper_value_72;
        exception_tb = exception_keeper_tb_72;
        exception_lineno = exception_keeper_lineno_72;

        goto outline_exception_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_24:;
        exception_lineno = 396;
        goto try_except_handler_71;
        outline_result_24:;
        UPDATE_STRING_DICT1(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_201);
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    Py_XDECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    CHECK_OBJECT(tmp_class_creation_24__bases_orig);
    Py_DECREF(tmp_class_creation_24__bases_orig);
    tmp_class_creation_24__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_24__bases);
    Py_DECREF(tmp_class_creation_24__bases);
    tmp_class_creation_24__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_24__class_decl_dict);
    Py_DECREF(tmp_class_creation_24__class_decl_dict);
    tmp_class_creation_24__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_24__metaclass);
    Py_DECREF(tmp_class_creation_24__metaclass);
    tmp_class_creation_24__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_24__prepared);
    Py_DECREF(tmp_class_creation_24__prepared);
    tmp_class_creation_24__prepared = NULL;
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_assign_source_203 == NULL)) {
            tmp_assign_source_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_assign_source_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_websockets$exceptions, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_203);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_13;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fd1b41cc23071a639ed47cc01109b9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fd1b41cc23071a639ed47cc01109b9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fd1b41cc23071a639ed47cc01109b9d, exception_lineno);
    }



    assertFrameObject(frame_1fd1b41cc23071a639ed47cc01109b9d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_13:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websockets.exceptions", false);

    Py_INCREF(module_websockets$exceptions);
    return module_websockets$exceptions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websockets$exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("websockets$exceptions", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
