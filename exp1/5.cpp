#include <iostream>

using namespace std;

class cylinder
{
		public:
				cylinder(float cradius, float cheight) {
						radius = cradius;
						height = cheight;
				};
				float area() {
						float farea = (2 * 3.14 * radius * radius) + (2 * 2.14 * radius + height);
						return farea;
				};

				float volume() {
						float fvolume = 2 * 3.14 * radius *radius * height;
						return fvolume;
				};
		private:
				float radius,  height;
};

int main(void) {
		cylinder cy1(1,1);
		float area = cy1.area();
		float volume = cy1.volume();
		cout << "area = " << area << "\n" << "volume = " << volume << endl;
		return 0;
}

