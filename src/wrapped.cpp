class __declspec(dllexport) Wrapped
{
public:
     __declspec(noinline) Wrapped(float x, float y, float z, float w, float r):
        data()
    {
        data[0] = x;
        data[1] = y;
        data[2] = z;
        data[3] = w;
        data[4] = r;
    }

    __declspec(noinline) Wrapped getReversed() const
    {
        return Wrapped(
            data[4],
            data[3],
            data[2],
            data[1],
            data[0]
        );
    }

private:
    float data[5];
};
