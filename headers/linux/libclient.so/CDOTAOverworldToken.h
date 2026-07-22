#pragma once

class CDOTAOverworldToken  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldTokenID_t m_unID; // offset 0x0, size 0x1, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_sName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    char _pad_0010[0x28]; // offset 0x10
    EOverworldTokenType m_eTokenType; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    char _pad_003C[0x4]; // offset 0x3C
};
