constexpr int arrLen{ 10 };
int numbers[arrLen]{};
int sum{};

constexpr int lightPin{ A0 };

void setup() {
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // Weird function using arrays following the specified specifications
  for (int i{ 0 }; i < arrLen; ++i)
  {
    int arrayValue{ analogRead(lightPin) };
    numbers[i] = arrayValue;
    sum += numbers[i];
    numbers[i] = 0;
  }
  int average = sum / arrLen;
  Serial.println(average);
  sum = 0;
  delay(500);
}
