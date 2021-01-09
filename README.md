<p align="center"><img width="200" src="https://github.com/Firmament-Autopilot/FMT_Firmware/blob/master/figures/logo.png" alt=FMT logo"></p>

<p align="center">
  <a href="/LICENSE"><img src="https://img.shields.io/badge/license-Apache--2.0-brightgreen" alt="GitHub license" /></a>
</p>

[中文页](README_cn.md) |

Overview
============================
Firmament Autopilot (FMT) is an open source autopilot based on Model-Based Design (MBD). This project is derived from the [Starry Pilot](https://github.com/JcZou/StarryPilot), including an embedded flight control system [FMT Firmware](https://github.com/FirmamentPilot/FMT_Firmware) and the algorithm model framework [FMT Model](https://github.com/FirmamentPilot/FMT_Model) developed based on Matlab/Simulink .

Based on the FMT platform, the algorithm development and verification become much easier and quicker. There is no need to manually write embedded codes anymore. You only need to design the algorithm model in Simulink graphically and then generate C/C++ code with just one click. The generated code can be integrated into the FMT Firmware seamlessly, which dramatically improves the efficiency of development and testing work.

Project Homepage : https://github.com/Firmament-Autopilot

## Architecture
FMT Firmware is the embedded flight controller of the FMT Autopilot. Its architecture is shown in the figure below.

![fmt_structure](figures/fmt_struct.png)

Where the **INS**, **FMS**, **Controller** and **Plant** are modules generated by FMT Model. But it's always possible to integrate your source code written with C/C++;

## Supported Hardware
- **Pixhawk**: FMUv2.
-  May support more hardwares in future. 

## Documentation
[User Guide (CN)](https://github.com/FirmamentPilot/fmt_user_guide_cn)

## Develop Environment
The following toolchain are needed for development.

- Compiler: arm-none-eabi- toolchain (recommend: `7-2018-q2-update`，other version are not well tested). [download](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
- Construction tool: Scons
  - Python 2.x (**Python 2.7.x is preferable**) is needed
  - Scons 2.x (**Scons 2.3.6 is prederable**) is needed: [download](https://sourceforge.net/projects/scons/files/scons/2.3.6/)
- USB Driver (only needed for Windows): [download](https://www.st.com/en/development-tools/stsw-stm32102.html)
  
## Build & Download Firmware
Please refer to the user guide.

## Acknowledgement
Big thanks to these contributor:
- [weety](https://github.com/weety)
- [yangjiong](https://github.com/yangjion)

## Community
Wellcome to join our QQ Group
<p align="left"><img width="200" src="figures/QR_code.png" alt=QR code"></p>
  
## License
[Apache-2.0](./LICENSE)
