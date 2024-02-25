convert_dict = {}   # the dictionary that contains the counterparts of the characters
counter = 49    # ASCII value of '0'
for emojis in "⿠ ⿡ ⿢ ⿣ ⿤ ⿥ ⿦ ⿧ ⿨ ⿩ ; < 🟰 > ? @ 🇦 🇧 🇨 🇩 🇪 🇫 🇬 🇭 🇮 🇯 🇰 🇱 🇲 🇳 🇴 🇵 🇶 🇷 🇸 🇹 🇺 🇻 🇼 🇽 🇾 🇿".split():
    convert_dict[chr(counter)] = emojis
    counter += 1    # '1' is 50, 'C' is 67, etc

for character in input():
    # use get because lots of text are not included in the convert_dict
    # and will cause KeyError
    print(convert_dict.get(character.upper(), character), end=" ")
    input()
