#pragma once

class CRagdollMagnet : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bDisabled; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    float32 m_radius; // offset 0x4B4, size 0x4, align 4
    float32 m_force; // offset 0x4B8, size 0x4, align 4
    VectorWS m_axis; // offset 0x4BC, size 0xC, align 4
};
