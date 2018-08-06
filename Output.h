#ifndef __BNO055_USB_STICK_MSGS_OUTPUT_H__
#define __BNO055_USB_STICK_MSGS_OUTPUT_H__

#define _WITHOUT_OPENFRAMEWORKS 1

#ifdef _WITHOUT_OPENFRAMEWORKS
#define _USE_MATH_DEFINES
#include <math.h>
#define PI M_PI

class ofVec3f {
public:
	double x, y, z;
};

class ofVec4f {
public:
	double x, y, z, w;
};

class ofQuaternion {
public:
	ofQuaternion() {}
	ofQuaternion(double _x, double _y, double _z, double _w) : x(_x), y(_y), z(_z), w(_w) {}
	double x, y, z, w;
};

#include <time.h>
typedef clock_t ofTime;

ofTime ofGetCurrentTime(){
	return clock();
}

#else
#include <ofMath.h>
#include <ofVec3f.h>
#include <ofVec4f.h>
#include <ofQuaternion.h>
#endif

namespace bno055_usb_stick_msgs {
	class Output {
	public:
		Output() {};

		class Header {
		public:
			ofTime stamp;
			std::string frame_id;
		} header;
		ofVec3f acceleration;
		ofVec3f magnetometer;
		ofVec3f gyroscope;
		ofVec3f euler_angles;
		ofQuaternion quaternion;
		ofVec3f linear_acceleration;
		ofVec3f gravity_vector;
		double temperature;
		ofVec4f calibration_status;
	};
};

#endif // __BNO055_USB_STICK_MSGS_OUTPUT_H__
