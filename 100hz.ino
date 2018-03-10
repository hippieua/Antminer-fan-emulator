unsigned long int freq;
unsigned long int pwm;

void setup(){
  freq = 5000;
  pwm = freq / 2;

  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  ICR1 = freq; // for ICR1 = 1000, frequency = 1kHz.
  TCCR1A = _BV(COM1A1) | _BV(COM1B1) ; // phase and frequency correct mode. NON-inverted mode
  TCCR1B = _BV(WGM13) | _BV(CS11); // Select mode 8 and select divide by 8 on main clock.
  OCR1B = pwm;
  OCR1A = pwm;

}

void loop(){
 
}
