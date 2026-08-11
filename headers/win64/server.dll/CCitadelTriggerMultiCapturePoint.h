#pragma once

class CCitadelTriggerMultiCapturePoint : public CBaseTrigger /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x8F8, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CEntityIOOutput m_OnBecomeCapturable; // offset 0x918, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_OnFullyCaptured; // offset 0x930, size 0x20, align 8
    CUtlSymbolLarge m_iszGroupName; // offset 0x950, size 0x8, align 8
    ParticleIndex_t m_nEnabledParticle; // offset 0x958, size 0x4, align 255
    ParticleIndex_t m_nPreEnableFX; // offset 0x95C, size 0x4, align 255
    char _pad_0960[0x2C0]; // offset 0x960
    uint8 m_nEnableState; // offset 0xC20, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0C21[0x7]; // offset 0xC21
};
