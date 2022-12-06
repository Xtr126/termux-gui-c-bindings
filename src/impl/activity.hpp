#pragma once

#include "GUIProt0.pb.h"

#include <memory>

#include "connection.hpp"
#include "termuxgui/types.hpp"

namespace tgui::impl {
	
	class Activity {
		public:
		
		Activity(std::shared_ptr<Connection> c, proto0::NewActivityRequest::ActivityType type, bool interceptBackButton, Task task);
		
		
		
		void finish();
		
		
		proto0::Configuration getConfiguration();
		
		
		void hideSoftKeyboard();
		
		
		void interceptBackButton(bool intercept);
		
		
		void keepScreenOn(bool on);
		
		
		void moveToBack();
		
		
		void requestUnlock();
		
		
		
		void sendOverlayEvents(bool send);
		
		
		
		void setInputMode(proto0::SetInputModeRequest::InputMode m);
		
		
		
		
		void setOrientation(proto0::Orientation o);
		
		
		
		
		void setPiPMode(bool pip);
		
		
		
		
		void setPiPModeAuto(bool pipAuto);
		
		
		
		
		void setPiPParams(int numerator, int denominator);
		
		
		
		
		void setPosition(int x, int y);
		
		
		
		
		void setTaskDescription(std::string label, const void* img, size_t imgSize);
		
		
		
		void setTheme(Color primaryColor, Color accentColor, Color windowBackground, Color statusBarColor, Color textColor);
		
		
		
		
		AID aid() {
			return a;
		}
		
		Task tid() {
			return t;
		}
		
		
		private:
		Activity(const Activity& c) = delete;
		Activity(const Activity&& c) = delete;
		Activity& operator=(const Activity& c) = delete;
		Activity& operator=(const Activity&& c) = delete;
		Activity() = delete;
		
		
		std::shared_ptr<Connection> c;
		Task t;
		AID a;
		
	};
	
	
	
	
}


