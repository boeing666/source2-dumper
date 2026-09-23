#pragma once

class CC4 : public CCSWeaponBase /*0x0*/  // sizeof 0x15D0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1578]; // offset 0x0
    VectorWS m_vecLastValidPlayerHeldPosition; // offset 0x1578, size 0xC, align 4
    VectorWS m_vecLastValidDroppedPosition; // offset 0x1584, size 0xC, align 4
    bool m_bDoValidDroppedPositionCheck; // offset 0x1590, size 0x1, align 1
    bool m_bStartedArming; // offset 0x1591, size 0x1, align 1
    char _pad_1592[0x2]; // offset 0x1592
    GameTime_t m_fArmedTime; // offset 0x1594, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x1598, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x1599, size 0x1, align 1
    char _pad_159A[0x6]; // offset 0x159A
    EntitySpottedState_t m_entitySpottedState; // offset 0x15A0, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x15B8, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x15BC, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x15C3, size 0x1, align 1
    char _pad_15C4[0xC]; // offset 0x15C4
};
