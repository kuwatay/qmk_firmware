Signum3.0 / Signum3.1
====

The Signum 3.0 PCB makes it easy to DIY a ergonomic mechanical
keyboard customized to your needs and hand size! [More
info](http://troyfletcher.net/keyboard_sales.html).

Keyboard Maintainer: [Troy Fletcher]

Hardware Supported: Pro Micro  / Teensy 2.0

Hardware Availability: [Troy Fletcher](http://troyfletcher.net/keyboard_sales.html)

Make example for this keyboard (after setting up your build environment):

    make signum/v30:default
    make signum/v31:default_v31

Example of flashing this keyboard:

    make signum/v30:default:avrdude
    make signum/v31:default:avrdude

See [build environment setup](https://docs.qmk.fm/#/newbs_getting_started) then the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

A build guide for this keyboard can be found here: [Iris Build Guide](https://docs.keeb.io/iris-build-guide.html)
