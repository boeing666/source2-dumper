#pragma once

class CCitadel_Modifier_CatapultStunVData : public CModifierKnockdownVData /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    float32 m_flStunDurationOnLand; // offset 0x8E8, size 0x4, align 4
    char _pad_08EC[0x4]; // offset 0x8EC
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x8F0, size 0x10, align 8 | MPropertyStartGroup
};
