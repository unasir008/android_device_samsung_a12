
# Custom ROM for Samsung Galaxy A12 (A125F)

## Getting Started

To build a custom ROM for the Samsung Galaxy A12, you need to be familiar with [Android Source Control Tools](https://source.android.com/setup/develop). Follow these steps to set up your environment and build your ROM.

### Initialize Local Repository

Use the following command to initialize your local repository with the custom ROM trees:

```bash
repo init -u https://github.com/LineageOS/android.git -b lineage-22.2 --git-lfs
```

### Sync the Repository

Once initialized, sync the repository:

```bash
repo sync --force-sync -j$(nproc)
```

### Clone Device-Specific Trees

Clone the necessary repositories for the Samsung Galaxy A12:

- **Device Tree**:  
   ```bash
   git clone https://github.com/unasir008/android_device_samsung_a12.git -b Lineage-22.2 device/samsung/a12
   ```

- **Vendor Lpm Tree**:  
   ```bash
   git clone https://github.com/unasir008/android_vendor_samsung_lpm-p35.git -b Lineage-22.2 vendor/samsung/lpm-p35
   ```

- **Kernel Tree**:  
   ```bash
   git clone https://github.com/unasir008/android_kernel_samsung_a12.git kernel/samsung/a12
   ```

Ensure the directory structure looks like this:
```
device/samsung/a12/
vendor/samsung/lpm-p35/
kernel/samsung/a12/
```

## Building the ROM

1. **Set up the build environment**:  
   ```bash
   source build/envsetup.sh
   ```

2. **Choose the build target**:  
   ```bash
   lunch lineage_a12-userdebug
   ```

3. **Start the build**:  
   ```bash
   mka bacon
   ```

The final ROM file will be located in:  
`out/target/product/a12/lineage-21.0-<date>-UNOFFICIAL-a12.zip`

## Buildbot

All supported devices are built regularly to ensure the source trees remain buildable. You can monitor build status via **GitHub Actions**.

---

### Helpful Resources

- **LineageOS Wiki**: [Official Documentation](https://wiki.lineageos.org/)
- **Android Source Documentation**: [Source.android.com](https://source.android.com/setup/start)
- **GitHub**: [Nasir’s Development Repositories](https://github.com/unasir008)

