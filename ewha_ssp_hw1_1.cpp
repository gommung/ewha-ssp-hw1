/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by CHEARYUNG ,HUH
 * Mar 23, 2016
 *
 */

// Add #define pre-processor below

 
void setup() {
  //Add your code of Lab Assignment #1
  pinMode(Front_LED,OUTPUT);
pinMode(Back_LED,OUTPUT);

}

void loop() {
  //Add your code of Lab Assignment #1  
  for(i=0;i<=225;i++){
	analogWrite(Front_LED,i);
	analogWrite(Back_LED,255-i);
    delay(11);
}
for(i=0;i<=225;i++){
	analogWrite(Front_LED,255-i);
	analogWrite(Back_LED,i);
    delay(11);
}

}
