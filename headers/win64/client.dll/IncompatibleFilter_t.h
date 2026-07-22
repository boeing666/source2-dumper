#pragma once

struct IncompatibleFilter_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    CBitVecEnum< EAbilityBehavior_t > m_AbilityBehaviorsBits; // offset 0x0, size 0xC, align 4
    EAbilityActivation_t m_eAbilityActivation; // offset 0xC, size 0x4, align 4
    EAbilityType_t m_eIncompatibleAbilityType; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
};
