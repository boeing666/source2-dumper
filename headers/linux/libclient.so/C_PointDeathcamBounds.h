#pragma once

class C_PointDeathcamBounds : public C_BaseEntity /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    Vector m_vBoxMins; // offset 0x77C, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x788, size 0xC, align 4
    float32 m_flLerpDistance; // offset 0x794, size 0x4, align 4
};
