You can inspect the pcap file using Wireshark. Previous packet captures such as deauth_and_handshake.pcapng contains malformed EAPOL packets. wpa2.eapol.pcap contains correctly formed EAPOL packets.

aircrack-ng interprets EAPOL packet key data and uses a dictionary attack to decipher the pre-shared key (PSK).
The EAPOL packets are captured when a client tries to connect to an AP.

The key is only cracked if it is contained in the wordlist. For this solution we can use the rockyou.txt wordlist. The following is used to crack the key:

aircrack-ng -a2 -w /usr/share/wordlists/rockyou.txt wpa2.eapol.cap

-a2 = wpa2
-w = wordlist
wpa.eapol.cap = targetted packet capture
