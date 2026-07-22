#pragma once

class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x550]; // offset 0x0
    Vector m_vMins; // offset 0x550, size 0xC, align 4
    Vector m_vMaxs; // offset 0x55C, size 0xC, align 4
    Vector m_vDistanceMins; // offset 0x568, size 0xC, align 4
    Vector m_vDistanceMaxs; // offset 0x574, size 0xC, align 4
    float32 m_flWindMin; // offset 0x580, size 0x4, align 4
    float32 m_flWindMax; // offset 0x584, size 0x4, align 4
    float32 m_flWindMapMin; // offset 0x588, size 0x4, align 4
    float32 m_flWindMapMax; // offset 0x58C, size 0x4, align 4
};
