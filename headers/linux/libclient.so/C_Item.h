#pragma once

class C_Item : public C_EconEntity /*0x0*/  // sizeof 0x28A8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x27A8]; // offset 0x0
    char[256] m_pReticleHintTextName; // offset 0x27A8, size 0x100, align 1
};
