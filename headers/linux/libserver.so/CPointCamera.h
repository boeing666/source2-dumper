#pragma once

class CPointCamera : public CBaseEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    float32 m_FOV; // offset 0x788, size 0x4, align 4
    float32 m_Resolution; // offset 0x78C, size 0x4, align 4
    bool m_bFogEnable; // offset 0x790, size 0x1, align 1
    Color m_FogColor; // offset 0x791, size 0x4, align 1
    char _pad_0795[0x3]; // offset 0x795
    float32 m_flFogStart; // offset 0x798, size 0x4, align 4
    float32 m_flFogEnd; // offset 0x79C, size 0x4, align 4
    float32 m_flFogMaxDensity; // offset 0x7A0, size 0x4, align 4
    bool m_bActive; // offset 0x7A4, size 0x1, align 1
    bool m_bUseScreenAspectRatio; // offset 0x7A5, size 0x1, align 1
    char _pad_07A6[0x2]; // offset 0x7A6
    float32 m_flAspectRatio; // offset 0x7A8, size 0x4, align 4
    bool m_bNoSky; // offset 0x7AC, size 0x1, align 1
    char _pad_07AD[0x3]; // offset 0x7AD
    float32 m_fBrightness; // offset 0x7B0, size 0x4, align 4
    float32 m_flZFar; // offset 0x7B4, size 0x4, align 4
    float32 m_flZNear; // offset 0x7B8, size 0x4, align 4
    bool m_bCanHLTVUse; // offset 0x7BC, size 0x1, align 1
    bool m_bAlignWithParent; // offset 0x7BD, size 0x1, align 1
    bool m_bDofEnabled; // offset 0x7BE, size 0x1, align 1
    char _pad_07BF[0x1]; // offset 0x7BF
    float32 m_flDofNearBlurry; // offset 0x7C0, size 0x4, align 4
    float32 m_flDofNearCrisp; // offset 0x7C4, size 0x4, align 4
    float32 m_flDofFarCrisp; // offset 0x7C8, size 0x4, align 4
    float32 m_flDofFarBlurry; // offset 0x7CC, size 0x4, align 4
    float32 m_flDofTiltToGround; // offset 0x7D0, size 0x4, align 4
    float32 m_TargetFOV; // offset 0x7D4, size 0x4, align 4
    float32 m_DegreesPerSecond; // offset 0x7D8, size 0x4, align 4
    bool m_bIsOn; // offset 0x7DC, size 0x1, align 1
    char _pad_07DD[0x3]; // offset 0x7DD
    CPointCamera* m_pNext; // offset 0x7E0, size 0x8, align 8 | MNotSaved
};
