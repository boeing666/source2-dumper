#pragma once

class CCitadel_Modifier_SecureSoulsVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flTickRate; // offset 0x790, size 0x4, align 4
    float32 m_flMinConversionDuration; // offset 0x794, size 0x4, align 4
    float32 m_flMaxConversionDuration; // offset 0x798, size 0x4, align 4
    float32 m_flSoulsForMinConversionDuration; // offset 0x79C, size 0x4, align 4
    float32 m_flSoulsForMaxConversionDuration; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
    CSoundEventName m_strGoldTickSound; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strGoldFinishSound; // offset 0x7B8, size 0x10, align 8
};
