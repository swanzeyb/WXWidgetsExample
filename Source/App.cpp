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
#include <Widgets/Button.h>
USING_NAMESPACE_WX_WIDGETS_EXAMPLE



bool App::OnInit() {
  Frame *frame = new Frame("Hello World", wxPoint(50, 50), wxSize(450, 340));
  frame->Show(true);
  // Button *button = new Button("Click Me!", wxPoint(10, 10), wxSize(100, 32));
  // frame->AddChild(button);
  return true;
}

wxIMPLEMENT_APP(App);
