#Arduino Intrusion  Detection system with mail alert.
Connect the arduino with a pir sensor, buzzer and an led light. \n
//Schematic diagram will be uploaded soon.\n
The arduino is connected to the laptop with internet connectivity.
(thus avoiding the need for an ethernet shild or wifi shield and reducing costs)
The python script is run and kept running till whatever time you require detection.
The python scrpt reads from the serial port whihc the Arduino sends messages to.\n
On detectoin of intrusion the python script sends the mail using smtp to whichever mail ID required.

