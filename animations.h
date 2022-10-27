struct animations  // enumerate, complete ordered listing of all items in a collection.
                   // lets list out the struct in a logical order, then later in the code
                   // we can read it back into the Parola library in the correct order that it requires
                   // See the link below for more information

// https://majicdesigns.github.io/MD_Parola/class_m_d___parola.html#add650d11e765d50f9d030dd98ae96e7f

{
  textEffect_t effecIn;   // Animation type In
  textEffect_t effecOut;  // Animation type Out - In this example there are the same, but you can mix them.
  const char* pText;      // Text to display
  uint16_t speed;         // Animation speed (multiplier for library default) larger number = SLOWER
  uint16_t pause;         // pause (multiplier for library default)  larger number = SLOWER
  textPosition_t align;   // PA_LEFT, PA_CENTER, PA_RIGHT
};

// make a array to hold all of the effects, text, and timings
animations animList[] = {
  // Angry eyeys
  { PA_PRINT, PA_NO_EFFECT, "\x0A\x0A", 2, 0.8, PA_CENTER },    // 10 10
  { PA_PRINT, PA_NO_EFFECT, "\x016\x011", 2, 0.8, PA_CENTER },  // 22 17
  { PA_PRINT, PA_NO_EFFECT, "\x017\x012", 2, 0.8, PA_CENTER },  // 23 18
  { PA_PRINT, PA_NO_EFFECT, "\x018\x013", 2, 0.8, PA_CENTER },  // 24 18
  { PA_PRINT, PA_NO_EFFECT, "\x019\x014", 2, 3, PA_CENTER },    // 25 19
  { PA_PRINT, PA_NO_EFFECT, "\x01A\x015", 2, 0.8, PA_CENTER },  // 26 21 blank
  { PA_PRINT, PA_NO_EFFECT, "\x019\x014", 2, 1, PA_CENTER },    // 25 19
  { PA_PRINT, PA_NO_EFFECT, "\x01A\x015", 2, 0.8, PA_CENTER },  // 26 21 blank
  { PA_PRINT, PA_NO_EFFECT, "\x019\x014", 2, 1, PA_CENTER },    // 25 19
  { PA_PRINT, PA_NO_EFFECT, "\x01A\x015", 2, 0.8, PA_CENTER },  // 26 21 blank
  { PA_PRINT, PA_NO_EFFECT, "\x019\x014", 2, 1, PA_CENTER },    // 25 19
  { PA_PRINT, PA_NO_EFFECT, "\x01A\x015", 2, 0.8, PA_CENTER },  // 26 21 blank
  { PA_PRINT, PA_NO_EFFECT, "\x019\x014", 2, 1, PA_CENTER },    // 25 19


  //Round eyes - move eyes down and up
  { PA_PRINT, PA_NO_EFFECT, "\x03A\x03A", 2, 0.8, PA_CENTER },  // eyes middle - 58
  { PA_PRINT, PA_NO_EFFECT, "\x03B\x03B", 2, 0.8, PA_CENTER },  // eye middle down 1 - 59
  { PA_PRINT, PA_NO_EFFECT, "\x03C\x03C", 2, 0.8, PA_CENTER },  // eye 6 - 60
  { PA_PRINT, PA_NO_EFFECT, "\x03B\x03B", 2, 0.8, PA_CENTER },  // eye middle down 1 -59
  { PA_PRINT, PA_NO_EFFECT, "\x03C\x03C", 2, 1, PA_CENTER },    // eye 6 -60
  { PA_PRINT, PA_NO_EFFECT, "\x03B\x03B", 2, 0.8, PA_CENTER },  // eye middle down 1 -59

  // Blink eyes
  { PA_PRINT, PA_NO_EFFECT, "\x03A\x03A", 1, 0, PA_CENTER },  // eyes middle - 58
  { PA_PRINT, PA_NO_EFFECT, "\x04A\x04A", 1, 0, PA_CENTER },  // middle blink down 74 Blink 2
  { PA_PRINT, PA_NO_EFFECT, "\x04C\x04C", 1, 0, PA_CENTER },  // middle blink 76 Blink 4
  { PA_PRINT, PA_NO_EFFECT, "\x04D\x04D", 1, 0, PA_CENTER },  // middle blink down 1 - 77 Blink 5 closed

  // roll eyes up and around
  { PA_PRINT, PA_NO_EFFECT, "\x03E\x03E", 2, 0.8, PA_CENTER },  // eye 8 - 62
  { PA_PRINT, PA_NO_EFFECT, "\x03F\x03F", 2, 1, PA_CENTER },    // eye 9 - 63
  { PA_PRINT, PA_NO_EFFECT, "\x040\x040", 2, 0.8, PA_CENTER },  // eye 10 - 64
  { PA_PRINT, PA_NO_EFFECT, "\x041\x041", 2, 1, PA_CENTER },    // eye 11 - 65
  { PA_PRINT, PA_NO_EFFECT, "\x042\x042", 2, 0.8, PA_CENTER },  // eye 12 - 66
  { PA_PRINT, PA_NO_EFFECT, "\x043\x043", 2, 1, PA_CENTER },    // eye 1 - 63
  { PA_PRINT, PA_NO_EFFECT, "\x044\x044", 2, 0.8, PA_CENTER },  // eye 2 - 68
  { PA_PRINT, PA_NO_EFFECT, "\x045\x045", 2, 0.8, PA_CENTER },  // eye 3 - 69

  // blink eyes when at 3 o'clock
  { PA_PRINT, PA_NO_EFFECT, "\x050\x050", 1, 0, PA_CENTER },  // eye 3 - 80  Blink 1
  { PA_PRINT, PA_NO_EFFECT, "\x052\x052", 1, 0, PA_CENTER },  // eye 3 - 82  Blink 2
  { PA_PRINT, PA_NO_EFFECT, "\x053\x053", 1, 0, PA_CENTER },  // eye 3 - 83  Blink 1
  { PA_PRINT, PA_NO_EFFECT, "\x052\x052", 1, 0, PA_CENTER },  // eye 3 - 82  Blink 2
  { PA_PRINT, PA_NO_EFFECT, "\x050\x050", 1, 0, PA_CENTER },  // eye 3 - 80  Blink 1
  { PA_PRINT, PA_NO_EFFECT, "\x03A\x03A", 1, 0, PA_CENTER },  // eyes middle - 58

  // flick eyes right to left

  { PA_PRINT, PA_NO_EFFECT, "\x03F\x03F", 1, 1, PA_CENTER },  // eye - 9 - 63
  { PA_PRINT, PA_NO_EFFECT, "\x045\x045", 1, 1, PA_CENTER },  // eye - 3 - 69
  { PA_PRINT, PA_NO_EFFECT, "\x03F\x03F", 1, 1, PA_CENTER },  // eye - 9 - 63
  { PA_PRINT, PA_NO_EFFECT, "\x045\x045", 1, 1, PA_CENTER },  // eye - 3 - 69

  // blink eyes middle
  { PA_PRINT, PA_NO_EFFECT, "\x04A\x04A", 1, 0, PA_CENTER },  // middle blink down 1 - 73 Blink 1
  { PA_PRINT, PA_NO_EFFECT, "\x04C\x04C", 1, 0, PA_CENTER },  // middle blink down 1 - 76 Blink 3
  { PA_PRINT, PA_NO_EFFECT, "\x04D\x04D", 1, 0, PA_CENTER },  // eye middle - 77

  // cross eyes
  { PA_PRINT, PA_NO_EFFECT, "\x03A\x03A", 2, 1, PA_CENTER },  // eye middle
  { PA_PRINT, PA_NO_EFFECT, "\x03F\x045", 2, 1, PA_CENTER },  // eye left 63 right 69
  { PA_PRINT, PA_NO_EFFECT, "\x03F\x045", 2, 0, PA_CENTER },  // eye RIGHT 69 LEFT 63

  // rolling eyes around
  { PA_PRINT, PA_NO_EFFECT, "\x040\x044", 1, 0, PA_CENTER },  // eye - 68 68
  { PA_PRINT, PA_NO_EFFECT, "\x041\x043", 1, 0, PA_CENTER },  // eye - 66 67
  { PA_PRINT, PA_NO_EFFECT, "\x042\x042", 1, 0, PA_CENTER },  // eye - 66 66
  { PA_PRINT, PA_NO_EFFECT, "\x043\x041", 1, 0, PA_CENTER },  // eye - 67 65
  { PA_PRINT, PA_NO_EFFECT, "\x044\x040", 1, 0, PA_CENTER },  // eye - 68 64
  { PA_PRINT, PA_NO_EFFECT, "\x045\x03F", 1, 0, PA_CENTER },  // eye - 69 63
  { PA_PRINT, PA_NO_EFFECT, "\x046\x03E", 1, 0, PA_CENTER },  // eye - 70 62
  { PA_PRINT, PA_NO_EFFECT, "\x047\x03D", 1, 0, PA_CENTER },  // eye - 71 61
  { PA_PRINT, PA_NO_EFFECT, "\x03C\x03C", 1, 0, PA_CENTER },  // eye - 60 60
  { PA_PRINT, PA_NO_EFFECT, "\x03B\x03B", 1, 0, PA_CENTER },  // eye - 59 59
  { PA_PRINT, PA_NO_EFFECT, "\x03A\x03A", 1, 0, PA_CENTER },  // eye - 58 58

};