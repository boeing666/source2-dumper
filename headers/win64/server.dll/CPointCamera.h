#pragma once

class CPointCamera : public CBaseEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_FOV; // offset 0x4A0, size 0x4, align 4 | MNetworkEnable
    float32 m_Resolution; // offset 0x4A4, size 0x4, align 4 | MNetworkEnable
    bool m_bFogEnable; // offset 0x4A8, size 0x1, align 1 | MNetworkEnable
    Color m_FogColor; // offset 0x4A9, size 0x4, align 1 | MNetworkEnable
    char _pad_04AD[0x3]; // offset 0x4AD
    float32 m_flFogStart; // offset 0x4B0, size 0x4, align 4 | MNetworkEnable
    float32 m_flFogEnd; // offset 0x4B4, size 0x4, align 4 | MNetworkEnable
    float32 m_flFogMaxDensity; // offset 0x4B8, size 0x4, align 4 | MNetworkEnable
    bool m_bActive; // offset 0x4BC, size 0x1, align 1 | MNetworkEnable
    bool m_bUseScreenAspectRatio; // offset 0x4BD, size 0x1, align 1 | MNetworkEnable
    char _pad_04BE[0x2]; // offset 0x4BE
    float32 m_flAspectRatio; // offset 0x4C0, size 0x4, align 4 | MNetworkEnable
    bool m_bNoSky; // offset 0x4C4, size 0x1, align 1 | MNetworkEnable
    char _pad_04C5[0x3]; // offset 0x4C5
    float32 m_fBrightness; // offset 0x4C8, size 0x4, align 4 | MNetworkEnable
    float32 m_flZFar; // offset 0x4CC, size 0x4, align 4 | MNetworkEnable
    float32 m_flZNear; // offset 0x4D0, size 0x4, align 4 | MNetworkEnable
    bool m_bCanHLTVUse; // offset 0x4D4, size 0x1, align 1 | MNetworkEnable
    bool m_bAlignWithParent; // offset 0x4D5, size 0x1, align 1 | MNetworkEnable
    bool m_bDofEnabled; // offset 0x4D6, size 0x1, align 1 | MNetworkEnable
    char _pad_04D7[0x1]; // offset 0x4D7
    float32 m_flDofNearBlurry; // offset 0x4D8, size 0x4, align 4 | MNetworkEnable
    float32 m_flDofNearCrisp; // offset 0x4DC, size 0x4, align 4 | MNetworkEnable
    float32 m_flDofFarCrisp; // offset 0x4E0, size 0x4, align 4 | MNetworkEnable
    float32 m_flDofFarBlurry; // offset 0x4E4, size 0x4, align 4 | MNetworkEnable
    float32 m_flDofTiltToGround; // offset 0x4E8, size 0x4, align 4 | MNetworkEnable
    float32 m_TargetFOV; // offset 0x4EC, size 0x4, align 4
    float32 m_DegreesPerSecond; // offset 0x4F0, size 0x4, align 4
    bool m_bIsOn; // offset 0x4F4, size 0x1, align 1
    char _pad_04F5[0x3]; // offset 0x4F5
    CPointCamera* m_pNext; // offset 0x4F8, size 0x8, align 8 | MNotSaved
};
