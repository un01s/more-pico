# more pico code in C or C++

## 01. take pio/ws2812 parallel example from [pico-examples](https://github.com/raspberrypi/pico-examples)

before building the code, make sure that both ```PICO_SDK_PATH``` and ```PICO_TOOLCHAIN_PATH``` are set properly.

the code works as expected and it's much faster than the non-DMA version. 

```
$ mkdir build && cd build
$ cmake .. && make
$ cp pico-ws2812p.uf2 /Volumes/RPI-RP2/pico-ws2812p.uf2
```

