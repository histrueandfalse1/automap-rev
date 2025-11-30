build:
	@echo "Building project..."
	mkdir -p bin 
	clang++ src/core/main.cpp -o bin/main -framework CoreMIDI -framework CoreFoundation

clean:
	rm -Rf bin