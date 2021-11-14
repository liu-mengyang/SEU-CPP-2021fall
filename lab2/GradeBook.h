#include <string>

struct Names{
    std::string courseName;
    std::string instructorName;
};

class GradeBook{
    public:
        explicit GradeBook( std::string, std::string );
        void setCourseName( std::string );
        std::string getCourseName() const;
        void setInstructorName( std::string );
        std::string getInstructorName() const;
        void displayMessage() const;
        void set( std::string, std::string);
        Names get() const;
    private:
        std::string courseName;
        std::string instructorName;
};