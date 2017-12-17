.. _nrf52_ruuvitag:

RuuviTag
########

Overview
********
The RuuviTag is an advanced open-source sensor beacon platform equipped with Nordic's nRF52832 Bluetooth Low Energy SOC.
It has onboard temperature, relative air humidity, air pressure and acceleration sensors as well as RFID.
It is available at the Ruuvi shop:
https://shop.ruuvi.com/

Hardware
********
- nRF52832 SoC contains a 32-bit ARM Cortex-M4F CPU with 512kB flash + 64kB RAM
- 11 x Digital I/0
- 1 UART with hardware flow control ( 4 I/O pins occupied )
- 1 I2C ( 2 I/O pins occupied )
- On board sensors:

  - Bosch BME 280 temperature + relative air humidity + air pressure sensor
  - STMicroelectronics LIS2DH12 accelerometer

- 2 User LEDs
- 1 User button
- NFC-A tag antenna
- GPIO
- I2C
- SPI


Supported Features
==================
The RuuviTag configuration supports the following hardware features:

+-----------+------------+--------------------------------------+
| Interface | Controller |      Driver/Component                |
+===========+============+======================================+
| NVIC      | on-chip    | nested vectored interrupt controller |
+-----------+------------+--------------------------------------+
| UART      | on-chip    | serial port                          |
+-----------+------------+--------------------------------------+
| GPIO      | on-chip    | gpio                                 |
+-----------+------------+--------------------------------------+
| FLASH     | on-chip    | flash                                |
+-----------+------------+--------------------------------------+
| RADIO     | on-chip    | Bluetooth                            |
+-----------+------------+--------------------------------------+
| I2C       | on-chip    | i2c                                  |
+-----------+------------+--------------------------------------+

Connections and IOs
====================

RuuviTag pinout

The current pinout information is documented on the RuuviTag Lab.

.. _Pinout: https://lab.ruuvi.com/pinout/

DevShield

Details of the DevShould is documented on the RuuviTag Lab.
.. _Pinout: https://lab.ruuvi.com/devshield

The Development Kit is designed for developers who would like to take their RuuviTags to the limit by flashing and debugging the devices via SWD (Serial-Wire-Debug) bus.


Programming and Debugging
*************************

Applications for the ``nrf52_ruuvitag`` configuration can be built and
flashed in the usual way (see :ref:`build_an_application` and
:ref:`application_run` for more details).

Flashing
========

To flash an application, you'll need to mount your RuuviTag on the
DevShield board, then attach that to your computer via USB.

.. warning::

   Be careful to mount the RuuviTag correctly! The side of the board
   with the VIN and GND pins should face **towards** the USB
   connector.

See the :ref:`getting_started` for general information on setting up
your development environment.

Now build and flash applications as usual. Here is an example for the
:ref:`hello_world` application.

.. zephyr-app-commands::
   :zephyr-app: samples/hello_world
   :board: nrf52_ruuvitag
   :goals: build flash

Debugging
=========

After mounting the RuuviTag on its DevShield board as described above,
you can debug an application in the usual way.  Here is an example for
the :ref:`hello_world` application.

.. zephyr-app-commands::
   :zephyr-app: samples/hello_world
   :board: nrf52_ruuvitag
   :maybe-skip-config:
   :goals: debug

Testing the RuuviTag with Zephyr: buttons, LEDs, BLE
****************************************************

Here are some sample applications that you can use to test different
components on the VBLUno52 board:

* :ref:`hello_world`
* :ref:`blinky-sample`
* :ref:`button-sample`
* :ref:`bluetooth-beacon-sample`

References
**********

.. target-notes::

.. _Homepage: https://tag.ruuvi.com/
.. _Kickstarter: https://www.kickstarter.com/projects/463050344/ruuvitag-open-source-bluetooth-sensor-beacon
.. _Github: https://github.com/ruuvi/
.. _RedBear Forum: https://f.ruuvi.com/
