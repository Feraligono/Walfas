#include <fstream>
#include <iostream>

int main(void){
        /*
         * This program is testing binary encoding for swf file format
         * using the example given in the swfdocumentation pdf in the 
         * Documents folder, Apendex A. After installing gnash and 
         * confirming that other swf files do indeed work, this program
         * was successful in producing a flash slide that showcases a single
         * rectangle. This means that using the flash manual, we can write
         * our own complier and flash program using objects tied to GTK+'s
         * GUI system to make a full import/export flash development tool.
         * I will leave the compiled .swf file in the folder as I need 
         * confirmation of it working on a windows system (just to be 
         * certain there aren't any weird discrepancies. Also I will
         * leave the hex dump.
         */

        char buffer[79] =
        {0x46,0x57,0x53,0x03,0x4F,0x00,0x00,0x00,
        0x78,0x00,0x05,0x5F,0x00,0x00,0x0F,0xA0,
        0x00,0x00,0x0C,0x01,0x00,0x43,0x02,0xFF,
        0xFF,0xFF,0xBF,0x00,0x23,0x00,0x00,0x00,
        0x01,0x00,0x70,0xFB,0x49,0x97,0x0D,0x0C,
        0x7D,0x50,0x00,0x01,0x14,0x00,0x00,0x00,
        0x00,0x01,0x25,0xC9,0x92,0x0D,0x21,0xED,
        0x48,0x87,0x65,0x30,0x3B,0x6D,0xE1,0xD8,
        0xB4,0x00,0x00,0x86,0x06,0x06,0x01,0x00,
        0x01,0x00,0x00,0x40,0x00,0x00,0x00};

        std::ofstream fout ("test01.swf", std::ios::binary);
        fout.write(buffer,79);
        std::cout<<"value written"<<std::endl;
        fout.close();
        return 0;
}
