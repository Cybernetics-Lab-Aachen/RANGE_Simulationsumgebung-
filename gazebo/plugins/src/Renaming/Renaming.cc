#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>
#include <gazebo/common/common.hh>
#include <stdio.h>

namespace gazebo
{
  class Renaming : public ModelPlugin
  {
    
 
   /**
   * @brief Function that is called when the Model is loaded. Decides the name, that the APU gets
   *
   * @param _parent: Pointer to the corresponding model
   */
    public: void Load(physics::ModelPtr _parent, sdf::ElementPtr /*_sdf*/)
    {
      // Store the pointer to the model
      this->model = _parent;


      	//renames the model to apu-x, where x is the next open slot
	int size = getNumModels();
	std::string name("apu-"+std::to_string(size+1));
	std::cout << "Renaming to: " <<name << " \n";
	this->model->SetName(name);

    }

    
    /**
    * @brief Returns the number of already spawned models, with the name apu-X.
    *
    * @return: The number of already spawned models
    */
    public: int getNumModels(){
	int size = -1;
	physics::ModelPtr ptr;
	
	do {
	  size++;
 	  std::string name("apu-"+std::to_string(size));
	  ptr=this->model->GetWorld()->GetModel(name);	
	  
	}while(ptr!=NULL);
	
	return size-1;

    }

    // Pointer to the model
    private: physics::ModelPtr model;

    // Pointer to the update event connection
    private: event::ConnectionPtr updateConnection;
};
// Register this plugin with the simulator
GZ_REGISTER_MODEL_PLUGIN(Renaming)
}

