class Punto{
    private: 
        int _x;
        int _y;
    public:
        Punto();
        Punto(int x, int y);
        virtual ~Punto();
        void SetX(int x);
        void SetY(int y);
        int GetX();
        int GetY();
        void ObtenerCoordenadas();
};