#pragma once

class CCitadel_Modifier_Nano_CatFormVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    ModelChange_t m_ModelChange; // offset 0x760, size 0xE8, align 8
    float32 m_flModelScale; // offset 0x848, size 0x4, align 4
    char _pad_084C[0x4]; // offset 0x84C
    CSoundEventName m_ExplodeSound; // offset 0x850, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ImpactSound; // offset 0x860, size 0x10, align 8
};
