#pragma once

class CAbilityKobunVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    Vector m_vSummonFollowOffset; // offset 0x13E8, size 0xC, align 4
    char _pad_13F4[0x4]; // offset 0x13F4
    CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
};
