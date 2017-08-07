NinjaFuge
==========
Opensource ([CC BY-NC-SA 2.5](https://creativecommons.org/licenses/by-nc-sa/2.5/)) centrifuge derived from [F.Lab's one](http://www.instructables.com/id/3D-Printed-DIYbio-Mini-Centrifuge/).

- [Frequently asked questions](#faq)
- [What we changed and to be changed in future](#change)
- [Please note before making](#note)
- [Bill of material](#bom)
- [Wirings](#wire)
- [Source code](#source)

### <a name="faq"></a>FAQ

- How much?

	In my case, total parts price was around $30 with cheapest $10 brushless motor+ESC kit for drone.

- How fast?

	In my case, max speed is 12,000RPM because I conneced 12V adapter to 1000KV (that means +1000RPM per 1V) motor. You can make faster one if you choose better motor. Check absolute maximum voltages of your kit and Arduino.

### <a name="change"></a>Changelogs and Todos

- Done on 2017 Aug 7
	- Changed enclosure from 3d printing to acrylic lasercut. because I thought printing takes too long time and might fail.
	- Added magnet to cover and reed switch to base. so that it can stop rorating when cover is opened.
- Todo
	- I don't know how to brake motor and it takes seconds to stop rorating. That means it's still not safe perfectly. 
	Small servo motor should be added to lock the cover while rotating.

### <a name="note"></a>Notes before making

- Any hinge around you can be used but yours will not be same as mine. Don't forget to change holes on both cover_back and base_back to yours.
- Such minor changes should be done following specs of other parts like motor, variable resistor and switch. If you use bigger Arduino, basement should be wider.

### <a name="bom"></a>Bill of material

- 3mm acrylic board with enough space for [this pdf](https://github.com/hisashin/NinjaFuge/blob/master/lasercut/NinjaFuge_3mm_clear.pdf).
- Some heat shrinkable tubes with different diameters to protect soldering
- Small Arduino like [Arduino Nano](https://store.arduino.cc/usa/arduino-nano), [Arduino Pro Mini](https://store.arduino.cc/usa/arduino-pro-mini) or anything compatible

- If you're living in same country as me, Japan, you're lucky! No need to change lasercut design if you use them.

	- [Brushless motor and ESC kit](https://www.amazon.co.jp/gp/product/B01MTCBO7D/ref=oh_aui_detailpage_o09_s00?ie=UTF8&psc=1)
	- [Variable resistor](http://akizukidenshi.com/catalog/g/gP-00246/)
	- [Single circuit locker switch](https://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=3A8K-4BFY)
	- [Neodymium magnet](http://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=EEHD-4VZZ)
	- [Reed switch](http://akizukidenshi.com/catalog/g/gP-03676/)
	- [Hinge](https://hands.net/goods/4991807041876/)
	- [DC jack](http://www.sengoku.co.jp/mod/sgk_cart/detail.php?code=EEHD-0HMZ)
	- [12V AC adapter](http://akizukidenshi.com/catalog/g/gM-06961/)

- If not, it would be cheaper to find items similar to above list around you and change lasercut a little for each of them.

### <a name="wire"></a>Wirings

![diagram](https://raw.githubusercontent.com/hisashin/NinjaFuge/master/markdown/diagram.png)

### <a name="source"></a>Source code


