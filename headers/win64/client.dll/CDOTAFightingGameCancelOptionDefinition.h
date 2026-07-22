#pragma once

class CDOTAFightingGameCancelOptionDefinition  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EFightingGameButtonBit m_eCancelInput; // offset 0x0, size 0x4, align 4
    EFightingGameButtonBit m_eCancelInput2; // offset 0x4, size 0x4, align 4
    EFightingGameButtonBit m_eCancelInput3; // offset 0x8, size 0x4, align 4
    int32 m_nCancelStart; // offset 0xC, size 0x4, align 4
    int32 m_nCancelDuration; // offset 0x10, size 0x4, align 4
    int32 m_nCancelInputBuffer; // offset 0x14, size 0x4, align 4
    bool m_bRequiresInstall; // offset 0x18, size 0x1, align 1
    bool m_bAllowCancelOnWhiff; // offset 0x19, size 0x1, align 1
    char _pad_001A[0x2]; // offset 0x1A
    EFightingGameActionID m_nCancelActionID; // offset 0x1C, size 0x4, align 4
    CUtlString m_strCancelActionName; // offset 0x20, size 0x8, align 8
};
