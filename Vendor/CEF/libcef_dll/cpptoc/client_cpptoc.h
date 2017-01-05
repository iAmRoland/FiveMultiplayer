// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_CLIENT_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_CLIENT_CPPTOC_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include "include/cef_client.h"
#include "include/capi/cef_client_capi.h"
#include "libcef_dll/cpptoc/cpptoc.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed wrapper-side only.
class CefClientCppToC
    : public CefCppToC<CefClientCppToC, CefClient, cef_client_t> {
 public:
  CefClientCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_CLIENT_CPPTOC_H_
