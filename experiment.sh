clear
echo 'Compiling TorDestor'
# Compile Program
gcc -o TorDestor TorDestor.c
echo 'Compiled'
echo 'Running Artefact removal...'



# Run on each Artefact
./TorDestor experiment/TorArtefact1.txt
./TorDestor experiment/TorArtefact2.txt
./TorDestor experiment/TorArtefact3.txt
./TorDestor experiment/TorArtefact4.txt
./TorDestor experiment/TorArtefact5.txt
./TorDestor experiment/TorArtefact6.txt
./TorDestor experiment/TorArtefact7.txt
./TorDestor experiment/TorArtefact8.txt
./TorDestor experiment/TorArtefact9.txt
./TorDestor experiment/TorArtefact10.txt

echo 'Artefacts removed!'