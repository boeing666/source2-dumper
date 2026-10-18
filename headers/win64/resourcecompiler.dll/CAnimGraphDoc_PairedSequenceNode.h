#pragma once

class CAnimGraphDoc_PairedSequenceNode : public CAnimGraphDoc_Node /*0x0*/  // sizeof 0x60, align 0x8 [vtable] (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CGlobalSymbol m_sPairedRole; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_previewSequenceName; // offset 0x50, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flPlaybackSpeed; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bLoop; // offset 0x5C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_005D[0x3]; // offset 0x5D
};
