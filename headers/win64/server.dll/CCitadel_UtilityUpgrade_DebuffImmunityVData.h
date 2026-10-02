#pragma once

class CCitadel_UtilityUpgrade_DebuffImmunityVData : public CitadelItemVData /*0x0*/  // sizeof 0x1508, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14F8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffImmunityModifier; // offset 0x14F8, size 0x10, align 8 | MPropertyStartGroup
};
