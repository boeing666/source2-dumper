#pragma once

class C_SoundEventConeEntity : public C_SoundEventEntity /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    float32 m_flEmitterAngle; // offset 0x828, size 0x4, align 4
    float32 m_flSweetSpotAngle; // offset 0x82C, size 0x4, align 4
    float32 m_flAttenMin; // offset 0x830, size 0x4, align 4
    float32 m_flAttenMax; // offset 0x834, size 0x4, align 4
    CUtlSymbolLarge m_iszParameterName; // offset 0x838, size 0x8, align 8
};
