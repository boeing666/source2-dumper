#pragma once

class CDOTA_Unit_Hero_MonkeyKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2200, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x21D8]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x21D8, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x21DC, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x21E0, size 0xC, align 4
    bool m_bIsOnCloud; // offset 0x21EC, size 0x1, align 1
    char _pad_21ED[0x3]; // offset 0x21ED
    float32 m_fTotalDistOnCloud; // offset 0x21F0, size 0x4, align 4
    float32 m_fTotalDistoffCloud; // offset 0x21F4, size 0x4, align 4
    float32 m_fBackOnCloudThresh; // offset 0x21F8, size 0x4, align 4
    char _pad_21FC[0x4]; // offset 0x21FC
};
