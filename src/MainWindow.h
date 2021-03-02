#ifndef MAINWINDOW_H 
#define MAINWINDOW_H


#include <Window.h>

class BButton;
class BGroupView;
class BStatusBar;
class BTabView;
class EntriesView;
class FeedsView;
class UpdatesView;


class MainWindow : public BWindow {
public:
	MainWindow();

	void MessageReceived(BMessage*);

private:
	void _InitInterface();

	void _UpdateProgress(int32 total, int32 current);

	BGroupView*		fBaseView;
	BTabView*		fTabView;
	EntriesView*	fEntriesView;
	FeedsView*		fFeedsView;
	UpdatesView*	fUpdatesView;

	BStatusBar*		fStatusBar;
	BButton*		fUpdateNowButton;
};


#endif // MAINWINDOW_H

