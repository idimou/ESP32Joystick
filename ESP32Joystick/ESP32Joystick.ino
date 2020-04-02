/*
 Name:		ESP32Joystick.ino
 Created:	1/3/2020 6:11:23 PM
 Author:	idimou
*/

#// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. 

//#include <NetBIOS.h>
#include <EEPROM.h>
//#include <WiFi.h>
//#include "AzureIotHu/*b.h"
//#include "Esp32MQTTC*/lient.h"

#define INTERVAL 10000
//#define DEVICE_ID "jLOLIN32"
//#define MESSAGE_MAX_LEN 256

#define XAxis_PIN 13
#define YAxis_PIN 12
#define JoyStickButton_PIN 14

#define SERVO_PIN 15


// Please input the SSID and password of WiFi
//const char* ssid = "io";
//const char* password = "ahahouhanostromo1976";

/*String containing Hostname, Device Id & Device Key in the format:                         */
/*  "HostName=<host_name>;DeviceId=<device_id>;SharedAccessKey=<device_key>"                */
/*  "HostName=<host_name>;DeviceId=<device_id>;SharedAccessSignature=<device_sas_token>"    */
//static const char* connectionString = "HostName=DLISIoTHub.azure-devices.net;DeviceId=jLOLIN32;SharedAccessKey=mF701pBWeWgbgMKi1qt7rrBEuUgxx5hlUxv/oz7fU9A=";
//static bool hasIoTHub = false;
//
//const char* messageData = "{\"deviceId\":\"%s\", \"messageId\":%d, \"Temperature\":%f, \"Humidity\":%f}";
//
//int messageCount = 1;
//static bool hasWifi = false;
//static bool messageSending = true;
//static uint64_t send_interval_ms;

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Utilities

//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Arduino sketch
void setup()
{
    Serial.begin(115200);
    Serial.println("ESP32 Device");
    Serial.println("Initializing...");
 
    randomSeed(analogRead(0)); 

    // blink led
    pinMode(SERVO_PIN, OUTPUT);
    pinMode(XAxis_PIN, INPUT);
    pinMode(YAxis_PIN, INPUT);
    pinMode(JoyStickButton_PIN, INPUT);

}

void loop()
{
    delay(100);

    int Xdisplacement= digitalRead(XAxis_PIN);
    int Ydisplacement= digitalRead(YAxis_PIN);
    Serial.print(Ydisplacement, DEC);
    Serial.printf("  ");
    Serial.println(Xdisplacement,DEC);
    //digitalWrite(LED_PIN, HIGH);     //pin HIGH = led OFF)
    //digitalWrite(LASER_PIN, HIGH);  //pin LOW = laser ON
    //delay(100);
    //digitalWrite(LED_PIN, LOW);   // (pin LOW = led ON)
    //digitalWrite(LASER_PIN, LOW);  // (pin LOW = laser OFF)
}
