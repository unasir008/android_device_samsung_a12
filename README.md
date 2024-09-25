# Lineageos device tree for samsung SM-A125F (a12)

```
#
# Copyright (C) 2024 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#
```
Building Custom ROM for Samsung Galaxy A12 (A125F)
This guide will walk you through building a custom ROM for the Samsung Galaxy A12 (A125F). This process assumes that you're familiar with the basics of building Android ROMs and have a working Linux or Mac environment.

Prerequisites
Operating System: Linux (Ubuntu is preferred) or macOS.
Working internet connection: A stable connection is essential to download source files.
Tools Required:
Python 3
Git
ADB & Fastboot
Java Development Kit (JDK 11 or above)
Contabo VPS (optional): For building in a cloud environment.
Setting Up Build Environment
Install required packages:

bash
Copy code
sudo apt update
sudo apt install bc bison build-essential curl flex g++-multilib gcc-multilib git gnupg gperf imagemagick lib32ncurses5-dev lib32readline-dev lib32z1-dev liblz4-tool libncurses5-dev libsdl1.2-dev libssl-dev libxml2 libxml2-utils lzop pngcrush rsync schedtool squashfs-tools xsltproc zip zlib1g-dev
Install Repo Tool:

bash
Copy code
mkdir -p ~/bin
curl https://storage.googleapis.com/git-repo-downloads/repo > ~/bin/repo
chmod a+x ~/bin/repo
Install Java JDK:

bash
Copy code
sudo apt install openjdk-11-jdk
Configure Git:

bash
Copy code
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
Syncing the Source
Initialize the repo for LineageOS 21:

bash
Copy code
repo init -u https://github.com/LineageOS/android.git -b lineage-21.0
Clone the Device, Vendor, and Kernel Trees:

Device Tree:
bash
Copy code
git clone https://github.com/unasir008/lineage-device-tree-a125f.git device/samsung/a12
Vendor Tree:
bash
Copy code
git clone https://github.com/unasir008/galaxy-a125f-vendor-tree.git vendor/samsung/a12
Kernel Tree:
bash
Copy code
git clone https://github.com/physwizz/a125m-S-u4.git kernel/samsung/a12
Sync the source:

bash
Copy code
repo sync -j$(nproc --all)
Building the ROM
Set up build environment:

bash
Copy code
source build/envsetup.sh
lunch lineage_a12-eng
Start the build process:

bash
Copy code
mka bacon
