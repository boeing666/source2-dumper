#pragma once

class C_ItemWeaponParts : public CBaseAnimGraph /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xCC8]; // offset 0x0
    C_NetworkUtlVectorBase< CHandle< C_BasePlayerPawn > > m_hTouchedPlayeres; // offset 0xCC8, size 0x18, align 8 | MNetworkEnable MNotSaved
};
