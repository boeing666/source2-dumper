#pragma once

class CSoundEventConeEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x834]; // offset 0x0
    float32 m_flEmitterAngle; // offset 0x834, size 0x4, align 4
    float32 m_flSweetSpotAngle; // offset 0x838, size 0x4, align 4
    float32 m_flAttenMin; // offset 0x83C, size 0x4, align 4
    float32 m_flAttenMax; // offset 0x840, size 0x4, align 4
    char _pad_0844[0x4]; // offset 0x844
    CUtlSymbolLarge m_iszParameterName; // offset 0x848, size 0x8, align 8
};
