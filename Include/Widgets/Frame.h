// ===--- Frame.h ------------------------------------------------ C++ ---=== //
//                                                                            //
// © 2022, Michael Bykov, Ben Swanzey, Philip Rickey                          //
//                                                                            //
// ===--------------------------------------------------------------------=== //
//                                                                            //
// The interface for a basic frame widget.                                    //
//                                                                            //
// ===--------------------------------------------------------------------=== //

#pragma once
#include <Common.h>

START_NAMESPACE_WX_WIDGETS_EXAMPLE



/// A basic frame widget.
class Frame: public wxFrame {
public:
  Frame(
    const wxString &title  ,
    const wxPoint  &postion,
    const wxSize   &size
  );
  
private:
  void OnHello(
    wxCommandEvent &event
  );
  
  void OnExit(
    wxCommandEvent &event
  );
  
  void OnAbout(
    wxCommandEvent &event
  );
  
  wxDECLARE_EVENT_TABLE();
};



END_NAMESPACE_WX_WIDGETS_EXAMPLE
