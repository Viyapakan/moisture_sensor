This code is for HL69 soil moisture sensor

The prongs of the sensor detect the moisture level in the surrounding soil by passing
current through the soil and measuring the resistance. Damp soil
conducts electricity easily, so it provides lower resistance, while dry
soil conducts poorly and has a higher resistance.

Since we use A0 pin of the arduino to detect the moisture reading 
it will show the val from 0-1023, we can seta threshold value, i set it as 700 for this. 

I wrote the code in this manner, if the reading greater than 700, the soil is dry,yellow led will be turn on 
if the reading is less than 700, the soil is wet enough. blue led will be turn on. you can refer the video.
