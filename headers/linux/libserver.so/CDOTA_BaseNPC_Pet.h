#pragma once

class CDOTA_BaseNPC_Pet : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B80]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1B80, size 0x4, align 4
    float32 m_flPetThreatLevel; // offset 0x1B84, size 0x4, align 4
    bool m_bReadyToPerformCoopTeleport; // offset 0x1B88, size 0x1, align 1
    bool m_bSupportsCoopTeleport; // offset 0x1B89, size 0x1, align 1
    char _pad_1B8A[0x2]; // offset 0x1B8A
    PetCoopStates_t m_nCoopState; // offset 0x1B8C, size 0x4, align 4
    CUtlString m_strPickupItemModel; // offset 0x1B90, size 0x8, align 8
    CHandle< CDOTA_Pet_CarriedItem > m_hCarriedItem; // offset 0x1B98, size 0x4, align 4
    int32 m_nPetLevel; // offset 0x1B9C, size 0x4, align 4
    PetLevelup_Rule_t m_nLevelupRule; // offset 0x1BA0, size 0x4, align 4
    char _pad_1BA4[0x4]; // offset 0x1BA4
    int32 m_nXPCompendiumEventID; // offset 0x1BA8, size 0x4, align 4
    char _pad_1BAC[0x4]; // offset 0x1BAC
};
