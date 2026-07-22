#pragma once

struct NmBoneMaskSetDefinition_t  // sizeof 0x128, align 0x8 (animlib) {MGetKV3ClassDefaults}
{
    CGlobalSymbol m_ID; // offset 0x0, size 0x8, align 8
    CNmBoneWeightList m_primaryWeightList; // offset 0x8, size 0x110, align 8
    CUtlLeanVector< CNmBoneWeightList > m_secondaryWeightLists; // offset 0x118, size 0x10, align 8
};
