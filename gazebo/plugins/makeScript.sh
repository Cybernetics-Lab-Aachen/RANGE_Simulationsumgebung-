# 
#!/bin/bash 
if [ -d src/ApuSpawn ] ; 
then 	
	mkdir src/ApuSpawn/build 	
	(cd src/ApuSpawn/build; cmake ../; make) 
fi
if [ -d src/Renaming ] ;
then
	mkdir src/Renaming/build
	(cd src/Renaming/build; cmake ../; make)
fi 
if [ -d src/Trajectory ];
then
	mkdir src/Trajectory/build
	(cd src/Trajectory/build; cmake ../; make)
fi
if [ -d src/PositionPlugin ] ; then
	mkdir src/PositionPlugin/build
	(cd src/PositionPlugin/build; cmake ../; make)
fi
if [ -d src/AcousticPlugin ] ;
then
	mkdir src/AcousticPlugin/build
	(cd src/AcousticPlugin/build; cmake ../; make)
fi
if [ -d ../control ];
then
	mkdir ../control/build
	(cd ../control/build; cmake ../; make)
fi

