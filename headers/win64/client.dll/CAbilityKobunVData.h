#pragma once

class CAbilityKobunVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    Vector m_vSummonFollowOffset; // offset 0x13A0, size 0xC, align 4
    char _pad_13AC[0x4]; // offset 0x13AC
    CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // offset 0x13B0, size 0x10, align 8 | MPropertyStartGroup
};
