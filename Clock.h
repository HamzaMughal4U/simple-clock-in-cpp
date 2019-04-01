#ifndef Clock_H
#define Clock_H

class Clock {
	private:
		std::time_t t = std::time(0);
		std::tm* now = std::localtime(&t);
		unsigned int hour; // for storing the current hour
		unsigned int min; // mins
		unsigned int sec; // sec
		unsigned int hourToDisplay; // to show hour in 12 hour format
		std::string period; // display AM / PM
	
		void setTime () {
			// setting the values
			hour = now->tm_hour;
			min = now->tm_min;
			sec = now->tm_sec;
			hourToDisplay = hour > 12 ? hour - 12 : hour;
			period = hour > 12 ? "PM" : "AM";
		}
		
		void clear () { system("cls"); } // system("clear"); for macos x and linux
		
		void Round (auto param, bool last) {
			// rounding the time values
			std::cout << std::setfill('0') << std::setw(2);
			std::cout << param;
			if ( !last ) std::cout << ":";
		}
		
		void start () {
			// setTime from this class
			setTime();
			
			Round(hourToDisplay, false);
			Round(min, false);
			Round(sec, true);
			std::cout << " " + period;
			
			clear();
		}
	
	public:
		Clock () { start(); } // starting the clock
};

#endif
