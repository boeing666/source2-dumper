#pragma once

class CCitadelPortalTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCC0]; // offset 0x0
    CHandle< CCitadelPortalTrigger > m_hOtherPortal; // offset 0xCC0, size 0x4, align 4
    char _pad_0CC4[0x4]; // offset 0xCC4
};
