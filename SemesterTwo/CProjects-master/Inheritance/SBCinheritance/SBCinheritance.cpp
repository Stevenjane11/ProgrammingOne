//Sam Cookson
#include <iostream>

using namespace std;

class Food {
	public:
		void getCalories(int c) {
			calories = c;
		} 
		void getServings(int s) {
			servings = s;
		}
		void getExcercise(double e) {
			excercise = e;
		}
	protected:
		int calories;
		int servings;
		double excercise;
};

class foodItem : public Food {
	public:
		int totalCalories() {
			return (calories * servings);
		}
};

class excerciseTime : public Food {
	public:
		double excerciseLength() {
			return (excercise * 90);
		}
};

int main() {
	foodItem item;
	excerciseTime exc;
	
	int cal;
	int serv;
	double excercise;
	
	cout << "How many calories are in your food item?: ";
	cin >> cal;
	cout << "How many servings of your food did you eat?: ";
	cin >> serv;
	
	item.getCalories(cal);
	item.getServings(serv);

	cout << "Total calories: " << item.totalCalories() << "\n\n" << endl;
	
	
	cout << "How long in hours did you excersise?: (1 hour = 1; 30 minutes = .5): ";
	cin >> excercise;
	exc.getExcercise(excercise);
	
	cout << "Total calories burned: " << exc.excerciseLength() << endl;

	return 0;
}
