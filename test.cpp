#include <string>
#include <iostream>

#include "parsing/token.h"

using namespace std;

int main(){
  Token t = Token(TokenType::LPAREN, "(");
  cout << "Token t  CONTENT: " << t.getContent();
  return 0;
}
