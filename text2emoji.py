def main():
    userinput=input()
    lib1="❗ee💲eeeeee➕e➖ee⿠⿡⿢⿣⿤⿥⿦⿧⿨⿩eee🟰e❓e🇦🇧🇨🇩🇪🇫🇬🇭🇮🇯🇰🇱🇲🇳🇴🇵🇶🇷🇸🇹🇺🇻🇼🇽🇾🇿eeeeee🇦🇧🇨🇩🇪🇫🇬🇭🇮🇯🇰🇱🇲🇳🇴🇵🇶🇷🇸🇹🇺🇻🇼🇽🇾🇿"
    for char in userinput:
        if ord(char)<123:
            x=lib1[ord(char)-33]
            if x!="e":
                print(x, end=" ")
            else:
                print(char, end=" ")
        elif ord(char)==215:
            print("✖", end=" ")
        elif ord(char)==247:
            print("➗", end=' ')
        else:
            print(char, end=" ")
    u = input("Press 1 to continue, any other key to exit: ")
    if u == "1":
        main()
main()
