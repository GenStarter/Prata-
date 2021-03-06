/*7. Write a program that reads input a word at a time until a lone q is entered.
The program should then report the number of words that began with vowels,
the number that began with consonants,and the number that fit neither of those categories.
One approach is to use isalpha() to discriminate between words beginning with letters
and those that don’t and then use an if or switch statement to further identify those passing the isalpha() test
that begin with vowels.
A sample run might look like this:
    Enter words (q to quit):
        The 12 awesome oxen ambled quietly across 15 meters of lawn. q
        5 words beginning with vowels 4 words beginning with consonants 2 others
*/

#include <iostream>
#include <cctype>

int main(void){

int vowel=0,consonant=0,neither=0;
std::string word="a";

while (word!="q"){
std::cout<<"Please enter the word or q for exit: ";
std::cin>>word;

if (word!="q")
if (isalpha(word[0])){
    if(word[0]=='a'||word[0]=='e'||word[0]=='o'||word[0]=='u'||word[0]=='i')
    vowel++;
    else consonant++;
}
    else neither++;

std::cin.get();
}

std::cout<<"Begun from vowels "<<vowel<<"words, from consonants "<<consonant<<"words, neither "<<neither<<" words"<<std::endl;

return 0;
}
