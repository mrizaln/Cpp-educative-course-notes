//==================[ Access Modifiers ]====================

    //----- private -----

    class Class1 {
        int num; // This is, by default, a private data member
        ...
    };

    class Class2 {
        private: // We have explicitly defined that the variable is private
        int num;
        ...
    };

    //----- public -----

    class myClass {
        int num; // Private variable
        
        public: // Attributes in this list are public
        void setNum(){
            // The private variable is directly accessible over here!
        }
    };

    //----- protected -----
    
        // The protected category is unique. The access level to the protected members lies somewhere 
        // between private and public. The primary use of the protected tag is to implement inheritance,

