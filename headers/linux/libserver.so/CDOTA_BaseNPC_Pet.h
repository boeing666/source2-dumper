#pragma once

class CDOTA_BaseNPC_Pet : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1D40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1D0C, size 0x4, align 4
    float32 m_flPetThreatLevel; // offset 0x1D10, size 0x4, align 4
    bool m_bReadyToPerformCoopTeleport; // offset 0x1D14, size 0x1, align 1
    bool m_bSupportsCoopTeleport; // offset 0x1D15, size 0x1, align 1
    char _pad_1D16[0x2]; // offset 0x1D16
    PetCoopStates_t m_nCoopState; // offset 0x1D18, size 0x4, align 4
    char _pad_1D1C[0x4]; // offset 0x1D1C
    CUtlString m_strPickupItemModel; // offset 0x1D20, size 0x8, align 8
    CHandle< CDOTA_Pet_CarriedItem > m_hCarriedItem; // offset 0x1D28, size 0x4, align 4
    int32 m_nPetLevel; // offset 0x1D2C, size 0x4, align 4
    PetLevelup_Rule_t m_nLevelupRule; // offset 0x1D30, size 0x4, align 4
    char _pad_1D34[0x4]; // offset 0x1D34
    int32 m_nXPCompendiumEventID; // offset 0x1D38, size 0x4, align 4
    char _pad_1D3C[0x4]; // offset 0x1D3C
};
