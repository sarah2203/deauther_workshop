# Install the Arduino IDE

Make sure you have the Arduino IDE installed. Go here:

https://www.arduino.cc/en/software

# Download Spacehuhn's code

We want to follow the installation steps in Spacehhn's wiki where we follow - installation compiling using the Arduino IDE.
Click the highlighted `Download` button.

https://github.com/spacehuhntech/esp8266_deauther/wiki/Installation#compiling-using-arduino-ide

Once this is downloaded, unzip the file and open the `ESP8266_deauther.ino` file. This will open in the Arduino IDE and should contain multiple tabs.

We might as well change the name of the AP we will be spinning up from `pwned` to `name of your choice`. (Please don't take me literally here.
The name of the AP is configured in `A_Config.h` which should be the second tab in, in the Arduino IDE.

# Configure the Arduino IDE

We want to setup the Arduino IDE to now work with our board. Add a boards manager URL under File > Preferences > Additional Boards Managers URL. 
The URL you want to enter is below.

https://raw.githubusercontent.com/SpacehuhnTech/arduino/main/package_spacehuhn_index.json

# Set up the board configuration

Go to the `Tools` tab in the Arduino IDE.
Go to `Boards` and then `Boards manager`.
Type in deauther and the boards package - Deauther ESP8266 Boards - should appear.

![image](https://user-images.githubusercontent.com/22979329/141211103-c3606b3d-b751-44e1-b773-c088449c21ca.png)

Install the package.


