#pragma once

struct FantasyCraftingShapeData_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyGemShape_t m_unShapeID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    EFantasyShapeBehavior m_eShapeBehavior; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    CUtlString m_sLocName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocExplanation; // offset 0x10, size 0x8, align 8 | MPropertyDescription
};
