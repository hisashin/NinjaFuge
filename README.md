NinjaFuge
==========
Opensource ([CC BY-NC-SA 2.5](https://creativecommons.org/licenses/by-nc-sa/2.5/)) centrifuge derived from [F.Lab's one](http://www.instructables.com/id/3D-Printed-DIYbio-Mini-Centrifuge/).

- [Frequently asked questions](#faq)
- [What we changed and to be changed in future](#change)
- [Please note before making](#note)
- [Bill of material](#bom)
- [Source code](#source)

### <a name="faq"></a>FAQ

- How much?

	In my case, total parts price was $20 because the cheapest brushless motor+ESR kit for drone was $10 at [Amazon.co.jp](https://www.amazon.co.jp/gp/product/B01MTCBO7D/ref=oh_aui_detailpage_o09_s00?ie=UTF8&psc=1). It's now $15 so I might be lucky a little.

- How fast?

	In my case, max speed is 12,000RPM because I conneced 12V adapter to 1000KV (that means +1000RPM per 1V) motor. You can make faster one if you choose better motor. Check absolute maximum voltages of your kit and Arduino.

### <a name="change"></a>Changelogs and Todos

- Done on 2017 Aug 7
	- Changed enclosure from 3d printing to acrylic lasercut. because I thought printing takes too long time and might fail.
	- Added magnet to cover and magnetic sensor to base. so that it can stop rorating when cover is opened.
- Todo
	- I don't know how to brake motor and it takes seconds to stop rorating. That means it's still not safe perfectly. 
	Small servo motor should be added to lock the cover while rotating.

### <a name="note"></a>Notes before making

- Any hinge around you can be used but yours will not be same as mine. Don't forget to change holes on both cover_back and base_back to yours.

### <a name="bom"></a>Bill of material



### <a name="source"></a>Source code


