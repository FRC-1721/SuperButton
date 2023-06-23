# A very simple makefile full of shortcuts

# What port the arduino is on
ifndef SERIAL_DEV
	ifneq (,$(wildcard /dev/ttyUSB0))
		SERIAL_DEV = /dev/ttyUSB0
	else ifneq (,$(wildcard /dev/ttyACM0))
		SERIAL_DEV = /dev/ttyACM0
	else
		SERIAL_DEV = unknown
	endif
endif

.PHONY: build test

ALL: build

configure:
	#arduino-cli config init
	arduino-cli config set library.enable_unsafe_install true
	arduino-cli core install CH55xDuino:mcs51 --additional-urls https://raw.githubusercontent.com/DeqingSun/ch55xduino/ch55xduino/package_ch55xduino_mcs51_index.json
	arduino-cli lib install --git-url https://github.com/atc1441/CH_HID_Arduino.git

build:
	arduino-cli compile --fqbn CH55xDuino:mcs51:ch552 src

# For CI
binaries:
	pio run
	pio run -t .pio/build/attiny85/firmware.eep

flash:
	arduino-cli upload -p $(SERIAL_DEV) --fqbn CH55xDuino:mcs51:ch552 src

clean:
	git clean -fdX