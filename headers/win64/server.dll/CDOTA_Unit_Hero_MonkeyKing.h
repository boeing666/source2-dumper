#pragma once

class CDOTA_Unit_Hero_MonkeyKing : public CDOTA_BaseNPC_Hero /*0x0*/  // sizeof 0x1F28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1F00]; // offset 0x0
    uint32 m_nTreeDisguise; // offset 0x1F00, size 0x4, align 4
    uint32 m_nPerchedTree; // offset 0x1F04, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0x1F08, size 0xC, align 4
    bool m_bIsOnCloud; // offset 0x1F14, size 0x1, align 1
    char _pad_1F15[0x3]; // offset 0x1F15
    float32 m_fTotalDistOnCloud; // offset 0x1F18, size 0x4, align 4
    float32 m_fTotalDistoffCloud; // offset 0x1F1C, size 0x4, align 4
    float32 m_fBackOnCloudThresh; // offset 0x1F20, size 0x4, align 4
    char _pad_1F24[0x4]; // offset 0x1F24
};
