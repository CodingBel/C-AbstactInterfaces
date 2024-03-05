#include<iostream>

class BMW {
public:
	virtual void moveCar() = 0;
	virtual void startCar() = 0;

	void left(int distance) {
		this->distance = distance;
	}

	void Angle(double angle) {
		this->angle = angle;
	}

protected:
	int distance{};
	double angle{};
};

class X6 : virtual public BMW {
public:
	void startCar() {
		this->startEngine = true;
	}
	void moveCar() {
		if (startEngine)
			std::cout << "Going left " << this->angle << " degrees for " << this->distance << " meters";
		else
			std::cout << "Start Engine first" << std::endl;
	}

private:
	bool startEngine{};
};

class X7 : public BMW {

};

int main() {
	X6 obj;
	obj.left(10);
	obj.Angle(3.5);

	obj.startCar();
	obj.moveCar();

	return 0;
}