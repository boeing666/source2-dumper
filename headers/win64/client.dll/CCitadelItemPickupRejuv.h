#pragma once

class CCitadelItemPickupRejuv : public C_CitadelItemPickup /*0x0*/  // sizeof 0xEE0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCF0]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0xCF0, size 0x1E8, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    bool m_bPickedUp; // offset 0xED8, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0ED9[0x7]; // offset 0xED9
};
