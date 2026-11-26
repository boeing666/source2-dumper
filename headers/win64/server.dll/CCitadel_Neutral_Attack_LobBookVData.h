#pragma once

class CCitadel_Neutral_Attack_LobBookVData : public CCitadel_Neutral_Attack_BulletToPointModifierVData /*0x0*/  // sizeof 0x1468, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1450]; // offset 0x0
    float32 m_flDamage; // offset 0x1450, size 0x4, align 4
    char _pad_1454[0x4]; // offset 0x1454
    CEmbeddedSubclass< CCitadelModifier > m_AutoShotCounterModifier; // offset 0x1458, size 0x10, align 8 | MPropertyStartGroup
};
