#pragma once

class C_SoundEventConeEntity : public C_SoundEventEntity /*0x0*/  // sizeof 0x6C8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6B0]; // offset 0x0
    float32 m_flEmitterAngle; // offset 0x6B0, size 0x4, align 4
    float32 m_flSweetSpotAngle; // offset 0x6B4, size 0x4, align 4
    float32 m_flAttenMin; // offset 0x6B8, size 0x4, align 4
    float32 m_flAttenMax; // offset 0x6BC, size 0x4, align 4
    CUtlSymbolLarge m_iszParameterName; // offset 0x6C0, size 0x8, align 8
};
