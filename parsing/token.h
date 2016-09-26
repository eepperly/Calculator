#ifndef TOKEN_H_
#define TOKEN_H_

#include <string>

using namespace std;

enum class TokenType { LPAREN, RPAREN, MULT_OP, ADD_OP, NEG, NUM };

class Token{
 public:
  Token(TokenType my_type, string my_content);
  TokenType getType();
  string getContent();
 private:
  TokenType type;
  string content;
};


#endif
