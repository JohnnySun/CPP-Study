#include <iostream>

using namespace std;

class Time		//声明Time类
{
		public:
				Time( int Thour= 0, int Tminute = 0, int Tsecond = 0 ){
						hour = Thour;
						minute = Tminute;
						second = Tsecond;
				};
				// set functions
				void setTime( int Thour, int Tminute, int Tsecond){
						hour = Thour;
						minute = Tminute;
						second = Tsecond;
				};
				void setHour( int Thour){		// 设置hour (确保数据在合理范围)
						hour = Thour;
				};
				void setMinute( int Tminute){			// 设置minute (确保数据在合理范围)
						minute = Tminute;
				};
				void setSecond( int Tsecond){			// 设置second (确保数据在合理范围)
						second = Tsecond;
				};

				// get functions
				int getHour(){		// 返回 hour
						return hour;
				};
				int getMinute(){	// 返回 minute
						return minute;
				};
				int getSecond(){	// 返回 second
						return second;
				};
				void printUniversal();	// 按24小时格式输出时间：23:56:12     
				void printStandard();	// 按12小时格式输出时间：11:56:12 (PM)
		private:
				int hour;	// 0 - 23 (24小时格式)
				int minute; // 0 - 59
				int second; // 0 - 59
};
