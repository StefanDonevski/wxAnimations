#pragma once

#include <wx/wx.h>
#include "animator.h"
#include "animatedvalue.h"

#include "chartcontrol.h"

class MainFrame : public wxFrame
{
public: 
	MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

private:
	wxPanel* item;

	wxButton* startButton;
	wxButton* resetButton;

	Animator animator;
	std::vector<AnimatedValue> animatedValues;

	std::vector<ChartControl*> charts;

	void SetupAnimations();
	void SetupCharts();
};

