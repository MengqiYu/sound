// this file contains the main function of the program
#include <stdio.h>
#include <stdlib.h>
#include "sound.h"
#include <signal.h>
#include "screen.h"
int main(void){
	int ret;
	while(1){ //loop runs forever
		//record 1 sec of sound into test.wav
		ret = system("arecord -q -r16000 -c1 -f S16_LE -d1 test.wav");
		if(WIFSIGNALED(ret) && (WTERMSIG(ret)==SIGINT))break;
		//open the wav file and read samples
		//display necessary information (duration,wav header etc)
		displayWAVheader("test.wav");

		//calculate fast dBs
		displayBar("test.wav");
		//send fast dBs to web (php program on www.cc.puv.fi)

	}
	return 0;
}
