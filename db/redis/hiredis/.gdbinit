#FILE     : .gdbinit
#DESC     : it will be used by gdb
#AUTHOR   : v1.0 written by Alex Stocks
#DATE     : on Oct 16, 2012
#MOD      : modified by Alex Stocks on Oct 28, 2017

define    list_info
    echo ----cur args (info args)-------------------------------------
    echo "\n"
    info args
    echo "\n"
    echo "\n"
    echo ----cur breakpoints (info break)-----------------------------
    echo "\n"
    info break
    echo "\n"
    echo "\n"
    echo ----cur watchpoints (info watchpoints)-----------------------
    echo "\n"
    info watchpoints
    echo "\n"
    echo "\n"
    echo ----cur local variables (info locals)------------------------
    echo "\n"
    info locals
    echo "\n"
    echo "\n"
    echo ----cur frame (info frame)-----------------------------------
    echo "\n"
    info frame
    echo "\n"
    echo "\n"
    echo ----back trace (statck info) (bt)----------------------------
    echo "\n"
    bt
    echo "\n"
    echo ----over.(show global var: file::gv or func::gv)--
    echo "\n"
end

define    debug_int_signal
    handle SIGINT pass
end

define    debug_valgrind
    target remote | vgdb
end

define    debug_thread
    set target-async 1
    set pagination off
    set non-stop on
end

define  start_threads
    set scheduler-locking off
end

define  stop_threads
    set scheduler-locking on
end

file pool-examples/pool-hiredis-example-ae
# set args ./conf/lisk.conf
#to see struct in a pretty style
set print pretty on
set listsize 25
b example-ae.c:58
b read.c:453
# b read.c:
info break
#debug_valgrind
r

