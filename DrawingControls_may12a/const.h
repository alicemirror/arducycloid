/*
 * Headers definitions of the program
 */

// ======================== RGB LED =====================
// RGB LED control pins. Accordingly with the MKR 1000 pinout the
// contorl pins should be PWM output to create a single-led 
// NeoPixel-like colour shading
#define REDPIN A3
#define GREENPIN 4
#define BLUEPIN 5
#define RGBLED_OFF 0    // PWM value to set the LED off
#define RGB_MIN 1       // Absolute min PWM value for LED glowing
#define RGB_MAX 64     // Absolute max PWM value for LED glowing
#define RGB_MID 32     // Mid PWMlight value
#define RGB_UP 1
#define RGB_DOWN -1

// ======================== MOTORS DRIVER ===============
// The motors driver is an L298N board controller. As I am using
// two DC motors, a single bridge board is sufficient to manage
// both independently. The four motors power signals should be
// just a digital ouput while every motor speed is controlled by
// the corresponding Enable pin connected to a PWM digital output
#define ENABLE_MOTOR_A 2  // Enable signal (PWM)
#define ENABLE_MOTOR_B 3  // Enable signal (PWM)
#define MOTOR_A1 6        // Motor control line
#define MOTOR_A2 7        // Motor control line
#define MOTOR_B1 8        // Motor control line
#define MOTOR_B2 9        // Motor control line

// Motor direcitons. A tri=-state flag controlled by the cloud
#define DIRECITON_CLOCKWISE 0
#define DIRECTION_COUNTERCLOCWISE 1
#define DIRECTION_OPPOSITE 2

#define MOTOR_CLOCKWISE 0
#define MOTOR_COUNTERCLOCKWISE 1
#define MOTOR_STOPPED 0     /// PWM value to stop a motor
