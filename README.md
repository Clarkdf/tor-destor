# tor-destor
Virginia Tech CS5584 (Network Security) Final Project F23 -- A program for removing Tor Artifacts on a Linux Machine written in C

## Instructions for Running TorDestor:
* To run TorDestor, you must have a C compiler on your workstation.
* Compile the C program into an executable.
* Run the executable with the following command: './tordestor [ARTEFACT NAME]'

## Instructions for Experiment Simulation:
### On Linux/Mac: 
* Give experiment.sh permissions: 'chmod +x experiment.sh'
* Run experiment script: './experiment.sh'
### On Windows:
* Run experiment script: 'bash experiment.sh' -- You may have to give file permissions on Windows

## Note:
* When running TorDestor, it will appear as if the program did not garble the artifact files.
* This is a quirk with the fremove function and the IDE. If you run the code without fremove, it shows the garbling.
* When you delete it, it doesn't show that it garbled, but it did. It's just a quirk with the IDE and fremove I think.