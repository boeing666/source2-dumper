#pragma once

class CCitadelPortalTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hOtherPortal; // offset 0xA00, size 0x4, align 4
    char _pad_0A04[0x4]; // offset 0xA04
};
