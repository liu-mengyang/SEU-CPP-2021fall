class Date{
    public:
        explicit Date( int, int, int );
        void setMonth( int );
        int getMonth();
        void setDay( int );
        int getDay();
        void setYear( int );
        int getYear();
        void displayDate();
    private:
        int month;
        int day;
        int year;
};