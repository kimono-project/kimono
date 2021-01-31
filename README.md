# Kimono
A privacy-focused anonymous blockchain network written in C++ 


<!--### Install dependencies

```bash
apt-get unzip libssl
``` -->


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

### Install deps on Brew

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
```

**wip** 
