# the dictionary that stores the character and their emoji counterpart
convert_dict = {}

# ASCII 'A' is 65
counter = 65
for emojis in "🇦 🇧 🇨 🇩 🇪 🇫 🇬 🇭 🇮 🇯 🇰 🇱 🇲 🇳 🇴 🇵 🇶 🇷 🇸 🇹 🇺 🇻 🇼 🇽 🇾 🇿".split():
    convert_dict[chr(counter)] = emojis
    # 'B' is 66, 'C' is 67 etc
    counter += 1

# numerical emojis
counter = 0
for emojis in "⿠ ⿡ ⿢ ⿣ ⿤ ⿥ ⿦ ⿧ ⿨ ⿩".split():
    convert_dict[counter] = emojis
    counter += 1

for character in input():
    # use the dict.get() method since a lot of characters not included in the convert_dict
    print(convert_dict.get(character.upper(), character), end=" ")
input("Press any key to exit . . .")
