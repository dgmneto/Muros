all: main Final.zip clean_temp

main: Casa.o main.o
	g++ -I include Casa.o main.o -o main

Casa.o: Casa.cpp
	g++ -c -I include Casa.cpp -o Casa.o

main.o: main.cpp
	g++ -c -I include main.cpp -o main.o

Final.zip: main.cpp Casa.cpp makefile include remove_zip
	zip -r Final.zip main.cpp Casa.cpp makefile include

remove_zip:
	rm Final.zip

clean:
	rm main.o casa.o entrada.in berinjela.out *.txt main

clean_temp:
	rm main.o casa.o
