
// -*- C++ -*-
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl TransientLocalMultiInstanceTest
// ------------------------------
#ifndef TRANSIENTLOCALMULTIINSTANCETEST_EXPORT_H
#define TRANSIENTLOCALMULTIINSTANCETEST_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL)
#  define TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL */

#if !defined (TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL)
#  define TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL 1
#endif /* ! TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL */

#if defined (TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL) && (TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL == 1)
#  if defined (TRANSIENTLOCALMULTIINSTANCETEST_BUILD_DLL)
#    define TransientLocalMultiInstanceTest_Export ACE_Proper_Export_Flag
#    define TRANSIENTLOCALMULTIINSTANCETEST_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TRANSIENTLOCALMULTIINSTANCETEST_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TRANSIENTLOCALMULTIINSTANCETEST_BUILD_DLL */
#    define TransientLocalMultiInstanceTest_Export ACE_Proper_Import_Flag
#    define TRANSIENTLOCALMULTIINSTANCETEST_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TRANSIENTLOCALMULTIINSTANCETEST_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TRANSIENTLOCALMULTIINSTANCETEST_BUILD_DLL */
#else /* TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL == 1 */
#  define TransientLocalMultiInstanceTest_Export
#  define TRANSIENTLOCALMULTIINSTANCETEST_SINGLETON_DECLARATION(T)
#  define TRANSIENTLOCALMULTIINSTANCETEST_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TRANSIENTLOCALMULTIINSTANCETEST_HAS_DLL == 1 */

// Set TRANSIENTLOCALMULTIINSTANCETEST_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (TRANSIENTLOCALMULTIINSTANCETEST_NTRACE)
#  if (ACE_NTRACE == 1)
#    define TRANSIENTLOCALMULTIINSTANCETEST_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define TRANSIENTLOCALMULTIINSTANCETEST_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !TRANSIENTLOCALMULTIINSTANCETEST_NTRACE */

#if (TRANSIENTLOCALMULTIINSTANCETEST_NTRACE == 1)
#  define TRANSIENTLOCALMULTIINSTANCETEST_TRACE(X)
#else /* (TRANSIENTLOCALMULTIINSTANCETEST_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define TRANSIENTLOCALMULTIINSTANCETEST_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (TRANSIENTLOCALMULTIINSTANCETEST_NTRACE == 1) */

#endif /* TRANSIENTLOCALMULTIINSTANCETEST_EXPORT_H */

// End of auto generated file.
