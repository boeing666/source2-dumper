#pragma once

struct FantasyCraftingGemMutation_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    EFantasyMutationTarget m_eTarget; // offset 0x0, size 0x2, align 2 | MPropertyDescription
    char _pad_0002[0x2]; // offset 0x2
    EFantasyMutationOperation m_eOperation; // offset 0x4, size 0x4, align 4 | MPropertyDescription
};
