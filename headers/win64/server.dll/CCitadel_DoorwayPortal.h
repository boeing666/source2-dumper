#pragma once

class CCitadel_DoorwayPortal : public CBaseAnimGraph /*0x0*/  // sizeof 0xBD0, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xA90, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    char _pad_0AB0[0xF8]; // offset 0xAB0
    CHandle< CCitadel_DoorwayPortal > m_hLinkedDoorway; // offset 0xBA8, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0BAC[0x24]; // offset 0xBAC
};
