// Define the pin numbers
const int buttonPin = 2;  // Pin connected to the push button
const int ledPin = 13;     // Pin connected to the built-in LED

// Variable to store the button state
int buttonState = 0;       // Variable to hold the current button state

void setup() {
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT); // Set the button pin as input

  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);   // Set the LED pin as output
}

void loop() {
  // Read the state of the push button
  buttonState = digitalRead(buttonPin); // Read the button state

  // Check if the button is pressed
  if (buttonState == HIGH) { // Button is pressed (HIGH because of pull-down)
    digitalWrite(ledPin, HIGH); // Turn the LED on
  } else {
    digitalWrite(ledPin, LOW);  // Turn the LED off
  }

  // Small delay to debounce the button (optional)
  delay(50); // 50 ms delay for button debounce
}



