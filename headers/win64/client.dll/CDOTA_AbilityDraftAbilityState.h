#pragma once

class CDOTA_AbilityDraftAbilityState  // sizeof 0x40, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    AbilityID_t m_nAbilityID; // offset 0x30, size 0x4, align 255
    PlayerID_t m_unPlayerID; // offset 0x34, size 0x4, align 255
    int32 m_unAbilityPlayerSlot; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
