#pragma once

class CSoundOpvarSetOBBWindEntity : public CSoundOpvarSetPointBase /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x560]; // offset 0x0
    Vector m_vMins; // offset 0x560, size 0xC, align 4
    Vector m_vMaxs; // offset 0x56C, size 0xC, align 4
    Vector m_vDistanceMins; // offset 0x578, size 0xC, align 4
    Vector m_vDistanceMaxs; // offset 0x584, size 0xC, align 4
    float32 m_flWindMin; // offset 0x590, size 0x4, align 4
    float32 m_flWindMax; // offset 0x594, size 0x4, align 4
    float32 m_flWindMapMin; // offset 0x598, size 0x4, align 4
    float32 m_flWindMapMax; // offset 0x59C, size 0x4, align 4
};
