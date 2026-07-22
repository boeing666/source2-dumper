#pragma once

class CC4 : public CCSWeaponBase /*0x0*/  // sizeof 0x13A0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    VectorWS m_vecLastValidPlayerHeldPosition; // offset 0x1348, size 0xC, align 4
    VectorWS m_vecLastValidDroppedPosition; // offset 0x1354, size 0xC, align 4
    bool m_bDoValidDroppedPositionCheck; // offset 0x1360, size 0x1, align 1
    bool m_bStartedArming; // offset 0x1361, size 0x1, align 1
    char _pad_1362[0x2]; // offset 0x1362
    GameTime_t m_fArmedTime; // offset 0x1364, size 0x4, align 255
    bool m_bBombPlacedAnimation; // offset 0x1368, size 0x1, align 1
    bool m_bIsPlantingViaUse; // offset 0x1369, size 0x1, align 1
    char _pad_136A[0x6]; // offset 0x136A
    EntitySpottedState_t m_entitySpottedState; // offset 0x1370, size 0x18, align 255
    int32 m_nSpotRules; // offset 0x1388, size 0x4, align 4
    bool[7] m_bPlayedArmingBeeps; // offset 0x138C, size 0x7, align 1
    bool m_bBombPlanted; // offset 0x1393, size 0x1, align 1
    char _pad_1394[0xC]; // offset 0x1394
};
