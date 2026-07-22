#pragma once

class CBasePlayerWeapon : public CBaseAnimGraph /*0x0*/  // sizeof 0xAD0, align 0x10 [vtable] (server) {MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByUserGroup MNetworkExcludeByUserGroup MNetworkIncludeByName MNetworkUserGroupProxy MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    GameTick_t m_nNextPrimaryAttackTick; // offset 0xA90, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flNextPrimaryAttackTickRatio; // offset 0xA94, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTick_t m_nNextSecondaryAttackTick; // offset 0xA98, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    float32 m_flNextSecondaryAttackTickRatio; // offset 0xA9C, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    int32 m_iClip1; // offset 0xAA0, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkPriority
    int32 m_iClip2; // offset 0xAA4, size 0x4, align 4 | MNetworkEnable MNetworkSerializer MNetworkUserGroup
    int32[2] m_pReserveAmmo; // offset 0xAA8, size 0x8, align 4 | MNetworkEnable MNetworkUserGroup
    CEntityIOOutput m_OnPlayerUse; // offset 0xAB0, size 0x18, align 255
    char _pad_0AC8[0x8]; // offset 0xAC8
};
