#pragma once

class CSoundEventConeEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x844]; // offset 0x0
    float32 m_flEmitterAngle; // offset 0x844, size 0x4, align 4
    float32 m_flSweetSpotAngle; // offset 0x848, size 0x4, align 4
    float32 m_flAttenMin; // offset 0x84C, size 0x4, align 4
    float32 m_flAttenMax; // offset 0x850, size 0x4, align 4
    char _pad_0854[0x4]; // offset 0x854
    CUtlSymbolLarge m_iszParameterName; // offset 0x858, size 0x8, align 8
};
