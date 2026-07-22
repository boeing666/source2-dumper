#pragma once

class C_NPC_SimpleAnimatingAI : public CBaseAnimGraph /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByName MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hEnemy; // offset 0xCA8, size 0x4, align 4 | MNetworkEnable
    CHandle< C_CitadelBaseAbility > m_hAbilityOwner; // offset 0xCAC, size 0x4, align 4 | MNetworkEnable
    char _pad_0CB0[0x8]; // offset 0xCB0
};
