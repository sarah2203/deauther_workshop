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

Choose the correct board settings. Go to `Tools` > `Board` and select the appropriate board from `Deauther ESP8266 Boards`.

Select the upload speed (baud rate).

Select the flash size.

Select the `Erase all flash contents`. This is so anything flashed previously is deleted. Nothing can then mess with our flasing.

Select the deauther config.

An example config for the Wemos D1 Mini boards has been outlined below.

![image](https://user-images.githubusercontent.com/22979329/141307640-289fc1af-d259-4581-825b-535a16ddba3b.png)

This only changes slightly for the NodeMCU boards.

![image](https://user-images.githubusercontent.com/22979329/141307989-aeff61ba-3b53-41a4-93f6-55698b8cdcd1.png)

The Port should become available once the board has been plugged in. If it does not show after plugging the board into your laptop, then you may have issues with your drivers. More information on this can be found under the troubleshooting heading.

# Verifying and Uploading the Code

Once everything has been set-up, you can verify that the code you have opened compiles correctly. Select the tick and hope that it does not error...

![image](https://user-images.githubusercontent.com/22979329/141375355-c8c14413-770e-4f6a-a75f-498adc65c94d.png)

If everything compiles correctly continue to upload the code to the board.
  
![image](https://user-images.githubusercontent.com/22979329/141375423-40a50ba6-99fe-4291-9c18-79b8d5d7ec36.png)
  
This should work automatically. However, if not speak to Sarah or check the Troubleshooting heading.

Once all is flashed successfully you should be able to see if in your Wi-Fi listings.
Select the AP and connect. Authenticate with the password `deauther`.
Once connected, go to the IP `192.168.4.1`. This is the default IP for APs in Arduino IDE. You should see Spacehuhn's awesome code!
(Make sure your board is still plugged in after flashing)


# Troubleshooting

Errors I have seen:

Python errors may mean you need to update your Python package to python 3 below is an example

`fork/exec /Users/seb/Library/Arduino15/packages/deauther/tools/python3/3.7.2-post1/python3: no such file or directory
Error compiling for board NodeMCU.`

Other errors may mean you are missing drivers. This snippet is stolen from Spacehuhn:

If none of the COM ports work correctly or you can't find any COM Port, you might need to install the drivers.
The driver you need depends on the UART (USB to Serial) chip that is used on your development board.
Those are the drivers of the most used chips:

💾 CP2102 - https://www.silabs.com/developers/usb-to-uart-bridge-vcp-drivers

💾 CH340 - https://sparks.gogo.co.nz/ch340.html

