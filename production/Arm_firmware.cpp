#include <Arduino.h>

#define GLOBAL_ENABLE_PIN  PA3
#define STEP1_PIN          PC6
#define DIR1_PIN           PB15
#define CS1_PIN            PC7
#define STEP2_PIN          PC5
#define DIR2_PIN           PB1
#define CS2_PIN            PC4
#define STEP3_PIN          PC9
#define DIR3_PIN           PA8
#define CS3_PIN            PC8
#define STEP4_PIN          PC3
#define DIR4_PIN           PA0
#define CS4_PIN            PC2
#define STEP5_PIN          PA10
#define DIR5_PIN           PA1
#define CS5_PIN            PA9
#define STEP6_PIN          PC0
#define DIR6_PIN           PC1
#define CS6_PIN            PC15

#define LED_BLUE           PB2
#define LED_RED            PB10
#define ESTOP_PIN          PB14
#define SUPPLY_ON_OFF      PC10

void setup() {
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  
  pinMode(SUPPLY_ON_OFF, OUTPUT);
  digitalWrite(SUPPLY_ON_OFF, HIGH); 

  pinMode(ESTOP_PIN, INPUT_PULLUP);

  pinMode(GLOBAL_ENABLE_PIN, OUTPUT);
  
  pinMode(STEP1_PIN, OUTPUT); pinMode(DIR1_PIN, OUTPUT); pinMode(CS1_PIN, OUTPUT);
  pinMode(STEP2_PIN, OUTPUT); pinMode(DIR2_PIN, OUTPUT); pinMode(CS2_PIN, OUTPUT);
  pinMode(STEP3_PIN, OUTPUT); pinMode(DIR3_PIN, OUTPUT); pinMode(CS3_PIN, OUTPUT);
  pinMode(STEP4_PIN, OUTPUT); pinMode(DIR4_PIN, OUTPUT); pinMode(CS4_PIN, OUTPUT);
  pinMode(STEP5_PIN, OUTPUT); pinMode(DIR5_PIN, OUTPUT); pinMode(CS5_PIN, OUTPUT);
  pinMode(STEP6_PIN, OUTPUT); pinMode(DIR6_PIN, OUTPUT); pinMode(CS6_PIN, OUTPUT);

  digitalWrite(CS1_PIN, HIGH); digitalWrite(CS2_PIN, HIGH);
  digitalWrite(CS3_PIN, HIGH); digitalWrite(CS4_PIN, HIGH);
  digitalWrite(CS5_PIN, HIGH); digitalWrite(CS6_PIN, HIGH);

  digitalWrite(GLOBAL_ENABLE_PIN, LOW);
}

void loop() {
  if (digitalRead(ESTOP_PIN) == LOW) {
    digitalWrite(GLOBAL_ENABLE_PIN, HIGH);
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, LOW);
    delay(500);
    return; 
  }

  digitalWrite(LED_RED, LOW);
  
  digitalWrite(DIR1_PIN, HIGH); digitalWrite(DIR2_PIN, HIGH); digitalWrite(DIR3_PIN, HIGH);
  digitalWrite(DIR4_PIN, HIGH); digitalWrite(DIR5_PIN, HIGH); digitalWrite(DIR6_PIN, HIGH);

  for (int i = 0; i < 3200; i++) {
    digitalWrite(STEP1_PIN, HIGH); digitalWrite(STEP2_PIN, HIGH); digitalWrite(STEP3_PIN, HIGH);
    digitalWrite(STEP4_PIN, HIGH); digitalWrite(STEP5_PIN, HIGH); digitalWrite(STEP6_PIN, HIGH);
    delayMicroseconds(500); 
    
    digitalWrite(STEP1_PIN, LOW); digitalWrite(STEP2_PIN, LOW); digitalWrite(STEP3_PIN, LOW);
    digitalWrite(STEP4_PIN, LOW); digitalWrite(STEP5_PIN, LOW); digitalWrite(STEP6_PIN, LOW);
    delayMicroseconds(500);
  }

  digitalWrite(LED_BLUE, HIGH);
  delay(500);
  digitalWrite(LED_BLUE, LOW);

  digitalWrite(DIR1_PIN, LOW); digitalWrite(DIR2_PIN, LOW); digitalWrite(DIR3_PIN, LOW);
  digitalWrite(DIR4_PIN, LOW); digitalWrite(DIR5_PIN, LOW); digitalWrite(DIR6_PIN, LOW);

  for (int i = 0; i < 3200; i++) {
    digitalWrite(STEP1_PIN, HIGH); digitalWrite(STEP2_PIN, HIGH); digitalWrite(STEP3_PIN, HIGH);
    digitalWrite(STEP4_PIN, HIGH); digitalWrite(STEP5_PIN, HIGH); digitalWrite(STEP6_PIN, HIGH);
    delayMicroseconds(500);
    digitalWrite(STEP1_PIN, LOW); digitalWrite(STEP2_PIN, LOW); digitalWrite(STEP3_PIN, LOW);
    digitalWrite(STEP4_PIN, LOW); digitalWrite(STEP5_PIN, LOW); digitalWrite(STEP6_PIN, LOW);
    delayMicroseconds(500);
  }

  delay(1000); 
}
