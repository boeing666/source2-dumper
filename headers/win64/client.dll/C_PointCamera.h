#pragma once

class C_PointCamera : public C_BaseEntity /*0x0*/  // sizeof 0x658, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    float32 m_FOV; // offset 0x5F0, size 0x4, align 4
    float32 m_Resolution; // offset 0x5F4, size 0x4, align 4
    bool m_bFogEnable; // offset 0x5F8, size 0x1, align 1
    Color m_FogColor; // offset 0x5F9, size 0x4, align 1
    char _pad_05FD[0x3]; // offset 0x5FD
    float32 m_flFogStart; // offset 0x600, size 0x4, align 4
    float32 m_flFogEnd; // offset 0x604, size 0x4, align 4
    float32 m_flFogMaxDensity; // offset 0x608, size 0x4, align 4
    bool m_bActive; // offset 0x60C, size 0x1, align 1
    bool m_bUseScreenAspectRatio; // offset 0x60D, size 0x1, align 1
    char _pad_060E[0x2]; // offset 0x60E
    float32 m_flAspectRatio; // offset 0x610, size 0x4, align 4
    bool m_bNoSky; // offset 0x614, size 0x1, align 1
    char _pad_0615[0x3]; // offset 0x615
    float32 m_fBrightness; // offset 0x618, size 0x4, align 4
    float32 m_flZFar; // offset 0x61C, size 0x4, align 4
    float32 m_flZNear; // offset 0x620, size 0x4, align 4
    bool m_bCanHLTVUse; // offset 0x624, size 0x1, align 1
    bool m_bAlignWithParent; // offset 0x625, size 0x1, align 1
    char _pad_0626[0x2]; // offset 0x626
    float32 m_flOverrideShadowFarZ; // offset 0x628, size 0x4, align 4
    bool m_bDofEnabled; // offset 0x62C, size 0x1, align 1
    char _pad_062D[0x3]; // offset 0x62D
    float32 m_flDofNearBlurry; // offset 0x630, size 0x4, align 4
    float32 m_flDofNearCrisp; // offset 0x634, size 0x4, align 4
    float32 m_flDofFarCrisp; // offset 0x638, size 0x4, align 4
    float32 m_flDofFarBlurry; // offset 0x63C, size 0x4, align 4
    float32 m_flDofTiltToGround; // offset 0x640, size 0x4, align 4
    float32 m_TargetFOV; // offset 0x644, size 0x4, align 4
    float32 m_DegreesPerSecond; // offset 0x648, size 0x4, align 4
    bool m_bIsOn; // offset 0x64C, size 0x1, align 1
    char _pad_064D[0x3]; // offset 0x64D
    C_PointCamera* m_pNext; // offset 0x650, size 0x8, align 8 | MNotSaved
};
