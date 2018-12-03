[![Build Status](https://travis-ci.org/leonardoms/DiyOS.svg?branch=2019)](https://travis-ci.org/leonardoms/DiyOS)
# DiyOS - do it yourself
Small study Operating System

This is a very very very experimental code, no warranties, it's for own study. :rage3:

Help me with a Star :star:

---
Latest built ISO @ [build/](build/)

Latest boot screenshots

![Testing GUI Screenshot](build/screenshot_gui.png)

---

What is done:
* Graphical Server (initial tests)
* Graphical User Interface (initial tests)
* Initial RAM Disk in Tar file format.
* Multitasking  
* Basic Message System (IPC)
* Global Descriptor Table (GDT)
  * Flat memory
* Interrupt Descriptor Table (IDT)
  * Basic ISR (only print a message and halt)
  * IRQs
* Paging enabled
  * Low Memory (0 ~ 1MB) identity paging
  * High-Half Kernel (kernel above 0xC0000000)
  * 4MB at 0xFFC00000 fixed for Page Tables (physical memory after kernel location)
  * kmalloc() and kfree() (bitmap manager with flags on 3-bit unused on each Page Table entry)
* Drivers
  * keyboard, Timer, Basic Video, PIC
  * Bochs VBE video
  * Basic VGA
  * Network Realtek RTL81xx
  * Network NE2000 (n2k) [working on]

To  compile:
```
make
```
To create a disk iso file:
```
make iso
```
To run with Qemu:
```
make run
```
