# Kimono
A privacy-focused anonymous blockchain network written in C++. The Kimono network is largely inspired and based on the Bitcoin as also the Monero cryptocurrency. 

<!--## Features

- max blocks: 2000000 XKM
-->

## Table of Contents

  - [Build from Sources]()
    - [Build on Unix](#build-from-sources-on-unixlinux)
    - [Build on Windows](#build-kimono-on-windows-devices)
    - [Build on Docker](#build-with-docker-not-supported-yet)
    - [Build on Meson](#build-kimono-on-meson-not-supported-yet)
  <!--- [Translations](#translations)
  - [Coverage](#coverage)
  - [Introduction](#introduction)
  - [About this project](#about-this-project)
  - [Supporting the project](#supporting-the-project)
  - [License](#license)
  - [Contributing](#contributing)
  - [Scheduled software upgrades](#scheduled-software-upgrades)
  - [Release staging schedule and protocol](#release-staging-schedule-and-protocol)
    - [Dependencies](#dependencies)
  - [Internationalization](#Internationalization)
  - [Using Tor](#using-tor)
  - [Pruning](#Pruning)
  - [Debugging](#Debugging)
  - [Known issues](#known-issues)-->

<!--### Install dependencies

```bash
apt-get unzip libssl
``` -->

### Install dependencies on Unix

```bash
sudo apt-get update
sudo apt-get install autoconf cmake make automake libtool git libboost-all-dev libssl-dev g++ libcurl4-openssl-dev
```

### Build from sources on Unix/Linux

Simply fire up a terminal of your choice and do:

```bash
cd kimono
make
```

### Build Kimono on Windows devices

Compile and build on Windows 10 using the `msvc` or the `GNU G++` compiler (Visual Studio Express 2015), then launch: **C:\executable_location\kimono**


### Build with Docker `not supported yet`

```bash
cd kimono/builds/docker
docker-compose up --detached
```

### Build Kimono on Meson `not supported yet`

```bash
cd kimono/builds/meson
meson setup build
```

### Build Kimono on FreeBSD `not supported yet`

Install the required dependencies the usual way you install software on FreeBSD - either with `pkg` or via the Ports collection. The example commands below use pkg which is usually run as `root` or via `sudo`.

```bash
pkg install autoconf automake boost-libs git gmake libevent libtool pkgconf
```

Now that git and all the required dependencies are installed, let's clone the Kimono repository to a directory. All build scripts and commands will run from this directory.

```bash
git clone https://github.com/kimono-project/kimono.git
```

Now we should be able to compile kimono from sources. 

> Important: Use gmake (the non-GNU make will exit with an error)

```bash
gmake # use -jX here for parallelism
gmake check # Run tests if Python 3 is available
```

<!--### Install deps on Brew

```bash
brew "cmake"
brew "coreutils"
brew "cryptopp"
brew "pbc"
brew "openssl@1.1"
brew "readline"
brew "boost"
brew "doxygen"
brew "nlohmann-json"
```-->

<!--### Setup wallet-->

> This project is a work-in-progress. I'd consider you not to use the current version in production since it is unfinished
