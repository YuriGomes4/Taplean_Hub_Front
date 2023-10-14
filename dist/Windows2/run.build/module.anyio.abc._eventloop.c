/* Generated code for Python module 'anyio.abc._eventloop'
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

/* The "module_anyio$abc$_eventloop" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc$_eventloop;
PyDictObject *moduledict_anyio$abc$_eventloop;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[197];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[197];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("anyio.abc._eventloop"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 197; i++) {
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
void checkModuleConstants_anyio$abc$_eventloop(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 197; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8df1ae2ffc33e4ca1c19088a198645e4;
static PyCodeObject *codeobj_c98ac22a033328eaa64f2fb0df820f2e;
static PyCodeObject *codeobj_81943629d865c4d82766945024aaeea5;
static PyCodeObject *codeobj_bd9a6bba034773782ad1e22a5c4f0b95;
static PyCodeObject *codeobj_7b51a4a7a35bd4968c67d6a297362907;
static PyCodeObject *codeobj_4920dbce8ffff97f44ee0f09d0a71208;
static PyCodeObject *codeobj_a499d775ad89e2fc04a5408efdc08f7e;
static PyCodeObject *codeobj_8ddf2c36641bde9318949f887f4c856e;
static PyCodeObject *codeobj_f10158c8bb2c03aa82fa893f45f9ac61;
static PyCodeObject *codeobj_911a68de2073a6d3bd2917adb4d3e722;
static PyCodeObject *codeobj_05aef252ee4d427ff9a1edd6e83260c0;
static PyCodeObject *codeobj_490bfbff8adabf318b6bfb716cdee840;
static PyCodeObject *codeobj_753a231f28cfc29fab0cd21c6d5c4466;
static PyCodeObject *codeobj_7bbd0cf8fef3ec14401f340f93d3525a;
static PyCodeObject *codeobj_f933b072cc0dfe25fbe30309c0e471af;
static PyCodeObject *codeobj_a4f33d9606184b22f438dbfe047e4368;
static PyCodeObject *codeobj_afdaa602ba449f6f1918c2980dd2ad3c;
static PyCodeObject *codeobj_6133f6e84debf1ec77201dbb314ae060;
static PyCodeObject *codeobj_d1a6d08db1baa47f0e79494f026bcf44;
static PyCodeObject *codeobj_e88404f2dd8cc3199b855d1ad237b436;
static PyCodeObject *codeobj_70d1bb2f72d04e0387ad3b0244ad9b3c;
static PyCodeObject *codeobj_63059ef6eb73909d6d702755e8ceafb2;
static PyCodeObject *codeobj_bfe904596848783b0bfeeffac71baf98;
static PyCodeObject *codeobj_f65019ae86f3fc1b2d0f4fd1b5da66fa;
static PyCodeObject *codeobj_c465a77067a1f990af4a8c6b559d4ddc;
static PyCodeObject *codeobj_afbb20de0ddc5ea428feeb1067c25fa1;
static PyCodeObject *codeobj_f26a0f5c39e2c664262f33b768d4be61;
static PyCodeObject *codeobj_144d0641034c534558b15fc74f8781d8;
static PyCodeObject *codeobj_9b5b5208e9fc6fb867f9e30ed82c9d58;
static PyCodeObject *codeobj_aa42c177ac82444b8e013950008c4c12;
static PyCodeObject *codeobj_2202648659992da44a550e1b37c6c8f6;
static PyCodeObject *codeobj_90781f0a90ffc998b044c1a0f1563a7b;
static PyCodeObject *codeobj_23d1c190b41a111b6124d1d7ab789a63;
static PyCodeObject *codeobj_ad8a6495215c2693e31d66f4756b1143;
static PyCodeObject *codeobj_8232663186f14136cef77101b897ce3d;
static PyCodeObject *codeobj_381f2670dd31efa243704ced9e96cd2e;
static PyCodeObject *codeobj_5802387db3b2db217ffd99c4fe561f9b;
static PyCodeObject *codeobj_e24d29889e79fdaa15f90427c6acaa16;
static PyCodeObject *codeobj_8aa5b25e2fa1590a4842262b79f84ac0;
static PyCodeObject *codeobj_bbca91f80cc2f39df1837a480a7cd9d8;
static PyCodeObject *codeobj_53cff86cd45391a7a4a2763419cd249a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[175]); CHECK_OBJECT(module_filename_obj);
    codeobj_8df1ae2ffc33e4ca1c19088a198645e4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[176], mod_consts[176], NULL, NULL, 0, 0, 0);
    codeobj_c98ac22a033328eaa64f2fb0df820f2e = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[89], mod_consts[89], mod_consts[177], NULL, 0, 0, 0);
    codeobj_81943629d865c4d82766945024aaeea5 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[178], NULL, 1, 0, 0);
    codeobj_bd9a6bba034773782ad1e22a5c4f0b95 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[106], mod_consts[106], mod_consts[178], NULL, 1, 0, 0);
    codeobj_7b51a4a7a35bd4968c67d6a297362907 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[178], NULL, 1, 0, 0);
    codeobj_4920dbce8ffff97f44ee0f09d0a71208 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[8], mod_consts[8], mod_consts[178], NULL, 1, 0, 0);
    codeobj_a499d775ad89e2fc04a5408efdc08f7e = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[27], mod_consts[27], mod_consts[179], NULL, 4, 0, 0);
    codeobj_8ddf2c36641bde9318949f887f4c856e = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[180], NULL, 2, 0, 0);
    codeobj_f10158c8bb2c03aa82fa893f45f9ac61 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[134], mod_consts[134], mod_consts[178], NULL, 1, 0, 0);
    codeobj_911a68de2073a6d3bd2917adb4d3e722 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[11], mod_consts[11], mod_consts[181], NULL, 1, 2, 0);
    codeobj_05aef252ee4d427ff9a1edd6e83260c0 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[123], mod_consts[123], mod_consts[182], NULL, 2, 0, 0);
    codeobj_490bfbff8adabf318b6bfb716cdee840 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[120], mod_consts[120], mod_consts[178], NULL, 1, 0, 0);
    codeobj_753a231f28cfc29fab0cd21c6d5c4466 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[117], mod_consts[117], mod_consts[178], NULL, 1, 0, 0);
    codeobj_7bbd0cf8fef3ec14401f340f93d3525a = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[147], mod_consts[147], mod_consts[183], NULL, 2, 0, 0);
    codeobj_f933b072cc0dfe25fbe30309c0e471af = MAKE_CODE_OBJECT(module_filename_obj, 376, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[172], mod_consts[172], mod_consts[184], NULL, 2, 0, 0);
    codeobj_a4f33d9606184b22f438dbfe047e4368 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[31], mod_consts[31], mod_consts[185], NULL, 5, 0, 0);
    codeobj_afdaa602ba449f6f1918c2980dd2ad3c = MAKE_CODE_OBJECT(module_filename_obj, 289, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[33], mod_consts[33], mod_consts[186], NULL, 3, 0, 0);
    codeobj_6133f6e84debf1ec77201dbb314ae060 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[33], mod_consts[33], mod_consts[186], NULL, 3, 0, 0);
    codeobj_d1a6d08db1baa47f0e79494f026bcf44 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[33], mod_consts[33], mod_consts[186], NULL, 3, 0, 0);
    codeobj_e88404f2dd8cc3199b855d1ad237b436 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[149], mod_consts[149], mod_consts[183], NULL, 2, 0, 0);
    codeobj_70d1bb2f72d04e0387ad3b0244ad9b3c = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[160], mod_consts[160], mod_consts[178], NULL, 1, 0, 0);
    codeobj_63059ef6eb73909d6d702755e8ceafb2 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[5], mod_consts[5], mod_consts[178], NULL, 1, 0, 0);
    codeobj_bfe904596848783b0bfeeffac71baf98 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[102], mod_consts[102], mod_consts[178], NULL, 1, 0, 0);
    codeobj_f65019ae86f3fc1b2d0f4fd1b5da66fa = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[98], mod_consts[98], mod_consts[178], NULL, 1, 0, 0);
    codeobj_c465a77067a1f990af4a8c6b559d4ddc = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[166], mod_consts[166], mod_consts[178], NULL, 1, 0, 0);
    codeobj_afbb20de0ddc5ea428feeb1067c25fa1 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[169], mod_consts[169], mod_consts[178], NULL, 1, 0, 0);
    codeobj_f26a0f5c39e2c664262f33b768d4be61 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], mod_consts[187], NULL, 3, 4, 0);
    codeobj_144d0641034c534558b15fc74f8781d8 = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[37], mod_consts[37], mod_consts[188], NULL, 3, 0, 0);
    codeobj_9b5b5208e9fc6fb867f9e30ed82c9d58 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[189], NULL, 2, 7, 0);
    codeobj_aa42c177ac82444b8e013950008c4c12 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[189], NULL, 2, 7, 0);
    codeobj_2202648659992da44a550e1b37c6c8f6 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[189], NULL, 2, 7, 0);
    codeobj_90781f0a90ffc998b044c1a0f1563a7b = MAKE_CODE_OBJECT(module_filename_obj, 354, CO_VARARGS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[163], mod_consts[163], mod_consts[190], NULL, 1, 0, 0);
    codeobj_23d1c190b41a111b6124d1d7ab789a63 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[94], mod_consts[94], mod_consts[191], NULL, 5, 0, 0);
    codeobj_ad8a6495215c2693e31d66f4756b1143 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[128], mod_consts[128], mod_consts[192], NULL, 4, 0, 0);
    codeobj_8232663186f14136cef77101b897ce3d = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[131], mod_consts[131], mod_consts[192], NULL, 4, 0, 0);
    codeobj_381f2670dd31efa243704ced9e96cd2e = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[193], NULL, 5, 0, 0);
    codeobj_5802387db3b2db217ffd99c4fe561f9b = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[141], mod_consts[141], mod_consts[194], NULL, 2, 0, 0);
    codeobj_e24d29889e79fdaa15f90427c6acaa16 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[16], mod_consts[16], mod_consts[195], NULL, 2, 0, 0);
    codeobj_8aa5b25e2fa1590a4842262b79f84ac0 = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[43], mod_consts[43], mod_consts[178], NULL, 1, 0, 0);
    codeobj_bbca91f80cc2f39df1837a480a7cd9d8 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[39], mod_consts[39], mod_consts[183], NULL, 2, 0, 0);
    codeobj_53cff86cd45391a7a4a2763419cd249a = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_COROUTINE | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[41], mod_consts[41], mod_consts[183], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_capacity_limiter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_run_async_from_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_from_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_create_blocking_portal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_open_process(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_open_process(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_open_process(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_setup_process_pool_exit_at_shutdown(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_connect_tcp(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_unix(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_create_tcp_listener(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_unix_listener(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_udp_socket(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_getaddrinfo(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getnameinfo(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_wait_socket_readable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_socket_writable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_current_default_thread_limiter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_open_signal_receiver(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_get_current_task(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_get_running_tasks(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_create_test_runner(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$abc$_eventloop$$$function__5_checkpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_context,
        module_anyio$abc$_eventloop,
        mod_consts[1],
        mod_consts[2],
        codeobj_7b51a4a7a35bd4968c67d6a297362907,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__5_checkpoint$$$coroutine__1_checkpoint_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_4920dbce8ffff97f44ee0f09d0a71208, module_anyio$abc$_eventloop, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[4]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 108;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[5]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "c";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 109;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[4]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 109;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 109;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[1]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 109;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 109;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 109;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    branch_no_1:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_context,
        module_anyio$abc$_eventloop,
        mod_consts[8],
        mod_consts[9],
        codeobj_4920dbce8ffff97f44ee0f09d0a71208,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled$$$coroutine__1_checkpoint_if_cancelled_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(tstate, tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals {
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->tmp_with_1__enter = NULL;
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_with_1__source = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_81943629d865c4d82766945024aaeea5, module_anyio$abc$_eventloop, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    coroutine->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

    assert(coroutine->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
    assert(Py_REFCNT(coroutine->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_COROUTINE_EXCEPTION(tstate, coroutine);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[4]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 120;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[12], 0), mod_consts[13]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        assert(coroutine_heap->tmp_with_1__source == NULL);
        coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 120;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        assert(coroutine_heap->tmp_with_1__enter == NULL);
        coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[15]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        assert(coroutine_heap->tmp_with_1__exit == NULL);
        coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 121;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[4]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_3;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 121;
        tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[16],
            PyTuple_GET_ITEM(mod_consts[17], 0)
        );

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_3;
        }
        tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 121;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_3;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_3 = coroutine_heap->tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_4;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 120;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 120;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 120;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[18]);

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_1;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 120;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[18]);

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 120;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
        if (coroutine_heap->exception_tb == NULL) {
            coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
            coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            coroutine->m_frame,
            coroutine_heap->type_description_1,
            coroutine->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(coroutine->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
    Py_DECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
    Py_DECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_context,
        module_anyio$abc$_eventloop,
        mod_consts[19],
        mod_consts[20],
        codeobj_81943629d865c4d82766945024aaeea5,
        closure,
        1,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint$$$coroutine__1_cancel_shielded_checkpoint_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__8_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_delay = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_delay);
    Py_DECREF(par_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_context,
        module_anyio$abc$_eventloop,
        mod_consts[16],
        mod_consts[22],
        codeobj_e24d29889e79fdaa15f90427c6acaa16,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__8_sleep$$$coroutine__1_sleep_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_cancellable = python_pars[3];
    PyObject *par_limiter = python_pars[4];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_cancellable);
    Py_DECREF(par_cancellable);
    CHECK_OBJECT(par_limiter);
    Py_DECREF(par_limiter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_context,
        module_anyio$abc$_eventloop,
        mod_consts[23],
        mod_consts[24],
        codeobj_381f2670dd31efa243704ced9e96cd2e,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread$$$coroutine__1_run_sync_in_worker_thread_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__18_open_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_command = python_pars[1];
    PyObject *par_shell = python_pars[2];
    PyObject *par_stdin = python_pars[3];
    PyObject *par_stdout = python_pars[4];
    PyObject *par_stderr = python_pars[5];
    PyObject *par_cwd = python_pars[6];
    PyObject *par_env = python_pars[7];
    PyObject *par_start_new_session = python_pars[8];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_shell);
    Py_DECREF(par_shell);
    CHECK_OBJECT(par_stdin);
    Py_DECREF(par_stdin);
    CHECK_OBJECT(par_stdout);
    Py_DECREF(par_stdout);
    CHECK_OBJECT(par_stderr);
    Py_DECREF(par_stderr);
    CHECK_OBJECT(par_cwd);
    Py_DECREF(par_cwd);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_start_new_session);
    Py_DECREF(par_start_new_session);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process_context,
        module_anyio$abc$_eventloop,
        mod_consts[25],
        mod_consts[26],
        codeobj_9b5b5208e9fc6fb867f9e30ed82c9d58,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__18_open_process$$$coroutine__1_open_process_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__19_open_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_command = python_pars[1];
    PyObject *par_shell = python_pars[2];
    PyObject *par_stdin = python_pars[3];
    PyObject *par_stdout = python_pars[4];
    PyObject *par_stderr = python_pars[5];
    PyObject *par_cwd = python_pars[6];
    PyObject *par_env = python_pars[7];
    PyObject *par_start_new_session = python_pars[8];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_shell);
    Py_DECREF(par_shell);
    CHECK_OBJECT(par_stdin);
    Py_DECREF(par_stdin);
    CHECK_OBJECT(par_stdout);
    Py_DECREF(par_stdout);
    CHECK_OBJECT(par_stderr);
    Py_DECREF(par_stderr);
    CHECK_OBJECT(par_cwd);
    Py_DECREF(par_cwd);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_start_new_session);
    Py_DECREF(par_start_new_session);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process_context,
        module_anyio$abc$_eventloop,
        mod_consts[25],
        mod_consts[26],
        codeobj_aa42c177ac82444b8e013950008c4c12,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__19_open_process$$$coroutine__1_open_process_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__20_open_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_command = python_pars[1];
    PyObject *par_shell = python_pars[2];
    PyObject *par_stdin = python_pars[3];
    PyObject *par_stdout = python_pars[4];
    PyObject *par_stderr = python_pars[5];
    PyObject *par_cwd = python_pars[6];
    PyObject *par_env = python_pars[7];
    PyObject *par_start_new_session = python_pars[8];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_command);
    Py_DECREF(par_command);
    CHECK_OBJECT(par_shell);
    Py_DECREF(par_shell);
    CHECK_OBJECT(par_stdin);
    Py_DECREF(par_stdin);
    CHECK_OBJECT(par_stdout);
    Py_DECREF(par_stdout);
    CHECK_OBJECT(par_stderr);
    Py_DECREF(par_stderr);
    CHECK_OBJECT(par_cwd);
    Py_DECREF(par_cwd);
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_start_new_session);
    Py_DECREF(par_start_new_session);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process_context,
        module_anyio$abc$_eventloop,
        mod_consts[25],
        mod_consts[26],
        codeobj_2202648659992da44a550e1b37c6c8f6,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__20_open_process$$$coroutine__1_open_process_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__22_connect_tcp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_local_address = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp_context,
        module_anyio$abc$_eventloop,
        mod_consts[27],
        mod_consts[28],
        codeobj_a499d775ad89e2fc04a5408efdc08f7e,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__22_connect_tcp$$$coroutine__1_connect_tcp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__23_connect_unix(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix_context,
        module_anyio$abc$_eventloop,
        mod_consts[29],
        mod_consts[30],
        codeobj_8ddf2c36641bde9318949f887f4c856e,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__23_connect_unix$$$coroutine__1_connect_unix_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__26_create_udp_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_family = python_pars[1];
    PyObject *par_local_address = python_pars[2];
    PyObject *par_remote_address = python_pars[3];
    PyObject *par_reuse_port = python_pars[4];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    CHECK_OBJECT(par_local_address);
    Py_DECREF(par_local_address);
    CHECK_OBJECT(par_remote_address);
    Py_DECREF(par_remote_address);
    CHECK_OBJECT(par_reuse_port);
    Py_DECREF(par_reuse_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts[31],
        mod_consts[32],
        codeobj_a4f33d9606184b22f438dbfe047e4368,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__26_create_udp_socket$$$coroutine__1_create_udp_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_raw_socket = python_pars[1];
    PyObject *par_remote_path = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_raw_socket);
    Py_DECREF(par_raw_socket);
    CHECK_OBJECT(par_remote_path);
    Py_DECREF(par_remote_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts[33],
        mod_consts[34],
        codeobj_afdaa602ba449f6f1918c2980dd2ad3c,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_raw_socket = python_pars[1];
    PyObject *par_remote_path = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_raw_socket);
    Py_DECREF(par_raw_socket);
    CHECK_OBJECT(par_remote_path);
    Py_DECREF(par_remote_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts[33],
        mod_consts[34],
        codeobj_6133f6e84debf1ec77201dbb314ae060,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_raw_socket = python_pars[1];
    PyObject *par_remote_path = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_raw_socket);
    Py_DECREF(par_raw_socket);
    CHECK_OBJECT(par_remote_path);
    Py_DECREF(par_remote_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_context,
        module_anyio$abc$_eventloop,
        mod_consts[33],
        mod_consts[34],
        codeobj_d1a6d08db1baa47f0e79494f026bcf44,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket$$$coroutine__1_create_unix_datagram_socket_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__30_getaddrinfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *par_port = python_pars[2];
    PyObject *par_family = python_pars[3];
    PyObject *par_type = python_pars[4];
    PyObject *par_proto = python_pars[5];
    PyObject *par_flags = python_pars[6];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_port);
    Py_DECREF(par_port);
    CHECK_OBJECT(par_family);
    Py_DECREF(par_family);
    CHECK_OBJECT(par_type);
    Py_DECREF(par_type);
    CHECK_OBJECT(par_proto);
    Py_DECREF(par_proto);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo_context,
        module_anyio$abc$_eventloop,
        mod_consts[35],
        mod_consts[36],
        codeobj_f26a0f5c39e2c664262f33b768d4be61,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__30_getaddrinfo$$$coroutine__1_getaddrinfo_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__31_getnameinfo(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_sockaddr = python_pars[1];
    PyObject *par_flags = python_pars[2];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_sockaddr);
    Py_DECREF(par_sockaddr);
    CHECK_OBJECT(par_flags);
    Py_DECREF(par_flags);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo_context,
        module_anyio$abc$_eventloop,
        mod_consts[37],
        mod_consts[38],
        codeobj_144d0641034c534558b15fc74f8781d8,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__31_getnameinfo$$$coroutine__1_getnameinfo_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__32_wait_socket_readable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_sock = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable_context,
        module_anyio$abc$_eventloop,
        mod_consts[39],
        mod_consts[40],
        codeobj_bbca91f80cc2f39df1837a480a7cd9d8,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__32_wait_socket_readable$$$coroutine__1_wait_socket_readable_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__33_wait_socket_writable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_sock = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable_context,
        module_anyio$abc$_eventloop,
        mod_consts[41],
        mod_consts[42],
        codeobj_53cff86cd45391a7a4a2763419cd249a,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__33_wait_socket_writable$$$coroutine__1_wait_socket_writable_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(tstate);

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals *coroutine_heap = (struct anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_context,
        module_anyio$abc$_eventloop,
        mod_consts[43],
        mod_consts[44],
        codeobj_8aa5b25e2fa1590a4842262b79f84ac0,
        NULL,
        0,
#if 1
        sizeof(struct anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_63059ef6eb73909d6d702755e8ceafb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_753a231f28cfc29fab0cd21c6d5c4466,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_490bfbff8adabf318b6bfb716cdee840,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_capacity_limiter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_05aef252ee4d427ff9a1edd6e83260c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_381f2670dd31efa243704ced9e96cd2e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_run_async_from_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_ad8a6495215c2693e31d66f4756b1143,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_from_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_8232663186f14136cef77101b897ce3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_create_blocking_portal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_f10158c8bb2c03aa82fa893f45f9ac61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_open_process(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__18_open_process,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_9b5b5208e9fc6fb867f9e30ed82c9d58,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_open_process(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__19_open_process,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_aa42c177ac82444b8e013950008c4c12,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_23d1c190b41a111b6124d1d7ab789a63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_open_process(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__20_open_process,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_2202648659992da44a550e1b37c6c8f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_setup_process_pool_exit_at_shutdown(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_5802387db3b2db217ffd99c4fe561f9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_connect_tcp(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__22_connect_tcp,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_a499d775ad89e2fc04a5408efdc08f7e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_unix(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__23_connect_unix,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_8ddf2c36641bde9318949f887f4c856e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_create_tcp_listener(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_7bbd0cf8fef3ec14401f340f93d3525a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_unix_listener(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_e88404f2dd8cc3199b855d1ad237b436,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_udp_socket(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__26_create_udp_socket,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_a4f33d9606184b22f438dbfe047e4368,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_afdaa602ba449f6f1918c2980dd2ad3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_6133f6e84debf1ec77201dbb314ae060,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_d1a6d08db1baa47f0e79494f026bcf44,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_f65019ae86f3fc1b2d0f4fd1b5da66fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_getaddrinfo(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__30_getaddrinfo,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_f26a0f5c39e2c664262f33b768d4be61,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getnameinfo(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__31_getnameinfo,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_144d0641034c534558b15fc74f8781d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_wait_socket_readable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__32_wait_socket_readable,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_bbca91f80cc2f39df1837a480a7cd9d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_socket_writable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__33_wait_socket_writable,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_53cff86cd45391a7a4a2763419cd249a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_current_default_thread_limiter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_70d1bb2f72d04e0387ad3b0244ad9b3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_open_signal_receiver(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_90781f0a90ffc998b044c1a0f1563a7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_get_current_task(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_c465a77067a1f990af4a8c6b559d4ddc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_get_running_tasks(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_afbb20de0ddc5ea428feeb1067c25fa1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_8aa5b25e2fa1590a4842262b79f84ac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_create_test_runner(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_f933b072cc0dfe25fbe30309c0e471af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_bfe904596848783b0bfeeffac71baf98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_bd9a6bba034773782ad1e22a5c4f0b95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[105],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__5_checkpoint,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[2],
#endif
        codeobj_7b51a4a7a35bd4968c67d6a297362907,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[9],
#endif
        codeobj_4920dbce8ffff97f44ee0f09d0a71208,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_81943629d865c4d82766945024aaeea5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$abc$_eventloop$$$function__8_sleep,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_e24d29889e79fdaa15f90427c6acaa16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$abc$_eventloop,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_911a68de2073a6d3bd2917adb4d3e722,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$abc$_eventloop,
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

function_impl_code functable_anyio$abc$_eventloop[] = {
    NULL,
    NULL,
    NULL,
    NULL,
    impl_anyio$abc$_eventloop$$$function__5_checkpoint,
    impl_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled,
    impl_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint,
    impl_anyio$abc$_eventloop$$$function__8_sleep,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread,
    NULL,
    NULL,
    NULL,
    impl_anyio$abc$_eventloop$$$function__18_open_process,
    impl_anyio$abc$_eventloop$$$function__19_open_process,
    impl_anyio$abc$_eventloop$$$function__20_open_process,
    NULL,
    impl_anyio$abc$_eventloop$$$function__22_connect_tcp,
    impl_anyio$abc$_eventloop$$$function__23_connect_unix,
    NULL,
    NULL,
    impl_anyio$abc$_eventloop$$$function__26_create_udp_socket,
    impl_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket,
    impl_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket,
    impl_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket,
    impl_anyio$abc$_eventloop$$$function__30_getaddrinfo,
    impl_anyio$abc$_eventloop$$$function__31_getnameinfo,
    impl_anyio$abc$_eventloop$$$function__32_wait_socket_readable,
    impl_anyio$abc$_eventloop$$$function__33_wait_socket_writable,
    NULL,
    NULL,
    NULL,
    NULL,
    impl_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked,
    NULL,
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

    function_impl_code *current = functable_anyio$abc$_eventloop;
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

    if (offset > sizeof(functable_anyio$abc$_eventloop) || offset < 0) {
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
        functable_anyio$abc$_eventloop[offset],
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
        module_anyio$abc$_eventloop,
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
PyObject *modulecode_anyio$abc$_eventloop(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio.abc._eventloop");

    // Store the module for future use.
    module_anyio$abc$_eventloop = module;

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
        PRINT_STRING("anyio.abc._eventloop: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio.abc._eventloop: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$abc$_eventloop\n");

    moduledict_anyio$abc$_eventloop = MODULE_DICT(module_anyio$abc$_eventloop);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc$_eventloop,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_eventloop,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[196]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc$_eventloop,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_eventloop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc$_eventloop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc$_eventloop);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$abc$_eventloop);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_8df1ae2ffc33e4ca1c19088a198645e4;
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
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c98ac22a033328eaa64f2fb0df820f2e_2;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_8df1ae2ffc33e4ca1c19088a198645e4 = MAKE_MODULE_FRAME(codeobj_8df1ae2ffc33e4ca1c19088a198645e4, module_anyio$abc$_eventloop);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8df1ae2ffc33e4ca1c19088a198645e4);
    assert(Py_REFCNT(frame_8df1ae2ffc33e4ca1c19088a198645e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[51]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc$_eventloop;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[52];
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[53];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc$_eventloop;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[54];
        tmp_level_value_2 = mod_consts[52];
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[55],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[55]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[56],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[56]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[57];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$abc$_eventloop;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[58];
        tmp_level_value_3 = mod_consts[52];
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[59],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[59]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[60],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[60]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[61],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[61]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        tmp_import_name_from_6 = IMPORT_HARD_OS();
        assert(!(tmp_import_name_from_6 == NULL));
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[62],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[62]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[63];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$abc$_eventloop;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[64];
        tmp_level_value_4 = mod_consts[52];
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[65],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[66];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$abc$_eventloop;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[67];
        tmp_level_value_5 = mod_consts[52];
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 8;
        tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[68],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[68]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[69],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[69]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[66],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[66]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_19 == NULL));
        assert(tmp_import_from_4__module == NULL);
        Py_INCREF(tmp_assign_source_19);
        tmp_import_from_4__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_11 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[70],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[70]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = Py_False;
        UPDATE_STRING_DICT0(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[72],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[72]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[73],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[73]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[74],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[74]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[75],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[75]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[76],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[76]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio$abc$_eventloop,
                mod_consts[77],
                mod_consts[52]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[77]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_27);
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 41;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[78]);

        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_28);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[80];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_assign_source_29 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_29, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        tmp_key_value_1 = mod_consts[80];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[80];
        tmp_assign_source_30 = DICT_GET_ITEM0(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_30 == NULL) {
            tmp_assign_source_30 = Py_None;
        }
        assert(!(tmp_assign_source_30 == NULL));
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_30 = (PyObject *)&PyType_Type;
        condexpr_end_1:;
        assert(tmp_class_creation_1__metaclass == NULL);
        Py_INCREF(tmp_assign_source_30);
        tmp_class_creation_1__metaclass = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[80];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[80];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;

        goto try_except_handler_5;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_1 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[81]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[81]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_args_value_1 = mod_consts[82];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 44;
        tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_3 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[83]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_name_value_6;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_name_value_6 = mod_consts[85];
        tmp_default_value_1 = mod_consts[86];
        tmp_tuple_element_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_6, tmp_default_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_1 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[85]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 44;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_7;
        }
        frame_c98ac22a033328eaa64f2fb0df820f2e_2 = MAKE_CLASS_FRAME(tstate, codeobj_c98ac22a033328eaa64f2fb0df820f2e, module_anyio$abc$_eventloop, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_c98ac22a033328eaa64f2fb0df820f2e_2);
        assert(Py_REFCNT(frame_c98ac22a033328eaa64f2fb0df820f2e_2) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_1;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_2;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_3 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = DICT_COPY(mod_consts[92]);


            tmp_args_element_value_2 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(tmp_annotations_1);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 46;
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 45;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_5 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_2 = DICT_COPY(mod_consts[92]);


            tmp_args_element_value_3 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__1_run(tmp_annotations_2);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 46;
            tmp_classmethod_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_classmethod_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_3;
            PyObject *tmp_classmethod_arg_2;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_6 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_3 = DICT_COPY(mod_consts[96]);


            tmp_args_element_value_5 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(tmp_annotations_3);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 68;
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_args_element_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 67;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_8 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 68;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = DICT_COPY(mod_consts[96]);


            tmp_args_element_value_6 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__2_current_token(tmp_annotations_4);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 68;
            tmp_classmethod_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_classmethod_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_5;
            PyObject *tmp_classmethod_arg_3;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_6;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_9 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_10 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = DICT_COPY(mod_consts[100]);


            tmp_args_element_value_8 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(tmp_annotations_5);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 76;
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_args_element_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_11 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_6 = DICT_COPY(mod_consts[100]);


            tmp_args_element_value_9 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__3_current_time(tmp_annotations_6);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 76;
            tmp_classmethod_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_classmethod_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_7;
            PyObject *tmp_classmethod_arg_4;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_8;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_12 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_13 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_7 = DICT_COPY(mod_consts[104]);


            tmp_args_element_value_11 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(tmp_annotations_7);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 85;
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_args_element_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 84;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_14 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 85;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_8 = DICT_COPY(mod_consts[104]);


            tmp_args_element_value_12 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__4_cancelled_exception_class(tmp_annotations_8);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 85;
            tmp_classmethod_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_classmethod_arg_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_9;
            PyObject *tmp_classmethod_arg_5;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_10;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_15 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_9 = DICT_COPY(mod_consts[108]);


            tmp_args_element_value_14 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(tmp_annotations_9);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 90;
            tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_args_element_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 89;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_17 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_17 == NULL)) {
                        tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_17 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_10 = DICT_COPY(mod_consts[108]);


            tmp_args_element_value_15 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__5_checkpoint(tmp_annotations_10);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 90;
            tmp_classmethod_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_classmethod_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_5);
            Py_DECREF(tmp_classmethod_arg_5);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_11;
            PyObject *tmp_classmethod_arg_6;
            PyObject *tmp_annotations_12;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_18 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_11 = DICT_COPY(mod_consts[108]);


            tmp_args_element_value_16 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(tmp_annotations_11);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_annotations_12 = DICT_COPY(mod_consts[108]);


            tmp_classmethod_arg_6 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__6_checkpoint_if_cancelled(tmp_annotations_12);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_6);
            Py_DECREF(tmp_classmethod_arg_6);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[8], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_13;
            PyObject *tmp_classmethod_arg_7;
            PyObject *tmp_annotations_14;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_19 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_13 = DICT_COPY(mod_consts[108]);


            tmp_args_element_value_17 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(tmp_annotations_13);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 111;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_annotations_14 = DICT_COPY(mod_consts[108]);


            tmp_classmethod_arg_7 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__7_cancel_shielded_checkpoint(tmp_annotations_14);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_7);
            Py_DECREF(tmp_classmethod_arg_7);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_15;
            PyObject *tmp_classmethod_arg_8;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_16;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_20 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_21 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_21 == NULL)) {
                        tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 124;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_15 = DICT_COPY(mod_consts[109]);


            tmp_args_element_value_19 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(tmp_annotations_15);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 124;
            tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_args_element_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 123;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_22 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_22 == NULL)) {
                        tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 124;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_22);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_16 = DICT_COPY(mod_consts[109]);


            tmp_args_element_value_20 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__8_sleep(tmp_annotations_16);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 124;
            tmp_classmethod_arg_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_classmethod_arg_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_8);
            Py_DECREF(tmp_classmethod_arg_8);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_annotations_17;
            PyObject *tmp_classmethod_arg_9;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_annotations_18;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_23 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_24 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_24 == NULL)) {
                        tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_24 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_24);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_key_2 = mod_consts[110];
            tmp_expression_value_6 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[6]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[7]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_defaults_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[111];
            tmp_dict_value_2 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_annotations_17 = DICT_COPY(mod_consts[112]);


            tmp_args_element_value_22 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(tmp_kw_defaults_1, tmp_annotations_17);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 133;
            tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_args_element_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_25 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_25 == NULL)) {
                        tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_25 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 133;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_25);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_key_3 = mod_consts[110];
            tmp_expression_value_7 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[6]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[6]);

                    if (unlikely(tmp_expression_value_7 == NULL)) {
                        tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
                    }

                    if (tmp_expression_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 135;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[7]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_kw_defaults_2 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[111];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_annotations_18 = DICT_COPY(mod_consts[112]);


            tmp_args_element_value_23 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__9_create_cancel_scope(tmp_kw_defaults_2, tmp_annotations_18);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 133;
            tmp_classmethod_arg_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_23);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_classmethod_arg_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_9);
            Py_DECREF(tmp_classmethod_arg_9);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_19;
            PyObject *tmp_classmethod_arg_10;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_20;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_26 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_27 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_19 = DICT_COPY(mod_consts[100]);


            tmp_args_element_value_25 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(tmp_annotations_19);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 140;
            tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_args_element_value_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_28 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_28 == NULL)) {
                        tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_20 = DICT_COPY(mod_consts[100]);


            tmp_args_element_value_26 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__10_current_effective_deadline(tmp_annotations_20);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 140;
            tmp_classmethod_arg_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_classmethod_arg_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_10);
            Py_DECREF(tmp_classmethod_arg_10);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_21;
            PyObject *tmp_classmethod_arg_11;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_22;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_29 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_30 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_21 = DICT_COPY(mod_consts[116]);


            tmp_args_element_value_28 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(tmp_annotations_21);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 154;
            tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_args_element_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_31 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_31 == NULL)) {
                        tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_31 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_22 = DICT_COPY(mod_consts[116]);


            tmp_args_element_value_29 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__11_create_task_group(tmp_annotations_22);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 154;
            tmp_classmethod_arg_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_29);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_classmethod_arg_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_11);
            Py_DECREF(tmp_classmethod_arg_11);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[117], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_23;
            PyObject *tmp_classmethod_arg_12;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_24;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_32 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_33 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_33 == NULL)) {
                        tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_23 = DICT_COPY(mod_consts[119]);


            tmp_args_element_value_31 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(tmp_annotations_23);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 159;
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_args_element_value_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 158;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_34 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_34 == NULL)) {
                        tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 159;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_24 = DICT_COPY(mod_consts[119]);


            tmp_args_element_value_32 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__12_create_event(tmp_annotations_24);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 159;
            tmp_classmethod_arg_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_classmethod_arg_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_12);
            Py_DECREF(tmp_classmethod_arg_12);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_25;
            PyObject *tmp_classmethod_arg_13;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_26;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_35 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_36 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_36 == NULL)) {
                        tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_36 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_25 = DICT_COPY(mod_consts[122]);


            tmp_args_element_value_34 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_capacity_limiter(tmp_annotations_25);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 164;
            tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_args_element_value_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 163;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_37 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 164;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_26 = DICT_COPY(mod_consts[122]);


            tmp_args_element_value_35 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__13_create_capacity_limiter(tmp_annotations_26);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 164;
            tmp_classmethod_arg_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_35);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_classmethod_arg_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_13);
            Py_DECREF(tmp_classmethod_arg_13);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_27;
            PyObject *tmp_classmethod_arg_14;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_28;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_38 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_39 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_39 == NULL)) {
                        tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_39 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_1 = mod_consts[125];
            tmp_annotations_27 = DICT_COPY(mod_consts[126]);
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_37 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread(tmp_defaults_1, tmp_annotations_27);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 169;
            tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_args_element_value_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 169;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 168;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_40 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_40 == NULL)) {
                        tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_40 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 169;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_2 = mod_consts[125];
            tmp_annotations_28 = DICT_COPY(mod_consts[126]);
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_38 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__14_run_sync_in_worker_thread(tmp_defaults_2, tmp_annotations_28);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 169;
            tmp_classmethod_arg_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_classmethod_arg_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_14);
            Py_DECREF(tmp_classmethod_arg_14);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_29;
            PyObject *tmp_classmethod_arg_15;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_30;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_41 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_42 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_42 == NULL)) {
                        tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_42 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_29 = DICT_COPY(mod_consts[127]);


            tmp_args_element_value_40 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_run_async_from_thread(tmp_annotations_29);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 180;
            tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_args_element_value_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_43 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_43 == NULL)) {
                        tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_43 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 180;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_30 = DICT_COPY(mod_consts[127]);


            tmp_args_element_value_41 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__15_run_async_from_thread(tmp_annotations_30);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 180;
            tmp_classmethod_arg_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_41);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_classmethod_arg_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_15);
            Py_DECREF(tmp_classmethod_arg_15);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_31;
            PyObject *tmp_classmethod_arg_16;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_32;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_44 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_45 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_45 == NULL)) {
                        tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_45 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_31 = DICT_COPY(mod_consts[130]);


            tmp_args_element_value_43 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_from_thread(tmp_annotations_31);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 190;
            tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_args_element_value_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_44);

                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_46 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_46 == NULL)) {
                        tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_32 = DICT_COPY(mod_consts[130]);


            tmp_args_element_value_44 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__16_run_sync_from_thread(tmp_annotations_32);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 190;
            tmp_classmethod_arg_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_classmethod_arg_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_16);
            Py_DECREF(tmp_classmethod_arg_16);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_33;
            PyObject *tmp_classmethod_arg_17;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_34;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_47 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_48 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_48 == NULL)) {
                        tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_48 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);

                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_33 = DICT_COPY(mod_consts[133]);


            tmp_args_element_value_46 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_create_blocking_portal(tmp_annotations_33);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 197;
            tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_args_element_value_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_47);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 196;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_49 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_49 == NULL)) {
                        tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_49 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_34 = DICT_COPY(mod_consts[133]);


            tmp_args_element_value_47 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__17_create_blocking_portal(tmp_annotations_34);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 197;
            tmp_classmethod_arg_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_47);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_classmethod_arg_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_17);
            Py_DECREF(tmp_classmethod_arg_17);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_35;
            PyObject *tmp_classmethod_arg_18;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_kw_defaults_4;
            PyObject *tmp_annotations_36;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_50 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_51 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_51 == NULL)) {
                        tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_51 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);

                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_3 = DICT_COPY(mod_consts[136]);
            tmp_annotations_35 = DICT_COPY(mod_consts[137]);


            tmp_args_element_value_49 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_open_process(tmp_kw_defaults_3, tmp_annotations_35);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 202;
            tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_51, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_args_element_value_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);

                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_52 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_52 == NULL)) {
                        tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_52 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_52);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_4 = DICT_COPY(mod_consts[136]);
            tmp_annotations_36 = DICT_COPY(mod_consts[137]);


            tmp_args_element_value_50 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__18_open_process(tmp_kw_defaults_4, tmp_annotations_36);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 202;
            tmp_classmethod_arg_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_classmethod_arg_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_18);
            Py_DECREF(tmp_classmethod_arg_18);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_kw_defaults_5;
            PyObject *tmp_annotations_37;
            PyObject *tmp_classmethod_arg_19;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_kw_defaults_6;
            PyObject *tmp_annotations_38;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_20;
            } else {
                goto condexpr_false_20;
            }
            condexpr_true_20:;
            tmp_called_value_53 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_54 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_54 == NULL)) {
                        tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_54 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_53);

                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_54);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_5 = DICT_COPY(mod_consts[136]);
            tmp_annotations_37 = DICT_COPY(mod_consts[138]);


            tmp_args_element_value_52 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_open_process(tmp_kw_defaults_5, tmp_annotations_37);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 218;
            tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_args_element_value_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_53);

                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 217;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_53, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_20;
            condexpr_false_20:;
            tmp_called_value_55 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_55 == NULL)) {
                        tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_55 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_55);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_6 = DICT_COPY(mod_consts[136]);
            tmp_annotations_38 = DICT_COPY(mod_consts[138]);


            tmp_args_element_value_53 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__19_open_process(tmp_kw_defaults_6, tmp_annotations_38);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 218;
            tmp_classmethod_arg_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_53);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_classmethod_arg_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_19);
            Py_DECREF(tmp_classmethod_arg_19);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_20:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_kw_defaults_7;
            PyObject *tmp_annotations_39;
            PyObject *tmp_classmethod_arg_20;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_kw_defaults_8;
            PyObject *tmp_annotations_40;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_21;
            } else {
                goto condexpr_false_21;
            }
            condexpr_true_21:;
            tmp_called_value_56 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_57 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_57 == NULL)) {
                        tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_57 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_56);

                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_57);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_7 = DICT_COPY(mod_consts[136]);
            tmp_annotations_39 = DICT_COPY(mod_consts[139]);


            tmp_args_element_value_55 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_open_process(tmp_kw_defaults_7, tmp_annotations_39);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 234;
            tmp_args_element_value_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_55);
            Py_DECREF(tmp_called_value_57);
            Py_DECREF(tmp_args_element_value_55);
            if (tmp_args_element_value_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_56);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 233;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_21;
            condexpr_false_21:;
            tmp_called_value_58 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_58 == NULL)) {
                        tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_58 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 234;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_58);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_8 = DICT_COPY(mod_consts[136]);
            tmp_annotations_40 = DICT_COPY(mod_consts[139]);


            tmp_args_element_value_56 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__20_open_process(tmp_kw_defaults_8, tmp_annotations_40);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 234;
            tmp_classmethod_arg_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_56);
            if (tmp_classmethod_arg_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_20);
            Py_DECREF(tmp_classmethod_arg_20);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_21:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_57;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_annotations_41;
            PyObject *tmp_classmethod_arg_21;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_59;
            PyObject *tmp_annotations_42;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_22;
            } else {
                goto condexpr_false_22;
            }
            condexpr_true_22:;
            tmp_called_value_59 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_60 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_60 == NULL)) {
                        tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_60 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_59);

                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_60);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_41 = DICT_COPY(mod_consts[140]);


            tmp_args_element_value_58 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_setup_process_pool_exit_at_shutdown(tmp_annotations_41);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 250;
            tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_58);
            if (tmp_args_element_value_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_59);

                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 249;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_57);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_args_element_value_57);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_22;
            condexpr_false_22:;
            tmp_called_value_61 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_61 == NULL)) {
                        tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_61 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 250;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_61);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_42 = DICT_COPY(mod_consts[140]);


            tmp_args_element_value_59 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__21_setup_process_pool_exit_at_shutdown(tmp_annotations_42);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 250;
            tmp_classmethod_arg_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_59);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_59);
            if (tmp_classmethod_arg_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_21);
            Py_DECREF(tmp_classmethod_arg_21);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_22:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[141], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_60;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_43;
            PyObject *tmp_classmethod_arg_22;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_62;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_44;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_23;
            } else {
                goto condexpr_false_23;
            }
            condexpr_true_23:;
            tmp_called_value_62 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_63 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_63 == NULL)) {
                        tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_63 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_62);

                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_63);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_3 = mod_consts[143];
            tmp_annotations_43 = DICT_COPY(mod_consts[144]);
            Py_INCREF(tmp_defaults_3);


            tmp_args_element_value_61 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_connect_tcp(tmp_defaults_3, tmp_annotations_43);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 255;
            tmp_args_element_value_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_63, tmp_args_element_value_61);
            Py_DECREF(tmp_called_value_63);
            Py_DECREF(tmp_args_element_value_61);
            if (tmp_args_element_value_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_62);

                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_23;
            condexpr_false_23:;
            tmp_called_value_64 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_64 == NULL)) {
                        tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_64 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_64);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_4 = mod_consts[143];
            tmp_annotations_44 = DICT_COPY(mod_consts[144]);
            Py_INCREF(tmp_defaults_4);


            tmp_args_element_value_62 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__22_connect_tcp(tmp_defaults_4, tmp_annotations_44);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 255;
            tmp_classmethod_arg_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_62);
            if (tmp_classmethod_arg_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_22);
            Py_DECREF(tmp_classmethod_arg_22);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_23:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_63;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_annotations_45;
            PyObject *tmp_classmethod_arg_23;
            PyObject *tmp_called_value_67;
            PyObject *tmp_args_element_value_65;
            PyObject *tmp_annotations_46;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_24;
            } else {
                goto condexpr_false_24;
            }
            condexpr_true_24:;
            tmp_called_value_65 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_65 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_66 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_66 == NULL)) {
                        tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_66 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_65);

                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_66);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_45 = DICT_COPY(mod_consts[145]);


            tmp_args_element_value_64 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_unix(tmp_annotations_45);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 262;
            tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_args_element_value_64);
            if (tmp_args_element_value_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_65);

                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_65, tmp_args_element_value_63);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_element_value_63);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_24;
            condexpr_false_24:;
            tmp_called_value_67 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_67 == NULL)) {
                        tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_67 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_67);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_46 = DICT_COPY(mod_consts[145]);


            tmp_args_element_value_65 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__23_connect_unix(tmp_annotations_46);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 262;
            tmp_classmethod_arg_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_67, tmp_args_element_value_65);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_65);
            if (tmp_classmethod_arg_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_23);
            Py_DECREF(tmp_classmethod_arg_23);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_24:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_called_value_68;
            PyObject *tmp_args_element_value_66;
            PyObject *tmp_called_value_69;
            PyObject *tmp_args_element_value_67;
            PyObject *tmp_annotations_47;
            PyObject *tmp_classmethod_arg_24;
            PyObject *tmp_called_value_70;
            PyObject *tmp_args_element_value_68;
            PyObject *tmp_annotations_48;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_25;
            } else {
                goto condexpr_false_25;
            }
            condexpr_true_25:;
            tmp_called_value_68 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_68 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_69 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_69 == NULL)) {
                        tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_69 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_68);

                        exception_lineno = 267;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_69);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_47 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_67 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_create_tcp_listener(tmp_annotations_47);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 267;
            tmp_args_element_value_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_69, tmp_args_element_value_67);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_args_element_value_67);
            if (tmp_args_element_value_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_68);

                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 266;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_66);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_25;
            condexpr_false_25:;
            tmp_called_value_70 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_70 == NULL)) {
                        tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_70 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 267;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_70);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_48 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_68 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__24_create_tcp_listener(tmp_annotations_48);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 267;
            tmp_classmethod_arg_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_68);
            if (tmp_classmethod_arg_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_24);
            Py_DECREF(tmp_classmethod_arg_24);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_25:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_called_value_71;
            PyObject *tmp_args_element_value_69;
            PyObject *tmp_called_value_72;
            PyObject *tmp_args_element_value_70;
            PyObject *tmp_annotations_49;
            PyObject *tmp_classmethod_arg_25;
            PyObject *tmp_called_value_73;
            PyObject *tmp_args_element_value_71;
            PyObject *tmp_annotations_50;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_26;
            } else {
                goto condexpr_false_26;
            }
            condexpr_true_26:;
            tmp_called_value_71 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_72 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_72 == NULL)) {
                        tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_72 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_71);

                        exception_lineno = 272;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_72);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_49 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_70 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_unix_listener(tmp_annotations_49);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 272;
            tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_70);
            if (tmp_args_element_value_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_71);

                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 271;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_71, tmp_args_element_value_69);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_69);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_26;
            condexpr_false_26:;
            tmp_called_value_73 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_73 == NULL)) {
                        tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_73 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_73);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_50 = DICT_COPY(mod_consts[146]);


            tmp_args_element_value_71 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__25_create_unix_listener(tmp_annotations_50);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 272;
            tmp_classmethod_arg_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_73, tmp_args_element_value_71);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_71);
            if (tmp_classmethod_arg_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_25);
            Py_DECREF(tmp_classmethod_arg_25);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_26:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 273;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_called_value_74;
            PyObject *tmp_args_element_value_72;
            PyObject *tmp_called_value_75;
            PyObject *tmp_args_element_value_73;
            PyObject *tmp_annotations_51;
            PyObject *tmp_classmethod_arg_26;
            PyObject *tmp_called_value_76;
            PyObject *tmp_args_element_value_74;
            PyObject *tmp_annotations_52;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_30 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_27;
            } else {
                goto condexpr_false_27;
            }
            condexpr_true_27:;
            tmp_called_value_74 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_74 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_75 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_75 == NULL)) {
                        tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_75 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_74);

                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_75);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_51 = DICT_COPY(mod_consts[151]);


            tmp_args_element_value_73 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_udp_socket(tmp_annotations_51);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 277;
            tmp_args_element_value_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_75, tmp_args_element_value_73);
            Py_DECREF(tmp_called_value_75);
            Py_DECREF(tmp_args_element_value_73);
            if (tmp_args_element_value_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_74);

                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 276;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_args_element_value_72);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_27;
            condexpr_false_27:;
            tmp_called_value_76 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_76 == NULL)) {
                        tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_76 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 277;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_76);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_52 = DICT_COPY(mod_consts[151]);


            tmp_args_element_value_74 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__26_create_udp_socket(tmp_annotations_52);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 277;
            tmp_classmethod_arg_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_74);
            if (tmp_classmethod_arg_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 277;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_26);
            Py_DECREF(tmp_classmethod_arg_26);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 276;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_27:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 278;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_called_value_77;
            PyObject *tmp_args_element_value_75;
            PyObject *tmp_called_value_78;
            PyObject *tmp_args_element_value_76;
            PyObject *tmp_annotations_53;
            PyObject *tmp_classmethod_arg_27;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_element_value_77;
            PyObject *tmp_annotations_54;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_31 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_28;
            } else {
                goto condexpr_false_28;
            }
            condexpr_true_28:;
            tmp_called_value_77 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_77 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_78 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_78 == NULL)) {
                        tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_78 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_77);

                        exception_lineno = 288;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_78);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_53 = DICT_COPY(mod_consts[152]);


            tmp_args_element_value_76 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket(tmp_annotations_53);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 288;
            tmp_args_element_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_76);
            if (tmp_args_element_value_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_77);

                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 287;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_77, tmp_args_element_value_75);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_75);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_28;
            condexpr_false_28:;
            tmp_called_value_79 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_79 == NULL)) {
                        tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_79 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 288;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_79);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_54 = DICT_COPY(mod_consts[152]);


            tmp_args_element_value_77 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__27_create_unix_datagram_socket(tmp_annotations_54);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 288;
            tmp_classmethod_arg_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_79, tmp_args_element_value_77);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_element_value_77);
            if (tmp_classmethod_arg_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_27);
            Py_DECREF(tmp_classmethod_arg_27);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_28:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_called_value_80;
            PyObject *tmp_args_element_value_78;
            PyObject *tmp_called_value_81;
            PyObject *tmp_args_element_value_79;
            PyObject *tmp_annotations_55;
            PyObject *tmp_classmethod_arg_28;
            PyObject *tmp_called_value_82;
            PyObject *tmp_args_element_value_80;
            PyObject *tmp_annotations_56;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_32 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_29;
            } else {
                goto condexpr_false_29;
            }
            condexpr_true_29:;
            tmp_called_value_80 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_80 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_81 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_81 == NULL)) {
                        tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_81 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_80);

                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_81);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_55 = DICT_COPY(mod_consts[153]);


            tmp_args_element_value_79 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(tmp_annotations_55);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 295;
            tmp_args_element_value_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_81, tmp_args_element_value_79);
            Py_DECREF(tmp_called_value_81);
            Py_DECREF(tmp_args_element_value_79);
            if (tmp_args_element_value_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_80);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_args_element_value_78);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_29;
            condexpr_false_29:;
            tmp_called_value_82 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[77]);

            if (tmp_called_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_called_value_82 == NULL)) {
                        tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
                    }

                    if (tmp_called_value_82 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_82);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_56 = DICT_COPY(mod_consts[153]);


            tmp_args_element_value_80 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__28_create_unix_datagram_socket(tmp_annotations_56);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 295;
            tmp_classmethod_arg_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_args_element_value_80);
            if (tmp_classmethod_arg_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_28);
            Py_DECREF(tmp_classmethod_arg_28);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_29:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_called_value_83;
            PyObject *tmp_args_element_value_81;
            PyObject *tmp_called_value_84;
            PyObject *tmp_args_element_value_82;
            PyObject *tmp_annotations_57;
            PyObject *tmp_classmethod_arg_29;
            PyObject *tmp_called_value_85;
            PyObject *tmp_args_element_value_83;
            PyObject *tmp_annotations_58;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_33 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_30;
            } else {
                goto condexpr_false_30;
            }
            condexpr_true_30:;
            tmp_called_value_83 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_83 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_84 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_84 == NULL)) {
                        tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_84 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_83);

                        exception_lineno = 302;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_84);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_57 = DICT_COPY(mod_consts[154]);


            tmp_args_element_value_82 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(tmp_annotations_57);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 302;
            tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_args_element_value_82);
            if (tmp_args_element_value_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_83);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 301;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_83, tmp_args_element_value_81);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_args_element_value_81);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_30;
            condexpr_false_30:;
            tmp_called_value_85 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_85 == NULL)) {
                        tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_85 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 302;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_85);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_58 = DICT_COPY(mod_consts[154]);


            tmp_args_element_value_83 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__29_create_unix_datagram_socket(tmp_annotations_58);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 302;
            tmp_classmethod_arg_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_85, tmp_args_element_value_83);
            Py_DECREF(tmp_called_value_85);
            Py_DECREF(tmp_args_element_value_83);
            if (tmp_classmethod_arg_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_29);
            Py_DECREF(tmp_classmethod_arg_29);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_30:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_called_value_86;
            PyObject *tmp_args_element_value_84;
            PyObject *tmp_called_value_87;
            PyObject *tmp_args_element_value_85;
            PyObject *tmp_kw_defaults_9;
            PyObject *tmp_annotations_59;
            PyObject *tmp_classmethod_arg_30;
            PyObject *tmp_called_value_88;
            PyObject *tmp_args_element_value_86;
            PyObject *tmp_kw_defaults_10;
            PyObject *tmp_annotations_60;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_34 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_31;
            } else {
                goto condexpr_false_31;
            }
            condexpr_true_31:;
            tmp_called_value_86 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_86 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_87 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_87 == NULL)) {
                        tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_87 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_86);

                        exception_lineno = 309;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_87);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_9 = DICT_COPY(mod_consts[155]);
            tmp_annotations_59 = DICT_COPY(mod_consts[156]);


            tmp_args_element_value_85 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_getaddrinfo(tmp_kw_defaults_9, tmp_annotations_59);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 309;
            tmp_args_element_value_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_87, tmp_args_element_value_85);
            Py_DECREF(tmp_called_value_87);
            Py_DECREF(tmp_args_element_value_85);
            if (tmp_args_element_value_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_86);

                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 308;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_args_element_value_84);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_31;
            condexpr_false_31:;
            tmp_called_value_88 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_88 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_88 == NULL)) {
                        tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_88 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 309;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_88);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_kw_defaults_10 = DICT_COPY(mod_consts[155]);
            tmp_annotations_60 = DICT_COPY(mod_consts[156]);


            tmp_args_element_value_86 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__30_getaddrinfo(tmp_kw_defaults_10, tmp_annotations_60);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 309;
            tmp_classmethod_arg_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_args_element_value_86);
            if (tmp_classmethod_arg_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_30);
            Py_DECREF(tmp_classmethod_arg_30);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_31:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_called_value_89;
            PyObject *tmp_args_element_value_87;
            PyObject *tmp_called_value_90;
            PyObject *tmp_args_element_value_88;
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_61;
            PyObject *tmp_classmethod_arg_31;
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_element_value_89;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_62;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_35 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_32;
            } else {
                goto condexpr_false_32;
            }
            condexpr_true_32:;
            tmp_called_value_89 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_89 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_90 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_90 == NULL)) {
                        tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_90 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_89);

                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_90);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_5 = mod_consts[17];
            tmp_annotations_61 = DICT_COPY(mod_consts[157]);
            Py_INCREF(tmp_defaults_5);


            tmp_args_element_value_88 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getnameinfo(tmp_defaults_5, tmp_annotations_61);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 331;
            tmp_args_element_value_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_element_value_88);
            if (tmp_args_element_value_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_89);

                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 330;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_89, tmp_args_element_value_87);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_87);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_32;
            condexpr_false_32:;
            tmp_called_value_91 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_91 == NULL)) {
                        tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_91 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 331;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_91);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_defaults_6 = mod_consts[17];
            tmp_annotations_62 = DICT_COPY(mod_consts[157]);
            Py_INCREF(tmp_defaults_6);


            tmp_args_element_value_89 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__31_getnameinfo(tmp_defaults_6, tmp_annotations_62);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 331;
            tmp_classmethod_arg_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_91, tmp_args_element_value_89);
            Py_DECREF(tmp_called_value_91);
            Py_DECREF(tmp_args_element_value_89);
            if (tmp_classmethod_arg_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_31);
            Py_DECREF(tmp_classmethod_arg_31);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_32:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_called_value_92;
            PyObject *tmp_args_element_value_90;
            PyObject *tmp_called_value_93;
            PyObject *tmp_args_element_value_91;
            PyObject *tmp_annotations_63;
            PyObject *tmp_classmethod_arg_32;
            PyObject *tmp_called_value_94;
            PyObject *tmp_args_element_value_92;
            PyObject *tmp_annotations_64;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_36 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_33;
            } else {
                goto condexpr_false_33;
            }
            condexpr_true_33:;
            tmp_called_value_92 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_92 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_93 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_93 == NULL)) {
                        tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_93 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_92);

                        exception_lineno = 338;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_93);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_63 = DICT_COPY(mod_consts[158]);


            tmp_args_element_value_91 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_wait_socket_readable(tmp_annotations_63);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 338;
            tmp_args_element_value_90 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_93, tmp_args_element_value_91);
            Py_DECREF(tmp_called_value_93);
            Py_DECREF(tmp_args_element_value_91);
            if (tmp_args_element_value_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_92);

                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_args_element_value_90);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_33;
            condexpr_false_33:;
            tmp_called_value_94 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_94 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_94 == NULL)) {
                        tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_94 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 338;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_94);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_64 = DICT_COPY(mod_consts[158]);


            tmp_args_element_value_92 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__32_wait_socket_readable(tmp_annotations_64);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 338;
            tmp_classmethod_arg_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_args_element_value_92);
            if (tmp_classmethod_arg_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_32);
            Py_DECREF(tmp_classmethod_arg_32);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_33:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_37;
            PyObject *tmp_called_value_95;
            PyObject *tmp_args_element_value_93;
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_element_value_94;
            PyObject *tmp_annotations_65;
            PyObject *tmp_classmethod_arg_33;
            PyObject *tmp_called_value_97;
            PyObject *tmp_args_element_value_95;
            PyObject *tmp_annotations_66;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_37 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_34;
            } else {
                goto condexpr_false_34;
            }
            condexpr_true_34:;
            tmp_called_value_95 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_95 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_96 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_96 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_96 == NULL)) {
                        tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_96 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_95);

                        exception_lineno = 343;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_96);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_65 = DICT_COPY(mod_consts[158]);


            tmp_args_element_value_94 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_socket_writable(tmp_annotations_65);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 343;
            tmp_args_element_value_93 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_args_element_value_94);
            if (tmp_args_element_value_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_95);

                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 342;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_95, tmp_args_element_value_93);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_93);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_34;
            condexpr_false_34:;
            tmp_called_value_97 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_97 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_97 == NULL)) {
                        tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_97 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 343;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_97);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_66 = DICT_COPY(mod_consts[158]);


            tmp_args_element_value_95 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__33_wait_socket_writable(tmp_annotations_66);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 343;
            tmp_classmethod_arg_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_97, tmp_args_element_value_95);
            Py_DECREF(tmp_called_value_97);
            Py_DECREF(tmp_args_element_value_95);
            if (tmp_classmethod_arg_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_33);
            Py_DECREF(tmp_classmethod_arg_33);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_34:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_called_value_98;
            PyObject *tmp_args_element_value_96;
            PyObject *tmp_called_value_99;
            PyObject *tmp_args_element_value_97;
            PyObject *tmp_annotations_67;
            PyObject *tmp_classmethod_arg_34;
            PyObject *tmp_called_value_100;
            PyObject *tmp_args_element_value_98;
            PyObject *tmp_annotations_68;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_38 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_35;
            } else {
                goto condexpr_false_35;
            }
            condexpr_true_35:;
            tmp_called_value_98 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_98 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_99 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_99 == NULL)) {
                        tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_99 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_98);

                        exception_lineno = 348;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_99);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_67 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_97 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_current_default_thread_limiter(tmp_annotations_67);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 348;
            tmp_args_element_value_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_99, tmp_args_element_value_97);
            Py_DECREF(tmp_called_value_99);
            Py_DECREF(tmp_args_element_value_97);
            if (tmp_args_element_value_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_98);

                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 347;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_args_element_value_96);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_35;
            condexpr_false_35:;
            tmp_called_value_100 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_100 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_100 == NULL)) {
                        tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_100 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 348;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_100);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_68 = DICT_COPY(mod_consts[159]);


            tmp_args_element_value_98 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__34_current_default_thread_limiter(tmp_annotations_68);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 348;
            tmp_classmethod_arg_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_args_element_value_98);
            if (tmp_classmethod_arg_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 348;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_34);
            Py_DECREF(tmp_classmethod_arg_34);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_35:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_39;
            PyObject *tmp_called_value_101;
            PyObject *tmp_args_element_value_99;
            PyObject *tmp_called_value_102;
            PyObject *tmp_args_element_value_100;
            PyObject *tmp_annotations_69;
            PyObject *tmp_classmethod_arg_35;
            PyObject *tmp_called_value_103;
            PyObject *tmp_args_element_value_101;
            PyObject *tmp_annotations_70;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_39 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_36;
            } else {
                goto condexpr_false_36;
            }
            condexpr_true_36:;
            tmp_called_value_101 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_101 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_102 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_102 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_102 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_102 == NULL)) {
                        tmp_called_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_102 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_101);

                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_102);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_69 = DICT_COPY(mod_consts[162]);


            tmp_args_element_value_100 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_open_signal_receiver(tmp_annotations_69);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 353;
            tmp_args_element_value_99 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_args_element_value_100);
            if (tmp_args_element_value_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_101);

                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 352;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_101, tmp_args_element_value_99);
            Py_DECREF(tmp_called_value_101);
            Py_DECREF(tmp_args_element_value_99);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_36;
            condexpr_false_36:;
            tmp_called_value_103 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_103 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_103 == NULL)) {
                        tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_103 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_103);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_70 = DICT_COPY(mod_consts[162]);


            tmp_args_element_value_101 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__35_open_signal_receiver(tmp_annotations_70);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 353;
            tmp_classmethod_arg_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_103, tmp_args_element_value_101);
            Py_DECREF(tmp_called_value_103);
            Py_DECREF(tmp_args_element_value_101);
            if (tmp_classmethod_arg_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_35);
            Py_DECREF(tmp_classmethod_arg_35);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_36:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_called_value_104;
            PyObject *tmp_args_element_value_102;
            PyObject *tmp_called_value_105;
            PyObject *tmp_args_element_value_103;
            PyObject *tmp_annotations_71;
            PyObject *tmp_classmethod_arg_36;
            PyObject *tmp_called_value_106;
            PyObject *tmp_args_element_value_104;
            PyObject *tmp_annotations_72;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_40 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_37;
            } else {
                goto condexpr_false_37;
            }
            condexpr_true_37:;
            tmp_called_value_104 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_104 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_105 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_105 == NULL)) {
                        tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_105 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_104);

                        exception_lineno = 360;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_105);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_71 = DICT_COPY(mod_consts[165]);


            tmp_args_element_value_103 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_get_current_task(tmp_annotations_71);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 360;
            tmp_args_element_value_102 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_105, tmp_args_element_value_103);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_args_element_value_103);
            if (tmp_args_element_value_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_104);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 359;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_102);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_37;
            condexpr_false_37:;
            tmp_called_value_106 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_106 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_106 == NULL)) {
                        tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_106 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 360;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_106);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_72 = DICT_COPY(mod_consts[165]);


            tmp_args_element_value_104 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__36_get_current_task(tmp_annotations_72);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 360;
            tmp_classmethod_arg_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_106, tmp_args_element_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_args_element_value_104);
            if (tmp_classmethod_arg_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_36);
            Py_DECREF(tmp_classmethod_arg_36);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_37:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[166], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_41;
            PyObject *tmp_called_value_107;
            PyObject *tmp_args_element_value_105;
            PyObject *tmp_called_value_108;
            PyObject *tmp_args_element_value_106;
            PyObject *tmp_annotations_73;
            PyObject *tmp_classmethod_arg_37;
            PyObject *tmp_called_value_109;
            PyObject *tmp_args_element_value_107;
            PyObject *tmp_annotations_74;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_41 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_38;
            } else {
                goto condexpr_false_38;
            }
            condexpr_true_38:;
            tmp_called_value_107 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_107 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_107 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_108 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_108 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_108 == NULL)) {
                        tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_108 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_107);

                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_108);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_73 = DICT_COPY(mod_consts[168]);


            tmp_args_element_value_106 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_get_running_tasks(tmp_annotations_73);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 365;
            tmp_args_element_value_105 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_108, tmp_args_element_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_args_element_value_106);
            if (tmp_args_element_value_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_107);

                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 364;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_107, tmp_args_element_value_105);
            Py_DECREF(tmp_called_value_107);
            Py_DECREF(tmp_args_element_value_105);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_38;
            condexpr_false_38:;
            tmp_called_value_109 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_109 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_109 == NULL)) {
                        tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_109 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_109);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_74 = DICT_COPY(mod_consts[168]);


            tmp_args_element_value_107 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__37_get_running_tasks(tmp_annotations_74);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 365;
            tmp_classmethod_arg_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_109, tmp_args_element_value_107);
            Py_DECREF(tmp_called_value_109);
            Py_DECREF(tmp_args_element_value_107);
            if (tmp_classmethod_arg_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_37);
            Py_DECREF(tmp_classmethod_arg_37);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_38:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[169], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_called_value_110;
            PyObject *tmp_args_element_value_108;
            PyObject *tmp_called_value_111;
            PyObject *tmp_args_element_value_109;
            PyObject *tmp_annotations_75;
            PyObject *tmp_classmethod_arg_38;
            PyObject *tmp_called_value_112;
            PyObject *tmp_args_element_value_110;
            PyObject *tmp_annotations_76;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_42 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_39;
            } else {
                goto condexpr_false_39;
            }
            condexpr_true_39:;
            tmp_called_value_110 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_110 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_111 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_111 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_111 == NULL)) {
                        tmp_called_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_111 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_110);

                        exception_lineno = 370;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_111);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_75 = DICT_COPY(mod_consts[108]);


            tmp_args_element_value_109 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked(tmp_annotations_75);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 370;
            tmp_args_element_value_108 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_111, tmp_args_element_value_109);
            Py_DECREF(tmp_called_value_111);
            Py_DECREF(tmp_args_element_value_109);
            if (tmp_args_element_value_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_110);

                exception_lineno = 370;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 369;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_110, tmp_args_element_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_args_element_value_108);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_39;
            condexpr_false_39:;
            tmp_called_value_112 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_112 == NULL)) {
                        tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_112 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 370;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_112);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_76 = DICT_COPY(mod_consts[108]);


            tmp_args_element_value_110 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__38_wait_all_tasks_blocked(tmp_annotations_76);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 370;
            tmp_classmethod_arg_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_112, tmp_args_element_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_element_value_110);
            if (tmp_classmethod_arg_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 370;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_38);
            Py_DECREF(tmp_classmethod_arg_38);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_39:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 371;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_43;
            PyObject *tmp_called_value_113;
            PyObject *tmp_args_element_value_111;
            PyObject *tmp_called_value_114;
            PyObject *tmp_args_element_value_112;
            PyObject *tmp_annotations_77;
            PyObject *tmp_classmethod_arg_39;
            PyObject *tmp_called_value_115;
            PyObject *tmp_args_element_value_113;
            PyObject *tmp_annotations_78;
            tmp_res = MAPPING_HAS_ITEM(tstate, locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_43 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_40;
            } else {
                goto condexpr_false_40;
            }
            condexpr_true_40:;
            tmp_called_value_113 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[91]);

            if (unlikely(tmp_called_value_113 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[91]);
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_113 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_114 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_114 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_114 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_114 == NULL)) {
                        tmp_called_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_114 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_113);

                        exception_lineno = 375;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_114);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_77 = DICT_COPY(mod_consts[171]);


            tmp_args_element_value_112 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_create_test_runner(tmp_annotations_77);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 375;
            tmp_args_element_value_111 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_114, tmp_args_element_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_args_element_value_112);
            if (tmp_args_element_value_111 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_113);

                exception_lineno = 375;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 374;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_113, tmp_args_element_value_111);
            Py_DECREF(tmp_called_value_113);
            Py_DECREF(tmp_args_element_value_111);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_40;
            condexpr_false_40:;
            tmp_called_value_115 = PyObject_GetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[56]);

            if (tmp_called_value_115 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_115 == NULL)) {
                        tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_called_value_115 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 375;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_115);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_78 = DICT_COPY(mod_consts[171]);


            tmp_args_element_value_113 = MAKE_FUNCTION_anyio$abc$_eventloop$$$function__39_create_test_runner(tmp_annotations_78);

            frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame.f_lineno = 375;
            tmp_classmethod_arg_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_115, tmp_args_element_value_113);
            Py_DECREF(tmp_called_value_115);
            Py_DECREF(tmp_args_element_value_113);
            if (tmp_classmethod_arg_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 375;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_39);
            Py_DECREF(tmp_classmethod_arg_39);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_40:;
            tmp_res = PyObject_SetItem(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44, mod_consts[172], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c98ac22a033328eaa64f2fb0df820f2e_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c98ac22a033328eaa64f2fb0df820f2e_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c98ac22a033328eaa64f2fb0df820f2e_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c98ac22a033328eaa64f2fb0df820f2e_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c98ac22a033328eaa64f2fb0df820f2e_2);

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
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_116;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_116 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = mod_consts[89];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[174];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame.f_lineno = 44;
            tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_116, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_33 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44);
        locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44 = NULL;
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

        Py_DECREF(locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44);
        locals_anyio$abc$_eventloop$$$class__1_AsyncBackend_44 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 44;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_33);
    }
    goto try_end_5;
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

    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8df1ae2ffc33e4ca1c19088a198645e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8df1ae2ffc33e4ca1c19088a198645e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8df1ae2ffc33e4ca1c19088a198645e4, exception_lineno);
    }



    assertFrameObject(frame_8df1ae2ffc33e4ca1c19088a198645e4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio.abc._eventloop", false);

    Py_INCREF(module_anyio$abc$_eventloop);
    return module_anyio$abc$_eventloop;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc$_eventloop, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc$_eventloop", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
