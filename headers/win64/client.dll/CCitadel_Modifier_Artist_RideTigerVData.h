#pragma once

class CCitadel_Modifier_Artist_RideTigerVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    ModelChange_t m_ModelChange; // offset 0x798, size 0xE8, align 8
    float32 m_flModelScale; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
    CSoundEventName m_ExplodeSound; // offset 0x888, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ImpactSound; // offset 0x898, size 0x10, align 8
};
