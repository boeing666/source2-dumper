#pragma once

class C_PointCamera : public C_BaseEntity /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    float32 m_FOV; // offset 0x600, size 0x4, align 4
    float32 m_Resolution; // offset 0x604, size 0x4, align 4
    bool m_bFogEnable; // offset 0x608, size 0x1, align 1
    Color m_FogColor; // offset 0x609, size 0x4, align 1
    char _pad_060D[0x3]; // offset 0x60D
    float32 m_flFogStart; // offset 0x610, size 0x4, align 4
    float32 m_flFogEnd; // offset 0x614, size 0x4, align 4
    float32 m_flFogMaxDensity; // offset 0x618, size 0x4, align 4
    bool m_bActive; // offset 0x61C, size 0x1, align 1
    bool m_bUseScreenAspectRatio; // offset 0x61D, size 0x1, align 1
    char _pad_061E[0x2]; // offset 0x61E
    float32 m_flAspectRatio; // offset 0x620, size 0x4, align 4
    bool m_bNoSky; // offset 0x624, size 0x1, align 1
    char _pad_0625[0x3]; // offset 0x625
    float32 m_fBrightness; // offset 0x628, size 0x4, align 4
    float32 m_flZFar; // offset 0x62C, size 0x4, align 4
    float32 m_flZNear; // offset 0x630, size 0x4, align 4
    bool m_bCanHLTVUse; // offset 0x634, size 0x1, align 1
    bool m_bAlignWithParent; // offset 0x635, size 0x1, align 1
    bool m_bDofEnabled; // offset 0x636, size 0x1, align 1
    char _pad_0637[0x1]; // offset 0x637
    float32 m_flDofNearBlurry; // offset 0x638, size 0x4, align 4
    float32 m_flDofNearCrisp; // offset 0x63C, size 0x4, align 4
    float32 m_flDofFarCrisp; // offset 0x640, size 0x4, align 4
    float32 m_flDofFarBlurry; // offset 0x644, size 0x4, align 4
    float32 m_flDofTiltToGround; // offset 0x648, size 0x4, align 4
    float32 m_TargetFOV; // offset 0x64C, size 0x4, align 4
    float32 m_DegreesPerSecond; // offset 0x650, size 0x4, align 4
    bool m_bIsOn; // offset 0x654, size 0x1, align 1
    char _pad_0655[0x3]; // offset 0x655
    C_PointCamera* m_pNext; // offset 0x658, size 0x8, align 8 | MNotSaved
};
