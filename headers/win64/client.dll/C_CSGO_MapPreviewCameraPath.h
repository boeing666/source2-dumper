#pragma once

class C_CSGO_MapPreviewCameraPath : public C_BaseEntity /*0x0*/  // sizeof 0x688, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    float32 m_flZFar; // offset 0x600, size 0x4, align 4
    float32 m_flZNear; // offset 0x604, size 0x4, align 4
    bool m_bLoop; // offset 0x608, size 0x1, align 1
    bool m_bVerticalFOV; // offset 0x609, size 0x1, align 1
    bool m_bConstantSpeed; // offset 0x60A, size 0x1, align 1
    char _pad_060B[0x1]; // offset 0x60B
    float32 m_flDuration; // offset 0x60C, size 0x4, align 4
    char _pad_0610[0x40]; // offset 0x610
    float32 m_flPathLength; // offset 0x650, size 0x4, align 4
    float32 m_flPathDuration; // offset 0x654, size 0x4, align 4
    char _pad_0658[0x14]; // offset 0x658
    bool m_bDofEnabled; // offset 0x66C, size 0x1, align 1
    char _pad_066D[0x3]; // offset 0x66D
    float32 m_flDofNearBlurry; // offset 0x670, size 0x4, align 4
    float32 m_flDofNearCrisp; // offset 0x674, size 0x4, align 4
    float32 m_flDofFarCrisp; // offset 0x678, size 0x4, align 4
    float32 m_flDofFarBlurry; // offset 0x67C, size 0x4, align 4
    float32 m_flDofTiltToGround; // offset 0x680, size 0x4, align 4
    char _pad_0684[0x4]; // offset 0x684
};
