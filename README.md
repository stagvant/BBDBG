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
- Additionally framepacing issues where fixed.
- Disables motion blur which caused issues.
- Disables chromatic aberration as intended.

## Cutscene debug camera

Besides entering a cutscene normally as per game's procedure\
there is also a way to force it manually through the developer menu.\
By pressing the upper left of the touchpad will bring the developer menu.\
![BB1](https://user-images.githubusercontent.com/131619524/233868088-e9ef1b66-84c8-4bcf-9153-b06325273048.jpg)\
Navigating to [GAME] option and press circle then go to [REMO] and circle.\
![BB2](https://user-images.githubusercontent.com/131619524/233868116-4c3c919f-1f29-4144-b363-6e4355c931b1.jpg)\
Now you will have to change the AreaNo and BlockNo values by pressing triangle.\
After that you have to navigate to the option where it prompts use to PushOtoPlay.\
![BB3](https://user-images.githubusercontent.com/131619524/233868135-48369c1f-9c56-4e99-a058-43ac7db7af6a.jpg)\
If done correctly a new option will appear at the bottom go there and press circle.\
![BB4](https://user-images.githubusercontent.com/131619524/233868284-088cb335-1159-46f7-8835-f034803aff49.jpg)\
To loop the cutscene swap cross with circle by pressing right arrow on crosspad.\
![BB5](https://user-images.githubusercontent.com/131619524/233868201-4b7f9574-5bf9-47b2-a267-4bcfafe05ca4.jpg)\
![BB6](https://user-images.githubusercontent.com/131619524/233868208-06c66b18-9b24-49bd-abbb-ad894ee74bd0.jpg)\
Close the developer menu the same way you opened and enjoy a new perspective!\
Just for your interest in case you want to end the loop press options or do the swap!

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

The source of BBDBG is currently private due to potential improper use.\
Although there might be an attempt of reconsidering in the future.

## License

BBDBG is released under the [GPLv3 License](https://github.com/stagvant/BBDBG/blob/main/LICENSE).
