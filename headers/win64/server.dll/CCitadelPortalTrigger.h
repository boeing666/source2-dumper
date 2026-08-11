#pragma once

class CCitadelPortalTrigger : public CBaseTrigger /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hOtherPortal; // offset 0x8F8, size 0x4, align 4 | MNetworkEnable
    char _pad_08FC[0x4]; // offset 0x8FC
};
