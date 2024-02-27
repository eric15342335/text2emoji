"""Convert characters to their emoji counterparts."""


def main():
    """Initialize the conversion dictionary and wait for user input"""
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
        # note that chr(48) means '0' which is a character
        convert_dict[chr(counter)] = emojis
        counter += 1

    # other emojis
    convert_dict["!"] = "❗"

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
        counter += 88  # 158+88 = 246 is the ascii for division

    while True:
        # reading users input and print out the converted characters
        for character in input():
            # use the dict.get() method since a lot of characters not included in the convert_dict
            print(convert_dict.get(character.upper(), character), end=" ")

        # input() needs an \n since we print stuff with argument end=" " instead of end="\n"
        if input("\nPress 1 to continue, any other key to exit: ") != "1":
            break


main()
