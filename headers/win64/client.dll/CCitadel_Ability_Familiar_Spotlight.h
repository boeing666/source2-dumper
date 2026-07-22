#pragma once

class CCitadel_Ability_Familiar_Spotlight : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1260]; // offset 0x0
    CHandle< C_BaseEntity > m_hWasAttachedTo; // offset 0x1260, size 0x4, align 4 | MNetworkEnable
    VectorWS m_vAuraPosition; // offset 0x1264, size 0xC, align 4 | MNetworkEnable
};
