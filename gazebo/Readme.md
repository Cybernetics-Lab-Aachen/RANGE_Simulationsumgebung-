For testing purposes:

If you want to test the position Requesting:

	Make sure you have RTI installed and a correct rit_license.dat in the rti directory
	Export your NDDSHOME-variable:
		vim ~/.bashrc
		export NDDSHOME=~/path_to_rti_connext
	Make sure that the path does NOT end with a backslash

	Make sure you have set the correct environment variables:
		export GAZEBO_SIMULATION=~/simulation/gazebo
		export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:$GAZEBO_SIMULATION/plugins/lib/gazebo
		export GAZEBO_MODEL_PATH=$GAZEBO_SIMULATION/models
		export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:$GAZEBO_SIMULATION/models
		export GAZEBO_WORLD_PATH=~/simulation/gazebo/world/enceladus.world
		
	To Compile the apu_model plugin:
		go to gazebo/plugins/src
		$ mkdir build
		$ cd build
		$ cmake ../
		$ make

        Start gazebo:
                Go to gazebo/world/
                $ gazebo enceladus.world


	In a new Terminal, start the Localization Listener:
		Go to tests/Localization
		$ make -f makefile_...
		$ ./objs/x64Linux3gcc4.8.0/Localization_subscriber

	In an other Terminal, start the Requester:
		Go to tests/Request
		$ make -f makefile_...
		$ ./objs/x64Linux3gcc4.8.0/Request_publisher

	Now you should see in the Localization Listener Terminal the positions recieved from the different apu models


If you want to test positioning

	Make sure you have RTI installed and correct rit_license.dat in the rti directory  

        Make sure you have set the correct environment variables:
                export NDDSHOME = ~/rti_connext_dds-5.2.0
		export GAZEBO_SIMULATION=~/simulation/gazebo
                export GAZEBO_PLUGIN_PATH=$GAZEBO_PLUGIN_PATH:$GAZEBO_SIMULATION/plugins/lib/gazebo
                export GAZEBO_MODEL_PATH=$GAZEBO_SIMULATION/models
                export GAZEBO_MODEL_PATH=$GAZEBO_MODEL_PATH:$GAZEBO_SIMULATION/models
                export GAZEBO_WORLD_PATH=~/simulation/gazebo/world/enceladus.world
                        
        To Compile the apu_model plugin:
                go to gazebo/plugins/src
		$ mkdir build
		$cd build
                $ cmake ../
                $ make

        Start gazebo:
                Go to gazebo/world/
                $ gazebo enceladus.world


	In a new Terminal:
		go to gazebo/tests/Localization
		$ make -f makefile_...
		$ ./objs/x64Linux3gcc4.8.0/Localization_publisher

	In Gazebo, the apus should shift their positions every 4 seks, akkording to the information send by the Localization Publisher
	To edit the position shifts, edit in Localization_publisher.cxx in line 183
