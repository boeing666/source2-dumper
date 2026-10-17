#pragma once

class CDOTA_BaseNPC_Pet : public CDOTA_BaseNPC /*0x0*/  // sizeof 0x1CA8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1C78, size 0x4, align 4
    float32 m_flPetThreatLevel; // offset 0x1C7C, size 0x4, align 4
    bool m_bReadyToPerformCoopTeleport; // offset 0x1C80, size 0x1, align 1
    bool m_bSupportsCoopTeleport; // offset 0x1C81, size 0x1, align 1
    char _pad_1C82[0x2]; // offset 0x1C82
    PetCoopStates_t m_nCoopState; // offset 0x1C84, size 0x4, align 4
    CUtlString m_strPickupItemModel; // offset 0x1C88, size 0x8, align 8
    CHandle< CDOTA_Pet_CarriedItem > m_hCarriedItem; // offset 0x1C90, size 0x4, align 4
    int32 m_nPetLevel; // offset 0x1C94, size 0x4, align 4
    PetLevelup_Rule_t m_nLevelupRule; // offset 0x1C98, size 0x4, align 4
    char _pad_1C9C[0x4]; // offset 0x1C9C
    int32 m_nXPCompendiumEventID; // offset 0x1CA0, size 0x4, align 4
    char _pad_1CA4[0x4]; // offset 0x1CA4
};
