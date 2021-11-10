In order to filter our deauthentication frames you need to add the following filter in Wireshark.

(wlan.fc.type == 0)&&(wlan.fc.type_subtype == 0x0c)

The frame control type == 0 indicates a management frame.
The frame control subtype == 0x0c indicates a deauthentication frame.
