#pragma once

class CNPC_TeslaCoil : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xE90, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xC10, size 0x268, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_0E78[0x4]; // offset 0xE78
    float32 m_flDeployTime; // offset 0xE7C, size 0x4, align 4
    char _pad_0E80[0x4]; // offset 0xE80
    float32 m_flLifeTime; // offset 0xE84, size 0x4, align 4
    char _pad_0E88[0x8]; // offset 0xE88
};
