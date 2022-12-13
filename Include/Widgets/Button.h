// ===--- Button.h ----------------------------------------------- C++ ---=== //
//                                                                            //
// © 2022, Michael Bykov, Ben Swanzey, Philip Rickey                          //
//                                                                            //
// ===--------------------------------------------------------------------=== //
//                                                                            //
// The interface for a basic button widget.                                   //
//                                                                            //
// ===--------------------------------------------------------------------=== //

#pragma once
#include <Common.h>
#include <wx/button.h>

START_NAMESPACE_WX_WIDGETS_EXAMPLE



/// A basic button widget.
class Button: public wxButton {
public:
  Button(
    const wxString &title  ,
    const wxPoint  &postion,
    const wxSize   &size
  );
  
private:
  void OnClick(
    wxCommandEvent &event
  );
};



END_NAMESPACE_WX_WIDGETS_EXAMPLE
