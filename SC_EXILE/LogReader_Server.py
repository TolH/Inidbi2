#BY (TOLH/-0908-)
#!/usr/bin/env python3

import sys, time, os, glob, psutil

#//=======================================================//
#CHECK RUNNING PROCESS FUNCTION psutil
def checkIfProcessRunning(processName):
    #Iterate over the all the running process
    for proc in psutil.process_iter():
        try:
            # Check if process name contains the given name string.
            if processName.lower() in proc.name().lower():
                return True
        except (psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass
    return False;
#//=======================================================//

print ('''
:             _         _           _         _              :             _         _           _         _              :
:           / /\      / /\        / /\      / /\             :           / /\      / /\        / /\      / /\             :
:          / /  \    / /  \      / /  \    / /  \            :          / /  \    / /  \      / /  \    / /  \            :
:  ____   / / /\ \  / / /\ \    / / /\ \  / / /\ \     ____  :  ____   / / /\ \  / / /\ \    / / /\ \  / / /\ \     ____  :
:/\____/\/ / /\ \ \/_/ /\ \ \  / / /\ \ \/_/ /\ \ \  /\____/\:/\____/\/ / /\ \ \/_/ /\ \ \  / / /\ \ \/_/ /\ \ \  /\____/\:
:\/____\/_/ /  \ \ \ \ \_\ \ \/_/ /  \ \ \ \ \_\ \ \ \/____\/:\/____\/_/ /  \ \ \ \ \_\ \ \/_/ /  \ \ \ \ \_\ \ \ \/____\/:
:/\____/\ \ \   \ \ \ \/__\ \ \ \ \   \ \ \ \/__\ \ \/\____/\:/\____/\ \ \   \ \ \ \/__\ \ \ \ \   \ \ \ \/__\ \ \/\____/\:
:\/____\/\ \ \   \ \ \_____\ \ \ \ \   \ \ \_____\ \ \/____\/:\/____\/\ \ \   \ \ \_____\ \ \ \ \   \ \ \_____\ \ \/____\/:
:         \ \ \___\ \ \     \ \ \ \ \___\ \ \ \ \_\ \ \      :         \ \ \___\ \ \     \ \ \ \ \___\ \ \ \ \_\ \ \      :
:          \ \/____\ \ \     \ \ \ \/____\ \ \ \___\ \ \     :          \ \/____\ \ \     \ \ \ \/____\ \ \ \___\ \ \     :
:           \_________\/      \_\/\_________\/\_______\/     :           \_________\/      \_\/\_________\/\_______\/     :
''')

print ('''
 ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______ ______
|      |      |      |      |      |      |      |      |      |      |	     |	    |
 _                 _____                _              _____           _       _
| |               |  __ \              | |            / ____|         (_)     | |
| |     ___   __ _| |__) |___  __ _  __| | ___ _ __  | (___   ___ _ __ _ _ __ | |_
| |    / _ \ / _` |  _  // _ \/ _` |/ _` |/ _ \ '__|  \___ \ / __| '__| | '_ \| __|
| |___| (_) | (_| | | \ \  __/ (_| | (_| |  __/ |     ____) | (__| |  | | |_) | |_
|______\___/ \__, |_|  \_\___|\__,_|\__,_|\___|_|    |_____/ \___|_|  |_| .__/ \__|
	      __/ |                                                     | |
	     |___/                                                      |_|
|______|______|______|______|______|______|______|______|______|______|______|______|
''')

#//=======================================================//
#CONFIGS
Game_Logs_Location = 'D:/SteamLibrary/steamapps/common/Arma 3/SC_EXILE/*.rpt'
#//=======================================================//

#//WAIT ~5SECONDS SO LOGS ARE CREATED BY SERVER FIRST
array_char_sel = ['.',':']
last_tick = 0
sys.stdout.write('Streaming logs shortly:')
for tick_range in range(9):
    last_tick = last_tick + 1
    sys.stdout.write (array_char_sel[0])
    sys.stdout.flush()
    time.sleep(0.5)
    if (last_tick == 9):
        sys.stdout.write (array_char_sel[1])
        print('')

#//OPEN LATEST CREATED LOGS
open_logs = open(max(glob.glob(Game_Logs_Location), key=os.path.getctime), 'r')

#//READING LOGS
keep_reading = 0
while (keep_reading == 0):
    logs = open_logs.readline()
    if logs.find(":", 1, 10) != -1:
        time.sleep(0.03)
        print(logs.rstrip('\n'))
        if logs.find('Class CBA_Extended_EventHandlers_base destroyed with lock count') != -1:
            keep_reading = 1
        #if logs.find('Class CBA_Extended_EventHandlers_base destroyed with lock count') != -1:
            #keep_reading = 2
        #if logs.find('Class CBA_Extended_EventHandlers_base destroyed with lock count') != -1:
            #keep_reading = 3
    else:
        time.sleep(0.5)
#//SERVER SHUTDOWN, EXIT WITH CODE #?
#if (keep_reading == 1):
    #loopEnded = input('                             -=============(SERVER STOPPPED NORMALLY (CODE #1)... Press enter to exit)=============-')
#if (keep_reading == 2):
    #loopEnded = input('                             -=============(SERVER STOPPPED NORMALLY (CODE #2)... Press enter to exit)=============-')
#if (keep_reading == 3):
    #loopEnded = input('                             -=============(SERVER STOPPPED NORMALLY (CODE #3)... Press enter to exit)=============-')
#process = psutil.pids()
#for id in process:
    #proc = psutil.Process(id)
    #if proc.name() == "arma3launcher.exe": # add here your process name
        #print("arma3launcher is active")
        #break
# Check if any process alive
if checkIfProcessRunning('arma3launcher'):
    print('Yes arma3launcher process is running')
    loopEnded = input('                             -=============(SERVER STOPPPED NORMALLY (CODE #1)... Press enter to exit)=============-')
else:
    print('No arma3launcher process is not running')
    loopEnded = input('                             -=============(SERVER STOPPPED NORMALLY (CODE #1)... Press enter to exit)=============-')
