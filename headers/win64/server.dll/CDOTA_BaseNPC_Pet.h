#pragma once

class CDOTA_BaseNPC_Pet : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1A28, size 0x4, align 4
    float32 m_flPetThreatLevel; // offset 0x1A2C, size 0x4, align 4
    bool m_bReadyToPerformCoopTeleport; // offset 0x1A30, size 0x1, align 1
    bool m_bSupportsCoopTeleport; // offset 0x1A31, size 0x1, align 1
    char _pad_1A32[0x2]; // offset 0x1A32
    PetCoopStates_t m_nCoopState; // offset 0x1A34, size 0x4, align 4
    CUtlString m_strPickupItemModel; // offset 0x1A38, size 0x8, align 8
    CHandle< CDOTA_Pet_CarriedItem > m_hCarriedItem; // offset 0x1A40, size 0x4, align 4
    int32 m_nPetLevel; // offset 0x1A44, size 0x4, align 4
    PetLevelup_Rule_t m_nLevelupRule; // offset 0x1A48, size 0x4, align 4
    char _pad_1A4C[0x4]; // offset 0x1A4C
    int32 m_nXPCompendiumEventID; // offset 0x1A50, size 0x4, align 4
    char _pad_1A54[0x4]; // offset 0x1A54
};
