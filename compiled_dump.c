+01: import numpy as np
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_numpy, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_np, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
 02: 
+03: def mandelbrot_cython(m, size, iterations):
/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_1mandelbrot_cython(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_1mandelbrot_cython = {"mandelbrot_cython", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_1mandelbrot_cython, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_1mandelbrot_cython(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_m = 0;
  PyObject *__pyx_v_size = 0;
  PyObject *__pyx_v_iterations = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("mandelbrot_cython (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_m,&__pyx_n_s_size,&__pyx_n_s_iterations,0};
    PyObject* values[3] = {0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_m)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_size)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("mandelbrot_cython", 1, 3, 3, 1); __PYX_ERR(0, 3, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_iterations)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("mandelbrot_cython", 1, 3, 3, 2); __PYX_ERR(0, 3, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "mandelbrot_cython") < 0)) __PYX_ERR(0, 3, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_m = values[0];
    __pyx_v_size = values[1];
    __pyx_v_iterations = values[2];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("mandelbrot_cython", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 3, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b.mandelbrot_cython", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_mandelbrot_cython(__pyx_self, __pyx_v_m, __pyx_v_size, __pyx_v_iterations);
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_mandelbrot_cython(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_m, PyObject *__pyx_v_size, PyObject *__pyx_v_iterations) {
  PyObject *__pyx_v_i = NULL;
  PyObject *__pyx_v_j = NULL;
  PyObject *__pyx_v_c = NULL;
  PyObject *__pyx_v_z = NULL;
  PyObject *__pyx_v_n = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("mandelbrot_cython", 0);
/* … */
  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_8);
  __Pyx_XDECREF(__pyx_t_9);
  __Pyx_XDECREF(__pyx_t_10);
  __Pyx_AddTraceback("_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b.mandelbrot_cython", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_v_i);
  __Pyx_XDECREF(__pyx_v_j);
  __Pyx_XDECREF(__pyx_v_c);
  __Pyx_XDECREF(__pyx_v_z);
  __Pyx_XDECREF(__pyx_v_n);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
/* … */
  __pyx_tuple_ = PyTuple_Pack(8, __pyx_n_s_m, __pyx_n_s_size, __pyx_n_s_iterations, __pyx_n_s_i, __pyx_n_s_j, __pyx_n_s_c, __pyx_n_s_z, __pyx_n_s_n); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple_);
  __Pyx_GIVEREF(__pyx_tuple_);
/* … */
  __pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_46_cython_magic_eaa420aba2aad9fb1f734deff8b6a40b_1mandelbrot_cython, NULL, __pyx_n_s_cython_magic_eaa420aba2aad9fb1f); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_mandelbrot_cython, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
+04:     for i in range(size):
  __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_size); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
    __pyx_t_2 = __pyx_t_1; __Pyx_INCREF(__pyx_t_2); __pyx_t_3 = 0;
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_3 = -1; __pyx_t_2 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = Py_TYPE(__pyx_t_2)->tp_iternext; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 4, __pyx_L1_error)
  }
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  for (;;) {
    if (likely(!__pyx_t_4)) {
      if (likely(PyList_CheckExact(__pyx_t_2))) {
        if (__pyx_t_3 >= PyList_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyList_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 4, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      } else {
        if (__pyx_t_3 >= PyTuple_GET_SIZE(__pyx_t_2)) break;
        #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_2, __pyx_t_3); __Pyx_INCREF(__pyx_t_1); __pyx_t_3++; if (unlikely(0 < 0)) __PYX_ERR(0, 4, __pyx_L1_error)
        #else
        __pyx_t_1 = PySequence_ITEM(__pyx_t_2, __pyx_t_3); __pyx_t_3++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 4, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        #endif
      }
    } else {
      __pyx_t_1 = __pyx_t_4(__pyx_t_2);
      if (unlikely(!__pyx_t_1)) {
        PyObject* exc_type = PyErr_Occurred();
        if (exc_type) {
          if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
          else __PYX_ERR(0, 4, __pyx_L1_error)
        }
        break;
      }
      __Pyx_GOTREF(__pyx_t_1);
    }
    __Pyx_XDECREF_SET(__pyx_v_i, __pyx_t_1);
    __pyx_t_1 = 0;
/* … */
  }
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
+05:         for j in range(size):
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_size); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_1);
    if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
      __pyx_t_5 = __pyx_t_1; __Pyx_INCREF(__pyx_t_5); __pyx_t_6 = 0;
      __pyx_t_7 = NULL;
    } else {
      __pyx_t_6 = -1; __pyx_t_5 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 5, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __pyx_t_7 = Py_TYPE(__pyx_t_5)->tp_iternext; if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 5, __pyx_L1_error)
    }
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    for (;;) {
      if (likely(!__pyx_t_7)) {
        if (likely(PyList_CheckExact(__pyx_t_5))) {
          if (__pyx_t_6 >= PyList_GET_SIZE(__pyx_t_5)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_1 = PyList_GET_ITEM(__pyx_t_5, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 5, __pyx_L1_error)
          #else
          __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          #endif
        } else {
          if (__pyx_t_6 >= PyTuple_GET_SIZE(__pyx_t_5)) break;
          #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
          __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_5, __pyx_t_6); __Pyx_INCREF(__pyx_t_1); __pyx_t_6++; if (unlikely(0 < 0)) __PYX_ERR(0, 5, __pyx_L1_error)
          #else
          __pyx_t_1 = PySequence_ITEM(__pyx_t_5, __pyx_t_6); __pyx_t_6++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 5, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_1);
          #endif
        }
      } else {
        __pyx_t_1 = __pyx_t_7(__pyx_t_5);
        if (unlikely(!__pyx_t_1)) {
          PyObject* exc_type = PyErr_Occurred();
          if (exc_type) {
            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
            else __PYX_ERR(0, 5, __pyx_L1_error)
          }
          break;
        }
        __Pyx_GOTREF(__pyx_t_1);
      }
      __Pyx_XDECREF_SET(__pyx_v_j, __pyx_t_1);
      __pyx_t_1 = 0;
/* … */
    }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
+06:             c = -2 + 3./size*j + 1j*(1.5-3./size*i)
      __pyx_t_1 = __Pyx_PyFloat_TrueDivideCObj(__pyx_float_3_, __pyx_v_size, 3., 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __pyx_t_8 = PyNumber_Multiply(__pyx_t_1, __pyx_v_j); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __pyx_t_1 = __Pyx_PyInt_AddCObj(__pyx_int_neg_2, __pyx_t_8, -2L, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_1);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __pyx_t_8 = PyComplex_FromDoubles(0.0, 1.0); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_8);
      __pyx_t_9 = __Pyx_PyFloat_TrueDivideCObj(__pyx_float_3_, __pyx_v_size, 3., 0, 1); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __pyx_t_10 = PyNumber_Multiply(__pyx_t_9, __pyx_v_i); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = __Pyx_PyFloat_SubtractCObj(__pyx_float_1_5, __pyx_t_10, 1.5, 0, 0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __pyx_t_10 = PyNumber_Multiply(__pyx_t_8, __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_10);
      __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      __pyx_t_9 = PyNumber_Add(__pyx_t_1, __pyx_t_10); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 6, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
      __Pyx_XDECREF_SET(__pyx_v_c, __pyx_t_9);
      __pyx_t_9 = 0;
+07:             z = 0
      __Pyx_INCREF(__pyx_int_0);
      __Pyx_XDECREF_SET(__pyx_v_z, __pyx_int_0);
+08:             for n in range(iterations):
      __pyx_t_9 = __Pyx_PyObject_CallOneArg(__pyx_builtin_range, __pyx_v_iterations); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 8, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_9);
      if (likely(PyList_CheckExact(__pyx_t_9)) || PyTuple_CheckExact(__pyx_t_9)) {
        __pyx_t_10 = __pyx_t_9; __Pyx_INCREF(__pyx_t_10); __pyx_t_11 = 0;
        __pyx_t_12 = NULL;
      } else {
        __pyx_t_11 = -1; __pyx_t_10 = PyObject_GetIter(__pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 8, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_12 = Py_TYPE(__pyx_t_10)->tp_iternext; if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 8, __pyx_L1_error)
      }
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
      for (;;) {
        if (likely(!__pyx_t_12)) {
          if (likely(PyList_CheckExact(__pyx_t_10))) {
            if (__pyx_t_11 >= PyList_GET_SIZE(__pyx_t_10)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_9 = PyList_GET_ITEM(__pyx_t_10, __pyx_t_11); __Pyx_INCREF(__pyx_t_9); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 8, __pyx_L1_error)
            #else
            __pyx_t_9 = PySequence_ITEM(__pyx_t_10, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 8, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_9);
            #endif
          } else {
            if (__pyx_t_11 >= PyTuple_GET_SIZE(__pyx_t_10)) break;
            #if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
            __pyx_t_9 = PyTuple_GET_ITEM(__pyx_t_10, __pyx_t_11); __Pyx_INCREF(__pyx_t_9); __pyx_t_11++; if (unlikely(0 < 0)) __PYX_ERR(0, 8, __pyx_L1_error)
            #else
            __pyx_t_9 = PySequence_ITEM(__pyx_t_10, __pyx_t_11); __pyx_t_11++; if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 8, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_9);
            #endif
          }
        } else {
          __pyx_t_9 = __pyx_t_12(__pyx_t_10);
          if (unlikely(!__pyx_t_9)) {
            PyObject* exc_type = PyErr_Occurred();
            if (exc_type) {
              if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
              else __PYX_ERR(0, 8, __pyx_L1_error)
            }
            break;
          }
          __Pyx_GOTREF(__pyx_t_9);
        }
        __Pyx_XDECREF_SET(__pyx_v_n, __pyx_t_9);
        __pyx_t_9 = 0;
/* … */
      }
      __pyx_L8_break:;
      __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
+09:                 if np.abs(z) <= 10:
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_np); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 9, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_abs); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 9, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_8))) {
          __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_8);
          if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_8, function);
          }
        }
        __pyx_t_9 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_1, __pyx_v_z) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_v_z);
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 9, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = PyObject_RichCompare(__pyx_t_9, __pyx_int_10, Py_LE); __Pyx_XGOTREF(__pyx_t_8); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 9, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_t_8); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 9, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        if (__pyx_t_13) {
/* … */
          goto __pyx_L9;
        }
+10:                     z = z*z + c
          __pyx_t_8 = PyNumber_Multiply(__pyx_v_z, __pyx_v_z); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 10, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_8);
          __pyx_t_9 = PyNumber_Add(__pyx_t_8, __pyx_v_c); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 10, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_9);
          __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
          __Pyx_DECREF_SET(__pyx_v_z, __pyx_t_9);
          __pyx_t_9 = 0;
+11:                     m[i, j] = n
          __pyx_t_9 = PyTuple_New(2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 11, __pyx_L1_error)
          __Pyx_GOTREF(__pyx_t_9);
          __Pyx_INCREF(__pyx_v_i);
          __Pyx_GIVEREF(__pyx_v_i);
          PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_v_i);
          __Pyx_INCREF(__pyx_v_j);
          __Pyx_GIVEREF(__pyx_v_j);
          PyTuple_SET_ITEM(__pyx_t_9, 1, __pyx_v_j);
          if (unlikely(PyObject_SetItem(__pyx_v_m, __pyx_t_9, __pyx_v_n) < 0)) __PYX_ERR(0, 11, __pyx_L1_error)
          __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
 12:                 else:
+13:                     break
        /*else*/ {
          goto __pyx_L8_break;
        }
        __pyx_L9:;
        
        
        
        
        
        
        
 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 
 
 
 +01: import numpy as np
  __pyx_t_1 = __Pyx_Import(__pyx_n_s_numpy, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_np, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
/* … */
  __pyx_t_1 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_1) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
 02: 
+03: def mandelbrot_cython_types(int[:,::1] m,
/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_b889989c4548843e36e3a5fdf767e971_1mandelbrot_cython_types(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_46_cython_magic_b889989c4548843e36e3a5fdf767e971_1mandelbrot_cython_types = {"mandelbrot_cython_types", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_46_cython_magic_b889989c4548843e36e3a5fdf767e971_1mandelbrot_cython_types, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_46_cython_magic_b889989c4548843e36e3a5fdf767e971_1mandelbrot_cython_types(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  __Pyx_memviewslice __pyx_v_m = { 0, 0, { 0 }, { 0 }, { 0 } };
  int __pyx_v_size;
  int __pyx_v_iterations;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("mandelbrot_cython_types (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_m,&__pyx_n_s_size,&__pyx_n_s_iterations,0};
    PyObject* values[3] = {0,0,0};
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        CYTHON_FALLTHROUGH;
        case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
        CYTHON_FALLTHROUGH;
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_m)) != 0)) kw_args--;
        else goto __pyx_L5_argtuple_error;
        CYTHON_FALLTHROUGH;
        case  1:
        if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_size)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("mandelbrot_cython_types", 1, 3, 3, 1); __PYX_ERR(0, 3, __pyx_L3_error)
        }
        CYTHON_FALLTHROUGH;
        case  2:
        if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_iterations)) != 0)) kw_args--;
        else {
          __Pyx_RaiseArgtupleInvalid("mandelbrot_cython_types", 1, 3, 3, 2); __PYX_ERR(0, 3, __pyx_L3_error)
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "mandelbrot_cython_types") < 0)) __PYX_ERR(0, 3, __pyx_L3_error)
      }
    } else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
      goto __pyx_L5_argtuple_error;
    } else {
      values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
      values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
      values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
    }
    __pyx_v_m = __Pyx_PyObject_to_MemoryviewSlice_d_dc_int(values[0], PyBUF_WRITABLE); if (unlikely(!__pyx_v_m.memview)) __PYX_ERR(0, 3, __pyx_L3_error)
    __pyx_v_size = __Pyx_PyInt_As_int(values[1]); if (unlikely((__pyx_v_size == (int)-1) && PyErr_Occurred())) __PYX_ERR(0, 4, __pyx_L3_error)
    __pyx_v_iterations = __Pyx_PyInt_As_int(values[2]); if (unlikely((__pyx_v_iterations == (int)-1) && PyErr_Occurred())) __PYX_ERR(0, 5, __pyx_L3_error)
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("mandelbrot_cython_types", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 3, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("_cython_magic_b889989c4548843e36e3a5fdf767e971.mandelbrot_cython_types", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_46_cython_magic_b889989c4548843e36e3a5fdf767e971_mandelbrot_cython_types(__pyx_self, __pyx_v_m, __pyx_v_size, __pyx_v_iterations);
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_b889989c4548843e36e3a5fdf767e971_mandelbrot_cython_types(CYTHON_UNUSED PyObject *__pyx_self, __Pyx_memviewslice __pyx_v_m, int __pyx_v_size, int __pyx_v_iterations) {
  int __pyx_v_i;
  int __pyx_v_j;
  int __pyx_v_n;
  __pyx_t_double_complex __pyx_v_z;
  __pyx_t_double_complex __pyx_v_c;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("mandelbrot_cython_types", 0);
/* … */
  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_b889989c4548843e36e3a5fdf767e971.mandelbrot_cython_types", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __PYX_XDEC_MEMVIEW(&__pyx_v_m, 1);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
/* … */
  __pyx_tuple__20 = PyTuple_Pack(8, __pyx_n_s_m, __pyx_n_s_size, __pyx_n_s_iterations, __pyx_n_s_i, __pyx_n_s_j, __pyx_n_s_n, __pyx_n_s_z, __pyx_n_s_c); if (unlikely(!__pyx_tuple__20)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__20);
  __Pyx_GIVEREF(__pyx_tuple__20);
/* … */
  __pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_46_cython_magic_b889989c4548843e36e3a5fdf767e971_1mandelbrot_cython_types, NULL, __pyx_n_s_cython_magic_b889989c4548843e36); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_mandelbrot_cython_types, __pyx_t_1) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_codeobj__21 = (PyObject*)__Pyx_PyCode_New(3, 0, 8, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__20, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_C_Users_Weriko_ipython_cython__c, __pyx_n_s_mandelbrot_cython_types, 3, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__21)) __PYX_ERR(0, 3, __pyx_L1_error)
 04:                       int size,
 05:                       int iterations):
 06:     cdef int i, j, n
 07:     cdef complex z, c
+08:     for i in range(size):
  __pyx_t_1 = __pyx_v_size;
  __pyx_t_2 = __pyx_t_1;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;
+09:         for j in range(size):
    __pyx_t_4 = __pyx_v_size;
    __pyx_t_5 = __pyx_t_4;
    for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_5; __pyx_t_6+=1) {
      __pyx_v_j = __pyx_t_6;
+10:             c = -2 + 3./size*j + 1j*(1.5-3./size*i)
      if (unlikely(__pyx_v_size == 0)) {
        PyErr_SetString(PyExc_ZeroDivisionError, "float division");
        __PYX_ERR(0, 10, __pyx_L1_error)
      }
      if (unlikely(__pyx_v_size == 0)) {
        PyErr_SetString(PyExc_ZeroDivisionError, "float division");
        __PYX_ERR(0, 10, __pyx_L1_error)
      }
      __pyx_v_c = __Pyx_c_sum_double(__pyx_t_double_complex_from_parts((-2.0 + ((3. / ((double)__pyx_v_size)) * __pyx_v_j)), 0), __Pyx_c_prod_double(__pyx_t_double_complex_from_parts(0, 1.0), __pyx_t_double_complex_from_parts((1.5 - ((3. / ((double)__pyx_v_size)) * __pyx_v_i)), 0)));
+11:             z = 0
      __pyx_v_z = __pyx_t_double_complex_from_parts(0, 0);
+12:             for n in range(iterations):
      __pyx_t_7 = __pyx_v_iterations;
      __pyx_t_8 = __pyx_t_7;
      for (__pyx_t_9 = 0; __pyx_t_9 < __pyx_t_8; __pyx_t_9+=1) {
        __pyx_v_n = __pyx_t_9;
+13:                 if z.real**2 + z.imag**2 <= 100:
        __pyx_t_10 = (((pow(__Pyx_CREAL(__pyx_v_z), 2.0) + pow(__Pyx_CIMAG(__pyx_v_z), 2.0)) <= 100.0) != 0);
        if (__pyx_t_10) {
/* … */
          goto __pyx_L9;
        }
+14:                     z = z*z + c
          __pyx_v_z = __Pyx_c_sum_double(__Pyx_c_prod_double(__pyx_v_z, __pyx_v_z), __pyx_v_c);
+15:                     m[i, j] = n
          __pyx_t_11 = __pyx_v_i;
          __pyx_t_12 = __pyx_v_j;
          __pyx_t_13 = -1;
          if (__pyx_t_11 < 0) {
            __pyx_t_11 += __pyx_v_m.shape[0];
            if (unlikely(__pyx_t_11 < 0)) __pyx_t_13 = 0;
          } else if (unlikely(__pyx_t_11 >= __pyx_v_m.shape[0])) __pyx_t_13 = 0;
          if (__pyx_t_12 < 0) {
            __pyx_t_12 += __pyx_v_m.shape[1];
            if (unlikely(__pyx_t_12 < 0)) __pyx_t_13 = 1;
          } else if (unlikely(__pyx_t_12 >= __pyx_v_m.shape[1])) __pyx_t_13 = 1;
          if (unlikely(__pyx_t_13 != -1)) {
            __Pyx_RaiseBufferIndexError(__pyx_t_13);
            __PYX_ERR(0, 15, __pyx_L1_error)
          }
          *((int *) ( /* dim=1 */ ((char *) (((int *) ( /* dim=0 */ (__pyx_v_m.data + __pyx_t_11 * __pyx_v_m.strides[0]) )) + __pyx_t_12)) )) = __pyx_v_n;
 16:                 else:
+17:                     break
        /*else*/ {
          goto __pyx_L8_break;
        }
        __pyx_L9:;
      }
      __pyx_L8_break:;
    }
  }
  
  
  
  
  
  
  
  
   ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
   
   
   
   
   
   
   
   01: 
 02: cdef extern from "math.h":
 03:  double sqrt(double x)
 04: 
 05: cdef class  Planet_c(object):
+06:   cdef public double x,y,z,vx,vy,vz,m
/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->x); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.x.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1x_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->x = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.x.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->y); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.y.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1y_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->y = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.y.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->z); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.z.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1z_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->z = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.z.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->vx); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.vx.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vx_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->vx = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.vx.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->vy); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.vy.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vy_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->vy = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.vy.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->vz); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.vz.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_2vz_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->vz = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.vz.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m_1__get__(PyObject *__pyx_v_self); /*proto*/
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m_1__get__(PyObject *__pyx_v_self) {
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m___get__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m___get__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__get__", 0);
  __Pyx_XDECREF(__pyx_r);
  __pyx_t_1 = PyFloat_FromDouble(__pyx_v_self->m); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 6, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = 0;
  goto __pyx_L0;

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.m.__get__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m_3__set__(PyObject *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__ (wrapper)", 0);
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m_2__set__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self), ((PyObject *)__pyx_v_value));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1m_2__set__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self, PyObject *__pyx_v_value) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__set__", 0);
  __pyx_t_1 = __pyx_PyFloat_AsDouble(__pyx_v_value); if (unlikely((__pyx_t_1 == (double)-1) && PyErr_Occurred())) __PYX_ERR(0, 6, __pyx_L1_error)
  __pyx_v_self->m = __pyx_t_1;

  /* function exit code */
  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.Planet_c.m.__set__", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = -1;
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
+07:   def __init__(self):
/* Python wrapper */
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1__init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c_1__init__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__ (wrapper)", 0);
  if (unlikely(PyTuple_GET_SIZE(__pyx_args) > 0)) {
    __Pyx_RaiseArgtupleInvalid("__init__", 1, 0, 0, PyTuple_GET_SIZE(__pyx_args)); return -1;}
  if (unlikely(__pyx_kwds) && unlikely(PyDict_Size(__pyx_kwds) > 0) && unlikely(!__Pyx_CheckKeywordStrings(__pyx_kwds, "__init__", 0))) return -1;
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c___init__(((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_v_self));

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static int __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_8Planet_c___init__(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_self) {
  int __pyx_r;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__init__", 0);
/* … */
  /* function exit code */
  __pyx_r = 0;
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
+08:     self.x = 1.0
  __pyx_v_self->x = 1.0;
+09:     self.y = 0.0
  __pyx_v_self->y = 0.0;
+10:     self.z = 0.0
  __pyx_v_self->z = 0.0;
+11:     self.vx=0.0
  __pyx_v_self->vx = 0.0;
+12:     self.vy= 0.5
  __pyx_v_self->vy = 0.5;
+13:     self.vz = 0.0
  __pyx_v_self->vz = 0.0;
+14:     self.m =1.0
  __pyx_v_self->m = 1.0;
 15: 
+16: cdef void single_step(Planet_c planet, double dt):
static void __pyx_f_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_single_step(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_planet, double __pyx_v_dt) {
  double __pyx_v_distance;
  double __pyx_v_Fx;
  double __pyx_v_Fy;
  double __pyx_v_Fz;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("single_step", 0);
/* … */
  /* function exit code */
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_WriteUnraisable("_cython_magic_eb3f090329087d90753d048f20c7e7fd.single_step", __pyx_clineno, __pyx_lineno, __pyx_filename, 1, 0);
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
}
 17:     cdef double distance,Fx,Fy,Fz
+18:     distance =sqrt(planet.x**2 + planet.y**2 + planet.x**2)
  __pyx_v_distance = sqrt(((pow(__pyx_v_planet->x, 2.0) + pow(__pyx_v_planet->y, 2.0)) + pow(__pyx_v_planet->x, 2.0)));
 19: 
+20:     Fx = -planet.x/distance**3
  __pyx_t_1 = (-__pyx_v_planet->x);
  __pyx_t_2 = pow(__pyx_v_distance, 3.0);
  if (unlikely(__pyx_t_2 == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 20, __pyx_L1_error)
  }
  __pyx_v_Fx = (__pyx_t_1 / __pyx_t_2);
+21:     Fy = -planet.y/distance**3
  __pyx_t_2 = (-__pyx_v_planet->y);
  __pyx_t_1 = pow(__pyx_v_distance, 3.0);
  if (unlikely(__pyx_t_1 == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 21, __pyx_L1_error)
  }
  __pyx_v_Fy = (__pyx_t_2 / __pyx_t_1);
+22:     Fz = -planet.z/distance**3
  __pyx_t_1 = (-__pyx_v_planet->z);
  __pyx_t_2 = pow(__pyx_v_distance, 3.0);
  if (unlikely(__pyx_t_2 == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 22, __pyx_L1_error)
  }
  __pyx_v_Fz = (__pyx_t_1 / __pyx_t_2);
 23: 
+24:     planet.x +=dt*planet.vx
  __pyx_v_planet->x = (__pyx_v_planet->x + (__pyx_v_dt * __pyx_v_planet->vx));
+25:     planet.y += dt*planet.vy
  __pyx_v_planet->y = (__pyx_v_planet->y + (__pyx_v_dt * __pyx_v_planet->vy));
+26:     planet.z += dt*planet.vz
  __pyx_v_planet->z = (__pyx_v_planet->z + (__pyx_v_dt * __pyx_v_planet->vz));
 27: 
+28:     planet.vx += dt * Fx/planet.m
  __pyx_t_2 = (__pyx_v_dt * __pyx_v_Fx);
  if (unlikely(__pyx_v_planet->m == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 28, __pyx_L1_error)
  }
  __pyx_v_planet->vx = (__pyx_v_planet->vx + (__pyx_t_2 / __pyx_v_planet->m));
+29:     planet.vy += dt * Fy/planet.m
  __pyx_t_2 = (__pyx_v_dt * __pyx_v_Fy);
  if (unlikely(__pyx_v_planet->m == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 29, __pyx_L1_error)
  }
  __pyx_v_planet->vy = (__pyx_v_planet->vy + (__pyx_t_2 / __pyx_v_planet->m));
+30:     planet.vz += dt * Fz/planet.m
  __pyx_t_2 = (__pyx_v_dt * __pyx_v_Fz);
  if (unlikely(__pyx_v_planet->m == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 30, __pyx_L1_error)
  }
  __pyx_v_planet->vz = (__pyx_v_planet->vz + (__pyx_t_2 / __pyx_v_planet->m));
 31: 
+32: cdef  void step_time_c(Planet_c planet, double time_span, int n_steps):
static void __pyx_f_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_step_time_c(struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_planet, double __pyx_v_time_span, int __pyx_v_n_steps) {
  double __pyx_v_dt;
  CYTHON_UNUSED int __pyx_v_j;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("step_time_c", 0);
/* … */
  /* function exit code */
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_WriteUnraisable("_cython_magic_eb3f090329087d90753d048f20c7e7fd.step_time_c", __pyx_clineno, __pyx_lineno, __pyx_filename, 1, 0);
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
}
 33: 
+34:     dt = time_span / n_steps
  if (unlikely(__pyx_v_n_steps == 0)) {
    PyErr_SetString(PyExc_ZeroDivisionError, "float division");
    __PYX_ERR(0, 34, __pyx_L1_error)
  }
  __pyx_v_dt = (__pyx_v_time_span / ((double)__pyx_v_n_steps));
 35:     cdef int j
+36:     for j in range(n_steps):
  __pyx_t_1 = __pyx_v_n_steps;
  __pyx_t_2 = __pyx_t_1;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_j = __pyx_t_3;
+37:         single_step(planet,dt)
    __pyx_f_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_single_step(__pyx_v_planet, __pyx_v_dt);
  }
 38: 
+39: def main_c(iters = 1000000):
/* Python wrapper */
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_1main_c(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyMethodDef __pyx_mdef_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_1main_c = {"main_c", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_1main_c, METH_VARARGS|METH_KEYWORDS, 0};
static PyObject *__pyx_pw_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_1main_c(PyObject *__pyx_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_iters = 0;
  PyObject *__pyx_r = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("main_c (wrapper)", 0);
  {
    static PyObject **__pyx_pyargnames[] = {&__pyx_n_s_iters,0};
    PyObject* values[1] = {0};
    values[0] = ((PyObject *)__pyx_int_1000000);
    if (unlikely(__pyx_kwds)) {
      Py_ssize_t kw_args;
      const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
      switch (pos_args) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
      kw_args = PyDict_Size(__pyx_kwds);
      switch (pos_args) {
        case  0:
        if (kw_args > 0) {
          PyObject* value = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_iters);
          if (value) { values[0] = value; kw_args--; }
        }
      }
      if (unlikely(kw_args > 0)) {
        if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "main_c") < 0)) __PYX_ERR(0, 39, __pyx_L3_error)
      }
    } else {
      switch (PyTuple_GET_SIZE(__pyx_args)) {
        case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
        CYTHON_FALLTHROUGH;
        case  0: break;
        default: goto __pyx_L5_argtuple_error;
      }
    }
    __pyx_v_iters = values[0];
  }
  goto __pyx_L4_argument_unpacking_done;
  __pyx_L5_argtuple_error:;
  __Pyx_RaiseArgtupleInvalid("main_c", 0, 0, 1, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 39, __pyx_L3_error)
  __pyx_L3_error:;
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.main_c", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __Pyx_RefNannyFinishContext();
  return NULL;
  __pyx_L4_argument_unpacking_done:;
  __pyx_r = __pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_main_c(__pyx_self, __pyx_v_iters);
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;

  /* function exit code */
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_pf_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_main_c(CYTHON_UNUSED PyObject *__pyx_self, PyObject *__pyx_v_iters) {
  struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *__pyx_v_miPlanet = NULL;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("main_c", 0);
/* … */
  /* function exit code */
  __pyx_r = Py_None; __Pyx_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_1);
  __Pyx_AddTraceback("_cython_magic_eb3f090329087d90753d048f20c7e7fd.main_c", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __pyx_L0:;
  __Pyx_XDECREF((PyObject *)__pyx_v_miPlanet);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
/* … */
  __pyx_tuple__2 = PyTuple_Pack(2, __pyx_n_s_iters, __pyx_n_s_miPlanet); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);
/* … */
  __pyx_t_1 = PyCFunction_NewEx(&__pyx_mdef_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_1main_c, NULL, __pyx_n_s_cython_magic_eb3f090329087d9075); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_main_c, __pyx_t_1) < 0) __PYX_ERR(0, 39, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
  __pyx_codeobj__3 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED|CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__2, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_C_Users_Weriko_ipython_cython__c, __pyx_n_s_main_c, 39, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__3)) __PYX_ERR(0, 39, __pyx_L1_error)
+40:  miPlanet = Planet_c()
  __pyx_t_1 = __Pyx_PyObject_CallNoArg(((PyObject *)__pyx_ptype_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 40, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_1);
  __pyx_v_miPlanet = ((struct __pyx_obj_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_Planet_c *)__pyx_t_1);
  __pyx_t_1 = 0;
+41:  step_time_c(miPlanet,5000,iters)
  __pyx_t_2 = __Pyx_PyInt_As_int(__pyx_v_iters); if (unlikely((__pyx_t_2 == (int)-1) && PyErr_Occurred())) __PYX_ERR(0, 41, __pyx_L1_error)
  __pyx_f_46_cython_magic_eb3f090329087d90753d048f20c7e7fd_step_time_c(__pyx_v_miPlanet, 5000.0, __pyx_t_2);
