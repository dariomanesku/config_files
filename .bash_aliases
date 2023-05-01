set -o  vi
set editing-mode vi
set keymap vi
export VISUAL=vim
export EDITOR=vim

#export __VK_LAYER_NV_optimus=non_NVIDIA_only

# Vim.
alias vim='vim --servername VIM'

alias ll='ls -alF'
alias la='ls -A'
alias l='ls -CF'

# History.
unset HISTSIZE
unset HISTFILESIZE
export HISTFILESIZE=1000000
export HISTSIZE=1000000
export HISTFILE=~/.bash_history_long
#shopt -s histappend
#export HISTCONTROL=erasedups # Don't keep duplicate commands from filling up the history
#export HISTTIMEFORMAT="[%F %T] "
#export HISTFILE=~/.bash_eternal_history
PROMPT_COMMAND="history -a; $PROMPT_COMMAND" # Save all commands to the history immediately instead of at logout, enables you to save history from multiple sessions at once.

# Git.
. ~/git-prompt.sh
export GIT_PS1_SHOWDIRTYSTATE=1
PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]$(__git_ps1 " (%s)")\$ '

#set show-all-if-ambiguous on
#bind TAB:menu-complete

# If there are multiple matches for completion, Tab should cycle through them
bind 'TAB:menu-complete'
bind '"\e[Z": menu-complete-backward'

# Display a list of the matching files
bind "set show-all-if-ambiguous on"

# Perform partial (common) completion on the first Tab press, only start
# cycling full results on the second Tab press (from bash version 5)
bind "set menu-complete-display-prefix on"

# Cycle through history based on characters already typed on the line
#bind '"\e[A":history-search-backward'
#bind '"\e[B":history-search-forward'

#CPLUS_INCLUDE_PATH="${CPLUS_INCLUDE_PATH:+${CPLUS_INCLUDE_PATH}:}/usr/lib/llvm-13/include/c++/v1/"
