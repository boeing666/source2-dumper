#pragma once

class CCitadelTriggerMultiCapturePoint : public C_BaseTrigger /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CCitadelInWorldEventTimer* m_pUIWorldEventTimer; // offset 0xA90, size 0x8, align 8
    uint8 m_nEnableState; // offset 0xA98, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0A99[0x7]; // offset 0xA99
};
