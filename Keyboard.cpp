#include "Keyboard.h"
#include <windows.h>

KEYS keyPressed(void)
{
        if(GetAsyncKeyState(a))
        {
            return a;
        }
        if(GetAsyncKeyState(b))
        {
            return b;
        }
        if(GetAsyncKeyState(c))
        {
            return c;
        }
        if(GetAsyncKeyState(d))
        {
            return d;
        }
        if(GetAsyncKeyState(e))
        {
            return e;
        }
        if(GetAsyncKeyState(f))
        {
            return f;
        }
        if(GetAsyncKeyState(g))
        {
            return g;
        }
        if(GetAsyncKeyState(h))
        {
            return h;
        }
        if(GetAsyncKeyState(i))
        {
            return i;
        }
        if(GetAsyncKeyState(j))
        {
            return j;
        }
        if(GetAsyncKeyState(k))
        {
            return k;
        }
        if(GetAsyncKeyState(l))
        {
            return l;
        }
        if(GetAsyncKeyState(m))
        {
            return m;
        }
        if(GetAsyncKeyState(n))
        {
            return n;
        }
        if(GetAsyncKeyState(o))
        {
            return o;
        }
        if(GetAsyncKeyState(p))
        {
            return p;
        }
        if(GetAsyncKeyState(q))
        {
            return q;
        }
        if(GetAsyncKeyState(r))
        {
            return r;
        }
        if(GetAsyncKeyState(s))
        {
            return s;
        }
        if(GetAsyncKeyState(t))
        {
            return t;
        }
        if(GetAsyncKeyState(u))
        {
            return u;
        }
        if(GetAsyncKeyState(v))
        {
            return v;
        }
        if(GetAsyncKeyState(w))
        {
            return w;
        }
        if(GetAsyncKeyState(x))
        {
            return x;
        }
        if(GetAsyncKeyState(y))
        {
            return y;
        }
        if(GetAsyncKeyState(z))
        {
            return z;
        }
        if(GetAsyncKeyState(VK_SPACE))
        {
            return space;
        }
        
}

