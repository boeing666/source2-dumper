#pragma once

class CCitadelDevTrigger : public CBaseTrigger /*0x0*/  // sizeof 0x9F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    DevTriggerType_t m_eDevTriggerType; // offset 0x9F0, size 0x4, align 4
    char _pad_09F4[0x4]; // offset 0x9F4
};
