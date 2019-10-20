# meta-sfos-librespot
Yocto layer to cross build librespot for SailfishOS on an arm processor.

**Currently building fails !!**

It fails while building the num-bigint create (missing stuff for i128 and u128).

### Building

The general idea is to:

get poky
```
  git clone -b thud --single-branch git://git.yoctoproject.org/poky
```

get meta-openembedded (meta-rust requires it)
```
  git clone -b thud  --single-branch git://git.openembedded.org/meta-openembedded
```

get meta-rust
```
  git clone https://github.com/meta-rust/meta-rust
```

get meta-sfos-librespot 
```
  git clone https://github.com/wdehoog/meta-sfos-librespot
```

setup build dir
```
  meta-sfos-librespot/setup.sh
```

build it
```
  cd build
  bitbake my-image
```

### Librespot recipe

The librespot recipe is made using cargo-bitbake. 
```
  git clone https://github.com/librespot-org/librespot.git
  cd librespot
  cargo install cargo-bitbake
  cargo bitbake 
```

Add flags to the new recipe
```
  DEPENDS += "alsa-lib pulseaudio"
  CARGO_BUILD_FLAGS += '--features "pulseaudio-backend"'
```
