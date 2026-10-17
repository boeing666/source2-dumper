#pragma once

class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x868, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    Vector m_vMins; // offset 0x828, size 0xC, align 4
    Vector m_vMaxs; // offset 0x834, size 0xC, align 4
    Vector m_vDistanceMins; // offset 0x840, size 0xC, align 4
    Vector m_vDistanceMaxs; // offset 0x84C, size 0xC, align 4
    float32 m_flWindMin; // offset 0x858, size 0x4, align 4
    float32 m_flWindMax; // offset 0x85C, size 0x4, align 4
    float32 m_flWindMapMin; // offset 0x860, size 0x4, align 4
    float32 m_flWindMapMax; // offset 0x864, size 0x4, align 4
};
