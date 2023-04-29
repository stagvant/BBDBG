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
Additionally while the debug camera is active all entities will freeze.\
Skip is under the pause option which once selected and circle is\
pressed will unfreeze for a few frames and then freeze again.

## TopMenuDebug option

Pressing options button brings up the TopMenu.\
By moving the highlight to the far right will change the description to Debug.\
![BB7](https://user-images.githubusercontent.com/131619524/233867913-04f592d2-690d-4119-968b-3df85ca30589.jpg)\
By pressing debug option brings a menu with some random ideograms.\
![BB8](https://user-images.githubusercontent.com/131619524/233867920-2a4b1ed6-aeec-4ce6-b321-fc5bd87fcf69.jpg)\
Navigating to the indicated option will allow you to level up on the move.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/99K883B7XG#5L6jlq0yE3yw) for the developer menu
- Knowledge on how to make a backup copy of a game
- Knowledge on how to setup a plugin to run properly

## Toolchains used

- [LLVM 10](https://llvm.org/)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Credits

- [Special thanks to Potomy](https://twitter.com/_potomy_)

For his significant contribution on backporting a feature from Dark Souls 3 developer menu\
to Bloodborne, allowing a new kind of interaction with the overworld debug camera!!!

- [Everyone at OpenOrbis Team](https://github.com/OpenOrbis)
- [Everyone at Goldhen Team](https://github.com/Goldhen)

Without your toolchains I wouldn't be able to distribute my patches!

## Consider donating

- [Ko-fi](https://ko-fi.com/stagvant)
- [Patreon](https://www.patreon.com/stagvant)
- [Buy me a Coffee](https://www.buymeacoffee.com/stagvant)

## License

BBDBG is released under the [GPLv3 License](https://github.com/stagvant/BBDBG/blob/main/LICENSE).
