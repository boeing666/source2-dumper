#pragma once

struct ItemDraftRoundParams_t  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32 m_nOptionsToRoll; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    int32 m_nDrafts; // offset 0x4, size 0x4, align 4 | MPropertyDescription
};
