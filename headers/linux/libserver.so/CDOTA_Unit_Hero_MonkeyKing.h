#pragma once

class CDOTA_Unit_Hero_MonkeyKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x23B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2390]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x2390, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x2394, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x2398, size 0xC, align 4
    bool m_bIsOnCloud; // offset 0x23A4, size 0x1, align 1
    char _pad_23A5[0x3]; // offset 0x23A5
    float32 m_fTotalDistOnCloud; // offset 0x23A8, size 0x4, align 4
    float32 m_fTotalDistoffCloud; // offset 0x23AC, size 0x4, align 4
    float32 m_fBackOnCloudThresh; // offset 0x23B0, size 0x4, align 4
    char _pad_23B4[0x4]; // offset 0x23B4
};
