def main():
# the dictionary that stores the character and their emoji counterpart
    convert_dict = {}

# ASCII 'A' is 65
    counter = 65
    for emojis in "🇦 🇧 🇨 🇩 🇪 🇫 🇬 🇭 🇮 🇯 🇰 🇱 🇲 🇳 🇴 🇵 🇶 🇷 🇸 🇹 🇺 🇻 🇼 🇽 🇾 🇿".split():
        convert_dict[chr(counter)] = emojis
    # 'B' is 66, 'C' is 67 etc
        counter += 1

# numerical emojis
    counter = 48
    for emojis in "⿠ ⿡ ⿢ ⿣ ⿤ ⿥ ⿦ ⿧ ⿨ ⿩".split():
        convert_dict[chr(counter)] = emojis
        counter += 1
        
#other emojis
    counter = 33
    for emojis in "❗".split():
        convert_dict[chr(counter)] = emojis
    
    counter = 61 
    for emojis in "🟰 ❓".split():
        convert_dict[chr(counter)] = emojis
        counter += 2
    
    counter = 43
    for emojis in "➕ ➖".split():
        convert_dict[chr(counter)] = emojis
        counter += 2

    counter = 158
    for emojis in "✖ ➗".split():
        convert_dict[chr(counter)] = emojis
        counter += 88 #158+88 = 246 is the ascii for division
        
    for character in input():
    # use the dict.get() method since a lot of characters not included in the convert_dict
        print(convert_dict.get(character.upper(), character), end=" ")
    x = input("Press 1 to continue, any other key to exit: ")
    if x == "1":
        main()
    else:
        exit()
main()
