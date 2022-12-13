// ===--- App.h -------------------------------------------------- C++ ---=== //
//                                                                            //
// © 2022, Michael Bykov, Ben Swanzey, Philip Rickey                          //
//                                                                            //
// ===--------------------------------------------------------------------=== //
//                                                                            //
// The interface for the application driver.                                  //
//                                                                            //
// ===--------------------------------------------------------------------=== //

#pragma once
#include <Common.h>

START_NAMESPACE_WX_WIDGETS_EXAMPLE



/// The main application.
class App : public wxApp {
public:
  virtual bool OnInit();
};



END_NAMESPACE_WX_WIDGETS_EXAMPLE
