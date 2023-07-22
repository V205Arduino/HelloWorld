/*
  BasicSerial.ino
  By V205

  A simple program that prints to the serial monitor.

  Instructions:

  Upload this program using the Arduino IDE.
  Open the serial monitor.
  Set the baud rate to 115200.
*/

unsigned long loops = 0; // Create variable.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); // Begin serial comunication.
  delay(1000);// wait one second
  Serial.println(F("STARTING " __FILE__ " from " __DATE__ __TIME__)); // print file name
  Serial.println("Hello World!"); // Hello World!

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Hello world! Loops:"); // Random serial print
  Serial.println(loops); // print loops Set next line to newline.
  delay(1000); // Wait one second. so the program does not go rocketing of.
  loops++; // increment loops by one each loop.

}
