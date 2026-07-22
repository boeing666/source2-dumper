#pragma once

class C_CSGO_MapPreviewCameraPath : public C_BaseEntity /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    float32 m_flZFar; // offset 0x77C, size 0x4, align 4
    float32 m_flZNear; // offset 0x780, size 0x4, align 4
    bool m_bLoop; // offset 0x784, size 0x1, align 1
    bool m_bVerticalFOV; // offset 0x785, size 0x1, align 1
    bool m_bConstantSpeed; // offset 0x786, size 0x1, align 1
    char _pad_0787[0x1]; // offset 0x787
    float32 m_flDuration; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x44]; // offset 0x78C
    float32 m_flPathLength; // offset 0x7D0, size 0x4, align 4
    float32 m_flPathDuration; // offset 0x7D4, size 0x4, align 4
    char _pad_07D8[0x14]; // offset 0x7D8
    bool m_bDofEnabled; // offset 0x7EC, size 0x1, align 1
    char _pad_07ED[0x3]; // offset 0x7ED
    float32 m_flDofNearBlurry; // offset 0x7F0, size 0x4, align 4
    float32 m_flDofNearCrisp; // offset 0x7F4, size 0x4, align 4
    float32 m_flDofFarCrisp; // offset 0x7F8, size 0x4, align 4
    float32 m_flDofFarBlurry; // offset 0x7FC, size 0x4, align 4
    float32 m_flDofTiltToGround; // offset 0x800, size 0x4, align 4
    char _pad_0804[0x4]; // offset 0x804
};
