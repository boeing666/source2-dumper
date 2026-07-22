#pragma once

class CC4 : public CCSWeaponBase /*0x0*/  // sizeof 0x10D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    VectorWS m_vecLastValidPlayerHeldPosition; // offset 0x1080, size 0xC, align 4
    VectorWS m_vecLastValidDroppedPosition; // offset 0x108C, size 0xC, align 4
    bool m_bDoValidDroppedPositionCheck; // offset 0x1098, size 0x1, align 1
    bool m_bStartedArming; // offset 0x1099, size 0x1, align 1
    char _pad_109A[0x2]; // offset 0x109A
    GameTime_t m_fArmedTime; // offset 0x109C, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x10A0, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x10A1, size 0x1, align 1
    char _pad_10A2[0x6]; // offset 0x10A2
    EntitySpottedState_t m_entitySpottedState; // offset 0x10A8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x10C0, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x10C4, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x10CB, size 0x1, align 1
    char _pad_10CC[0x4]; // offset 0x10CC
};
