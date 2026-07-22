#pragma once

class CCopyRecipientFilter  // sizeof 0x38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    int32 m_Flags; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CPlayerSlot > m_Recipients; // offset 0x10, size 0x18, align 8
    char _pad_0028[0x8]; // offset 0x28
    CPlayerSlot m_slotPlayerExcludedDueToPrediction; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
};
