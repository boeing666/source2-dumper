#pragma once

class CTriggerItemShop : public CBaseTrigger /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x8E0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CUtlSymbolLarge m_iszSoundName; // offset 0x900, size 0x8, align 8 | MNetworkEnable
    Vector m_vAudioOffset; // offset 0x908, size 0xC, align 4
    char _pad_0914[0x4]; // offset 0x914
};
