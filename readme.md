# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/qmk)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the Clueboard product line.

### Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [VitePress](https://vitepress.dev/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls).

### Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

### Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

### Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.

---

# RecursiveVisions QMK Fork
This is a fork of [QMK](https://github.com/qmk/qmk_firmware) 0.26.11 including keymaps for the [Drop ALT V1](https://drop.com/buy/drop-alt-mechanical-keyboard) keyboard. Support for the Drop ALT V1 was [removed](https://github.com/qmk/qmk_firmware/blob/master/docs/ChangeLog/20241124.md) in QMK 0.27.0.

Note that Drop, formerly Massdrop, has their own [fork of QMK](https://github.com/Massdrop/qmk_firmware). See [this post](https://drop.com/talk/9382/how-to-configure-your-drop-keyboard/2884250) for more information.

## Setup
Run the following command to clone this fork and set your QMK home directory.

```bash
$ qmk setup -H <qmk_firmware-directory> RecursiveVisions/qmk_firmware
```

The default keyboard for this fork is the Massdrop ALT.
```bash
$ qmk config user.keyboard=massdrop/alt
```

### Compile and Flash
Run the following commands to compile and flash the main keymap. The Massdrop ALT uses the [mdloader](https://github.com/Massdrop/mdloader) firmware loader that must be downloaded first if you are not using [QMK Toolbox](https://qmk.fm/toolbox).
```bash
$ qmk compile -km <keymap-name>
$ ./mdloader --first --download <compiled-binary> --restart
```

Running `qmk compile` will produce a compiled binary that can be flashed to the keyboard using [QMK Toolbox](https://qmk.fm/toolbox) or [mdloader](https://github.com/Massdrop/mdloader). Running `./mdloader` will scan for a device. Within 60 seconds, hold `FN + B` for at least 250 ms to flash the firmware.

## Keymaps
The main keymap is `recursivevisions`. There is a minimal version of the keymap (with various features stripped) named `recursivevisions_minimal` (WIP).


## Features
### Layers
<!-- TODO: readme.md Features/Layers --> WIP

## Project Structure
The project structure is as follows.

<!-- TODO: readme.md Project Structure --> WIP

```txt
.
└── keyboards/
    └── massdrop/
        └── alt/
            └── keymaps/
                ├── recursivevisions/
                │   ├── custom_animations
                │   └── ...
                └── recursivevisions_minimal/
                    └── ...
```

Note that in VS Code, this fork excludes all directories in `keyboards` from the Explorer other than `keyboards/massdrop` and `keyboards/drop`.

## Implementation
<!-- TODO: readme.md Imlementation --> WIP
