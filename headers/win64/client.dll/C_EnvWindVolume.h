#pragma once

class C_EnvWindVolume : public C_BaseEntity /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    bool m_bActive; // offset 0x5F0, size 0x1, align 1 | MNetworkEnable
    char _pad_05F1[0x3]; // offset 0x5F1
    Vector m_vBoxMins; // offset 0x5F4, size 0xC, align 4 | MNetworkEnable
    Vector m_vBoxMaxs; // offset 0x600, size 0xC, align 4 | MNetworkEnable
    bool m_bStartDisabled; // offset 0x60C, size 0x1, align 1 | MNetworkEnable
    char _pad_060D[0x3]; // offset 0x60D
    int32 m_nShape; // offset 0x610, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindSpeedMultiplier; // offset 0x614, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindTurbulenceMultiplier; // offset 0x618, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindSpeedVariationMultiplier; // offset 0x61C, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindDirectionVariationMultiplier; // offset 0x620, size 0x4, align 4 | MNetworkEnable
    char _pad_0624[0x4]; // offset 0x624
};
