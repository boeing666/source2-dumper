#pragma once

struct RatArmorPiece_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlVector< CUtlStringToken > m_sBodyGroupNames; // offset 0x0, size 0x18, align 8
    CUtlString m_strKnockoffAttachment; // offset 0x18, size 0x8, align 8 | MPropertyCustomFGDType
};
