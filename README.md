# tor-destor
Virginia Tech CS5584 (Network Security) Final Project F23 -- A program for removing Tor Artifacts on a Linux Machine written in C

## Jupyter Notebook Link
[TorDestor Jupyter Notebook](https://deepnote.com/workspace/virginia-tech-4b73-c437da22-c3a2-4bf8-b4ac-c9a2319a40de/project/CS5584-NetSec-4baccb8d-c32e-49a3-9a95-939b2655f7ab/notebook/TorDestor-da48014121b44ee1b10100ddf943849a)

## Instructions for Running TorDestor:
* To run TorDestor, you must have a C compiler on your workstation.
* Compile the C program into an executable.
* Run the executable with the following command: './tordestor [ARTIFACT NAME]'

## Instructions for Experiment Simulation:
### On Linux/Mac: 
* Give experiment.sh permissions: 'chmod +x experiment.sh'
* Run experiment script: './experiment.sh'
### On Windows:
* Run experiment script: 'bash experiment.sh' -- You may have to give file permissions on Windows

## Note:
* When running TorDestor, it will appear as if the program did not garble the artifact files.
* This is a quirk with the fremove function and the IDE. If you run the code without remove, it shows the garbling.
* When you delete it, it doesn't show that it garbled, but it did. It's just a quirk with the IDE and remove.
