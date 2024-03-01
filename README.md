Dear users attentive to details enough to read this file,

This is NOT a software to convert a word into an emoji of similar meaning. 

What this IS is a software to convert characters to their emoji counterparts character by character, i.e. stylising your text into emojis. For example, "abcdef" converts to "🇦 🇧 🇨 🇩 🇪 🇫". The spaces are necessary as the english characters are actually Regional Indicator Symbol Letter emojis which would turn into flags of some country if placed together.

Functionalities supported currently (March 1):

Characters convertible to emojis: numbers 0-9, lower case a-z, upper case A-Z, !, ?, +, -, ×, ÷

For python version, it takes user input and re-trial is enabled if user responds via pressing 1.

For C++ version, re-trial is not supported, instead it will prompt press anyting to exit.

For the shell script version, the character string is taken via a command line argument and no user input will be needed.

Regards,

Development Team of text2emoji

The python and c++ version also support returning unconvertible characters as is back to the user but NOT on the shell script version which would remove unconvertible characters from the output.
