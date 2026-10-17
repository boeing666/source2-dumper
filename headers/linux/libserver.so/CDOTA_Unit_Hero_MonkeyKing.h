#pragma once

class CDOTA_Unit_Hero_MonkeyKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2320, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x22F8]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x22F8, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x22FC, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x2300, size 0xC, align 4
    bool m_bIsOnCloud; // offset 0x230C, size 0x1, align 1
    char _pad_230D[0x3]; // offset 0x230D
    float32 m_fTotalDistOnCloud; // offset 0x2310, size 0x4, align 4
    float32 m_fTotalDistoffCloud; // offset 0x2314, size 0x4, align 4
    float32 m_fBackOnCloudThresh; // offset 0x2318, size 0x4, align 4
    char _pad_231C[0x4]; // offset 0x231C
};
