//nonosirve.ino

int led = 13,r,r2,r3,vsd,vid,vsi,vii;
int dar=6,dab=7,iar=8,iab=9;


void setup() {
Serial.begin(9600);
}



void loop() {
	Serial.println(analogRead(iab));
/*		vsd=map(analogRead(dar),586,943,0,90);
		vid=map(analogRead(dab),178,537,0,90);
		vsi=map(analogRead(iar),522,852,0,90);
		vii=map(analogRead(iab),199,949,0,90);
		/*
		Serial.print(analogRead(dar));
		Serial.print("-");
		Serial.print(analogRead(dab));
		Serial.print("-");
		Serial.print(analogRead(iar));
		Serial.print("-");
		Serial.println(analogRead(iab));
		*/
		//Serial.print(analogRead(iar));
		//Serial.print(" - ");
		//Serial.println(analogRead(iab));
		/*
		Serial.print(dar);
		Serial.print("-");
		Serial.print(dab);
		Serial.print("-");
		Serial.print(iar);
		Serial.print("-");
		Serial.println(iab);
		*/
/*
Serial.print(vsd);
Serial.print("-");
Serial.print(vid);
Serial.print("-");
Serial.print(vsi);
Serial.print("-");
Serial.println(vii);
*/
delay(500);
}

