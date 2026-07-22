#pragma once

class CEnvWindVolume : public CBaseEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bActive; // offset 0x4A0, size 0x1, align 1 | MNetworkEnable
    char _pad_04A1[0x3]; // offset 0x4A1
    Vector m_vBoxMins; // offset 0x4A4, size 0xC, align 4 | MNetworkEnable
    Vector m_vBoxMaxs; // offset 0x4B0, size 0xC, align 4 | MNetworkEnable
    bool m_bStartDisabled; // offset 0x4BC, size 0x1, align 1 | MNetworkEnable
    char _pad_04BD[0x3]; // offset 0x4BD
    int32 m_nShape; // offset 0x4C0, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindSpeedMultiplier; // offset 0x4C4, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindTurbulenceMultiplier; // offset 0x4C8, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindSpeedVariationMultiplier; // offset 0x4CC, size 0x4, align 4 | MNetworkEnable
    float32 m_fWindDirectionVariationMultiplier; // offset 0x4D0, size 0x4, align 4 | MNetworkEnable
    char _pad_04D4[0x4]; // offset 0x4D4
};
