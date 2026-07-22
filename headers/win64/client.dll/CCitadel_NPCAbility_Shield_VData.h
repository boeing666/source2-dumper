#pragma once

class CCitadel_NPCAbility_Shield_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1820, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flShieldOffset; // offset 0x1818, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flShieldScale; // offset 0x181C, size 0x4, align 4
};
