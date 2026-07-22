#pragma once

class CAbilityKobunVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    Vector m_vSummonFollowOffset; // offset 0x1818, size 0xC, align 4
    char _pad_1824[0x4]; // offset 0x1824
    CEmbeddedSubclass< CCitadelModifier > m_CloneModifier; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
};
