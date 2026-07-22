#pragma once

class CNecro_HauntingSkullEntity : public C_BaseModelEntity /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9AC]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable
    int32 m_eSkullState; // offset 0x9B0, size 0x4, align 4 | MNetworkEnable
    char _pad_09B4[0x4]; // offset 0x9B4
};
