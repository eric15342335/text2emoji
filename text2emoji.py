convert_dict = {}
counter = 65
for emojis in "🇦 🇧 🇨 🇩 🇪 🇫 🇬 🇭 🇮 🇯 🇰 🇱 🇲 🇳 🇴 🇵 🇶 🇷 🇸 🇹 🇺 🇻 🇼 🇽 🇾 🇿".split():
    convert_dict[chr(counter)] = emojis
    counter += 1

for character in input():
    print(convert_dict.get(character.upper(), character), end=" ")
