#pragma once

class CDOTAEventActionTrigger  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sEventAction; // offset 0x0, size 0x8, align 8
    int32 m_unEventScoreRequired; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_sMapClassToAdd; // offset 0x10, size 0x8, align 8
};
