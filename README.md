# ---------------------- Sound Level Sensor ----------------------
Sound level meter project made by MengqiYu. Feb.2018

This project uses a Raspberry Pi 3 Mode B as a sound sensor. A USB sound card
with microphone and a RJ45 cable are needed as peripheral. The application runs
periodically every second and take record from microphone at a sample rate of
16000 Hz. The sound is then calculated into 80 pieces of RMS value and displayed
as a bar chart on terminal screen. If communication is enabled (conditional
compilation), the sound will be re-calculated in to 8 pieces of Fast Level data
and sent out to a PHP server program.

List of Contents
1. Configuration instructions
2. Installation instructions
3. Operation instructions
4. File manifest
5. Copyright and license
6. Contact information

1. Configuration instructions
  #Software:
           *Putty，a free and open-source terminal emulator, serial console and network file transfer application.
	   
  #Hardware:
           *Raspberry Pi,a series of small single-board computers developed in the United Kingdom by the Raspberry Pi Foundation to promote the teaching of basic computer science in schools and in developing countries.
           
	   *A USB line, which connects the power.
           
	   *A Internet cable.
           
	   *A sound card,which provides input and output of audio signals to and from a computer under control of computer programs.
           
	   *A microphone.
	   
2. Installation instructions

	(1.Connect the Raspberry Pi to Enternet by useing the Internet cable.

	(2.Connect the sound card to the Raspberry Pi and connect the microphone to the sound card.
  
  	(3.Connect the Raspberry Pi to the computer by useing the USB line,which provides the power. 
	
3. Operation instructions
  	(1.Open the puttey and check your IP address from your email.
  
 	(2.log in.
  
 	(3.Open the devapp file to run the program.(you can operate application by typing "./sound.a")
  
  	(4.There are many vertical bars on the screen.
  
  	(5.If you open the public_html file,you can see a text named "sound_log",which reconds your sound level(U:\public_html)
	
4. File manifest
	comm.c comm.h main.c makefile README.md README.txt screen.c screen.h sound.c sound.h
	
5. Copyright and license
  This program is made by MengqiYu,e1700696.
  You can use this program to detect and record your sound level.It is free.
  
6. Contact information
	Email:e1700696@edu.vamk.fi


MengqiYu
Dept. of Information Technology
Vaasa University of Applied Sciences
Woffintie 30, 65100, Vaasa, Finland
page: www.cc.puv.fi/~e1700696
email:e1700696@edu.vamk.fi
