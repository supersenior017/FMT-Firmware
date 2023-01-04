# Modify this file to decide which hal device are compiled

HAL = [
    'pin/*.c',
    'serial/*.c',
    'systick/*.c',
    # 'sd/*.c',
    'usb/usbd_cdc.c',
    'spi/spi_core.c',
    'spi/spi_dev.c',
    'spi/spi_msd.c',
    'i2c/*.c',
    'gyro/*.c',
    'accel/*.c',
    'mag/*.c',
    'barometer/*.c',
    # 'fmtio_dev/*.c',
    'motor/*.c',
    'actuator/*.c',
    'rc/*.c',
    'gps/*.c',
    'adc/*.c',
    'mtd/*.c',
    'airspeed/*.c',
]

HAL_CPPPATH = []