#pragma once

class CCitadelItemPickupRejuv : public CCitadelItemPickup /*0x0*/  // sizeof 0x5780, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5510]; // offset 0x0
    CCitadelAbilityComponent m_CCitadelAbilityComponent; // offset 0x5510, size 0x268, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_5778[0x4]; // offset 0x5778
    bool m_bPickedUp; // offset 0x577C, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_577D[0x3]; // offset 0x577D
};
