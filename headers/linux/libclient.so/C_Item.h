#pragma once

class C_Item : public C_EconEntity /*0x0*/  // sizeof 0x2680, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x2580]; // offset 0x0
    char[256] m_pReticleHintTextName; // offset 0x2580, size 0x100, align 1
};
