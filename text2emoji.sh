#!/bin/bash

touch lib
printf "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n❗\n\n\n\n\n\n\n\n\n\n➕\n\n➖\n\n\n⿠ \n⿡ \n⿢ \n⿣ \n⿤ \n⿥ \n⿦ \n⿧ \n⿨ \n⿩ \n\n\n\n🟰 \n\n❓ \n\n🇦 \n🇧 \n🇨 \n🇩 \n🇪 \n🇫 \n🇬 \n🇭 \n🇮 \n🇯 \n🇰 \n🇱 \n🇲 \n🇳 \n🇴 \n🇵 \n🇶 \n🇷 \n🇸 \n🇹 \n🇺 \n🇻 \n🇼 \n🇽 \n🇾 \n🇿 \n\n\n\n\n\n\n🇦 \n🇧 \n🇨 \n🇩 \n🇪 \n🇫 \n🇬 \n🇭 \n🇮 \n🇯 \n🇰 \n🇱 \n🇲 \n🇳 \n🇴 \n🇵 \n🇶 \n🇷 \n🇸 \n🇹 \n🇺 \n🇻 \n🇼 \n🇽 \n🇾 \n🇿 \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n✖  \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n➗ ">> lib
while read -n 1 char ; do
	ascii=$(printf "%d" "'$char")
	head -"$ascii" lib|tail -1|tr "\n" " "
done <<< "$1"

