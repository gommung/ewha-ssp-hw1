/*
 * ewha_ssp_hw1_1.cpp
 *
 * 37269-01 Smart Software Project
 * GitHub Setup Homework 
 * Instructor: Prof. HyungJune Lee
 *
 * Coded by chaeryung, HUH
 * Mar 23, 2016
 *
 */
#include "LED_test.h"
int Front_LED =10;
int Back_LED =9;
int i;


// Add #define pre-processor below

 
void setup() {
 pinMode(Front_LED,OUTPUT);
pinMode(Back_LED,OUTPUT);

}

void loop() {
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
