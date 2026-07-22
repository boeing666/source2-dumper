#pragma once

class C_BasePlayerWeapon : public CBaseAnimGraph /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (client) {MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByUserGroup MNetworkExcludeByUserGroup MNetworkIncludeByName MNetworkUserGroupProxy MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xCA8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xCAC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xCB0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xCB4, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_iClip1; // offset 0xCB8, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkPriority
    int32 m_iClip2; // offset 0xCBC, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkUserGroup
    int32[2] m_pReserveAmmo; // offset 0xCC0, size 0x8, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0CC8[0x18]; // offset 0xCC8
};
