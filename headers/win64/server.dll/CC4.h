#pragma once

class CC4 : public CCSWeaponBase /*0x0*/  // sizeof 0x12F0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x12A0]; // offset 0x0
    VectorWS m_vecLastValidPlayerHeldPosition; // offset 0x12A0, size 0xC, align 4
    VectorWS m_vecLastValidDroppedPosition; // offset 0x12AC, size 0xC, align 4
    bool m_bDoValidDroppedPositionCheck; // offset 0x12B8, size 0x1, align 1
    bool m_bStartedArming; // offset 0x12B9, size 0x1, align 1
    char _pad_12BA[0x2]; // offset 0x12BA
    GameTime_t m_fArmedTime; // offset 0x12BC, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x12C0, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x12C1, size 0x1, align 1
    char _pad_12C2[0x6]; // offset 0x12C2
    EntitySpottedState_t m_entitySpottedState; // offset 0x12C8, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x12E0, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x12E4, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x12EB, size 0x1, align 1
    char _pad_12EC[0x4]; // offset 0x12EC
};
