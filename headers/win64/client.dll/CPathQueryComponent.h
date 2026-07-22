#pragma once

class CPathQueryComponent : public CEntityComponent /*0x0*/, public CPathQueryUtil /*0x10*/  // sizeof 0xA0, align 0xFF [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA0]; // offset 0x0
};
