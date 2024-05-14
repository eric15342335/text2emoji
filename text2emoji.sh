#!/bin/bash

touch lib
for i in {0..30}; do printf "\n" >> lib; done
printf "\n❗\n\n\n\n\n\n\n\n\n\n➕\n\n➖\n\n\n⿠ \n⿡ \n⿢ \n⿣ \n⿤ \n⿥ \n⿦ \n⿧ \n⿨ \n⿩ \n"\
"\n\n\n🟰 \n\n❓ \n\n🇦 \n🇧 \n🇨 \n🇩 \n🇪 \n🇫 \n🇬 \n🇭 \n🇮 \n🇯 \n🇰 \n🇱 \n🇲 \n🇳 \n🇴 \n🇵 \n🇶 \n🇷 "\
"\n🇸 \n🇹 \n🇺 \n🇻 \n🇼 \n🇽 \n🇾 \n🇿 \n\n\n\n\n\n\n🇦 \n🇧 \n🇨 \n🇩 \n🇪 \n🇫 \n🇬 \n🇭 \n🇮 \n🇯 \n🇰 \n🇱 "\
"\n🇲 \n🇳 \n🇴 \n🇵 \n🇶 \n🇷 \n🇸 \n🇹 \n🇺 \n🇻 \n🇼 \n🇽 \n🇾 \n🇿 ">> lib
for u in {0..91}; do printf "\n" >> lib; done
printf "\n✖ \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n➗ ">> lib
while read -n 1 char ; do
	ascii=$(printf "%d" "'$char")
	head -"$ascii" lib|tail -1|tr "\n" " "
done <<< "$1"
rm lib
