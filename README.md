
# Custom ROM for Samsung Galaxy A12 (A125F)

## Build Custom ROM for Samsung Galaxy A12

This repository contains the source code and instructions for building a custom ROM for the Samsung Galaxy A12 (A125F). If you're looking to contribute to the project or want to build the ROM from source, this document will guide you through the process.

### Requirements

To successfully build the ROM, you'll need a properly configured Linux or macOS environment. The recommended setup includes:

- **64-bit operating system** (Ubuntu 18.04 or newer is recommended)
- At least **100GB of free disk space** (200GB+ is recommended for a full build)
- At least **16GB of RAM** (32GB is preferable)
- A quad-core CPU or better

### Getting Started

#### 1. Install the required build packages

Make sure your system has all the necessary packages installed. On Ubuntu, you can install them by running:

\`\`\`bash
sudo apt update
sudo apt install bc bison build-essential curl flex g++-multilib gcc-multilib git gnupg gperf imagemagick lib32ncurses5-dev lib32readline-dev lib32z1-dev liblz4-tool libncurses5-dev libsdl1.2-dev libssl-dev libxml2 libxml2-utils lzop pngcrush rsync schedtool squashfs-tools xsltproc zip zlib1g-dev
\`\`\`

#### 2. Install Repo tool

The \`repo\` tool is used to manage the multiple Git repositories that make up the Android source code.

\`\`\`bash
mkdir -p ~/bin
curl https://storage.googleapis.com/git-repo-downloads/repo > ~/bin/repo
chmod a+x ~/bin/repo
\`\`\`

Add \`~/bin\` to your \`PATH\` environment variable:

\`\`\`bash
export PATH=~/bin:$PATH
\`\`\`

#### 3. Initialize the Repo

Now you can initialize the \`repo\` for the LineageOS 21.0 branch:

\`\`\`bash
repo init -u https://github.com/LineageOS/android.git -b lineage-21.0
\`\`\`

#### 4. Sync the source code

Once the \`repo\` is initialized, sync the source code by running:

\`\`\`bash
repo sync -j\$(nproc --all)
\`\`\`

This may take some time depending on your internet connection and system specifications.

#### 5. Clone Device, Vendor, and Kernel Trees

You need to clone the necessary repositories for the Samsung Galaxy A12 (A125F).

- **Device Tree**:
  \`\`\`bash
  git clone https://github.com/unasir008/lineage-device-tree-a125f.git device/samsung/a12
  \`\`\`
- **Vendor Tree**:
  \`\`\`bash
  git clone https://github.com/unasir008/galaxy-a125f-vendor-tree.git vendor/samsung/a12
  \`\`\`
- **Kernel Tree**:
  \`\`\`bash
  git clone https://github.com/physwizz/a125m-S-u4.git kernel/samsung/a12
  \`\`\`

### Building the ROM

#### 1. Set up the environment

Initialize the build environment with the following commands:

\`\`\`bash
source build/envsetup.sh
lunch lineage_a12-eng
\`\`\`

#### 2. Build the ROM

Start the build process:

\`\`\`bash
mka bacon
\`\`\`

This process will take a while, depending on your machine’s specs. If successful, you will find a flashable ROM (\`.zip\` file) in \`out/target/product/a12/\`.

### Contributing

We welcome all contributions to the project. If you encounter issues, feel free to open a pull request or report the bug in the issues section.

Before submitting patches, please ensure your changes are properly tested on a physical device.

### Maintainers

- Nasir ([@unasir008](https://github.com/unasir008))

### License

This code is licensed under the Apache License 2.0. For more information, see the [LICENSE](LICENSE) file.
