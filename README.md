# Termux:GUI C/C++ Bindings
A C/C++ library to interact with the Termux:GUI plugin.

This is currently only a static library, so you only need to install it to compile software using it.

[HTML Documentation](https://tareksander.github.io/termux-gui-c-bindings/html/index.html)


## Installation

### From source (on device only)

You have to clone the repository configure cmake and install:

```bash
pkg install git build-essential libprotobuf-c-static protobuf # install git, clang, protobuf and cmake if not installed
git clone "https://github.com/tareksander/termux-gui-c-bindings.git" # clone the repository
cd termux-gui-c-bindings # go into the repository
cmake . -DCMAKE_INSTALL_PREFIX="$PREFIX" # configure cmake with the Termux prefix
make install # install

```


### As a package (on device only)

Run `pkg install termux-gui-c` once the packages is included in the repositories.


## Usage

### On device or using the [termux-packages repo](https://github.com/termux/termux-packages)

Just use it like a normal C/C++ library.

