#pragma once

class CSoundEventConeEntity : public CSoundEventEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x568]; // offset 0x0
    float32 m_flEmitterAngle; // offset 0x568, size 0x4, align 4
    float32 m_flSweetSpotAngle; // offset 0x56C, size 0x4, align 4
    float32 m_flAttenMin; // offset 0x570, size 0x4, align 4
    float32 m_flAttenMax; // offset 0x574, size 0x4, align 4
    CUtlSymbolLarge m_iszParameterName; // offset 0x578, size 0x8, align 8
};
