
# Custom ROM for Samsung Galaxy A12 (A125F)

## Getting Started

To build a custom ROM for the Samsung Galaxy A12, you need to be familiar with [Android Source Control Tools](https://source.android.com/setup/develop). Follow these steps to set up your environment and build your ROM.

### Initialize Local Repository

Use the following command to initialize your local repository with the custom ROM trees:

```bash
repo init -u https://github.com/LineageOS/android.git -b lineage-21.0 --git-lfs
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

Ensure the directory structure looks like this:
```
device/samsung/a12/
vendor/samsung/a12/
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

## Submitting Patches

Patches are always welcome! Please submit your patches via **GitHub Pull Requests**:

- **[Device Tree](https://github.com/unasir008/lineage-device-tree-a125f)**
- **[Vendor Tree](https://github.com/unasir008/galaxy-a125f-vendor-tree)**
- **[Kernel Tree](https://github.com/physwizz/a125m-S-u4)**

## Buildbot

All supported devices are built regularly to ensure the source trees remain buildable. You can monitor build status via **GitHub Actions**.

---

### Helpful Resources

- **LineageOS Wiki**: [Official Documentation](https://wiki.lineageos.org/)
- **Android Source Documentation**: [Source.android.com](https://source.android.com/setup/start)
- **GitHub**: [Nasir’s Development Repositories](https://github.com/unasir008)
