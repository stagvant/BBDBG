# BBDBG - Goldhen Plugin for Playstation4

## Versions supported

- Application version:1.00
- Application version:1.06
- Application version:1.09

## Releases supported

#### Bloodborne Original Edition

- CUSA00207 Europe
- CUSA00299 Japan
- CUSA00900 America
- CUSA01363 Australia

#### Bloodborne The Old Hunters Edition

- CUSA03014 Japan
- CUSA03023 Australia
- CUSA03173 Europe
- CUSA03179 America

## Features

- Modifies Bloodborne a FromSoftware game before boot.
- Activates debug camera once the player enters cutscene.
- Activates developer menu which grants more freedom.
- Redirects lock on target taking control of entity.
- Activates TopMenuDebug in the options menu.
- Additionally framepacing issues were fixed.
- Disables motion blur which caused issues.
- Disables chromatic aberration as intended.

## Overworld debug camera

Besides enabling debug camera when entering a cutscene\
there is also a way to enable it from the developer menu.\
By pressing the upper left of the touchpad activates it.\
Navigating to [SYSTEM] option and press circle.\
![BB1](https://user-images.githubusercontent.com/131619524/235291307-578b508b-05de-453c-a7b5-43a31adc8a43.jpg)\
Then navigate to [MoveMapStep] and press circle.\
![BB2](https://user-images.githubusercontent.com/131619524/235291309-c94b0bde-c09e-4172-90c1-5b49cb4a34b9.jpg)\
Finally navigate to Pause and switch from Off to On.\
![BB3](https://user-images.githubusercontent.com/131619524/235291313-fe7dbe84-cfb7-4ec4-9937-433bae424df7.jpg)\
Congratulations you enabled the overworld debug camera!\
Additionally while the debug camera is active all entities will freeze.

## TopMenuDebug option

Pressing options button brings up the TopMenu.\
By moving the highlight to the far right will change the description to Debug.\
![BB7](https://user-images.githubusercontent.com/131619524/233867913-04f592d2-690d-4119-968b-3df85ca30589.jpg)\
By pressing debug option brings a menu with some random ideograms.\
![BB8](https://user-images.githubusercontent.com/131619524/233867920-2a4b1ed6-aeec-4ce6-b321-fc5bd87fcf69.jpg)\
Navigating to the indicated option will allow you to level up on the move.

## Enemy control manipulation

In order to takeover the control of an entity you have to\
hold down right joystick as if were trying to lock on it.

By the moment you lock on the target the system will\
pass over the controls for manipulating the enemy AI\
Be aware due to the nature of how this mod works you\
will not be able to lock on target normally anymore.

You can get back to the default entity you were in control\
by performing the same actions to manipulate other entities.

## Force return to main menu combo

I only incorporated this feature just in case your entity gets\
terminated and you are unable to take over another vessel.

Basically you get softlocked till you close the game completely\
unless you press down right joystick while the cross button is\
also pressed in order to kick you back to the title screen.\
From there you can load the game again where you left it.

## Known Bugs and Issues

Should be mentioned for your own sanity to make sure of turning off the lock-on and\
lock on target from the options menu to prevent passing back and forth of controls.\
Additionally do not wander too far from your default entity or you will get despawned.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/99K883B7XG#5L6jlq0yE3yw) for displaying developer menu
- Knowledge on how to make a backup copy of a game
- Knowledge on how to setup a plugin to run properly

## Toolchains used

- [LLVM 10](https://llvm.org/)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Credits

- [Special thanks to Potomy](https://twitter.com/_potomy_)

For his significant contribution on backporting a feature from Dark Souls 3 developer menu\
back to Bloodborne, allowing a new kind of interaction with the overworld debug camera!!!

- [Everyone at OpenOrbis Team](https://github.com/OpenOrbis)
- [Everyone at Goldhen Team](https://github.com/Goldhen)

## Consider donating

- [Option1](https://ko-fi.com/stagvant)
- [Option2](https://buymeacoffee.com/stagvant)

## License

BBDBG is released under the [GPLv3 License](https://github.com/stagvant/BBDBG/blob/main/LICENSE).
