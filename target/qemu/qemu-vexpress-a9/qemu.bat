if exist sd.bin goto run
qemu-img create -f raw sd.bin 64M

:run
qemu-system-arm -M vexpress-a9 -kernel build/fmt_fmu.bin -nographic -sd sd.bin