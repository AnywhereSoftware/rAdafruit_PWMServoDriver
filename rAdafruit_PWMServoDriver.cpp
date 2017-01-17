#include "B4RDefines.h"
namespace B4R {
	void B4RAdafruit_PWMServoDriver::Initialize(Byte Address) {
		driver = new (beAdafruit_PWMServoDriver) Adafruit_PWMServoDriver(Address);
		driver->begin();
	}
	void B4RAdafruit_PWMServoDriver::Reset() {
		driver->reset();
	}
	void B4RAdafruit_PWMServoDriver::SetPWMFreq(Double freq) {
		driver->setPWMFreq(freq);
	}
	void B4RAdafruit_PWMServoDriver::SetPWM(Byte Num, UInt On, UInt Off) {
		driver->setPWM(Num, On, Off);
	}
	void B4RAdafruit_PWMServoDriver::SetPin(Byte Num, UInt Val, bool Invert) {
		driver->setPin(Num, Val, Invert);
	}
}