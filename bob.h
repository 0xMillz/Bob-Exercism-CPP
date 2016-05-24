#include <string>
#include <ctype.h>

class bob {

public:
  bob() {}
  static std::string hey (std::string input) {

    bool allCaps = true;
    bool hasChars = false;
    bool exclamation = false;
    bool allSpaces = true;

    for (int i = 0; i < input.length(); i++) {

      if (islower(input[i]))
        allCaps = false;

      if (isalpha(input[i]))
        hasChars = true;

      if (input[i] != ' ')
        allSpaces = false;
    }

    if (allCaps && hasChars)
      return "Whoa, chill out!";
    else if (input[input.length()-1] == '?' || (input[input.length()-1] == ' ' && input[input.length()-2] == '?'))
      return "Sure.";
    else if (input.length() == 0 || allSpaces)
      return "Fine. Be that way!";
    else
      return "Whatever.";}
};

