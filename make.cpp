all: hw04
//OBJS = hw04add.o hw04subtract.o hw04mul.o hw04menu.o hw04det.o inReset.o prHdr.o

hw04: hw04add.o hw04subtract.o hw04mul.o hw04menu.o hw04det.o inReset.o prHdr.o g++ -o hw04.cpp 

CC=g++

hw04.o:
g++ -c hw04.cpp

hw04add.o: hw04add.cpp
   g++ -c hw04.add

hw04subtract.o:
g++ -c hw04subtract.cpp

hw04mul.o: 
g++ -c hw04mul.cpp

hw04menu.o:
g++ -c hw04menu.cpp

hw04det.o:
g++ -c hw04det.cpp

inReset.o:
g++ -c inReset.cpp  

prHdr.o:
g++ -c prHdr.cpp

tar: hw04.tar

hw04.tar: hw04.cpp hw04add.cpp hw04subtract.cpp hw04mul.cpp hw04menu.cpp hw04det.cpp hw04det.cpp inReset.cpp prHDr.cpp
tar cf 



all: 
