#pragma once

class CDOTA_BaseNPC_Pet : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x18D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A8]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x18A8, size 0x4, align 4
    float32 m_flPetThreatLevel; // offset 0x18AC, size 0x4, align 4
    bool m_bReadyToPerformCoopTeleport; // offset 0x18B0, size 0x1, align 1
    bool m_bSupportsCoopTeleport; // offset 0x18B1, size 0x1, align 1
    char _pad_18B2[0x2]; // offset 0x18B2
    PetCoopStates_t m_nCoopState; // offset 0x18B4, size 0x4, align 4
    CUtlString m_strPickupItemModel; // offset 0x18B8, size 0x8, align 8
    CHandle< CDOTA_Pet_CarriedItem > m_hCarriedItem; // offset 0x18C0, size 0x4, align 4
    int32 m_nPetLevel; // offset 0x18C4, size 0x4, align 4
    PetLevelup_Rule_t m_nLevelupRule; // offset 0x18C8, size 0x4, align 4
    char _pad_18CC[0x4]; // offset 0x18CC
    int32 m_nXPCompendiumEventID; // offset 0x18D0, size 0x4, align 4
    char _pad_18D4[0x4]; // offset 0x18D4
};
