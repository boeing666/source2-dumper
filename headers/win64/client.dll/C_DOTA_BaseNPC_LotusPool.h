#pragma once

class C_DOTA_BaseNPC_LotusPool : public C_DOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1A38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1A20]; // offset 0x0
    int32 m_nLotusCount; // offset 0x1A20, size 0x4, align 4
    int32 m_nIntervals; // offset 0x1A24, size 0x4, align 4
    int32 m_nLotusSeconds; // offset 0x1A28, size 0x4, align 4
    int32 m_nLotusMax; // offset 0x1A2C, size 0x4, align 4
    bool m_bInVision; // offset 0x1A30, size 0x1, align 1
    char _pad_1A31[0x7]; // offset 0x1A31
};
