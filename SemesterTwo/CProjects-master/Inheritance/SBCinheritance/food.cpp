class foodItem : public Food {
	public:
		int totalCalories() {
			return (calories * servings);
		}
};
