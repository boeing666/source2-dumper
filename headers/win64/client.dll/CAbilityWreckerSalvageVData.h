#pragma once

class CAbilityWreckerSalvageVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SalvageEnemyModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StunEnemyModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1090, size 0x10, align 8
};
