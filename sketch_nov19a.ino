int numbers[10]{};
int sum{};

constexpr int lightPin{ A0 };

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i{ 0 }; i < 10; ++i)
  {
    int arrayValue{ analogRead(lightPin) };
    numbers[i] = arrayValue;
    sum += numbers[i];
    numbers[i] = 0;
  }
  int average = sum / 10;
  Serial.println(average);
  sum = 0;
  delay(500);
}
