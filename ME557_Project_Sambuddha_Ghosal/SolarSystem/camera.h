// Sambuddha Ghosal ME 557 Project

#ifndef SAM_CAMERA_H
#define SAM_CAMERA_H

class Camera
{
private:
	// a vector pointing in the direction you are facing
	float forwardVec[3];

	// a vector pointing to the right of where your facing
	float rightVec[3];

	// a vector pointing upwards from where youre facing
	float upVec[3];

	// a vector describing the position of the camera
	float position[3];

	// the camera speed
	float cameraSpeed;
	float cameraTurnSpeed;

public:
	Camera(void);

	// transform the opengl view matrix for the orientation
	void transformOrientation(void);

	// transform the opoengl view matrix for the translation
	void transformTranslation(void);

	// points the camera at the given point in 3d space
	void pointAt(float* targetVec);

	// speed up the camera speed
	void speedUp(void);

	// slow down the camera speed
	void slowDown(void);

	// move the camera forward
	void forward(void);

	// strafe left
	void left(void);

	// strafe right
	void right(void);

	// move the camera backward
	void backward(void);

	// roll the camera to the right
	void rollRight(void);

	// roll the camera to the left
	void rollLeft(void);

	// pitch the camera up
	void pitchUp(void);

	// pitch the camera down
	void pitchDown(void);

	// yaw left
	void yawLeft(void);

	// yaw right
	void yawRight(void);
};

#endif