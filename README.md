# Serial-Binary-to-ASCII
Records up to 8 binary bits and decodes the byte to it's equivalent ASCII value. Must be running a serial terminal (like arduino serial console). Initial plan was to use arduino as a keyboard, but can only be done by flashing a new firmware on the atmel chip, which could potentially corrupt the bootloader and leave me with an expensive paperweight.

A big challenge was getting the keycap to work. Cherry MX keycaps have stems in the middle of the keycaps that are shaped in a cross in order to clamp to the actual switches. However, the CUBE printers were garbage, so I could not get the size right. Because of this, I had to opt to making a circle stem and super-glueing the stems to the keycap.

During development, the board I was originally going to use, the teensy 2.0, broke almost in half.... I was testing how it would fit on a breadboard so I decidwed to pop it on without finishing soldering and sure enough, when I took it out, the pins were completely broken, some deattached from the teensy, etc.

This project is unique because it serves a practical use for CS majors and puzzlehunt participants. You can easily use the two keys to type in the binary equivalent of an ASCII character and click one simple button to have it spit out on the computer screen. It is also easily re-programmable to do whatever you want those keys to do.

