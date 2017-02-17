#include "Tester_Catch.h"
<<<<<<< HEAD
#include <vector>
#include "../GameOfLife/converterboolboardtostring.h"

TEST_CASE("check if converting to string is properly","[Converter]"){

std::string convertedString;
std::vector<std::vector<bool>> temporary(4, std::vector<bool>(4));

temporary[1][1]=1;
temporary[1][2]=1;
temporary[2][1]=0;
temporary[2][2]=0;

ConverterBoolBoardToString *converter;
converter = new ConverterBoolBoardToString;


CHECK(converter->convertBoolBoardToString(temporary).size()== 6);



CHECK(converter->convertBoolBoardToString(temporary)[0]=='x');
CHECK(converter->convertBoolBoardToString(temporary)[1]=='x');
CHECK(converter->convertBoolBoardToString(temporary)[2]=='\n');
CHECK(converter->convertBoolBoardToString(temporary)[3]=='.');
CHECK(converter->convertBoolBoardToString(temporary)[4]=='.');
CHECK(converter->convertBoolBoardToString(temporary)[5]=='\n');

temporary.clear();

delete converter;
}


=======
#include "../GameOfLife/converterboolboardtostring.h"
#include <vector>


TEST_CASE("Check if the positions in vector give proper symbols", "[Converter]")
{
    std::vector<std::vector<bool>> testTheBoard {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};

    std::string testString  = {'x','x','\n','.','x','\n'};


Converter *converter=new Converter;
unsigned sizeOfString = converter->convertBoolBoardToString(testTheBoard).size();

for(unsigned positionInString = 0 ; positionInString< sizeOfString ;positionInString++)
{
    CHECK(converter->convertBoolBoardToString(testTheBoard)[positionInString] == testString[positionInString]);
}
    delete converter;
}

TEST_CASE("Check if conversion testTheBoard gives proper size of the string", "[Converter]")
{
    std::vector<std::vector<bool>> testTheBoard {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};

    Converter *converter=new Converter;
    CHECK(converter->convertBoolBoardToString(testTheBoard).size()== 6);

    delete converter;
}
>>>>>>> master
