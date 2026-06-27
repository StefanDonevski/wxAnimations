#include <wx/wx.h>
#include "MainFrame.h"

class App : public wxApp
{
	virtual bool OnInit()
	{
		MainFrame* frame = new MainFrame("wxAnimations", wxDefaultPosition, wxDefaultSize);
		frame->Show(true);
		return true;
	}
};

wxIMPLEMENT_APP(App);