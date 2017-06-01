all: hw04

hw04: hw04.cpp hw04add.cpp hw04subtract.cpp hw04mul.cpp hw04menu.cpp hw04det.cpp inReset.cpp prHdr.cpp  
	g++ -o hw04 $^

hw04add.o: hw04add.cpp
	g++ hw04add.cpp -o hw04add.o$^

hw04subtract.o: hw04subtract.cpp
	g++ hw04subtract.cpp -o hw04subtract.o $^

hw04mul.o: hw04mul.cpp
	g++ hw04mul.cpp -o hw04mul.o $^

hw04menu.o: hw04menu.cpp 
	g++ hw04menu.cpp -o hw04menu.o $^

hw04det.o: hw04det.cpp
	g++ hw04det.cpp -o hw04det.o $^

inReset.o: inReset.cpp
	g++ inReset.cpp -o inReset.o $^

prHdr.o: prHdr.cpp
	g++ prHdr.cpp -o prHdr.o $^ 

clean: 
	rm *.o hw04

tar: hw04.tar 

hw04.tar: hw04.cpp hw04add.cpp hw04subtract.cpp hw04mul.cpp hw04menu.cpp hw04det.cpp hw04det.cpp inReset.cpp prHdr.cpp Makefile hw04.scr
	
	tar cvf hw04.tar $^  
