#ifndef MOUSE_MOCKS
#define MOUSE_MOCKS

#ifndef ARDUINO
  #include <stdint.h>
  class SerialImpl {
      public:
      void begin(int);
      void print(const char *m);
      void print(int);
      void println();
      void println(const char *m);
  };

  class AF_DCMotor {
      public:
      AF_DCMotor(int);
      void run(int);
      void setSpeed(int);
  };

  class Encoder {
      public:
      Encoder(int, int);
      long read();
      void write(long);
  };


  extern SerialImpl Serial;
  extern int analogRead(int);
  extern int randomSeed(int);
  extern int random(int);

  #define FORWARD 1
  #define BACKWARD 2
  #define BRAKE 3
  #define RELEASE 4

  #define byte int8_t

#endif

#endif