#pragma once

class CDOTA_Unit_Hero_MonkeyKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x2048, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x2020]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x2020, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x2024, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x2028, size 0xC, align 4
    bool m_bIsOnCloud; // offset 0x2034, size 0x1, align 1
    char _pad_2035[0x3]; // offset 0x2035
    float32 m_fTotalDistOnCloud; // offset 0x2038, size 0x4, align 4
    float32 m_fTotalDistoffCloud; // offset 0x203C, size 0x4, align 4
    float32 m_fBackOnCloudThresh; // offset 0x2040, size 0x4, align 4
    char _pad_2044[0x4]; // offset 0x2044
};
