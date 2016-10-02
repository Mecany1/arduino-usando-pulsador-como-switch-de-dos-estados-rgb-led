int pin_red = 2;
int pin_green = 3;
int pin_blue = 4;

int red_status = 0;
int green_status = 0;
int blue_status = 0;

int pin_button_red = 5;
int pin_button_green = 6;
int pin_button_blue = 7;

int pin_button_red_pressed = 0;
int pin_button_green_pressed = 0;
int pin_button_blue_pressed = 0;

void setup() {
  pinMode(pin_button_red, INPUT);
  pinMode(pin_button_green, INPUT);
  pinMode(pin_button_blue, INPUT);

  pinMode(pin_red, OUTPUT);
  pinMode(pin_green, OUTPUT);
  pinMode(pin_blue, OUTPUT);
}

 void loop() {
  int pin_button_red_status = digitalRead(pin_button_red);
  if(pin_button_red_status==HIGH) {
    pin_button_red_pressed = 1;
  } else if(pin_button_red_status==LOW && pin_button_red_pressed==1) {
    pin_button_red_pressed = 0;
    if(red_status==0) {
      red_status = 1;
      digitalWrite(pin_red, HIGH);
    } else {
      red_status = 0;
      digitalWrite(pin_red, LOW);
    }
  }

  int pin_button_green_status = digitalRead(pin_button_green);
  if(pin_button_green_status==HIGH) {
    pin_button_green_pressed = 1;
  } else if(pin_button_green_status==LOW && pin_button_green_pressed==1) {
    pin_button_green_pressed = 0;
    if(green_status==0) {
      green_status = 1;
      digitalWrite(pin_green, HIGH);
    } else {
      green_status = 0;
      digitalWrite(pin_green, LOW);
    }
  }

  int pin_button_blue_status = digitalRead(pin_button_blue);
  if(pin_button_blue_status==HIGH) {
    pin_button_blue_pressed = 1;
  } else if(pin_button_blue_status==LOW && pin_button_blue_pressed==1) {
    pin_button_blue_pressed = 0;
    if(blue_status==0) {
      blue_status = 1;
      digitalWrite(pin_blue, HIGH);
    } else {
      blue_status = 0;
      digitalWrite(pin_blue, LOW);
    }
  }
  
  delay(100);
 }
