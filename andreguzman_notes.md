# andreguzman@ Lily58

## Firmware
The firmware under lily58/andreguzman is modified specifically for my
builds.

Modifications:

1. **Handedness Matrix**: Determine handedness via hardware.
2. **Masked Matrix**: Works with handedness diode to mask phantom key presses
   	    	      from handedness diode.
3. **Master Left**: Sets the left keyboard as having the handedness pin
   	    	    (default is right).

## Hardware:
The firmware works with both pro-micro style boards and rp2040 boards
(like the Blok). The firmware works with off-the-shelf lily58 boards with
one modification.

Modifications:
1. **Handedness Diode**: A handedeness diode must be soldered from D4 -> B5
   			 (in this direction exactly). Adding a 1kOhm resistor
			 is preferred.

## Keyboard Layout
Custom layout. Multiple of these can exist.