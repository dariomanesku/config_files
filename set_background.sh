#!/bin/bash

LIST=$(vim --serverlist)

if [ "$1" == "--dark" ]; then
    for line in $LIST; do
        #vim --servername "$line" --remote-send "<Esc>:set background=dark<CR>"
        vim --servername "$line" --remote-expr "BackgroundDark()" > /dev/null 2>&1
    done
    #echo -n -e "\033]4;0;#1b1b1b\007\033]4;1;#cc241d\007\033]4;2;#98971a\007\033]4;3;#d79921\007\033]4;4;#458588\007\033]4;5;#b16286\007\033]4;6;#689d6a\007\033]4;7;#a89984\007\033]4;8;#928374\007\033]4;9;#fb4934\007\033]4;10;#b8bb26\007\033]4;11;#fabd2f\007\033]4;12;#83a598\007\033]4;13;#d3869b\007\033]4;14;#8ec07c\007\033]4;15;#ebdbb2\007\033]10;#ebdbb2\007\033]11;#1b1b1b\007\033]12;#ebdbb2\007\033]13;#1b1b1b\007\033]17;#665c54\007\033]19;#ebdbb2\007\033]706;#ebdbb2\007"
    xdotool key ctrl+alt+6
    rm ~/.bg_light > /dev/null 2>&1
elif [ "$1" == "--light" ]; then
    for line in $LIST; do
        #vim --servername "$line" --remote-send "<Esc>:set background=light<CR>"
        vim --servername "$line" --remote-expr "BackgroundLight()" > /dev/null 2>&1
    done
    #echo -n -e "\033]4;0;#fbf1c7\007\033]4;1;#9d0006\007\033]4;2;#79740e\007\033]4;3;#b57614\007\033]4;4;#076678\007\033]4;5;#8f3f71\007\033]4;6;#427b58\007\033]4;7;#3c3836\007\033]4;8;#9d8374\007\033]4;9;#cc241d\007\033]4;10;#98971a\007\033]4;11;#d79921\007\033]4;12;#458588\007\033]4;13;#b16186\007\033]4;14;#689d69\007\033]4;15;#7c6f64\007\033]10;#282828\007\033]11;#fbf1c7\007\033]12;#282828\007\033]13;#fbf1c7\007\033]17;#d5c4a1\007\033]19;#665c54\007\033]706;#ffffff\007"
    xdotool key ctrl+alt+7
    touch ~/.bg_light > /dev/null 2>&1
fi
