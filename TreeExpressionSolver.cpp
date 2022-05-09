// 2.cpp : Defines the entry point for the console application.
//paranthesis, space and decimal points not allowed...
// stantdered form
//use ^ symbol for you powers like 2^3 = 8
//Angle Should be in radians
// 2*3+5^3+sin70-cos60 etc

#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

double solveExpression(char *);
double calculateTerm(char *);
double finalizeTerm(char *);
main()
{
      char string[150];
      cout<<"Please enter a mathematical expression : \n>>";
      gets(string);
      double result = solveExpression(string);
      cout<<result;
      getch();
}

double solveExpression(char *string)
{
     double result = 0;
     int i = 0;
     int terms = 1;
     int termNo = 0;
     int operandIndex = 0;
     char argument[30];
     while(string[i]!='\0')
     {
          if(string[i] == '+' || string[i] == '-')
               terms++;
          i++;
     }
     char operators[terms];
     char operands[4][20];
     i =0;
     while(string[i]!='\0')
     {
          if(string[i] == '+')
          {
               operators[termNo] = '+';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == '-')
          {
               operators[termNo] = '-';
               termNo++;
               operandIndex = 0;
          }
          else
          {
               operands[termNo][operandIndex] = string[i];
               operands[termNo][operandIndex+1] = '\0';
               operandIndex++;
          }
          i++;
     }
     for(int k=0; k<terms; k++)
     {
          int j=0;
          while(operands[k][j] != '\0')
          {
                argument[j] = operands[k][j];
                argument[j+1] = '\0';
                j++;
          }
          result+= (double)calculateTerm(argument);
     }
     return result;
}

double calculateTerm(char *string)
{
     int i =0;
     int index=0;
     char string2[30];
     while(string[i]!='\0')
     {
          if(string[i] == 'S' || string[i] == 's')
          {
               string2[index] = 's';
               string2[index+1] = '\0';
               i+=3;
          }
          else if(string[i] == 'C' || string[i] == 'c')
          {
               string2[index] = 'c';
               string2[index+1] = '\0';
               i+=3;
          }
          else if(string[i] == 'T' || string[i] == 't')
          {
               string2[index] = 't';
               string2[index+1] = '\0';
               i+=3;
          }
          else if(string[i] == 'L' || string[i] == 'l')
          {
               string2[index] = 'l';
               string2[index+1] = '\0';
               i+=3;
          }
          else
          {
              string2[index] = string[i];
              string2[index+1] = '\0';
              i++;
          }
          index++;
     }
     return (double)finalizeTerm(string2);
}

double finalizeTerm(char *string)
{
     double result = 1;
     int i = 0;
     int terms = 1;
     int termNo = 0;
     int operandIndex = 0;
     while(string[i]!='\0')
     {
          if(string[i] == '*' || string[i] == '/' || string[i] == 's' || string[i] == 'c' || string[i] =='t' || string[i] =='l' || string[i] == '^')
               terms++;
          i++;
     }
     int operators[terms];
	 int operands[terms];
     i =0;
     for(int k=0; k<terms; k++)
        operands[k] = 1;
     while(string[i] != '\0')
     {
          
          if(string[i] == '*')
          {
               operators[termNo] = '*';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == '/')
          {
               operators[termNo] = '/';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == 's')
          {
               operators[termNo] = 's';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == 'c')
          {
               operators[termNo] = 'c';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == 't')
          {
               operators[termNo] = 't';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == 'l')
          {
               operators[termNo] = 'l';
               termNo++;
               operandIndex = 0;
          }
          else if(string[i] == '^')
          {
               operators[termNo] = '^';
               termNo++;
               operandIndex = 0;
          }
          else
          {
              if(operandIndex == 0)
              {
                  operands[termNo] = string[i]-48;
                  operandIndex++;
              }
              else
                 operands[termNo] = operands[termNo]*10+string[i]-48;
          }
          i++;
     }
	 i=0;
	 result=operands[0];
     for(int j=1; j<terms; j++)
     {
         switch(operators[j-1])
         {
              case '*':
                   result*=operands[j];
                   break;
              case '/':
                   result/=operands[j];
                   break;
              case 's':
                   result=result*sin(operands[j]);
                   break;
              case 'c':
                   result=result*cos(operands[j]);
                   break;
              case 't':
                   result=result*tan(operands[j]);
                   break;
              case 'l':
                   result=result*log(operands[j]);
                   break;
              case '^':
                   result=result*pow(operands[j-1],operands[j]-1);
                   break;
              default:
                   cout<<"nothing";
         }
     }
	 return result;
}
