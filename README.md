# BBDBG - Goldhen Plugin for Playstation4

## Versions supported

Application version:1.00
Application version:1.06
Application version:1.09

## Releases supported

Bloodborne Original Edition
CUSA00207 Europe
CUSA00299 Japan
CUSA00900 America
CUSA01363 Australia

Bloodborne The Old Hunters Edition
CUSA03014 Japan
CUSA03023 Australia
CUSA03173 Europe
CUSA03179 America

## Features

Modifies Bloodborne a FromSoftware game before boot.
Activates debug camera once the player enters cutscene.
Activates developer menu which grants more freedom.
Activates TopMenuDebug in the options menu.
Additionally framepacing issues where fixed.
Disables motion blur which caused issues.
Disables chromatic aberration as intended.

## Cutscene debug camera

Besides entering a cutscene normally as per game's procedure,
there is also a way to force it manually through the developer menu.
By pressing the upper left of the touchpad will bring the developer menu.
Navigating to [GAME] option and press circle then go to [REMO] and circle.
Now you will have to change the AreaNo and BlockNo values by pressing triangle.
After that you have to navigate to the option where it prompts use to PushOtoPlay.
If done correctly a new option will appear at the bottom go there and press circle.
To loop the cutscene swap cross with circle by pressing right arrow on crosspad.
Close the developer menu the same way you opened and enjoy a new perspective!
Just for your interest in case you want to end the loop press options or do the swap!

## TopMenuDebug option

Pressing options button brings up the TopMenu.
By moving the highlight to the far right will change the description to debug.
By pressing debug option brings a menu with some random ideograms.
Navigating to the indicated option will allow you to level up on the move.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/99K883B7XG#5L6jlq0yE3yw) for the developer menu

## Toolchains used

- [LLVM 10](https://llvm.org/)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Credits

- [Everyone at OpenOrbis Team](https://github.com/OpenOrbis)
- [Everyone at Goldhen Team](https://github.com/Goldhen)
Without your toolchains I wouldn't be able to distribute my patches!

## Consider donating

- [Ko-fi](https://ko-fi.com/stagvant)
- [Patreon](https://www.patreon.com/stagvant)
- [Buy me a Coffee](https://www.buymeacoffee.com/stagvant)

## Disclaimer

The source of BBDBG is currently private due to potential improper use.
Although there might be an attempt of reconsidering in the future.

## License

BBDBG is released under the [GPLv3 License](https://github.com/stagvant/BBDBG/blob/main/LICENSE).