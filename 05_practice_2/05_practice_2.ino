#define LED_PIN 7

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
}

void loop() {
  // 0 ~ 1초: LED On
  digitalWrite(LED_PIN, LOW);
  delay(1000);

  // 1 ~ 2초: 5회 깜빡임 (1주기 200ms = Off 100ms + On 100ms)
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
    delay(100);
  }

  // 2초 이후: LED Off 후 무한루프로 종료
  digitalWrite(LED_PIN, HIGH);
  while (1) {}  // infinite loop
}
