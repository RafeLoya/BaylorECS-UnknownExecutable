/* Filename: calculator.cpp
 * Author: Rafe Loya && Joseph Zuniga
 * Course: CSI 2334
 * Assignment: Group Project Fall 2023
 * Date: December 3, 2023
 *
 * This program takes operations input by the user to calculate
 * their results in both a decimal and hexadecimal representation.
 */

#include <iostream>
#include <sstream>

using namespace std;

/* add
 * Description: add two floating point values, stores in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void add(float &dest, float src) {
  dest += src;
  return;
}

/* sub
 * Description: sub two floating point values, stores in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void sub(float &dest, float src) {
  dest -= src;
  return;
}

/* mul
 * Description: multiply two floating point values, storing the 
 *   absolute value result in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void mul(float &dest, float src) {
  dest = abs(dest * src);
  return;
}

/* imul
 * Description: multiply two floating point values, storing the
 *   result in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void imul(float& dest, float src) {
  dest *= src;
  return;
}

/* div
 * Description: divide two floating point values, store absolute value result
 *   in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void div(float &dest, float src) {
  dest = abs(dest / src);
  return;
}

/* idiv
 * Description: divide two floating point values, store result in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void idiv(float& dest, float src) {
  dest /= src;
  return;
}

/* mod
 * Description: modulus two floating point values, store result in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void mod(float &dest, float src) {
  //fmod for mod with floating point numbers
  dest = fmod(dest, src);
  return;
}

/* perc
 * Description: divides a floating point value by 100, stores result in dest
 * Precondition: none
 * Postcondition: solution stored in dest
 */
void perc(float &dest) {
  dest /= 100;
  return;
}

ostream& operationList(ostream& OS = cout) {
  OS << "Available instructions and formats:" << endl;
  OS << "=================================" << endl;
  OS << "add  dest, src" << endl
     << "sub  dest, src" << endl
     << "mul  dest, src" << endl
     << "imul dest, src" << endl
     << "div  dest, src" << endl
     << "idiv dest, src" << endl
     << "mod  dest, src" << endl
     << "perc dest" << endl
     << "=================================" << endl
     << "Enter 'h' to list instructions" << endl << endl;

  return OS;
}

int main(int _Argc, char** _Argv, char** _Env) {
  string line, op, operand1, operand2;
  float dest, src;
  stringstream ss;
  bool valid = true, isFloat = false, isPerc = false;

  operationList();

  while (op != "quit") {
    cout << "Enter an instruction" << endl;

    ss.clear();
    getline(cin, line);
    ss << line;
    ss >> op;
    ss >> operand1;
    ss.ignore(1);
    ss >> operand2;

    if (op != "quit") {
      // If there is a decimal in the string OR instruction is "perc"
      isFloat = (operand1.find('.') != string::npos ||
        operand2.find('.') != string::npos || op == "perc");

      // if either operand string is empty, set to "0"
      if (operand1.size() <= 0) {
        operand1 = "0";
      }
      if (operand2.size() <= 0) {
        operand2 = "0";
      }
      dest = stof(operand1);
      src = stof(operand2);

      // Command instructions
      if (op == "add") {
        add(dest, src);
      }
      else if (op == "sub") {
        sub(dest, src);
      }
      else if (op == "mul") {
        mul(dest, src);
      }
      else if (op == "imul") {
        imul(dest, src);
      }
      else if (op == "div") {
        div(dest, src);
      }
      else if (op == "idiv") {
        idiv(dest, src);
      }
      else if (op == "mod") {
        mod(dest, src);
      }
      else if (op == "perc") {
        perc(dest);
      }
      else {
        // Invalid expression
        if (op == "h") {
          operationList();
        }
        else if (op != "quit") {
          cout << "not a valid expression" << endl;
        }
        valid = false;
      }

      // Output results
      if (valid) {
        if (isFloat) {
          cout << "Decimal    : " << defaultfloat << dest << endl;
          cout << "Hexadecimal: " << hexfloat << dest << endl;
        }
        else {
          cout << "Decimal    : " << dec << (int)dest << endl;
          cout << "Hexadecimal: " << hex << (int)dest << endl;
        }
      }
      valid = true;

      cout << endl;
    }
  }

  return 0;
}