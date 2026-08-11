#pragma once

class CNecro_HauntingSkullEntity : public CBaseModelEntity /*0x0*/  // sizeof 0xA88, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA80]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xA80, size 0x4, align 4 | MNetworkEnable
    int32 m_eSkullState; // offset 0xA84, size 0x4, align 4 | MNetworkEnable
};
