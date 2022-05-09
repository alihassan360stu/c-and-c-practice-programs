/*
Auther : Pr!nce Zuhk0
Description :
*/

#include<conio.h>
#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;


class PermutationCore
{
    private:
    public:
    
    void permuteString(char *beginningString, char *endingString)
    {
         if(strlen(endingString)<=1)
         {
             cout<< endl << beginningString << endingString;
         }
         else
         {
             for(int i = 0; i < strlen(endingString); i++)
             {
                 char newString = strcat(substr(endingString, 0, i ),
                  substr(endingString, i + 1 ));
                  
                 permuteString(beginningString + endingString.charAt(i), newString);
             }    
         }
    }
    
    char substr()
    {
    }
};

int main()
{
    getch();
}
