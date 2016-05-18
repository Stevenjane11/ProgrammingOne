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
