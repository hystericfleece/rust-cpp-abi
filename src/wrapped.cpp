class __declspec(dllexport) Wrapped
{
public:
    __declspec(noinline) Wrapped getReversed() const;

    float data[5];
};

Wrapped construct(float x, float y, float z, float w, float r) {
    Wrapped p;

    p.data[0] = x;
    p.data[1] = y;
    p.data[2] = z;
    p.data[3] = w;
    p.data[4] = r;

    return p;
}

Wrapped Wrapped::getReversed() const {
    Wrapped p;

    p = construct(
        data[4],
        data[3],
        data[2],
        data[1],
        data[0]
    );

    return p;
}
