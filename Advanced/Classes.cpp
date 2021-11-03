// Classes are custom datatypes

// In my example I will use vex as it is easier to demonstrate their usefulness


class SmoothMotor
{
	// only internally accessable
	private:
		motor _motor;
		float speed = 0;

	// only externally accessable
	public:
		SmoothMotor(motor m) : _motor(m)
		{
			_motor = m;
		}
		float maxSpeed = 100;
		float acceleration = 20;
		float stoppingThreshold = 5;

		void Drive(float target)
		{

			float increaseBy = (target - speed) / acceleration;
			speed += increaseBy;

			if (floatWithin(speed, -stoppingThreshold, stoppingThreshold) && floatWithin(target, -stoppingThreshold, stoppingThreshold))
			{
				return Stop();
			}

			_motor.setVelocity(speed * (acceleration / 100), percent);
			_motor.spin(forward);
		}

		void Stop()
		{
			_motor.stop();
		}
};

SmoothMotor SmoothArm = SmoothMotor(Arm);

SmoothArm.Drive(50);
