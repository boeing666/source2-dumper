#pragma once

class CUnitOrders  // sizeof 0x40, align 0xFF (client)
{
public:
    CUtlVector< CEntityIndex > m_nUnits; // offset 0x0, size 0x18, align 8
    VectorWS m_vPosition; // offset 0x18, size 0xC, align 4
    PlayerID_t m_nIssuerPlayerIndex; // offset 0x24, size 0x4, align 255
    int32 m_nOrderSequenceNumber; // offset 0x28, size 0x4, align 4
    int32 m_nOrderType; // offset 0x2C, size 0x4, align 4
    CEntityIndex m_nTargetIndex; // offset 0x30, size 0x4, align 4
    CEntityIndex m_nAbilityIndex; // offset 0x34, size 0x4, align 4
    uint32 m_nFlags; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
