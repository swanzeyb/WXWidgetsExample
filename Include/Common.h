// ===--- Common.h ----------------------------------------------- C++ ---=== //
//                                                                            //
// © 2022, Michael Bykov, Ben Swanzey, Philip Rickey                          //
//                                                                            //
// ===--------------------------------------------------------------------=== //
//                                                                            //
// A set of common macros.                                                    //
//                                                                            //
// ===--------------------------------------------------------------------=== //

#pragma once

// Include wxWidgets
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#  include <wx/wx.h>
#endif



// Namespace macros
#define START_NAMESPACE_WX_WIDGETS_EXAMPLE \
  namespace WxWidgetsExample {

#define END_NAMESPACE_WX_WIDGETS_EXAMPLE \
  }

#define USING_NAMESPACE_WX_WIDGETS_EXAMPLE \
  using namespace WxWidgetsExample;
