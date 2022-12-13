// ===--- App.cpp ------------------------------------------------ C++ ---=== //
//                                                                            //
// © 2022, Michael Bykov, Ben Swanzey, Philip Rickey                          //
//                                                                            //
// ===--------------------------------------------------------------------=== //
//                                                                            //
// The implementation of the application driver.                              //
//                                                                            //
// ===--------------------------------------------------------------------=== //

#include <App.h>
#include <Widgets/Frame.h>
USING_NAMESPACE_WX_WIDGETS_EXAMPLE



bool App::OnInit() {
  Frame *frame = new Frame("Hello World", wxPoint(50, 50), wxSize(450, 340));
  frame->Show(true);
  return true;
}

wxIMPLEMENT_APP(App);
