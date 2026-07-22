#pragma once

class CRagdollMagnet : public CPointEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_radius; // offset 0x78C, size 0x4, align 4
    float32 m_force; // offset 0x790, size 0x4, align 4
    VectorWS m_axis; // offset 0x794, size 0xC, align 4
};
