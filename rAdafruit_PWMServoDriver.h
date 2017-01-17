#pragma once
#include "B4RDefines.h"
#include "Adafruit_PWMServoDriver.h"
//~version: 1.00
namespace B4R {
	//~shortname: Adafruit_PWMServoDriver
	class B4RAdafruit_PWMServoDriver {
		private:
			uint8_t beAdafruit_PWMServoDriver[sizeof(Adafruit_PWMServoDriver)];
			Adafruit_PWMServoDriver* driver;
		public:
			void Initialize(Byte Address);
			void Reset();
			void SetPWMFreq(Double freq);
			void SetPWM(Byte Num, UInt On, UInt Off);
			void SetPin(Byte Num, UInt Val, bool Invert);
			
	};
}