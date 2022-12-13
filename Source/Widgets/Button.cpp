// ===--- Button.cpp --------------------------------------------- C++ ---=== //
//                                                                            //
// © 2022, Michael Bykov, Ben Swanzey, Philip Rickey                          //
//                                                                            //
// ===--------------------------------------------------------------------=== //
//                                                                            //
// The implementation of a basic button widget.                               //
//                                                                            //
// ===--------------------------------------------------------------------=== //

#include <Widgets/Button.h>
USING_NAMESPACE_WX_WIDGETS_EXAMPLE



Button::Button(
  const wxString &title   ,
  const wxPoint  &position,
  const wxSize   &size
) : wxButton(NULL, wxID_ANY, title, position, size) {
  Bind(wxEVT_COMMAND_LEFT_CLICK, &Button::OnClick, this);
}

void Button::OnClick(wxCommandEvent& event) {
  wxMessageBox(
    "This is a wxWidgets' Hello world sample",
    "About Hello World",
    wxOK | wxICON_INFORMATION
  );
}
