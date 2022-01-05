if [ ! -f "sd.bin" ]; then
qemu-img create -f raw sd.bin 64M
mkfs.vfat sd.bin
fi

qemu-system-arm -M vexpress-a9 -kernel build/fmt_fmu.bin -display none -sd sd.bin -serial stdio -serial udp::14550
