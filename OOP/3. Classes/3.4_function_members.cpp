//=============================[ Function Members ]============================
    // function inside class
    // used to manipulate data members or using it to do operations
    // function members can be used as interface to outside world
    //    because of this, function mambers should be public, except if it is not needed

    //--------------[ Declaration and Definition ]----------------

    class Rectangle {
        int length;
        int width;

        public:
        void setLength (int l){
            length = l;
        }

        int area(){
            return width * length;
        }
    };

    //-----------------[ Scope Resolution Operator ]-------------------
        // this operator  ::  , allows us to simply declare member function in the class
        //   and define them elsewhere

    class Rectangle {
        int length;
        int width;

        public:
        // functions simply declared here
        void setLength(int l);
        int area();
    };

    Rectangle::setLength(int l){  // using the scope operation operator
        length = l;
    }

    Rectangle::area(){
        return length * width;
    }

    //--------------------[ Get and Set Function ]--------------------
        // A get function retrieves the value of a particular data member, 
        // whereas a set function sets its value.

    class Rectangle {
        int width;
        int length;

        public:
        // length getter and setter
        void setLength(int l);
        int getLength();

        // width getter and setter
        void setWidth(int w);
        int getWidth();

        int area();
    };

    Rectangle::setLength(int l){ length = l; }
    Rectangle::getLength(){ return length; }

    Rectangle::setWidth(int w){ width = w; }
    Rectangle::getWidth(){ return width; }

    Rectangle::area(){ return length * width; }

    //----------------[ overloading ]----------------
        // yes, member functions also capable of overloading