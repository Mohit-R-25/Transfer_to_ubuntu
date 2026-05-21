morse = input("Enter Morse Code: ") #taking inout in morse code

words = morse.split("   ")  #split words by 3 spaces

def morsetoenglish():
    result = ""
    for word in words:
        letter = word.split()  #split letters by 1 space
        for l in letter:
            if l == ".-":
                result += "A"
            elif l == "-...":
                result += "B"
            elif l == "-.-.":
                result += "C"
            elif l == "-..":
                result += "D"
            elif l == ".":
                result += "E"
            elif l == "..-.":
                result += "F"
            elif l == "--.":
                result += "G"
            elif l == "....":
                result += "H"
            elif l == "..":
                result += "I"
            elif l == ".---":
                result += "J"
            elif l == "-.-":
                result += "K"
            elif l == ".-..":
                result += "L"
            elif l == "--":
                result += "M"
            elif l == "-.":
                result += "N"
            elif l == "---":
                result += "O"
            elif l == ".--.":
                result += "P"
            elif l == "--.-":
                result += "Q"
            elif l == ".-.":
                result += "R"
            elif l == "...":
                result += "S"
            elif l == "-":
                result += "T"
            elif l == "..-":
                result += "U"
            elif l == "...-":
                result += "V"
            elif l == ".--":
                result += "W"
            elif l == "-..-":
                result += "X"
            elif l == "-.--":
                result += "Y"
            elif l == "--..":
                result += "Z"
            elif l == "-----":
                result += "0"
            elif l == ".----":
                result += "1"
            elif l == "..---":
                result += "2"
            elif l == "...--":
                result += "3"
            elif l == "....-":
                result += "4"
            elif l == ".....":
                result += "5"
            elif l == "-....":
                result += "6"
            elif l == "--...":
                result += "7"
            elif l == "---..":
                result += "8"
            elif l == "----.":
                result += "9"
    result += " "

    print(result.strip())

morsetoenglish()