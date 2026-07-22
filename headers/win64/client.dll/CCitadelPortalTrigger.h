#pragma once

class CCitadelPortalTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hOtherPortal; // offset 0xA90, size 0x4, align 4 | MNetworkEnable
    char _pad_0A94[0x4]; // offset 0xA94
};
