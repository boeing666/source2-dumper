#pragma once

class C_PointCamera : public C_BaseEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x77C]; // offset 0x0
    float32 m_FOV; // offset 0x77C, size 0x4, align 4
    float32 m_Resolution; // offset 0x780, size 0x4, align 4
    bool m_bFogEnable; // offset 0x784, size 0x1, align 1
    Color m_FogColor; // offset 0x785, size 0x4, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_flFogStart; // offset 0x78C, size 0x4, align 4
    float32 m_flFogEnd; // offset 0x790, size 0x4, align 4
    float32 m_flFogMaxDensity; // offset 0x794, size 0x4, align 4
    bool m_bActive; // offset 0x798, size 0x1, align 1
    bool m_bUseScreenAspectRatio; // offset 0x799, size 0x1, align 1
    char _pad_079A[0x2]; // offset 0x79A
    float32 m_flAspectRatio; // offset 0x79C, size 0x4, align 4
    bool m_bNoSky; // offset 0x7A0, size 0x1, align 1
    char _pad_07A1[0x3]; // offset 0x7A1
    float32 m_fBrightness; // offset 0x7A4, size 0x4, align 4
    float32 m_flZFar; // offset 0x7A8, size 0x4, align 4
    float32 m_flZNear; // offset 0x7AC, size 0x4, align 4
    bool m_bCanHLTVUse; // offset 0x7B0, size 0x1, align 1
    bool m_bAlignWithParent; // offset 0x7B1, size 0x1, align 1
    bool m_bDofEnabled; // offset 0x7B2, size 0x1, align 1
    char _pad_07B3[0x1]; // offset 0x7B3
    float32 m_flDofNearBlurry; // offset 0x7B4, size 0x4, align 4
    float32 m_flDofNearCrisp; // offset 0x7B8, size 0x4, align 4
    float32 m_flDofFarCrisp; // offset 0x7BC, size 0x4, align 4
    float32 m_flDofFarBlurry; // offset 0x7C0, size 0x4, align 4
    float32 m_flDofTiltToGround; // offset 0x7C4, size 0x4, align 4
    float32 m_TargetFOV; // offset 0x7C8, size 0x4, align 4
    float32 m_DegreesPerSecond; // offset 0x7CC, size 0x4, align 4
    bool m_bIsOn; // offset 0x7D0, size 0x1, align 1
    char _pad_07D1[0x7]; // offset 0x7D1
    C_PointCamera* m_pNext; // offset 0x7D8, size 0x8, align 8 | MNotSaved
};
