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
