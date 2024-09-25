
Custom ROM for Samsung Galaxy A12 (A125F)
=========================================

Getting started
---------------
To get started with building the custom ROM for Samsung Galaxy A12, you'll need to get familiar with [Source Control Tools](https://source.android.com/setup/develop).

To initialize your local repository using the custom ROM trees, use a command like this:
```
repo init -u https://github.com/LineageOS/android.git -b lineage-21.0 --git-lfs
```
Then to sync up:
```
repo sync
```
Please refer to this guide for instructions on building for the Samsung A12:

- **Device Tree**:  
  ```bash
  git clone https://github.com/unasir008/lineage-device-tree-a125f.git device/samsung/a12
  ```
  
- **Vendor Tree**:  
  ```bash
  git clone https://github.com/unasir008/galaxy-a125f-vendor-tree.git vendor/samsung/a12
  ```
  
- **Kernel Tree**:  
  ```bash
  git clone https://github.com/physwizz/a125m-S-u4.git kernel/samsung/a12
  ```

Submitting patches
------------------
Patches are always welcome! Please submit your patches via GitHub Pull Requests.

To view the status of your and others' patches, visit [GitHub](https://github.com/unasir008).

Buildbot
--------
All supported devices are built regularly to ensure the source trees remain buildable.

You can monitor build status via GitHub Actions.
