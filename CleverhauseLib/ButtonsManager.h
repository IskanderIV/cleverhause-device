// ButtonsManager.h
// (c) Ivanov Aleksandr, 2018

#ifndef _ButtonsManager_H_
#define _ButtonsManager_H_

//#define DEBUG // Defined to reduce code size. Disable all debugging!

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

enum ButtonPin {
	btn_menu = 18,
	btn_left = 41,
	btn_right = 39,
	btn_up = 37,
	btn_down = 35,
	btn_select = 33
};

class ButtonsManager
{
public:
	ButtonsManager();
	~ButtonsManager();
	
	ButtonPin* processButtons();
	void createButton(ButtonPin _btnPin, boolean _hasFicsation);
	int getButtonsCount();
	
private:
	class Button;
	ButtonPin* _pushedBtnCodeList;
	Button* _buttonsList;
	Button* _lastButton;
	int _buttonsCount;	
	
	class Button
	{
	public:
		Button(ButtonPin _btnPin, boolean _hasFicsation);
		~Button();
				
		boolean isPushed();
		int getCode();
		Button* getPrev();
		void setPrev(Button* _button);
		Button* getNext();
		void setNext(Button* _button);
		
	private:
		Button* _prev;
		Button* _next;
		ButtonPin _code;
		boolean _btnPushed;
		boolean _firstrFrontFix;
		boolean _firstrFrontPeak;
		boolean _hasFixation;
	};
};

#endif