# Shlok_Keeb
FOR SUBMISSION PURPOSES- here is the link to my project that I completely recorded with lapse- https://lapse.hackclub.com/user/@shlok_r_patel10

a custom keyboard I built myself. This includes the pcb, case, firmware, and eventually, the assembly. I built this to learn more on how to design pcb's and get better at CAD

Built as part of Hackclub's YSWS Keeb

# Features
Custom pcb made in kicad
MX switches
Qmk software
3d printed case
Individually lit rgbs for each key
Rotary Encoder
Oled Screen

# Why I build it
I love building things on my computer and seeing them come to life as I build it. I've been working at getting better at using CAD so whenever I have a chance to improve them with another skill I always take it. 

I was able to learn how to use Kicad, CAD, some firmware use, how to solder, and the engineering behind keyboard

# Design Process
I started in Kicad, I modeled the schematic with all my keys, leds, the microcontroller, oled, and rotary encoder. Then I moved to the actually pcb routing the traces, and placing the keys where i wanted them. After finished that I went to onshape to design the case in 2 peices that will be screwed or glued together. After that I went to the qmk software to write the firmware. 

# Components
Custom PCB
Raspberri pi pico
MX switches
Stabilizers
Usb cable
3D printed case
keycaps
Sk6812 Mini-e LEDs
EC11 rotary encoder
0.91in OLED display

# Challenges
My biggest challenges were:

Learned onshape 
routing my pcb with all the traces
building my case 
writing the firmware

# Images

Matrix schematic
<img width="2560" height="1392" alt="Screenshot 2026-09-05 150206" src="https://github.com/user-attachments/assets/a5e6965c-bc60-409b-aae9-9edfecabf7eb" />

PCB
<img width="1878" height="702" alt="image" src="https://github.com/user-attachments/assets/1b525c3a-defb-49ef-9fcd-bde4f2ac9910" />
<img width="2560" height="1392" alt="Screenshot 2026-09-04 205524" src="https://github.com/user-attachments/assets/fbd9ee69-96e1-4888-b67f-a4e3303e101e" />

Case
<img width="2560" height="1392" alt="Screenshot 2026-09-04 213924" src="https://github.com/user-attachments/assets/b55b0c60-7abe-4662-9fc6-c0ab1e0f81a9" />
<img width="2560" height="1392" alt="Screenshot 2026-09-04 221341" src="https://github.com/user-attachments/assets/6ae31bb9-e1e7-4be1-a4b7-dc7245d5ab6a" />

Bill of Materials(BOM)
| SI No. | Name | Notes | Quantity | Price Per Unit (₹) | Total (₹) | Running Total (₹) | Price/Unit (USD) | Total (USD) | Running Total (USD) | Link |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
| 1 | 0.91" OLED Display | 128x32 I2C OLED, GND-VCC-SCL-SDA | 1 | 1.09 | 1.09 | 1.09 | 1.09 | 1.09 | 1.09 | https://www.aliexpress.us/item/2251832650376908.html |
| 2 | EC11 Rotary Encoder | ALPS EC11E compatible, vertical, H20mm | 1 | 0.46 | 0.46 | 1.55 | 0.46 | 0.46 | 1.55 | https://www.alibaba.com/product-detail/EC11-rotary-15-20mm-Meihua-Bing_1600985459709.html |
| 3 | Key Switches | MX compatible switches, pack of 10 | 7 | 1.00 | 7.00 | 8.55 | 0.14 | 7.00 | 8.55 | https://www.aliexpress.us/item/3256802192387196.html |
| 4 | SK6812MINI-E | Addressable RGB LED, LCSC C5149201 | 61 | 0.0649 | 3.96 | 12.51 | 0.0649 | 3.96 | 12.51 | https://www.lcsc.com/product-detail/C5149201.html |
| 5 | 1N4148 Diodes | 1N4148, pack of 100 | 1 | 0.99 | 0.99 | 13.50 | 0.99 | 0.99 | 13.50 | https://www.aliexpress.com/w/wholesale-diode-1n4148.html |
| 6 | Durock V2 Screw-In Stabilizers | 5 stabilizers | 1 | 16.00 | 16.00 | 29.50 | 16.00 | 16.00 | 29.50 | https://upgradekeyboards.com/products/durock-v2-new-screw-in-stabilizers-clear |
| 7 | Custom PCB | JLCPCB manufactured PCB | 1 | 24.00 | 24.00 | 53.50 | 24.00 | 24.00 | 53.50 | https://jlcpcb.com/ |
| 8 | Thock King Shine Through Black PBT Keycap Set | Black pudding PBT, 61-key, RGB shine-through | 1 | 16.95 | 16.95 | 70.45 | 16.95 | 16.95 | 70.45 | https://www.thockking.com/products/shine-through-black-pbt-keycap-set-61-78-87-96-100-104-108 |
| 9 | Raspberry Pi Pico | RP2040 microcontroller | 1 | 4.00 | 4.00 | 74.45 | 4.00 | 4.00 | 74.45 | https://www.raspberrypi.com/products/raspberry-pi-pico/ |
