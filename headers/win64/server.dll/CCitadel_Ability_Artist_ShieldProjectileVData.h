#pragma once

class CCitadel_Ability_Artist_ShieldProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitConfirmSound; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup
};
