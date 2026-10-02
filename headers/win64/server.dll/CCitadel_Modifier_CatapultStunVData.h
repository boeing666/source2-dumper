#pragma once

class CCitadel_Modifier_CatapultStunVData : public CModifierKnockdownVData /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x930]; // offset 0x0
    float32 m_flStunDurationOnLand; // offset 0x930, size 0x4, align 4
    char _pad_0934[0x4]; // offset 0x934
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x938, size 0x10, align 8 | MPropertyStartGroup
};
