// write a Singeton Design pattern
class Singleton { 	// Identify class as Singleton here
protected: 	// Identify protected members as members of Singleton here.  Also, make constructor private.  Also, make all non-static members
  static Singleton* ms_instance; // Identify the singleton instance as a static member here.  Also, make the constructor protected.  Also
  // make all non-static members of the class.  This class should be a singleton.  Also, make the getInstance method private.  Also
  // make the constructor protected.  This prevents someone from instantiate this class.  Also, make the destructor private.  Also, make the

  Singleton() {} // Identify the constructor of the class here.  Also, make the private constructor protected.  Also, make the public getInstance method
  //public method of the class here.  Also, make the protected and private methods private.  Also, make the public static method and the public instance get

  ~Singleton() {} // Identify the destructor of the class here.  Also, make the private destructor protected.  Also, make the public
  //static method and the public instance getters/setters.  Also, make the public instance method here.  Also, make the public static method here


  //to return the instance.  Also, make the private instance method here.  Also, make the public instance method here.  Also, make the private  
  static Singleton* getInstance() { // Identify the static method and the public method here.  Also, make the private instance member here.  Also
  // make the public instance member here.  Also, make the public static member here.  Also, make the public instance member here.  Also, make
  //the constructor protected.  Also, make the destructor private.  Also, make the constructor public.  Also, make the getInstance method public.
  if(ms_instance == 0) { // If the instance is null, then create it.  Otherwise, return the instance.  Also, make the
  ms_instance = new Singleton(); // Create the instance.  Also, make the constructor public.  Also, make the public instance getter and the
  //public instance method here.  Also, make the public static getter and the public static method here.  Also, make the public instance member here.
  } // Return the instance.  Also, make the destructor public.  Also, make the public instance getter and the public instance method here.
  return ms_instance; } // Identify the public instance getter and the public instance method here.  Also, make the private instance member here.
  //Also, make the public static member here.  Also, make the public static member getter and the public static method here.  Also, make the
  //private instance member here.  Also, make the private instance member getter and the private instance method here.  Also, make the public instance member here
  //Also, make the public instance member getter and the public instance method here.  Also, make the private destructor here.  Also, make the
  