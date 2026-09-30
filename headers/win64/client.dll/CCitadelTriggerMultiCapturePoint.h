#pragma once

class CCitadelTriggerMultiCapturePoint : public C_BaseTrigger /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CCitadelInWorldEventTimer* m_pUIWorldEventTimer; // offset 0xCA8, size 0x8, align 8
    uint8 m_nEnableState; // offset 0xCB0, size 0x1, align 1
    char _pad_0CB1[0x7]; // offset 0xCB1
};
