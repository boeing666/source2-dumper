#pragma once

class CTestEffect : public CBaseEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    int32 m_iLoop; // offset 0x4B0, size 0x4, align 4
    int32 m_iBeam; // offset 0x4B4, size 0x4, align 4
    CHandle< CBeam >[24] m_pBeam; // offset 0x4B8, size 0x60, align 4
    GameTime_t[24] m_flBeamTime; // offset 0x518, size 0x60, align 4
    GameTime_t m_flStartTime; // offset 0x578, size 0x4, align 255
    char _pad_057C[0x4]; // offset 0x57C
};
