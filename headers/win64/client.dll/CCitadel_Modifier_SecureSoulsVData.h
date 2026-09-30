#pragma once

class CCitadel_Modifier_SecureSoulsVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x798, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flTickRate; // offset 0x760, size 0x4, align 4
    float32 m_flMinConversionDuration; // offset 0x764, size 0x4, align 4
    float32 m_flMaxConversionDuration; // offset 0x768, size 0x4, align 4
    float32 m_flSoulsForMinConversionDuration; // offset 0x76C, size 0x4, align 4
    float32 m_flSoulsForMaxConversionDuration; // offset 0x770, size 0x4, align 4
    char _pad_0774[0x4]; // offset 0x774
    CSoundEventName m_strGoldTickSound; // offset 0x778, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGoldFinishSound; // offset 0x788, size 0x10, align 8
};
